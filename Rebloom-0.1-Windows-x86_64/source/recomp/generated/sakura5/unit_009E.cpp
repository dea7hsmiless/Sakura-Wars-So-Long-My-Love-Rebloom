#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009E[4096] = {
    1, 0, 0, 0, 0, 0, 2, 3, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0,
    0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0,
    56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 62,
    0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    69, 0, 70, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0,
    0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0,
    105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118,
    0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171,
    0, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0,
    0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 0,
    253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0,
    270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 275, 0, 0,
    0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0,
    0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 287,
    0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312,
    0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0,
    320, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330,
    0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0,
    0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0,
    0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0,
    356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360,
    0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0,
    0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0,
    371, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 377, 0,
    0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0,
    0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0,
    0, 385, 0, 0, 0, 0, 386, 0, 387, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0,
    399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0,
    0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 408, 0,
    409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0,
    0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0,
    0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0,
    0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0,
    0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0,
    0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462,
    0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0,
    0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0,
    0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0,
    0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_009E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00398000;
    case 2u: goto L_00398018;
    case 3u: goto L_0039801C;
    case 4u: goto L_00398028;
    case 5u: goto L_00398040;
    case 6u: goto L_00398070;
    case 7u: goto L_00398088;
    case 8u: goto L_00398090;
    case 9u: goto L_003980AC;
    case 10u: goto L_003980BC;
    case 11u: goto L_003980D0;
    case 12u: goto L_003980E8;
    case 13u: goto L_00398114;
    case 14u: goto L_00398124;
    case 15u: goto L_00398138;
    case 16u: goto L_00398148;
    case 17u: goto L_00398150;
    case 18u: goto L_00398178;
    case 19u: goto L_003981B0;
    case 20u: goto L_003981B8;
    case 21u: goto L_003981C0;
    case 22u: goto L_003981C8;
    case 23u: goto L_003981D0;
    case 24u: goto L_003981D8;
    case 25u: goto L_003981F0;
    case 26u: goto L_00398214;
    case 27u: goto L_00398234;
    case 28u: goto L_00398258;
    case 29u: goto L_0039826C;
    case 30u: goto L_00398284;
    case 31u: goto L_003982A0;
    case 32u: goto L_003982C0;
    case 33u: goto L_003982D8;
    case 34u: goto L_003982E8;
    case 35u: goto L_003982F8;
    case 36u: goto L_00398300;
    case 37u: goto L_00398320;
    case 38u: goto L_00398340;
    case 39u: goto L_00398358;
    case 40u: goto L_00398368;
    case 41u: goto L_00398388;
    case 42u: goto L_00398398;
    case 43u: goto L_003983A8;
    case 44u: goto L_003983B8;
    case 45u: goto L_003983C8;
    case 46u: goto L_00398418;
    case 47u: goto L_00398424;
    case 48u: goto L_00398430;
    case 49u: goto L_0039844C;
    case 50u: goto L_00398468;
    case 51u: goto L_00398494;
    case 52u: goto L_003984C0;
    case 53u: goto L_003984D0;
    case 54u: goto L_003984E4;
    case 55u: goto L_003984F0;
    case 56u: goto L_00398500;
    case 57u: goto L_00398514;
    case 58u: goto L_00398520;
    case 59u: goto L_0039853C;
    case 60u: goto L_00398558;
    case 61u: goto L_00398568;
    case 62u: goto L_0039857C;
    case 63u: goto L_00398588;
    case 64u: goto L_003985B4;
    case 65u: goto L_003985C0;
    case 66u: goto L_003985D0;
    case 67u: goto L_003985D8;
    case 68u: goto L_003985E8;
    case 69u: goto L_00398600;
    case 70u: goto L_00398608;
    case 71u: goto L_00398614;
    case 72u: goto L_00398624;
    case 73u: goto L_00398634;
    case 74u: goto L_00398650;
    case 75u: goto L_0039868C;
    case 76u: goto L_003986AC;
    case 77u: goto L_003986BC;
    case 78u: goto L_003986F0;
    case 79u: goto L_00398714;
    case 80u: goto L_00398730;
    case 81u: goto L_00398744;
    case 82u: goto L_0039874C;
    case 83u: goto L_00398758;
    case 84u: goto L_00398778;
    case 85u: goto L_00398784;
    case 86u: goto L_0039878C;
    case 87u: goto L_003987B0;
    case 88u: goto L_003987C0;
    case 89u: goto L_003987D0;
    case 90u: goto L_003987E8;
    case 91u: goto L_003987FC;
    case 92u: goto L_00398810;
    case 93u: goto L_00398820;
    case 94u: goto L_00398830;
    case 95u: goto L_00398838;
    case 96u: goto L_00398840;
    case 97u: goto L_00398850;
    case 98u: goto L_00398864;
    case 99u: goto L_00398878;
    case 100u: goto L_00398888;
    case 101u: goto L_003988A0;
    case 102u: goto L_003988BC;
    case 103u: goto L_003988E0;
    case 104u: goto L_003988F0;
    case 105u: goto L_00398900;
    case 106u: goto L_00398910;
    case 107u: goto L_00398928;
    case 108u: goto L_0039893C;
    case 109u: goto L_00398948;
    case 110u: goto L_00398950;
    case 111u: goto L_0039895C;
    case 112u: goto L_00398964;
    case 113u: goto L_00398978;
    case 114u: goto L_003989A0;
    case 115u: goto L_003989B4;
    case 116u: goto L_003989D4;
    case 117u: goto L_003989E8;
    case 118u: goto L_003989FC;
    case 119u: goto L_00398A0C;
    case 120u: goto L_00398A30;
    case 121u: goto L_00398A40;
    case 122u: goto L_00398A48;
    case 123u: goto L_00398A60;
    case 124u: goto L_00398A78;
    case 125u: goto L_00398A9C;
    case 126u: goto L_00398ABC;
    case 127u: goto L_00398AC8;
    case 128u: goto L_00398AE0;
    case 129u: goto L_00398B00;
    case 130u: goto L_00398B18;
    case 131u: goto L_00398B28;
    case 132u: goto L_00398B38;
    case 133u: goto L_00398B48;
    case 134u: goto L_00398B68;
    case 135u: goto L_00398B90;
    case 136u: goto L_00398BD0;
    case 137u: goto L_00398BE8;
    case 138u: goto L_00398C00;
    case 139u: goto L_00398C58;
    case 140u: goto L_00398C70;
    case 141u: goto L_00398CA4;
    case 142u: goto L_00398CBC;
    case 143u: goto L_00398CE8;
    case 144u: goto L_00398D00;
    case 145u: goto L_00398D14;
    case 146u: goto L_00398D50;
    case 147u: goto L_00398D68;
    case 148u: goto L_00398DB8;
    case 149u: goto L_00398E08;
    case 150u: goto L_00398E28;
    case 151u: goto L_00398E48;
    case 152u: goto L_00398E58;
    case 153u: goto L_00398E68;
    case 154u: goto L_00398E88;
    case 155u: goto L_00398EC4;
    case 156u: goto L_00398F40;
    case 157u: goto L_00398F98;
    case 158u: goto L_00398FA8;
    case 159u: goto L_00398FB0;
    case 160u: goto L_00398FC4;
    case 161u: goto L_00398FD8;
    case 162u: goto L_00398FE8;
    case 163u: goto L_00398FF0;
    case 164u: goto L_00399000;
    case 165u: goto L_00399038;
    case 166u: goto L_00399044;
    case 167u: goto L_00399090;
    case 168u: goto L_003990C4;
    case 169u: goto L_003990D4;
    case 170u: goto L_003990F0;
    case 171u: goto L_003990FC;
    case 172u: goto L_00399108;
    case 173u: goto L_00399114;
    case 174u: goto L_0039911C;
    case 175u: goto L_00399124;
    case 176u: goto L_0039912C;
    case 177u: goto L_00399148;
    case 178u: goto L_00399150;
    case 179u: goto L_00399180;
    case 180u: goto L_003991A4;
    case 181u: goto L_003991B0;
    case 182u: goto L_003991C0;
    case 183u: goto L_003991E0;
    case 184u: goto L_00399200;
    case 185u: goto L_00399210;
    case 186u: goto L_0039923C;
    case 187u: goto L_00399254;
    case 188u: goto L_0039926C;
    case 189u: goto L_00399284;
    case 190u: goto L_00399298;
    case 191u: goto L_003992DC;
    case 192u: goto L_00399308;
    case 193u: goto L_00399318;
    case 194u: goto L_00399350;
    case 195u: goto L_003993A4;
    case 196u: goto L_003993B8;
    case 197u: goto L_003993CC;
    case 198u: goto L_003993E4;
    case 199u: goto L_00399404;
    case 200u: goto L_00399420;
    case 201u: goto L_0039949C;
    case 202u: goto L_003994F8;
    case 203u: goto L_00399514;
    case 204u: goto L_00399558;
    case 205u: goto L_003995B8;
    case 206u: goto L_003995F0;
    case 207u: goto L_00399614;
    case 208u: goto L_00399640;
    case 209u: goto L_00399660;
    case 210u: goto L_003996B0;
    case 211u: goto L_003996C0;
    case 212u: goto L_003996E0;
    case 213u: goto L_00399720;
    case 214u: goto L_00399780;
    case 215u: goto L_00399784;
    case 216u: goto L_003997B0;
    case 217u: goto L_00399800;
    case 218u: goto L_00399840;
    case 219u: goto L_0039987C;
    case 220u: goto L_003998A0;
    case 221u: goto L_003998C4;
    case 222u: goto L_003998F8;
    case 223u: goto L_00399958;
    case 224u: goto L_00399974;
    case 225u: goto L_003999A8;
    case 226u: goto L_003999DC;
    case 227u: goto L_003999F0;
    case 228u: goto L_00399A00;
    case 229u: goto L_00399A50;
    case 230u: goto L_00399A64;
    case 231u: goto L_00399A78;
    case 232u: goto L_00399AB8;
    case 233u: goto L_00399AC4;
    case 234u: goto L_00399AE0;
    case 235u: goto L_00399B24;
    case 236u: goto L_00399B3C;
    case 237u: goto L_00399B58;
    case 238u: goto L_00399B74;
    case 239u: goto L_00399B90;
    case 240u: goto L_00399B98;
    case 241u: goto L_00399BB4;
    case 242u: goto L_00399C18;
    case 243u: goto L_00399C3C;
    case 244u: goto L_00399C60;
    case 245u: goto L_00399C74;
    case 246u: goto L_00399C80;
    case 247u: goto L_00399CA8;
    case 248u: goto L_00399CC4;
    case 249u: goto L_00399CD0;
    case 250u: goto L_00399CD8;
    case 251u: goto L_00399CE0;
    case 252u: goto L_00399CF4;
    case 253u: goto L_00399D00;
    case 254u: goto L_00399D10;
    case 255u: goto L_00399D28;
    case 256u: goto L_00399D40;
    case 257u: goto L_00399D58;
    case 258u: goto L_00399D78;
    case 259u: goto L_00399D90;
    case 260u: goto L_00399DB8;
    case 261u: goto L_00399DC8;
    case 262u: goto L_00399DD4;
    case 263u: goto L_00399DE0;
    case 264u: goto L_00399E30;
    case 265u: goto L_00399E40;
    case 266u: goto L_00399E58;
    case 267u: goto L_00399E78;
    case 268u: goto L_00399EC0;
    case 269u: goto L_00399EEC;
    case 270u: goto L_00399F00;
    case 271u: goto L_00399F10;
    case 272u: goto L_00399F50;
    case 273u: goto L_00399FE0;
    case 274u: goto L_00399FEC;
    case 275u: goto L_00399FF4;
    case 276u: goto L_0039A018;
    case 277u: goto L_0039A060;
    case 278u: goto L_0039A0F4;
    case 279u: goto L_0039A108;
    case 280u: goto L_0039A11C;
    case 281u: goto L_0039A130;
    case 282u: goto L_0039A140;
    case 283u: goto L_0039A14C;
    case 284u: goto L_0039A158;
    case 285u: goto L_0039A164;
    case 286u: goto L_0039A170;
    case 287u: goto L_0039A17C;
    case 288u: goto L_0039A188;
    case 289u: goto L_0039A194;
    case 290u: goto L_0039A1A0;
    case 291u: goto L_0039A1AC;
    case 292u: goto L_0039A1B4;
    case 293u: goto L_0039A1D0;
    case 294u: goto L_0039A1E4;
    case 295u: goto L_0039A200;
    case 296u: goto L_0039A210;
    case 297u: goto L_0039A228;
    case 298u: goto L_0039A240;
    case 299u: goto L_0039A250;
    case 300u: goto L_0039A270;
    case 301u: goto L_0039A290;
    case 302u: goto L_0039A2CC;
    case 303u: goto L_0039A2F4;
    case 304u: goto L_0039A350;
    case 305u: goto L_0039A380;
    case 306u: goto L_0039A398;
    case 307u: goto L_0039A3AC;
    case 308u: goto L_0039A3B4;
    case 309u: goto L_0039A3CC;
    case 310u: goto L_0039A3F8;
    case 311u: goto L_0039A468;
    case 312u: goto L_0039A47C;
    case 313u: goto L_0039A490;
    case 314u: goto L_0039A498;
    case 315u: goto L_0039A4AC;
    case 316u: goto L_0039A4B4;
    case 317u: goto L_0039A4D0;
    case 318u: goto L_0039A4E0;
    case 319u: goto L_0039A4F0;
    case 320u: goto L_0039A500;
    case 321u: goto L_0039A508;
    case 322u: goto L_0039A518;
    case 323u: goto L_0039A528;
    case 324u: goto L_0039A53C;
    case 325u: goto L_0039A550;
    case 326u: goto L_0039A5AC;
    case 327u: goto L_0039A5C0;
    case 328u: goto L_0039A5D0;
    case 329u: goto L_0039A5E4;
    case 330u: goto L_0039A5FC;
    case 331u: goto L_0039A61C;
    case 332u: goto L_0039A640;
    case 333u: goto L_0039A690;
    case 334u: goto L_0039A6D8;
    case 335u: goto L_0039A6F8;
    case 336u: goto L_0039A718;
    case 337u: goto L_0039A73C;
    case 338u: goto L_0039A74C;
    case 339u: goto L_0039A768;
    case 340u: goto L_0039A788;
    case 341u: goto L_0039A7A8;
    case 342u: goto L_0039A7C8;
    case 343u: goto L_0039A7E8;
    case 344u: goto L_0039A800;
    case 345u: goto L_0039A83C;
    case 346u: goto L_0039A848;
    case 347u: goto L_0039A878;
    case 348u: goto L_0039A8A8;
    case 349u: goto L_0039A8CC;
    case 350u: goto L_0039A900;
    case 351u: goto L_0039A918;
    case 352u: goto L_0039A920;
    case 353u: goto L_0039A938;
    case 354u: goto L_0039A954;
    case 355u: goto L_0039A96C;
    case 356u: goto L_0039A980;
    case 357u: goto L_0039A99C;
    case 358u: goto L_0039A9B0;
    case 359u: goto L_0039A9CC;
    case 360u: goto L_0039A9FC;
    case 361u: goto L_0039AA18;
    case 362u: goto L_0039AA30;
    case 363u: goto L_0039AA44;
    case 364u: goto L_0039AA5C;
    case 365u: goto L_0039AA74;
    case 366u: goto L_0039AA8C;
    case 367u: goto L_0039AAA0;
    case 368u: goto L_0039AAC0;
    case 369u: goto L_0039AAE0;
    case 370u: goto L_0039AAF8;
    case 371u: goto L_0039AB00;
    case 372u: goto L_0039AB08;
    case 373u: goto L_0039AB20;
    case 374u: goto L_0039AB48;
    case 375u: goto L_0039AB5C;
    case 376u: goto L_0039AB64;
    case 377u: goto L_0039AB78;
    case 378u: goto L_0039AB98;
    case 379u: goto L_0039ABA8;
    case 380u: goto L_0039ABE8;
    case 381u: goto L_0039AC08;
    case 382u: goto L_0039AC18;
    case 383u: goto L_0039AC58;
    case 384u: goto L_0039AC70;
    case 385u: goto L_0039AC84;
    case 386u: goto L_0039AC98;
    case 387u: goto L_0039ACA0;
    case 388u: goto L_0039ACA8;
    case 389u: goto L_0039ACC0;
    case 390u: goto L_0039ACE0;
    case 391u: goto L_0039ACF0;
    case 392u: goto L_0039AD08;
    case 393u: goto L_0039AD18;
    case 394u: goto L_0039AD28;
    case 395u: goto L_0039AD38;
    case 396u: goto L_0039AD50;
    case 397u: goto L_0039AD58;
    case 398u: goto L_0039AD70;
    case 399u: goto L_0039AD80;
    case 400u: goto L_0039ADA0;
    case 401u: goto L_0039ADC0;
    case 402u: goto L_0039ADD8;
    case 403u: goto L_0039ADF8;
    case 404u: goto L_0039AE18;
    case 405u: goto L_0039AE38;
    case 406u: goto L_0039AE58;
    case 407u: goto L_0039AE60;
    case 408u: goto L_0039AE78;
    case 409u: goto L_0039AE80;
    case 410u: goto L_0039AEB8;
    case 411u: goto L_0039AEE8;
    case 412u: goto L_0039AF08;
    case 413u: goto L_0039AF28;
    case 414u: goto L_0039AF44;
    case 415u: goto L_0039AF58;
    case 416u: goto L_0039AF70;
    case 417u: goto L_0039AF84;
    case 418u: goto L_0039AF98;
    case 419u: goto L_0039AFB8;
    case 420u: goto L_0039AFC8;
    case 421u: goto L_0039AFF8;
    case 422u: goto L_0039B068;
    case 423u: goto L_0039B084;
    case 424u: goto L_0039B094;
    case 425u: goto L_0039B0B8;
    case 426u: goto L_0039B114;
    case 427u: goto L_0039B150;
    case 428u: goto L_0039B168;
    case 429u: goto L_0039B174;
    case 430u: goto L_0039B190;
    case 431u: goto L_0039B1E4;
    case 432u: goto L_0039B1F8;
    case 433u: goto L_0039B24C;
    case 434u: goto L_0039B278;
    case 435u: goto L_0039B2B0;
    case 436u: goto L_0039B300;
    case 437u: goto L_0039B3D8;
    case 438u: goto L_0039B410;
    case 439u: goto L_0039B428;
    case 440u: goto L_0039B450;
    case 441u: goto L_0039B478;
    case 442u: goto L_0039B498;
    case 443u: goto L_0039B4C8;
    case 444u: goto L_0039B4E0;
    case 445u: goto L_0039B4F8;
    case 446u: goto L_0039B520;
    case 447u: goto L_0039B5C8;
    case 448u: goto L_0039B5D8;
    case 449u: goto L_0039B608;
    case 450u: goto L_0039B644;
    case 451u: goto L_0039B654;
    case 452u: goto L_0039B65C;
    case 453u: goto L_0039B678;
    case 454u: goto L_0039B688;
    case 455u: goto L_0039B6D0;
    case 456u: goto L_0039B740;
    case 457u: goto L_0039B758;
    case 458u: goto L_0039B7E0;
    case 459u: goto L_0039B818;
    case 460u: goto L_0039B830;
    case 461u: goto L_0039B8D8;
    case 462u: goto L_0039B8FC;
    case 463u: goto L_0039B918;
    case 464u: goto L_0039B938;
    case 465u: goto L_0039B998;
    case 466u: goto L_0039B9C0;
    case 467u: goto L_0039BA28;
    case 468u: goto L_0039BA60;
    case 469u: goto L_0039BA84;
    case 470u: goto L_0039BAB4;
    case 471u: goto L_0039BACC;
    case 472u: goto L_0039BAF8;
    case 473u: goto L_0039BB20;
    case 474u: goto L_0039BB48;
    case 475u: goto L_0039BB60;
    case 476u: goto L_0039BB78;
    case 477u: goto L_0039BBB8;
    case 478u: goto L_0039BBD0;
    case 479u: goto L_0039BBE8;
    case 480u: goto L_0039BC28;
    case 481u: goto L_0039BC38;
    case 482u: goto L_0039BC50;
    case 483u: goto L_0039BC70;
    case 484u: goto L_0039BC90;
    case 485u: goto L_0039BCC8;
    case 486u: goto L_0039BCF4;
    case 487u: goto L_0039BD10;
    case 488u: goto L_0039BD30;
    case 489u: goto L_0039BD90;
    default: bad_entry(c, 0x00398000u); return;
    }
L_00398000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 15376u);  if (t) { goto L_00398018; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00397C30u | kUnwind; return; } [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_00398018:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0039801C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00398028:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398040u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_009E(c, 146u, depth + 1u); else { c.pc = 0x00398D50u; return; } if (c.pc != 0x00398040u) [[unlikely]] return; }
L_00398040:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 464u)));  goto L_00398058; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003980D4; } }
    c.budget -= 1;
L_00398058:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 440u)));  goto L_00398074; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398070u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398070u) [[unlikely]] return; }
L_00398070:
    set32(c.r[5], ld32((c.r[16].w[0] + 440u)));
    c.budget -= 1;
L_00398074:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 452u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 456u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398088u); set32(c.r[8], ld32((c.r[16].w[0] + 460u)));  if (depth < kMaxDepth) unit_009E(c, 140u, depth + 1u); else { c.pc = 0x00398C70u; return; } if (c.pc != 0x00398088u) [[unlikely]] return; }
L_00398088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398090u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_009E(c, 143u, depth + 1u); else { c.pc = 0x00398CE8u; return; } if (c.pc != 0x00398090u) [[unlikely]] return; }
L_00398090:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003980C8; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], 0u - 102u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003980ACu); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009C(c, 321u, depth + 1u); else { c.pc = 0x00392808u; return; } if (c.pc != 0x003980ACu) [[unlikely]] return; }
L_003980AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 440u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003980BCu); set32(c.r[4], c.r[4].w[0] + 15424u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003980BCu) [[unlikely]] return; }
L_003980BC:
    st32((c.r[16].w[0] + 448u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003980D4; } }
L_003980C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003980D0u);  if (depth < kMaxDepth) unit_009B(c, 287u, depth + 1u); else { c.pc = 0x0038F2A8u; return; } if (c.pc != 0x003980D0u) [[unlikely]] return; }
L_003980D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003980D4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003980E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 117u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[17], ld32((c.r[16].w[0] + 64u)));  if (t) { goto L_00398140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398114u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0095(c, 133u, depth + 1u); else { c.pc = 0x00375278u; return; } if (c.pc != 0x00398114u) [[unlikely]] return; }
L_00398114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00398148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398124u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 260u, depth + 1u); else { c.pc = 0x003AA000u; return; } if (c.pc != 0x00398124u) [[unlikely]] return; }
L_00398124:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 15472u);  if (t) { goto L_00398138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398138u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00398138u) [[unlikely]] return; }
L_00398138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00398148; } }
L_00398140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398148u);  if (depth < kMaxDepth) unit_009C(c, 427u, depth + 1u); else { c.pc = 0x00393420u; return; } if (c.pc != 0x00398148u) [[unlikely]] return; }
L_00398148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398150u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 381u, depth + 1u); else { c.pc = 0x003AB658u; return; } if (c.pc != 0x00398150u) [[unlikely]] return; }
L_00398150:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00398168; }
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_00398168:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00398178:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_003981C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 15520u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00398000u < 16384u) { entry = entries_009E[(t - 0x00398000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003981B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003981B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 367u, depth + 1u); else { c.pc = 0x00397DC8u; return; } if (c.pc != 0x003981B8u) [[unlikely]] return; }
L_003981B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003981C8; } }
L_003981C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003981C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 12u, depth + 1u); else { c.pc = 0x003980E8u; return; } if (c.pc != 0x003981C8u) [[unlikely]] return; }
L_003981C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003981D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 25u, depth + 1u); else { c.pc = 0x003981F0u; return; } if (c.pc != 0x003981D0u) [[unlikely]] return; }
L_003981D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003981D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 499u, depth + 1u); else { c.pc = 0x00393C30u; return; } if (c.pc != 0x003981D8u) [[unlikely]] return; }
L_003981D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003981F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00398220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398214u);  if (depth < kMaxDepth) unit_009E(c, 132u, depth + 1u); else { c.pc = 0x00398B38u; return; } if (c.pc != 0x00398214u) [[unlikely]] return; }
L_00398214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00398220; } }
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_00398220:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039824C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398234u);  if (depth < kMaxDepth) unit_009D(c, 236u, depth + 1u); else { c.pc = 0x00396E68u; return; } if (c.pc != 0x00398234u) [[unlikely]] return; }
L_00398234:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039824C; }
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0039824C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00398258:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039826Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 453u, depth + 1u); else { c.pc = 0x0035B8D0u; return; } if (c.pc != 0x0039826Cu) [[unlikely]] return; }
L_0039826C:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00398288; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398284u);  if (depth < kMaxDepth) unit_009E(c, 43u, depth + 1u); else { c.pc = 0x003983A8u; return; } if (c.pc != 0x00398284u) [[unlikely]] return; }
L_00398284:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00398288:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003982A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003982C0u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 453u, depth + 1u); else { c.pc = 0x0035B8D0u; return; } if (c.pc != 0x003982C0u) [[unlikely]] return; }
L_003982C0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003982F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003982D8u);  if (depth < kMaxDepth) unit_009E(c, 41u, depth + 1u); else { c.pc = 0x00398388u; return; } if (c.pc != 0x003982D8u) [[unlikely]] return; }
L_003982D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00398304; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003982E8u);  if (depth < kMaxDepth) unit_009E(c, 63u, depth + 1u); else { c.pc = 0x00398588u; return; } if (c.pc != 0x003982E8u) [[unlikely]] return; }
L_003982E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00398304; } }
L_003982F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003982F8u);  if (depth < kMaxDepth) unit_009E(c, 43u, depth + 1u); else { c.pc = 0x003983A8u; return; } if (c.pc != 0x003982F8u) [[unlikely]] return; }
L_003982F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398300u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 63u, depth + 1u); else { c.pc = 0x00398588u; return; } if (c.pc != 0x00398300u) [[unlikely]] return; }
L_00398300:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00398304:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00398320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398340u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 453u, depth + 1u); else { c.pc = 0x0035B8D0u; return; } if (c.pc != 0x00398340u) [[unlikely]] return; }
L_00398340:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00398370; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398358u);  if (depth < kMaxDepth) unit_009E(c, 41u, depth + 1u); else { c.pc = 0x00398388u; return; } if (c.pc != 0x00398358u) [[unlikely]] return; }
L_00398358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039836C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398368u);  if (depth < kMaxDepth) unit_009E(c, 63u, depth + 1u); else { c.pc = 0x00398588u; return; } if (c.pc != 0x00398368u) [[unlikely]] return; }
L_00398368:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039836C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00398370:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00398388:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398398u);  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00398398u) [[unlikely]] return; }
L_00398398:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003983A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003983B8u);  if (depth < kMaxDepth) unit_009E(c, 45u, depth + 1u); else { c.pc = 0x003983C8u; return; } if (c.pc != 0x003983B8u) [[unlikely]] return; }
L_003983B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003983C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[5], c.r[5].w[0] + 9800u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[6], c.r[6].w[0] + 9804u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[18], c.r[4].w[0] + 4052u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[17], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 21;
    if (c.r[17].d[0] != c.r[4].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00398454; }
    goto L_0039841C;
L_00398418:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0039841C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398424u);  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00398424u) [[unlikely]] return; }
L_00398424:
    set32(c.r[16], c.r[2].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398430u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 354u, depth + 1u); else { c.pc = 0x00397C18u; return; } if (c.pc != 0x00398430u) [[unlikely]] return; }
L_00398430:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00398454; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { st32((c.r[16].w[0]), 0u);  goto L_00398450; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039844Cu);  if (depth < kMaxDepth) unit_00A2(c, 20u, depth + 1u); else { c.pc = 0x003A8258u; return; } if (c.pc != 0x0039844Cu) [[unlikely]] return; }
L_0039844C:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00398450:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00398454:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00398468:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398494u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00398494u) [[unlikely]] return; }
L_00398494:
    st32((c.r[2].w[0] + 76u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 64u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 68u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 72u), c.r[19].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003984C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003984D0u);  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x003984D0u) [[unlikely]] return; }
L_003984D0:
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 68u)));  if (t) { goto L_003984E4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003984E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003984E4u) [[unlikely]] return; }
L_003984E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003984F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398500u);  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00398500u) [[unlikely]] return; }
L_00398500:
    set32(c.r[3], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 76u)));  if (t) { goto L_00398514; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398514u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398514u) [[unlikely]] return; }
L_00398514:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00398520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039853Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x0039853Cu) [[unlikely]] return; }
L_0039853C:
    st32((c.r[2].w[0] + 84u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 80u), c.r[17].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00398558:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398568u);  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00398568u) [[unlikely]] return; }
L_00398568:
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 84u)));  if (t) { goto L_0039857C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039857Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039857Cu) [[unlikely]] return; }
L_0039857C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00398588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4052u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00398638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003985B4u);  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x003985B4u) [[unlikely]] return; }
L_003985B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003985C0u); set32(c.r[4], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_009D(c, 354u, depth + 1u); else { c.pc = 0x00397C18u; return; } if (c.pc != 0x003985C0u) [[unlikely]] return; }
L_003985C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039863C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003985D0u); set32(c.r[16], c.r[16].w[0] + 108u);  if (depth < kMaxDepth) unit_009E(c, 52u, depth + 1u); else { c.pc = 0x003984C0u; return; } if (c.pc != 0x003985D0u) [[unlikely]] return; }
L_003985D0:
    set32(c.r[17], 0u + 7u);
    c.budget -= 2;
L_003985D8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003985EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003985E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 74u, depth + 1u); else { c.pc = 0x00398650u; return; } if (c.pc != 0x003985E8u) [[unlikely]] return; }
L_003985E8:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003985EC:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 700u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003985D8u | kUnwind; return; } goto L_003985D8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398600u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 90u, depth + 1u); else { c.pc = 0x003987E8u; return; } if (c.pc != 0x00398600u) [[unlikely]] return; }
L_00398600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398608u);  if (depth < kMaxDepth) unit_00A2(c, 22u, depth + 1u); else { c.pc = 0x003A82A0u; return; } if (c.pc != 0x00398608u) [[unlikely]] return; }
L_00398608:
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[17].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398614u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_009E(c, 55u, depth + 1u); else { c.pc = 0x003984F0u; return; } if (c.pc != 0x00398614u) [[unlikely]] return; }
L_00398614:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00398638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398624u);  if (depth < kMaxDepth) unit_009E(c, 103u, depth + 1u); else { c.pc = 0x003988E0u; return; } if (c.pc != 0x00398624u) [[unlikely]] return; }
L_00398624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00398638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398634u);  if (depth < kMaxDepth) unit_009E(c, 60u, depth + 1u); else { c.pc = 0x00398558u; return; } if (c.pc != 0x00398634u) [[unlikely]] return; }
L_00398634:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00398638:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0039863C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00398650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], ld32((c.r[2].w[0] + 4052u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003986D8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00398698; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039868Cu); set32(c.r[4], c.r[4].w[0] + 15544u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x0039868Cu) [[unlikely]] return; }
L_0039868C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003986D8; } }
    c.budget -= 1;
L_00398698:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003986D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003986ACu);  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00398838u; return; } if (c.pc != 0x003986ACu) [[unlikely]] return; }
L_003986AC:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_003986D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003986BCu);  if (depth < kMaxDepth) unit_009E(c, 103u, depth + 1u); else { c.pc = 0x003988E0u; return; } if (c.pc != 0x003986BCu) [[unlikely]] return; }
L_003986BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039868Cu | kUnwind; return; } goto L_0039868C; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003986F0; }
L_003986D8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003986F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398714u); set32(c.r[18], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_009E(c, 94u, depth + 1u); else { c.pc = 0x00398830u; return; } if (c.pc != 0x00398714u) [[unlikely]] return; }
L_00398714:
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00398738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398730u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 94u, depth + 1u); else { c.pc = 0x00398830u; return; } if (c.pc != 0x00398730u) [[unlikely]] return; }
L_00398730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00398794; } }
L_00398738:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398744u); st32((c.r[2].w[0] + 9808u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_009E(c, 96u, depth + 1u); else { c.pc = 0x00398840u; return; } if (c.pc != 0x00398744u) [[unlikely]] return; }
L_00398744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039874Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 26u, depth + 1u); else { c.pc = 0x003A8318u; return; } if (c.pc != 0x0039874Cu) [[unlikely]] return; }
L_0039874C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398758u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 96u, depth + 1u); else { c.pc = 0x00398840u; return; } if (c.pc != 0x00398758u) [[unlikely]] return; }
L_00398758:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00398770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), 0u);  if (t) { goto L_0039877C; } }
    c.budget -= 1;
L_00398770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398778u); st32((c.r[16].w[0] + 108u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x00398178u; return; } if (c.pc != 0x00398778u) [[unlikely]] return; }
L_00398778:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0039877C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398784u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 94u, depth + 1u); else { c.pc = 0x00398830u; return; } if (c.pc != 0x00398784u) [[unlikely]] return; }
L_00398784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039878Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 21u, depth + 1u); else { c.pc = 0x003A8278u; return; } if (c.pc != 0x0039878Cu) [[unlikely]] return; }
L_0039878C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00398794:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003987B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003987C0u);  if (depth < kMaxDepth) unit_009E(c, 45u, depth + 1u); else { c.pc = 0x003983C8u; return; } if (c.pc != 0x003987C0u) [[unlikely]] return; }
L_003987C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003987D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00398588u | kUnwind; return; } goto L_00398588; }
L_003987E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003987FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x003987FCu) [[unlikely]] return; }
L_003987FC:
    st32((c.r[2].w[0] + 88u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00398810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398820u);  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00398820u) [[unlikely]] return; }
L_00398820:
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00398830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 100u), c.r[5].w[0]);  c.pc = t; return; }
L_00398838:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 100u)));  c.pc = t; return; }
L_00398840:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 104u), c.r[5].w[0]);  c.pc = t; return; }
L_00398850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398864u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00398864u) [[unlikely]] return; }
L_00398864:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00398880; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398878u); set32(c.r[4], c.r[4].w[0] + 15584u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00398878u) [[unlikely]] return; }
L_00398878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00398890; } }
L_00398880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398888u);  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00398838u; return; } if (c.pc != 0x00398888u) [[unlikely]] return; }
L_00398888:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00398890:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003988A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003988BCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x003988BCu) [[unlikely]] return; }
L_003988BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[16].w[0] + 96u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 36u), c.r[17].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003988E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003988F0u);  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x003988F0u) [[unlikely]] return; }
L_003988F0:
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00398900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398910u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00398810u; return; } if (c.pc != 0x00398910u) [[unlikely]] return; }
L_00398910:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00398928:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039893Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 496u, depth + 1u); else { c.pc = 0x00393BF0u; return; } if (c.pc != 0x0039893Cu) [[unlikely]] return; }
L_0039893C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398948u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003988A0u; return; } if (c.pc != 0x00398948u) [[unlikely]] return; }
L_00398948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398950u);  if (depth < kMaxDepth) unit_009D(c, 359u, depth + 1u); else { c.pc = 0x00397CC8u; return; } if (c.pc != 0x00398950u) [[unlikely]] return; }
L_00398950:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039895Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003988A0u; return; } if (c.pc != 0x0039895Cu) [[unlikely]] return; }
L_0039895C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398964u);  if (depth < kMaxDepth) unit_009C(c, 497u, depth + 1u); else { c.pc = 0x00393C08u; return; } if (c.pc != 0x00398964u) [[unlikely]] return; }
L_00398964:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00397D38u | kUnwind; return; } [[clang::musttail]] return unit_009D(c, 361u, depth); }
L_00398978:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 152u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 168u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003989A0u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x003989A0u) [[unlikely]] return; }
L_003989A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_003989C0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003989B4u); set32(c.r[4], c.r[4].w[0] + 15640u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003989B4u) [[unlikely]] return; }
L_003989B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_00398A10; } }
    c.budget -= 1;
L_003989C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003989E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003989D4u); set32(c.r[4], c.r[4].w[0] + 15696u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003989D4u) [[unlikely]] return; }
L_003989D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_00398A10; } }
    c.budget -= 1;
L_003989E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003989E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 96u, depth + 1u); else { c.pc = 0x00395120u; return; } if (c.pc != 0x003989E8u) [[unlikely]] return; }
L_003989E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003989FCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 98u, depth + 1u); else { c.pc = 0x00395148u; return; } if (c.pc != 0x003989FCu) [[unlikely]] return; }
L_003989FC:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398A0Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 146u, depth + 1u); else { c.pc = 0x003B19E8u; return; } if (c.pc != 0x00398A0Cu) [[unlikely]] return; }
L_00398A0C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00398A10:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 168u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00398A30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00398A40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00398A48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00398A64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398A60u);  if (depth < kMaxDepth) unit_0090(c, 251u, depth + 1u); else { c.pc = 0x00362148u; return; } if (c.pc != 0x00398A60u) [[unlikely]] return; }
L_00398A60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00398A64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00398A78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00398AA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398A9Cu);  if (depth < kMaxDepth) unit_0090(c, 143u, depth + 1u); else { c.pc = 0x00361518u; return; } if (c.pc != 0x00398A9Cu) [[unlikely]] return; }
L_00398A9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00398B04; } }
    c.budget -= 1;
L_00398AA8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_00398AD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398ABCu);  if (depth < kMaxDepth) unit_0090(c, 148u, depth + 1u); else { c.pc = 0x00361580u; return; } if (c.pc != 0x00398ABCu) [[unlikely]] return; }
L_00398ABC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398AC8u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0090(c, 143u, depth + 1u); else { c.pc = 0x00361518u; return; } if (c.pc != 0x00398AC8u) [[unlikely]] return; }
L_00398AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00398B04; } }
L_00398AD0:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00398B04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398AE0u);  if (depth < kMaxDepth) unit_0090(c, 256u, depth + 1u); else { c.pc = 0x003621A8u; return; } if (c.pc != 0x00398AE0u) [[unlikely]] return; }
L_00398AE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 2047u);
    set32(c.r[2], c.r[2].w[0] + 4094u);
    c.r[3].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 11));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398B00u); set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0090(c, 143u, depth + 1u); else { c.pc = 0x00361518u; return; } if (c.pc != 0x00398B00u) [[unlikely]] return; }
L_00398B00:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00398B04:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00398B18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398B28u);  if (depth < kMaxDepth) unit_0090(c, 154u, depth + 1u); else { c.pc = 0x00361608u; return; } if (c.pc != 0x00398B28u) [[unlikely]] return; }
L_00398B28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00398B38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398B48u);  if (depth < kMaxDepth) unit_0090(c, 138u, depth + 1u); else { c.pc = 0x003614D8u; return; } if (c.pc != 0x00398B48u) [[unlikely]] return; }
L_00398B48:
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00398B68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00398B80; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003620E0u | kUnwind; return; } [[clang::musttail]] return unit_0090(c, 246u, depth); }
L_00398B80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00398B90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00362030u | kUnwind; return; } [[clang::musttail]] return unit_0090(c, 236u, depth); }
L_00398BD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00362608u | kUnwind; return; } [[clang::musttail]] return unit_0090(c, 314u, depth); }
L_00398BE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00361138u | kUnwind; return; } [[clang::musttail]] return unit_0090(c, 99u, depth); }
L_00398C00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003611C8u | kUnwind; return; } [[clang::musttail]] return unit_0090(c, 106u, depth); }
L_00398C58:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00361888u | kUnwind; return; } [[clang::musttail]] return unit_0090(c, 186u, depth); }
L_00398C70:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398CA4u); c.r[20].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 124u, depth + 1u); else { c.pc = 0x003613E0u; return; } if (c.pc != 0x00398CA4u) [[unlikely]] return; }
L_00398CA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398CBCu); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 112u, depth + 1u); else { c.pc = 0x00361250u; return; } if (c.pc != 0x00398CBCu) [[unlikely]] return; }
L_00398CBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00361888u | kUnwind; return; } [[clang::musttail]] return unit_0090(c, 186u, depth); }
L_00398CE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00361608u | kUnwind; return; } [[clang::musttail]] return unit_0090(c, 154u, depth); }
L_00398D00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398D14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 170u, depth + 1u); else { c.pc = 0x00361710u; return; } if (c.pc != 0x00398D14u) [[unlikely]] return; }
L_00398D14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003613E0u | kUnwind; return; } [[clang::musttail]] return unit_0090(c, 124u, depth); }
L_00398D50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003614D8u | kUnwind; return; } [[clang::musttail]] return unit_0090(c, 138u, depth); }
L_00398D68:
    set32(c.r[2], 0u + 288u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[5].sd[0] < 288ll ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00398DBC; } }
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], 0u + 128u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00398DC0; }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00398DC0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[6].w[0] + 282u);
    set32(c.r[5], c.r[5].w[0] + 15832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398DB8u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x00147BA8u; return; } if (c.pc != 0x00398DB8u) [[unlikely]] return; }
L_00398DB8:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_00398DBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00398DC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00398E08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8188u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003643F0u | kUnwind; return; } [[clang::musttail]] return unit_0091(c, 43u, depth); }
L_00398E28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8188u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00364558u | kUnwind; return; } [[clang::musttail]] return unit_0091(c, 51u, depth); }
L_00398E48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8188u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_00398E58:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00364710u | kUnwind; return; } [[clang::musttail]] return unit_0091(c, 69u, depth); }
L_00398E68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8188u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003647C0u | kUnwind; return; } [[clang::musttail]] return unit_0091(c, 74u, depth); }
L_00398E88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8188u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 1000u);  if (t) { goto L_00398F30; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00398EB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00398F1C; } }
    c.budget -= 1;
L_00398EB8:
    c.f[12] = c.r[5].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398EC4u); c.f[12] = fp::cvt_s_w(c.f[12]);  if (depth < kMaxDepth) unit_0005(c, 137u, depth + 1u); else { c.pc = 0x001372C0u; return; } if (c.pc != 0x00398EC4u) [[unlikely]] return; }
L_00398EC4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40DD0000u);
    c.r[1].d[0] = c.r[1].d[0] | 3156ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44D80000u);
    c.r[1].d[0] = c.r[1].d[0] | 26493ull;
    c.f[3] = c.r[1].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 22;
L_00398F1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003657E8u | kUnwind; return; } [[clang::musttail]] return unit_0091(c, 236u, depth); }
L_00398F30:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00398F40:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 24912u);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], 0u - 32u);
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 31u);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    st32((c.r[5].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 20u), c.r[2].w[0]);  c.pc = t; return; }
L_00398F98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398FA8u);  if (depth < kMaxDepth) unit_008E(c, 264u, depth + 1u); else { c.pc = 0x00359FD8u; return; } if (c.pc != 0x00398FA8u) [[unlikely]] return; }
L_00398FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398FB0u);  if (depth < kMaxDepth) unit_008F(c, 94u, depth + 1u); else { c.pc = 0x0035CF70u; return; } if (c.pc != 0x00398FB0u) [[unlikely]] return; }
L_00398FB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 24912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398FC4u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0099(c, 70u, depth + 1u); else { c.pc = 0x00387F08u; return; } if (c.pc != 0x00398FC4u) [[unlikely]] return; }
L_00398FC4:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00398FD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398FE8u);  if (depth < kMaxDepth) unit_008F(c, 95u, depth + 1u); else { c.pc = 0x0035CF88u; return; } if (c.pc != 0x00398FE8u) [[unlikely]] return; }
L_00398FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398FF0u);  if (depth < kMaxDepth) unit_008E(c, 287u, depth + 1u); else { c.pc = 0x0035A188u; return; } if (c.pc != 0x00398FF0u) [[unlikely]] return; }
L_00398FF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00399000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[2], c.r[16].w[0] + 3368u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8188u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 504u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 500u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[17], ld32((c.r[4].w[0])));  if (t) { goto L_00399078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399038u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 13u, depth + 1u); else { c.pc = 0x00364148u; return; } if (c.pc != 0x00399038u) [[unlikely]] return; }
L_00399038:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399044u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 19u, depth + 1u); else { c.pc = 0x003641D0u; return; } if (c.pc != 0x00399044u) [[unlikely]] return; }
L_00399044:
    c.budget -= 2;
    if (c.r[18].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039907C; }
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039907C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009F(c, 45u, depth); }
L_00399078:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0039907C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00399090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003990A8; }
L_003990A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003990C4u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003990C4u) [[unlikely]] return; }
L_003990C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00399130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003990D4u);  if (depth < kMaxDepth) unit_009E(c, 256u, depth + 1u); else { c.pc = 0x00399D40u; return; } if (c.pc != 0x003990D4u) [[unlikely]] return; }
L_003990D4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003990E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00399130; } }
L_003990E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003990F0u);  if (depth < kMaxDepth) unit_009E(c, 177u, depth + 1u); else { c.pc = 0x00399148u; return; } if (c.pc != 0x003990F0u) [[unlikely]] return; }
L_003990F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003990FCu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 178u, depth + 1u); else { c.pc = 0x00399150u; return; } if (c.pc != 0x003990FCu) [[unlikely]] return; }
L_003990FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399108u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x003999A8u; return; } if (c.pc != 0x00399108u) [[unlikely]] return; }
L_00399108:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399114u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 231u, depth + 1u); else { c.pc = 0x00399A78u; return; } if (c.pc != 0x00399114u) [[unlikely]] return; }
L_00399114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039911Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 258u, depth + 1u); else { c.pc = 0x00399D78u; return; } if (c.pc != 0x0039911Cu) [[unlikely]] return; }
L_0039911C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399124u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 266u, depth + 1u); else { c.pc = 0x00399E58u; return; } if (c.pc != 0x00399124u) [[unlikely]] return; }
L_00399124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039912Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 164u, depth + 1u); else { c.pc = 0x00399000u; return; } if (c.pc != 0x0039912Cu) [[unlikely]] return; }
L_0039912C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00399130:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00399148:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00399150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 4u);
    st32((c.r[18].w[0]), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399180u); set32(c.r[17], ld32((c.r[16].w[0] + 8188u)));  if (depth < kMaxDepth) unit_009E(c, 242u, depth + 1u); else { c.pc = 0x00399C18u; return; } if (c.pc != 0x00399180u) [[unlikely]] return; }
L_00399180:
    set32(c.r[7], c.r[29].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003991C4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003991A4u); st32((c.r[18].w[0]), c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003991A4u) [[unlikely]] return; }
L_003991A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003991B0u); set32(c.r[5], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_009E(c, 244u, depth + 1u); else { c.pc = 0x00399C60u; return; } if (c.pc != 0x003991B0u) [[unlikely]] return; }
L_003991B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003991C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003991C0u);  if (depth < kMaxDepth) unit_009E(c, 246u, depth + 1u); else { c.pc = 0x00399C80u; return; } if (c.pc != 0x003991C0u) [[unlikely]] return; }
L_003991C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003991C4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003991E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00399200u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00399200u) [[unlikely]] return; }
L_00399200:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00399210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_00399248; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039923Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039923Cu) [[unlikely]] return; }
L_0039923C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00399288; } }
    c.budget -= 1;
L_00399248:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399254u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 312u, depth + 1u); else { c.pc = 0x0037B6E0u; return; } if (c.pc != 0x00399254u) [[unlikely]] return; }
L_00399254:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039926Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039926Cu) [[unlikely]] return; }
L_0039926C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00399284u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00399284u) [[unlikely]] return; }
L_00399284:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00399288:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00399298:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 8188u)));
    set32(c.r[19], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003992DCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 183u, depth + 1u); else { c.pc = 0x003991E0u; return; } if (c.pc != 0x003992DCu) [[unlikely]] return; }
L_003992DC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[16], ld32((c.r[29].w[0] + 4u)));
    c.r[6].d[0] = c.r[6].d[0] | 36864ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[18].d[0];
    c.r[3].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[6].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399308u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 60u, depth + 1u); else { c.pc = 0x00387A98u; return; } if (c.pc != 0x00399308u) [[unlikely]] return; }
L_00399308:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399318u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 185u, depth + 1u); else { c.pc = 0x00399210u; return; } if (c.pc != 0x00399318u) [[unlikely]] return; }
L_00399318:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[21].w[0]), c.r[16].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00399350:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[6], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[17], c.r[20].w[0] + 3368u);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    st32((c.r[30].w[0]), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003993A4u); set32(c.r[19], ld32((c.r[20].w[0] + 8188u)));  if (depth < kMaxDepth) unit_009E(c, 223u, depth + 1u); else { c.pc = 0x00399958u; return; } if (c.pc != 0x003993A4u) [[unlikely]] return; }
L_003993A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  goto L_003993E8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003993B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 27u, depth + 1u); else { c.pc = 0x003AC440u; return; } if (c.pc != 0x003993B8u) [[unlikely]] return; }
L_003993B8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] < 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00399588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003993CCu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003993CCu) [[unlikely]] return; }
L_003993CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  goto L_003993F8; }
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003993E4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 32u, depth + 1u); else { c.pc = 0x003AC518u; return; } if (c.pc != 0x003993E4u) [[unlikely]] return; }
L_003993E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 1;
L_003993E8:
    set32(c.r[2], c.r[2].w[0] - 28008u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00399588; } }
    c.budget -= 1;
L_003993F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399404u); set32(c.r[6], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00A3(c, 30u, depth + 1u); else { c.pc = 0x003AC4A0u; return; } if (c.pc != 0x00399404u) [[unlikely]] return; }
L_00399404:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00399588; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399420u); c.r[22].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 32u, depth + 1u); else { c.pc = 0x003AC518u; return; } if (c.pc != 0x00399420u) [[unlikely]] return; }
L_00399420:
    set32(c.r[3], c.r[16].w[0] - c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[5], ld32((c.r[29].w[0])));  if (t) { goto L_00399520; } }
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = c.r[17].sd[0] <= 0; st32((c.r[29].w[0] + 12u), 0u);  if (t) { goto L_003994D4; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[29].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] << 1);
    mmi::div(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0039946Cu);  goto L_00399470; }
L_00399470:
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[17].d[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039949Cu); set32(c.r[16], c.r[17].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_009E(c, 205u, depth + 1u); else { c.pc = 0x003995B8u; return; } if (c.pc != 0x0039949Cu) [[unlikely]] return; }
L_0039949C:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    mmi::div(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003994B8u);  goto L_003994BC; }
L_003994BC:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] > 0; st32((c.r[19].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_003994FC; } }
L_003994D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_003994FC; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 28008u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003994F8u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0091(c, 289u, depth + 1u); else { c.pc = 0x00365DF8u; return; } if (c.pc != 0x003994F8u) [[unlikely]] return; }
L_003994F8:
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_003994FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00399578; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399514u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x00399514u) [[unlikely]] return; }
L_00399514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[20].w[0] + 2496u));  if (t) { goto L_0039957C; } }
    c.budget -= 1;
L_00399520:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - c.r[3].w[0]);  if (t) { goto L_00399578; } }
    set32(c.r[2], c.r[4].w[0] + 31u);
    c.r[3].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    set32(c.r[16], c.r[4].w[0] << 5);
    c.budget -= 7;
    if (c.r[16].sd[0] <= 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  goto L_00399570; }
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399558u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 208u, depth + 1u); else { c.pc = 0x00399640u; return; } if (c.pc != 0x00399558u) [[unlikely]] return; }
L_00399558:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[4], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] > 0; st32((c.r[19].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_00399578; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 1;
L_00399570:
    set32(c.r[2], c.r[2].w[0] - 28008u);
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_00399578:
    c.r[2].d[0] = ld64((c.r[20].w[0] + 2496u));
    c.budget -= 1;
L_0039957C:
    st32((c.r[30].w[0]), c.r[22].w[0]);
    c.r[2].d[0] = c.r[22].d[0] + c.r[2].d[0];
    st64((c.r[20].w[0] + 2496u), c.r[2].d[0]);
    c.budget -= 3;
L_00399588:
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
L_003995B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    set32(c.r[20], 0u + 1u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), 0u);  if (t) { goto L_003995F4; } }
L_003995F0:
    set32(c.r[17], c.r[17].w[0] + 18u);
    c.budget -= 1;
L_003995F4:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00399620; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 18u);
    set32(c.r[5], 0u + 18u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399614u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 289u, depth + 1u); else { c.pc = 0x00365DF8u; return; } if (c.pc != 0x00399614u) [[unlikely]] return; }
L_00399614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003995F0u | kUnwind; return; } goto L_003995F0; } }
    st32((c.r[19].w[0]), c.r[20].w[0]);
    c.budget -= 1;
L_00399620:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00399640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8188u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00365E38u | kUnwind; return; } [[clang::musttail]] return unit_0091(c, 290u, depth); }
L_00399660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 288ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[19].w[0]), 0u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], ld32((c.r[18].w[0] + 8188u)));  if (t) { goto L_00399700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003996B0u);  if (depth < kMaxDepth) unit_0091(c, 287u, depth + 1u); else { c.pc = 0x00365D60u; return; } if (c.pc != 0x003996B0u) [[unlikely]] return; }
L_003996B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], ld32((c.r[29].w[0])));  if (t) { goto L_003996E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003996C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 220u, depth + 1u); else { c.pc = 0x0039E2F0u; return; } if (c.pc != 0x003996C0u) [[unlikely]] return; }
L_003996C0:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 108ll ? 1ull : 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003996E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003996E0u);  if (depth < kMaxDepth) unit_009E(c, 213u, depth + 1u); else { c.pc = 0x00399720u; return; } if (c.pc != 0x003996E0u) [[unlikely]] return; }
L_003996E0:
    set32(c.r[7], c.r[2].w[0] - c.r[17].w[0]);
    c.budget -= 1;
L_003996E4:
    c.r[3].d[0] = ld64((c.r[18].w[0] + 2496u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], c.r[2].w[0] - 27824u);
    st32((c.r[19].w[0]), c.r[7].w[0]);
    c.r[3].d[0] = c.r[7].d[0] + c.r[3].d[0];
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    st64((c.r[18].w[0] + 2496u), c.r[3].d[0]);
    c.budget -= 7;
L_00399700:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00399720:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[17].w[0] + 36u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[2].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[18], c.r[20].w[0] + c.r[6].w[0]);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 88u), c.r[31].d[0]);  if (t) { goto L_003997E0; } }
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00399780:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00399784:
    c.r[2].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003997C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[16], c.r[16].w[0] + 18u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00399784u | kUnwind; return; } goto L_00399784; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003997B0u); set32(c.r[19], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 289u, depth + 1u); else { c.pc = 0x00365DF8u; return; } if (c.pc != 0x003997B0u) [[unlikely]] return; }
L_003997B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_003997C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003997C8; } }
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.r[22].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003997C8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039980C; } }
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[19].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00399780u | kUnwind; return; } goto L_00399780; }
L_003997E0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039980C; } }
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { c.r[17].d[0] = c.r[22].d[0] + 0ull;  goto L_00399808; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399800u); c.r[5].d[0] = c.r[5].d[0] | 3082ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x00399800u) [[unlikely]] return; }
L_00399800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0039980C; } }
L_00399808:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039980C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00399840:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[21].w[0]), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039987Cu); set32(c.r[20], ld32((c.r[18].w[0] + 8188u)));  if (depth < kMaxDepth) unit_009F(c, 220u, depth + 1u); else { c.pc = 0x0039E2F0u; return; } if (c.pc != 0x0039987Cu) [[unlikely]] return; }
L_0039987C:
    c.r[2].d[0] = c.r[2].sd[0] < 108ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00399898; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], c.r[2].w[0] - 27040u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00399930; } }
L_00399898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] - 18u);  if (t) { goto L_003998A4; } }
L_003998A0:
    set32(c.r[17], c.r[17].w[0] + 18u);
    c.budget -= 1;
L_003998A4:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[18].w[0] + 2496u));  goto L_003998DC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15808u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003998C4u); set32(c.r[6], 0u + 18u);  if (depth < kMaxDepth) unit_0009(c, 69u, depth + 1u); else { c.pc = 0x00145310u; return; } if (c.pc != 0x003998C4u) [[unlikely]] return; }
L_003998C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 18u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003998A0u | kUnwind; return; } goto L_003998A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], c.r[2].w[0] - 27040u);
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 2496u));
    c.budget -= 4;
L_003998DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[21].w[0]), c.r[17].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + c.r[2].d[0];
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003998F8u); st64((c.r[18].w[0] + 2496u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_009E(c, 223u, depth + 1u); else { c.pc = 0x00399958u; return; } if (c.pc != 0x003998F8u) [[unlikely]] return; }
L_003998F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00399934; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    mmi::div(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00399918u);  goto L_0039991C; }
L_0039991C:
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[20].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 5;
L_00399930:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00399934:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00399958:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399974u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 347u, depth + 1u); else { c.pc = 0x0039A878u; return; } if (c.pc != 0x00399974u) [[unlikely]] return; }
L_00399974:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00399994; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_00399994:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003999A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[17].w[0] + 8180u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003999DCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 5u, depth + 1u); else { c.pc = 0x0039C410u; return; } if (c.pc != 0x003999DCu) [[unlikely]] return; }
L_003999DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00399A30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003999F0u);  if (depth < kMaxDepth) unit_009F(c, 5u, depth + 1u); else { c.pc = 0x0039C410u; return; } if (c.pc != 0x003999F0u) [[unlikely]] return; }
L_003999F0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[19].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00399A34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399A00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 229u, depth + 1u); else { c.pc = 0x00399A50u; return; } if (c.pc != 0x00399A00u) [[unlikely]] return; }
L_00399A00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00399A30; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_009F(c, 4u, depth); }
L_00399A30:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00399A34:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00399A50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8188u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399A64u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0090(c, 485u, depth + 1u); else { c.pc = 0x003639F8u; return; } if (c.pc != 0x00399A64u) [[unlikely]] return; }
L_00399A64:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00399A78:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    set32(c.r[21], c.r[17].w[0] + 4120u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[20], ld32((c.r[17].w[0] + 8188u)));
    set32(c.r[18], ld32((c.r[20].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399AB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 485u, depth + 1u); else { c.pc = 0x003639F8u; return; } if (c.pc != 0x00399AB8u) [[unlikely]] return; }
L_00399AB8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399AC4u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 179u, depth + 1u); else { c.pc = 0x00365288u; return; } if (c.pc != 0x00399AC4u) [[unlikely]] return; }
L_00399AC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00399AD4; } }
    st32((c.r[2].w[0] + 24940u), c.r[16].w[0]);
    c.budget -= 1;
L_00399AD4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399AE0u); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x00399AE0u) [[unlikely]] return; }
L_00399AE0:
    set32(c.r[3], 0u - 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00399B18; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], 0u - 2u);  if (t) { goto L_00399B08; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00399B30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00399B48; } }
L_00399B08:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] - 4u);  if (t) { goto L_00399B5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00399B48; } }
L_00399B18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399B24u); c.r[5].d[0] = c.r[5].d[0] | 3080ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x00399B24u) [[unlikely]] return; }
L_00399B24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[19].w[0] - 4u);  if (t) { goto L_00399B5C; } }
    c.budget -= 1;
L_00399B30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399B3Cu); c.r[5].d[0] = c.r[5].d[0] | 3081ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x00399B3Cu) [[unlikely]] return; }
L_00399B3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[19].w[0] - 4u);  if (t) { goto L_00399B5C; } }
    c.budget -= 1;
L_00399B48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399B58u); c.r[5].d[0] = c.r[5].d[0] | 3079ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x00399B58u) [[unlikely]] return; }
L_00399B58:
    set32(c.r[2], c.r[19].w[0] - 4u);
    c.budget -= 1;
L_00399B5C:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 5u);  goto L_00399B78; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399B74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 212u, depth + 1u); else { c.pc = 0x003AE320u; return; } if (c.pc != 0x00399B74u) [[unlikely]] return; }
L_00399B74:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_00399B78:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00399B88; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00399B90; } }
L_00399B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399B90u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 257u, depth + 1u); else { c.pc = 0x00399D58u; return; } if (c.pc != 0x00399B90u) [[unlikely]] return; }
L_00399B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399B98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 255u, depth + 1u); else { c.pc = 0x00399D28u; return; } if (c.pc != 0x00399B98u) [[unlikely]] return; }
L_00399B98:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00399BF0; } }
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));  goto L_00399BF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399BB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 243u, depth + 1u); else { c.pc = 0x00365838u; return; } if (c.pc != 0x00399BB4u) [[unlikely]] return; }
L_00399BB4:
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00399BF0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 64u);  goto L_00399D58; }
L_00399BF0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 1;
L_00399BF4:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00399C18:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399C3Cu); set32(c.r[5], ld32((c.r[4].w[0] + 8196u)));  if (depth < kMaxDepth) unit_009E(c, 457u, depth + 1u); else { c.pc = 0x0039B758u; return; } if (c.pc != 0x00399C3Cu) [[unlikely]] return; }
L_00399C3C:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00399C60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399C74u); set32(c.r[5], ld32((c.r[4].w[0] + 8196u)));  if (depth < kMaxDepth) unit_009E(c, 460u, depth + 1u); else { c.pc = 0x0039B830u; return; } if (c.pc != 0x00399C74u) [[unlikely]] return; }
L_00399C74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00399C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[2], c.r[16].w[0] + 8180u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399CA8u); set32(c.r[17], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_009E(c, 488u, depth + 1u); else { c.pc = 0x0039BD30u; return; } if (c.pc != 0x00399CA8u) [[unlikely]] return; }
L_00399CA8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[5], c.r[29].w[0] + 4u);
    set32(c.r[6], c.r[29].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00399D14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399CC4u);  if (depth < kMaxDepth) unit_009F(c, 12u, depth + 1u); else { c.pc = 0x0039C4C0u; return; } if (c.pc != 0x00399CC4u) [[unlikely]] return; }
L_00399CC4:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 2480u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399CD0u); set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_009F(c, 30u, depth + 1u); else { c.pc = 0x0039C678u; return; } if (c.pc != 0x00399CD0u) [[unlikely]] return; }
L_00399CD0:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 2488u));
    st64((c.r[16].w[0] + 2480u), c.r[2].d[0]);
    c.budget -= 2;
L_00399CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399CE0u); set32(c.r[5], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_009F(c, 30u, depth + 1u); else { c.pc = 0x0039C678u; return; } if (c.pc != 0x00399CE0u) [[unlikely]] return; }
L_00399CE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    st64((c.r[16].w[0] + 2488u), c.r[2].d[0]);
    set32(c.r[5], c.r[29].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399CF4u); set32(c.r[6], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_009F(c, 12u, depth + 1u); else { c.pc = 0x0039C4C0u; return; } if (c.pc != 0x00399CF4u) [[unlikely]] return; }
L_00399CF4:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 2504u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399D00u); set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_009F(c, 30u, depth + 1u); else { c.pc = 0x0039C678u; return; } if (c.pc != 0x00399D00u) [[unlikely]] return; }
L_00399D00:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 2512u));
    st64((c.r[16].w[0] + 2504u), c.r[2].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399D10u); set32(c.r[5], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_009F(c, 30u, depth + 1u); else { c.pc = 0x0039C678u; return; } if (c.pc != 0x00399D10u) [[unlikely]] return; }
L_00399D10:
    st64((c.r[16].w[0] + 2512u), c.r[2].d[0]);
    c.budget -= 1;
L_00399D14:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00399D28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8196u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009F(c, 7u, depth); }
L_00399D40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8200u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009F(c, 7u, depth); }
L_00399D58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8200u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009F(c, 6u, depth); }
L_00399D78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399D90u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 347u, depth + 1u); else { c.pc = 0x0039A878u; return; } if (c.pc != 0x00399D90u) [[unlikely]] return; }
L_00399D90:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00399E1C; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00399E1C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8188u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399DB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 264u, depth + 1u); else { c.pc = 0x00399E30u; return; } if (c.pc != 0x00399DB8u) [[unlikely]] return; }
L_00399DB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00399E18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399DC8u);  if (depth < kMaxDepth) unit_0091(c, 19u, depth + 1u); else { c.pc = 0x003641D0u; return; } if (c.pc != 0x00399DC8u) [[unlikely]] return; }
L_00399DC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399DD4u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0091(c, 13u, depth + 1u); else { c.pc = 0x00364148u; return; } if (c.pc != 0x00399DD4u) [[unlikely]] return; }
L_00399DD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399DE0u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0091(c, 25u, depth + 1u); else { c.pc = 0x00364258u; return; } if (c.pc != 0x00399DE0u) [[unlikely]] return; }
L_00399DE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 15u);
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 14;
L_00399E18:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00399E1C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00399E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399E40u);  if (depth < kMaxDepth) unit_0090(c, 485u, depth + 1u); else { c.pc = 0x003639F8u; return; } if (c.pc != 0x00399E40u) [[unlikely]] return; }
L_00399E40:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00399E58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 27u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 8188u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399E78u); set32(c.r[16], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x00399E78u) [[unlikely]] return; }
L_00399E78:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00399EA8; } }
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00364A88u | kUnwind; return; } [[clang::musttail]] return unit_0091(c, 107u, depth); }
L_00399EA8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00399EC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[17].w[0] + 13736u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399EECu); set32(c.r[19], c.r[17].w[0] + 13728u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x00399EECu) [[unlikely]] return; }
L_00399EEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00399FF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399F00u); st32((c.r[17].w[0] + 8188u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_009E(c, 276u, depth + 1u); else { c.pc = 0x0039A018u; return; } if (c.pc != 0x00399F00u) [[unlikely]] return; }
L_00399F00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00399FF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399F10u);  if (depth < kMaxDepth) unit_009E(c, 293u, depth + 1u); else { c.pc = 0x0039A1D0u; return; } if (c.pc != 0x00399F10u) [[unlikely]] return; }
L_00399F10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] | 3076ull;  if (t) { goto L_00399F40; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_00399F40:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399F50u); set32(c.r[5], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0096(c, 170u, depth + 1u); else { c.pc = 0x00379E40u; return; } if (c.pc != 0x00399F50u) [[unlikely]] return; }
L_00399F50:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[11], c.r[5].w[0] - 29112u);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[8], c.r[17].w[0] + 13908u);
    set32(c.r[10], c.r[2].w[0] - 29176u);
    set32(c.r[3], c.r[3].w[0] - 29144u);
    set32(c.r[6], c.r[6].w[0] - 29080u);
    c.budget -= 15;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] - 29048u);  if (t) { goto L_00399FB0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 3077ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_00399FB0:
    st32((c.r[19].w[0] + 4u), c.r[9].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[19].w[0]), c.r[18].w[0]);
    st32((c.r[17].w[0] + 8460u), c.r[8].w[0]);
    st32((c.r[8].w[0] + 20u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[8].w[0] + 4u), c.r[10].w[0]);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[8].w[0] + 12u), c.r[11].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399FE0u); st32((c.r[8].w[0] + 16u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0090(c, 457u, depth + 1u); else { c.pc = 0x00363770u; return; } if (c.pc != 0x00399FE0u) [[unlikely]] return; }
L_00399FE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399FECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 332u, depth + 1u); else { c.pc = 0x0039A640u; return; } if (c.pc != 0x00399FECu) [[unlikely]] return; }
L_00399FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399FF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 299u, depth + 1u); else { c.pc = 0x0039A250u; return; } if (c.pc != 0x00399FF4u) [[unlikely]] return; }
L_00399FF4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00399FF8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039A018:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[8], c.r[2].w[0] + 24912u);
    st64((c.r[29].w[0] + 72u), c.r[17].d[0]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[2], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 3078ull;  if (t) { goto L_0039A058; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0039A068; } }
L_0039A058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A060u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x0039A060u) [[unlikely]] return; }
L_0039A060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0039A1BC; } }
L_0039A068:
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 28008u);
    ldl(c.r[5], (c.r[8].w[0] + 7u));
    ldr(c.r[5], (c.r[8].w[0]));
    ldl(c.r[9], (c.r[8].w[0] + 15u));
    ldr(c.r[9], (c.r[8].w[0] + 8u));
    ldl(c.r[10], (c.r[8].w[0] + 23u));
    ldr(c.r[10], (c.r[8].w[0] + 16u));
    set32(c.r[11], ld32((c.r[8].w[0] + 24u)));
    sdl(c.r[5], (c.r[7].w[0] + 15u));
    sdr(c.r[5], (c.r[7].w[0] + 8u));
    sdl(c.r[9], (c.r[7].w[0] + 23u));
    sdr(c.r[9], (c.r[7].w[0] + 16u));
    sdl(c.r[10], (c.r[7].w[0] + 31u));
    sdr(c.r[10], (c.r[7].w[0] + 24u));
    st32((c.r[7].w[0] + 32u), c.r[11].w[0]);
    set32(c.r[5], 0u + 63u);
    st32((c.r[7].w[0] + 40u), c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[17].d[0] = c.r[17].d[0] | 16960ull;
    st32((c.r[7].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[16], c.r[18].w[0] + 4120u);
    st32((c.r[7].w[0] + 68u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 76u), 0u);
    st32((c.r[7].w[0]), 0u);
    st32((c.r[7].w[0] + 4u), 0u);
    st32((c.r[7].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 44u), 0u);
    st32((c.r[7].w[0] + 48u), 0u);
    st32((c.r[7].w[0] + 52u), 0u);
    st32((c.r[7].w[0] + 56u), 0u);
    st32((c.r[7].w[0] + 64u), 0u);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A0F4u); st32((c.r[7].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039A0F4u) [[unlikely]] return; }
L_0039A0F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A108u); st64((c.r[29].w[0] + 8u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039A108u) [[unlikely]] return; }
L_0039A108:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 65u);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A11Cu); st64((c.r[29].w[0] + 24u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039A11Cu) [[unlikely]] return; }
L_0039A11C:
    set32(c.r[5], 0u + 66u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A130u); st64((c.r[29].w[0] + 40u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039A130u) [[unlikely]] return; }
L_0039A130:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[2].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A140u); st64((c.r[29].w[0] + 56u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00A3(c, 200u, depth + 1u); else { c.pc = 0x003AE180u; return; } if (c.pc != 0x0039A140u) [[unlikely]] return; }
L_0039A140:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A14Cu); set32(c.r[5], 0u + 72u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039A14Cu) [[unlikely]] return; }
L_0039A14C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A158u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 205u, depth + 1u); else { c.pc = 0x003AE2A0u; return; } if (c.pc != 0x0039A158u) [[unlikely]] return; }
L_0039A158:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A164u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 206u, depth + 1u); else { c.pc = 0x003AE2A8u; return; } if (c.pc != 0x0039A164u) [[unlikely]] return; }
L_0039A164:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A170u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00A3(c, 207u, depth + 1u); else { c.pc = 0x003AE2C0u; return; } if (c.pc != 0x0039A170u) [[unlikely]] return; }
L_0039A170:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A17Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00A3(c, 208u, depth + 1u); else { c.pc = 0x003AE2D8u; return; } if (c.pc != 0x0039A17Cu) [[unlikely]] return; }
L_0039A17C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A188u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00A3(c, 209u, depth + 1u); else { c.pc = 0x003AE2F0u; return; } if (c.pc != 0x0039A188u) [[unlikely]] return; }
L_0039A188:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A194u); set32(c.r[5], 0u + 62u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039A194u) [[unlikely]] return; }
L_0039A194:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A1A0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 210u, depth + 1u); else { c.pc = 0x003AE308u; return; } if (c.pc != 0x0039A1A0u) [[unlikely]] return; }
L_0039A1A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A1ACu); set32(c.r[5], 0u + 61u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039A1ACu) [[unlikely]] return; }
L_0039A1AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A1B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 328u, depth + 1u); else { c.pc = 0x003B3B90u; return; } if (c.pc != 0x0039A1B4u) [[unlikely]] return; }
L_0039A1B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_0039A1BC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0039A1D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A1E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 224u, depth + 1u); else { c.pc = 0x003A9AD0u; return; } if (c.pc != 0x0039A1E4u) [[unlikely]] return; }
L_0039A1E4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039A208; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A200u); set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0090(c, 376u, depth + 1u); else { c.pc = 0x00362E58u; return; } if (c.pc != 0x0039A200u) [[unlikely]] return; }
L_0039A200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0039A214; } }
L_0039A208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A210u);  if (depth < kMaxDepth) unit_009E(c, 298u, depth + 1u); else { c.pc = 0x0039A240u; return; } if (c.pc != 0x0039A210u) [[unlikely]] return; }
L_0039A210:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039A214:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039A22C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A228u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 157u, depth + 1u); else { c.pc = 0x00365078u; return; } if (c.pc != 0x0039A228u) [[unlikely]] return; }
L_0039A228:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0039A22C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039A240:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 10360u)));  c.pc = t; return; }
L_0039A250:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] - 23920u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A270u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 86u, depth + 1u); else { c.pc = 0x003ACDD8u; return; } if (c.pc != 0x0039A270u) [[unlikely]] return; }
L_0039A270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A2(c, 393u, depth); }
L_0039A290:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 4120u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 8188u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A2CCu); set32(c.r[18], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00A3(c, 60u, depth + 1u); else { c.pc = 0x003AC9D0u; return; } if (c.pc != 0x0039A2CCu) [[unlikely]] return; }
L_0039A2CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0039A328; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  goto L_0039A318; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A2F4u); set32(c.r[7], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_009E(c, 304u, depth + 1u); else { c.pc = 0x0039A350u; return; } if (c.pc != 0x0039A2F4u) [[unlikely]] return; }
L_0039A2F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0]), c.r[4].w[0]);  goto L_0039A31C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 4;
L_0039A318:
    st32((c.r[20].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0039A31C:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0039A328:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039A350:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A380u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 485u, depth + 1u); else { c.pc = 0x003639F8u; return; } if (c.pc != 0x0039A380u) [[unlikely]] return; }
L_0039A380:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 52u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A398u); st32((c.r[3].w[0] + 9816u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0090(c, 515u, depth + 1u); else { c.pc = 0x00363D78u; return; } if (c.pc != 0x0039A398u) [[unlikely]] return; }
L_0039A398:
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A3ACu); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00A4(c, 334u, depth + 1u); else { c.pc = 0x003B3D58u; return; } if (c.pc != 0x0039A3ACu) [[unlikely]] return; }
L_0039A3AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A3B4u); st64((c.r[29].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00A4(c, 338u, depth + 1u); else { c.pc = 0x003B3EC8u; return; } if (c.pc != 0x0039A3B4u) [[unlikely]] return; }
L_0039A3B4:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A3CCu); st64((c.r[29].w[0] + 24u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00A3(c, 216u, depth + 1u); else { c.pc = 0x003AE380u; return; } if (c.pc != 0x0039A3CCu) [[unlikely]] return; }
L_0039A3CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0039A3F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8188u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_0039A4B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[2].w[0] + 24912u);
    ldl(c.r[4], (c.r[3].w[0] + 15u));
    ldr(c.r[4], (c.r[3].w[0] + 8u));
    ldl(c.r[5], (c.r[3].w[0] + 23u));
    ldr(c.r[5], (c.r[3].w[0] + 16u));
    ldl(c.r[6], (c.r[3].w[0] + 31u));
    ldr(c.r[6], (c.r[3].w[0] + 24u));
    sdl(c.r[4], (c.r[7].w[0] + 7u));
    sdr(c.r[4], (c.r[7].w[0]));
    sdl(c.r[5], (c.r[7].w[0] + 15u));
    sdr(c.r[5], (c.r[7].w[0] + 8u));
    sdl(c.r[6], (c.r[7].w[0] + 23u));
    sdr(c.r[6], (c.r[7].w[0] + 16u));
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A468u); st32((c.r[7].w[0] + 24u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 224u, depth + 1u); else { c.pc = 0x003A9AD0u; return; } if (c.pc != 0x0039A468u) [[unlikely]] return; }
L_0039A468:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039A488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A47Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 317u, depth + 1u); else { c.pc = 0x0039A4D0u; return; } if (c.pc != 0x0039A47Cu) [[unlikely]] return; }
L_0039A47C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0039A49C; } }
    c.budget -= 1;
L_0039A488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A490u);  if (depth < kMaxDepth) unit_009E(c, 323u, depth + 1u); else { c.pc = 0x0039A528u; return; } if (c.pc != 0x0039A490u) [[unlikely]] return; }
L_0039A490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A498u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 319u, depth + 1u); else { c.pc = 0x0039A4F0u; return; } if (c.pc != 0x0039A498u) [[unlikely]] return; }
L_0039A498:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039A49C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A4ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A4ACu) [[unlikely]] return; }
L_0039A4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A4B4u);  if (depth < kMaxDepth) unit_00A4(c, 333u, depth + 1u); else { c.pc = 0x003B3CE8u; return; } if (c.pc != 0x0039A4B4u) [[unlikely]] return; }
L_0039A4B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0039A4B8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039A4D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A4E0u);  if (depth < kMaxDepth) unit_0090(c, 411u, depth + 1u); else { c.pc = 0x003632E0u; return; } if (c.pc != 0x0039A4E0u) [[unlikely]] return; }
L_0039A4E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039A4F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 10360u), c.r[4].w[0]);  c.pc = t; return; }
L_0039A500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039A508:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A518u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 332u, depth + 1u); else { c.pc = 0x0039A640u; return; } if (c.pc != 0x0039A518u) [[unlikely]] return; }
L_0039A518:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039A528:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8188u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A53Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0090(c, 476u, depth + 1u); else { c.pc = 0x00363908u; return; } if (c.pc != 0x0039A53Cu) [[unlikely]] return; }
L_0039A53C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039A550:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[20].w[0] + 8188u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], ld32((c.r[19].w[0])));  if (t) { goto L_0039A5A4; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[19].w[0] + 48u), 0u);  goto L_0039A5A0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0039A5B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039A624; } }
L_0039A5A0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039A5A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A5ACu);  if (depth < kMaxDepth) unit_009E(c, 333u, depth + 1u); else { c.pc = 0x0039A690u; return; } if (c.pc != 0x0039A5ACu) [[unlikely]] return; }
L_0039A5AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0039A620; } }
    c.budget -= 1;
L_0039A5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A5C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 264u, depth + 1u); else { c.pc = 0x00399E30u; return; } if (c.pc != 0x0039A5C0u) [[unlikely]] return; }
L_0039A5C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0039A620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A5D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 19u, depth + 1u); else { c.pc = 0x003641D0u; return; } if (c.pc != 0x0039A5D0u) [[unlikely]] return; }
L_0039A5D0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A5E4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 336u, depth + 1u); else { c.pc = 0x0039A718u; return; } if (c.pc != 0x0039A5E4u) [[unlikely]] return; }
L_0039A5E4:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A5FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 248u, depth + 1u); else { c.pc = 0x003658C8u; return; } if (c.pc != 0x0039A5FCu) [[unlikely]] return; }
L_0039A5FC:
    set32(c.r[4], c.r[20].w[0] + 4120u);
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[19].w[0] + 48u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A61Cu); st64((c.r[29].w[0] + 8u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00A3(c, 213u, depth + 1u); else { c.pc = 0x003AE328u; return; } if (c.pc != 0x0039A61Cu) [[unlikely]] return; }
L_0039A61C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0039A620:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039A624:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039A640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] + 4120u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8188u)));
    st32((c.r[3].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], ld32((c.r[3].w[0])));  if (t) { goto L_0039A674; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0039A688; } }
L_0039A674:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0039A6D8; }
L_0039A688:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039A690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8188u)));
    set32(c.r[4], c.r[4].w[0] + 4120u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_0039A6C4; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0039A6D0; } }
L_0039A6C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0039A6D8; }
L_0039A6D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039A6D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A6F8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 215u, depth + 1u); else { c.pc = 0x00365578u; return; } if (c.pc != 0x0039A6F8u) [[unlikely]] return; }
L_0039A6F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A3(c, 211u, depth); }
L_0039A718:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A73Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 113u, depth + 1u); else { c.pc = 0x003AD2B8u; return; } if (c.pc != 0x0039A73Cu) [[unlikely]] return; }
L_0039A73C:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A74Cu); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_009B(c, 173u, depth + 1u); else { c.pc = 0x0038E0D0u; return; } if (c.pc != 0x0039A74Cu) [[unlikely]] return; }
L_0039A74C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039A768:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3075ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_0039A788:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3075ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_0039A7A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3075ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_0039A7C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3075ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_0039A7E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A800u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 347u, depth + 1u); else { c.pc = 0x0039A878u; return; } if (c.pc != 0x0039A800u) [[unlikely]] return; }
L_0039A800:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039A864; }
    set32(c.r[16], ld32((c.r[16].w[0] + 8188u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], ld32((c.r[16].w[0])));  if (t) { goto L_0039A860; } }
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039A860; } }
    set32(c.r[7], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A83Cu); set32(c.r[6], ld32((c.r[6].w[0] + 16u)));  if (depth < kMaxDepth) unit_008E(c, 305u, depth + 1u); else { c.pc = 0x0035A268u; return; } if (c.pc != 0x0039A83Cu) [[unlikely]] return; }
L_0039A83C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A848u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 261u, depth + 1u); else { c.pc = 0x00365A38u; return; } if (c.pc != 0x0039A848u) [[unlikely]] return; }
L_0039A848:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 26560u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 6;
L_0039A860:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0039A864:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039A878:
    set32(c.r[3], ld32((c.r[4].w[0] + 13992u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8188u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 3340u);  if (t) { goto L_0039A8A0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[5].d[0];
    c.budget -= 5;
L_0039A8A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039A8A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A8CCu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x0039A8CCu) [[unlikely]] return; }
L_0039A8CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 417ull;  if (t) { goto L_0039A8F8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_0039A8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A900u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039A900u) [[unlikely]] return; }
L_0039A900:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0039A920; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8460u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_0039A918:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A920u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A920u) [[unlikely]] return; }
L_0039A920:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039A938:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A954u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x0039A954u) [[unlikely]] return; }
L_0039A954:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039A978; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A96Cu); c.r[5].d[0] = c.r[5].d[0] | 418ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x0039A96Cu) [[unlikely]] return; }
L_0039A96C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039A99C; } }
    c.budget -= 1;
L_0039A978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A980u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039A980u) [[unlikely]] return; }
L_0039A980:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039A99C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8460u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A99Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A99Cu) [[unlikely]] return; }
L_0039A99C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039A9B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A9CCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x0039A9CCu) [[unlikely]] return; }
L_0039A9CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039A9F0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 419ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_0039A9F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A9FCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039A9FCu) [[unlikely]] return; }
L_0039A9FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039AA18; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8460u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AA18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039AA18u) [[unlikely]] return; }
L_0039AA18:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039AA30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AA44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x0039AA44u) [[unlikely]] return; }
L_0039AA44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 420ull;  if (t) { goto L_0039AA68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AA5Cu);  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x0039AA5Cu) [[unlikely]] return; }
L_0039AA5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039AA8C; } }
    c.budget -= 1;
L_0039AA68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AA74u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039AA74u) [[unlikely]] return; }
L_0039AA74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039AA8C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8460u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AA8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039AA8Cu) [[unlikely]] return; }
L_0039AA8C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039AAA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AAC0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039AAC0u) [[unlikely]] return; }
L_0039AAC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039AAE4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8460u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039AAE0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AAE0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039AAE0u) [[unlikely]] return; }
L_0039AAE0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0039AAE4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039AAF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039AB00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039AB08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AB20u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039AB20u) [[unlikely]] return; }
L_0039AB20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039AB38; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0039AB48; }
L_0039AB38:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039AB48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AB5Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 377u, depth + 1u); else { c.pc = 0x0039AB78u; return; } if (c.pc != 0x0039AB5Cu) [[unlikely]] return; }
L_0039AB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AB64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 380u, depth + 1u); else { c.pc = 0x0039ABE8u; return; } if (c.pc != 0x0039AB64u) [[unlikely]] return; }
L_0039AB64:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039AB78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AB98u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_00A3(c, 196u, depth + 1u); else { c.pc = 0x003AE118u; return; } if (c.pc != 0x0039AB98u) [[unlikely]] return; }
L_0039AB98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039ABD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ABA8u); set32(c.r[5], ld32((c.r[16].w[0] + 8468u)));  if (depth < kMaxDepth) unit_009F(c, 5u, depth + 1u); else { c.pc = 0x0039C410u; return; } if (c.pc != 0x0039ABA8u) [[unlikely]] return; }
L_0039ABA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_0039ABD0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A3(c, 195u, depth); }
L_0039ABD0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039ABE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AC08u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_00A3(c, 198u, depth + 1u); else { c.pc = 0x003AE148u; return; } if (c.pc != 0x0039AC08u) [[unlikely]] return; }
L_0039AC08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039AC40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AC18u); set32(c.r[5], ld32((c.r[16].w[0] + 8468u)));  if (depth < kMaxDepth) unit_009F(c, 7u, depth + 1u); else { c.pc = 0x0039C450u; return; } if (c.pc != 0x0039AC18u) [[unlikely]] return; }
L_0039AC18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_0039AC40; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A3(c, 197u, depth); }
L_0039AC40:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039AC58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AC70u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039AC70u) [[unlikely]] return; }
L_0039AC70:
    set32(c.r[3], c.r[16].w[0] + 13908u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0039AC88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AC84u); st32((c.r[16].w[0] + 8460u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_009E(c, 386u, depth + 1u); else { c.pc = 0x0039AC98u; return; } if (c.pc != 0x0039AC84u) [[unlikely]] return; }
L_0039AC84:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039AC88:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039AC98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039ACA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039ACA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ACC0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039ACC0u) [[unlikely]] return; }
L_0039ACC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0039ACE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ACE0u);  if (depth < kMaxDepth) unit_00A3(c, 193u, depth + 1u); else { c.pc = 0x003AE0B0u; return; } if (c.pc != 0x0039ACE0u) [[unlikely]] return; }
L_0039ACE0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039ACF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AD08u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039AD08u) [[unlikely]] return; }
L_0039AD08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0039AD18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0039AD28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AD28u);  if (depth < kMaxDepth) unit_00A3(c, 193u, depth + 1u); else { c.pc = 0x003AE0B0u; return; } if (c.pc != 0x0039AD28u) [[unlikely]] return; }
L_0039AD28:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039AD38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AD50u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039AD50u) [[unlikely]] return; }
L_0039AD50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 2;
L_0039AD58:
    set32(c.r[6], 0u + 7u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0039AD70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AD70u);  if (depth < kMaxDepth) unit_00A3(c, 193u, depth + 1u); else { c.pc = 0x003AE0B0u; return; } if (c.pc != 0x0039AD70u) [[unlikely]] return; }
L_0039AD70:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039AD80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ADA0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039ADA0u) [[unlikely]] return; }
L_0039ADA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0039ADC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ADC0u);  if (depth < kMaxDepth) unit_00A3(c, 193u, depth + 1u); else { c.pc = 0x003AE0B0u; return; } if (c.pc != 0x0039ADC0u) [[unlikely]] return; }
L_0039ADC0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039ADD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 2561ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_0039ADF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 2561ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_0039AE18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 2561ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_0039AE38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 2561ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_0039AE58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039AE60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009F(c, 19u, depth); }
L_0039AE78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039AE80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 8u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AEB8u); set32(c.r[6], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_009E(c, 419u, depth + 1u); else { c.pc = 0x0039AFB8u; return; } if (c.pc != 0x0039AEB8u) [[unlikely]] return; }
L_0039AEB8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0039AED8u);  goto L_0039AEDC; }
L_0039AEDC:
    c.r[8].d[0] = c.hi.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AEE8u);  if (depth < kMaxDepth) unit_009E(c, 421u, depth + 1u); else { c.pc = 0x0039AFF8u; return; } if (c.pc != 0x0039AEE8u) [[unlikely]] return; }
L_0039AEE8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], 0u + 2048u);  if (t) { goto L_0039AF9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AF08u);  if (depth < kMaxDepth) unit_009E(c, 421u, depth + 1u); else { c.pc = 0x0039AFF8u; return; } if (c.pc != 0x0039AF08u) [[unlikely]] return; }
L_0039AF08:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0039AFA0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AF28u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 421u, depth + 1u); else { c.pc = 0x0039AFF8u; return; } if (c.pc != 0x0039AF28u) [[unlikely]] return; }
L_0039AF28:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], 0u + 3u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0039AF9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AF44u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 432u, depth + 1u); else { c.pc = 0x0039B1F8u; return; } if (c.pc != 0x0039AF44u) [[unlikely]] return; }
L_0039AF44:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AF58u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_009E(c, 435u, depth + 1u); else { c.pc = 0x0039B2B0u; return; } if (c.pc != 0x0039AF58u) [[unlikely]] return; }
L_0039AF58:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], 0u + 5u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AF70u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 432u, depth + 1u); else { c.pc = 0x0039B1F8u; return; } if (c.pc != 0x0039AF70u) [[unlikely]] return; }
L_0039AF70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AF84u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_009E(c, 435u, depth + 1u); else { c.pc = 0x0039B2B0u; return; } if (c.pc != 0x0039AF84u) [[unlikely]] return; }
L_0039AF84:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AF98u); set32(c.r[7], 0u + 7u);  if (depth < kMaxDepth) unit_009E(c, 437u, depth + 1u); else { c.pc = 0x0039B3D8u; return; } if (c.pc != 0x0039AF98u) [[unlikely]] return; }
L_0039AF98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039AF9C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0039AFA0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039AFB8:
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0039AFC8:
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AFC8u | kUnwind; return; } goto L_0039AFC8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039AFF8:
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[9], c.r[7].w[0] << 2);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], c.r[16].w[0] + 16u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0039B058; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 4u);  if (t) { goto L_0039B084; } }
L_0039B058:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[19], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B068u); set32(c.r[18], 0u + 5u);  if (depth < kMaxDepth) unit_009E(c, 425u, depth + 1u); else { c.pc = 0x0039B0B8u; return; } if (c.pc != 0x0039B068u) [[unlikely]] return; }
L_0039B068:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_0039B098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B084u);  if (depth < kMaxDepth) unit_009E(c, 448u, depth + 1u); else { c.pc = 0x0039B5D8u; return; } if (c.pc != 0x0039B084u) [[unlikely]] return; }
L_0039B084:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B094u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 439u, depth + 1u); else { c.pc = 0x0039B428u; return; } if (c.pc != 0x0039B094u) [[unlikely]] return; }
L_0039B094:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039B098:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039B0B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[6].w[0] - c.r[7].w[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1036ull;
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] > 0; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0039B100; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_0039B100:
    st32((c.r[16].w[0] + 16u), c.r[7].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B114u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 170u, depth + 1u); else { c.pc = 0x00379E40u; return; } if (c.pc != 0x0039B114u) [[unlikely]] return; }
L_0039B114:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] | 1034ull;  if (t) { goto L_0039B138; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_0039B138:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039B150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B168u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 430u, depth + 1u); else { c.pc = 0x0039B190u; return; } if (c.pc != 0x0039B168u) [[unlikely]] return; }
L_0039B168:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B174u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 430u, depth + 1u); else { c.pc = 0x0039B190u; return; } if (c.pc != 0x0039B174u) [[unlikely]] return; }
L_0039B174:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 2u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0039B190; }
L_0039B190:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4872u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[16], c.r[4].w[0] + 16u);  if (t) { goto L_0039B1E8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0039B1E8; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B1E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B1E4u) [[unlikely]] return; }
L_0039B1E4:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0039B1E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039B1F8:
    set32(c.r[2], c.r[8].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[8].w[0] << 2);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[6].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[7].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B24Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 439u, depth + 1u); else { c.pc = 0x0039B428u; return; } if (c.pc != 0x0039B24Cu) [[unlikely]] return; }
L_0039B24C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[19].w[0] + 5800u);
    set32(c.r[19], c.r[19].w[0] + 7840u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], 0u + 15u);
    c.budget -= 11;
L_0039B278:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[19], c.r[19].w[0] - 136u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B278u | kUnwind; return; } goto L_0039B278; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039B2B0:
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[5].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[6].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B300u); c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_009E(c, 439u, depth + 1u); else { c.pc = 0x0039B428u; return; } if (c.pc != 0x0039B300u) [[unlikely]] return; }
L_0039B300:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039B3D8:
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B410u); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_009E(c, 439u, depth + 1u); else { c.pc = 0x0039B428u; return; } if (c.pc != 0x0039B410u) [[unlikely]] return; }
L_0039B410:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0039B448; }
L_0039B428:
    set32(c.r[2], 0u + 9u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 76u), c.r[2].w[0]);  c.pc = t; return; }
L_0039B448:
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_0039B450:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B450u | kUnwind; return; } goto L_0039B450; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039B478:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B498u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 446u, depth + 1u); else { c.pc = 0x0039B520u; return; } if (c.pc != 0x0039B498u) [[unlikely]] return; }
L_0039B498:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0039B4C0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 1032ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_0039B4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B4C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 199u, depth + 1u); else { c.pc = 0x003AE160u; return; } if (c.pc != 0x0039B4C8u) [[unlikely]] return; }
L_0039B4C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0039B508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B4E0u);  if (depth < kMaxDepth) unit_00A3(c, 199u, depth + 1u); else { c.pc = 0x003AE160u; return; } if (c.pc != 0x0039B4E0u) [[unlikely]] return; }
L_0039B4E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0039B508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B4F8u);  if (depth < kMaxDepth) unit_00A3(c, 199u, depth + 1u); else { c.pc = 0x003AE160u; return; } if (c.pc != 0x0039B4F8u) [[unlikely]] return; }
L_0039B4F8:
    set32(c.r[3], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_0039B508:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0039B568; }
L_0039B520:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039B55C; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039B55C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039B55C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0039B55C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_0039B55C; }
L_0039B55C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039B568:
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + 4872u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { goto L_0039B5B8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 1033ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_0039B5B8:
    set32(c.r[7], ld32((c.r[8].w[0] + 4u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B5C8u); c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_009E(c, 448u, depth + 1u); else { c.pc = 0x0039B5D8u; return; } if (c.pc != 0x0039B5C8u) [[unlikely]] return; }
L_0039B5C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039B5D8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B608u); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x0039B608u) [[unlikely]] return; }
L_0039B608:
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[4], c.r[16].w[0] + 24u);
    ldl(c.r[2], (c.r[19].w[0] + 7u));
    ldr(c.r[2], (c.r[19].w[0]));
    ldl(c.r[3], (c.r[19].w[0] + 15u));
    ldr(c.r[3], (c.r[19].w[0] + 8u));
    ldl(c.r[5], (c.r[19].w[0] + 23u));
    ldr(c.r[5], (c.r[19].w[0] + 16u));
    sdl(c.r[2], (c.r[16].w[0] + 7u));
    sdr(c.r[2], (c.r[16].w[0]));
    sdl(c.r[3], (c.r[16].w[0] + 15u));
    sdr(c.r[3], (c.r[16].w[0] + 8u));
    sdl(c.r[5], (c.r[16].w[0] + 23u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B644u); sdr(c.r[5], (c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_009E(c, 453u, depth + 1u); else { c.pc = 0x0039B678u; return; } if (c.pc != 0x0039B644u) [[unlikely]] return; }
L_0039B644:
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B654u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_00A2(c, 286u, depth + 1u); else { c.pc = 0x003AA418u; return; } if (c.pc != 0x0039B654u) [[unlikely]] return; }
L_0039B654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B65Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x0039B65Cu) [[unlikely]] return; }
L_0039B65C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039B678:
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_0039B688:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4888u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    ldl(c.r[2], (c.r[7].w[0] + 7u));
    ldr(c.r[2], (c.r[7].w[0]));
    ldl(c.r[3], (c.r[7].w[0] + 15u));
    ldr(c.r[3], (c.r[7].w[0] + 8u));
    sdl(c.r[2], (c.r[4].w[0] + 7u));
    sdr(c.r[2], (c.r[4].w[0]));
    sdl(c.r[3], (c.r[4].w[0] + 15u));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; sdr(c.r[3], (c.r[4].w[0] + 8u));  c.pc = t; return; }
L_0039B6D0:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4888u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    ldl(c.r[2], (c.r[4].w[0] + 7u));
    ldr(c.r[2], (c.r[4].w[0]));
    ldl(c.r[3], (c.r[4].w[0] + 15u));
    ldr(c.r[3], (c.r[4].w[0] + 8u));
    sdl(c.r[2], (c.r[7].w[0] + 7u));
    sdr(c.r[2], (c.r[7].w[0]));
    sdl(c.r[3], (c.r[7].w[0] + 15u));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; sdr(c.r[3], (c.r[7].w[0] + 8u));  c.pc = t; return; }
L_0039B740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0039B770; }
L_0039B758:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0039B770; }
L_0039B770:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 4872u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  if (t) { goto L_0039B7D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0039B7D8; } }
L_0039B7D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039B804; } }
L_0039B7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B7E0u); set32(c.r[7], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_009E(c, 467u, depth + 1u); else { c.pc = 0x0039BA28u; return; } if (c.pc != 0x0039B7E0u) [[unlikely]] return; }
L_0039B7E0:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 9;
L_0039B804:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039B818:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0039B848; }
L_0039B830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0039B848; }
L_0039B848:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[21].w[0] << 3);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[21].w[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[22].w[0] + 4872u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[18], c.r[4].w[0] + 16u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 26;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_0039B968; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039B968; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039B8D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0039B96C; } }
    c.budget -= 1;
L_0039B8D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B8D8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 473u, depth + 1u); else { c.pc = 0x0039BB20u; return; } if (c.pc != 0x0039B8D8u) [[unlikely]] return; }
L_0039B8D8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0039B920; }
    set32(c.r[16], c.r[20].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B8FCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 473u, depth + 1u); else { c.pc = 0x0039BB20u; return; } if (c.pc != 0x0039B8FCu) [[unlikely]] return; }
L_0039B8FC:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0039B920; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B918u); c.r[5].d[0] = c.r[5].d[0] | 1035ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x0039B918u) [[unlikely]] return; }
L_0039B918:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0039B920:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 32u)));  goto L_0039B950; }
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[19].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 36u)));  goto L_0039B93C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B938u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 465u, depth + 1u); else { c.pc = 0x0039B998u; return; } if (c.pc != 0x0039B938u) [[unlikely]] return; }
L_0039B938:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_0039B93C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);  if (t) { goto L_0039B95C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0039B95C; } }
    c.budget -= 1;
L_0039B950:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);  if (t) { goto L_0039B95C; } }
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 1;
L_0039B95C:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[22].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 3;
L_0039B968:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0039B96C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039B998:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 24u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B9C0u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_009E(c, 467u, depth + 1u); else { c.pc = 0x0039BA28u; return; } if (c.pc != 0x0039B9C0u) [[unlikely]] return; }
L_0039B9C0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 16u)));  goto L_0039B9EC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0039BA18; }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 1;
L_0039B9EC:
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_0039BA10; }
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0039BA18; }
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0039BA10:
    st32((c.r[16].w[0]), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_0039BA18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039BA28:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BA60u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039BA60u) [[unlikely]] return; }
L_0039BA60:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BA84u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039BA84u) [[unlikely]] return; }
L_0039BA84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039BAD8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BAB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039BAB4u) [[unlikely]] return; }
L_0039BAB4:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BACCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039BACCu) [[unlikely]] return; }
L_0039BACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { goto L_0039BAE4; } }
    c.budget -= 1;
L_0039BAD8:
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
L_0039BAE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BAF8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039BAF8u) [[unlikely]] return; }
L_0039BAF8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039BB20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BB48u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039BB48u) [[unlikely]] return; }
L_0039BB48:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BB60u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039BB60u) [[unlikely]] return; }
L_0039BB60:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039BB78:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 4912u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BBB8u); c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x0039BBB8u) [[unlikely]] return; }
L_0039BBB8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BBD0u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x0039BBD0u) [[unlikely]] return; }
L_0039BBD0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039BBE8:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BC28u); set32(c.r[16], c.r[16].w[0] + 4912u);  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x0039BC28u) [[unlikely]] return; }
L_0039BC28:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BC38u); st32((c.r[16].w[0]), c.r[18].w[0]);  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x0039BC38u) [[unlikely]] return; }
L_0039BC38:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039BC50:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4900u)));  c.pc = t; return; }
L_0039BC70:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4924u)));  c.pc = t; return; }
L_0039BC90:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BCC8u); set32(c.r[16], c.r[3].w[0] + 4888u);  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x0039BCC8u) [[unlikely]] return; }
L_0039BCC8:
    set32(c.r[17], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 36u)));  if (t) { goto L_0039BCF8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_0039BCFC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BCF4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039BCF4u) [[unlikely]] return; }
L_0039BCF4:
    set32(c.r[17], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0039BCF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 1;
L_0039BCFC:
    c.r[3].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BD10u); if (c.r[3].d[0] != 0) c.r[17].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x0039BD10u) [[unlikely]] return; }
L_0039BD10:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039BD30:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + 4872u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st32((c.r[6].w[0]), 0u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] | 1025ull;  if (t) { goto L_0039BD78; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_0039BD78:
    set32(c.r[3], ld32((c.r[7].w[0] + 20u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039BD90:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4888u);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);  if (t) { goto L_0039BDBC; } }
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 1;
L_0039BDBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
}

}
