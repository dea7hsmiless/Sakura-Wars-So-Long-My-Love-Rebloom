#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0028[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    28, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0,
    0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 126, 0,
    127, 0, 0, 128, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0,
    135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147,
    0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 176, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184,
    0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 192,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197,
    0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204,
    0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225,
    0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239,
    0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 254, 0, 0, 0, 0, 255, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 278, 0,
    0, 0, 0, 0, 279, 0, 280, 0, 0, 281, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 286,
    0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0,
    0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 300, 0,
    0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 306,
    0, 307, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0,
    0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324,
    0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 330, 0, 331, 0,
    0, 0, 0, 0, 332, 0, 0, 333, 0, 334, 0, 335, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0,
    339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0,
    0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0,
    0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 364, 0, 365, 0, 0, 366, 0, 0, 367, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 372,
    0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384,
    0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0,
    0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0,
    0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0,
    0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0,
    0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0,
    0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 0,
    0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 508, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0028(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001C0000;
    case 2u: goto L_001C0044;
    case 3u: goto L_001C0064;
    case 4u: goto L_001C00C0;
    case 5u: goto L_001C00DC;
    case 6u: goto L_001C00EC;
    case 7u: goto L_001C00F8;
    case 8u: goto L_001C0114;
    case 9u: goto L_001C0120;
    case 10u: goto L_001C013C;
    case 11u: goto L_001C0148;
    case 12u: goto L_001C0160;
    case 13u: goto L_001C016C;
    case 14u: goto L_001C0188;
    case 15u: goto L_001C01A4;
    case 16u: goto L_001C01C8;
    case 17u: goto L_001C01F8;
    case 18u: goto L_001C020C;
    case 19u: goto L_001C0214;
    case 20u: goto L_001C021C;
    case 21u: goto L_001C0224;
    case 22u: goto L_001C0234;
    case 23u: goto L_001C0260;
    case 24u: goto L_001C0280;
    case 25u: goto L_001C029C;
    case 26u: goto L_001C02B0;
    case 27u: goto L_001C02E4;
    case 28u: goto L_001C0300;
    case 29u: goto L_001C0308;
    case 30u: goto L_001C0320;
    case 31u: goto L_001C0350;
    case 32u: goto L_001C0390;
    case 33u: goto L_001C03B0;
    case 34u: goto L_001C03C8;
    case 35u: goto L_001C03E8;
    case 36u: goto L_001C040C;
    case 37u: goto L_001C0450;
    case 38u: goto L_001C047C;
    case 39u: goto L_001C049C;
    case 40u: goto L_001C04B4;
    case 41u: goto L_001C04D0;
    case 42u: goto L_001C04E8;
    case 43u: goto L_001C04F8;
    case 44u: goto L_001C0504;
    case 45u: goto L_001C051C;
    case 46u: goto L_001C0534;
    case 47u: goto L_001C0560;
    case 48u: goto L_001C0590;
    case 49u: goto L_001C05A4;
    case 50u: goto L_001C05DC;
    case 51u: goto L_001C0600;
    case 52u: goto L_001C0620;
    case 53u: goto L_001C0628;
    case 54u: goto L_001C0640;
    case 55u: goto L_001C0660;
    case 56u: goto L_001C06C0;
    case 57u: goto L_001C06DC;
    case 58u: goto L_001C06E4;
    case 59u: goto L_001C071C;
    case 60u: goto L_001C073C;
    case 61u: goto L_001C0754;
    case 62u: goto L_001C0774;
    case 63u: goto L_001C0798;
    case 64u: goto L_001C07B0;
    case 65u: goto L_001C07C8;
    case 66u: goto L_001C07D0;
    case 67u: goto L_001C0810;
    case 68u: goto L_001C0828;
    case 69u: goto L_001C0850;
    case 70u: goto L_001C0870;
    case 71u: goto L_001C0890;
    case 72u: goto L_001C08C0;
    case 73u: goto L_001C08F0;
    case 74u: goto L_001C0914;
    case 75u: goto L_001C0950;
    case 76u: goto L_001C0970;
    case 77u: goto L_001C09AC;
    case 78u: goto L_001C09D0;
    case 79u: goto L_001C09F4;
    case 80u: goto L_001C0A10;
    case 81u: goto L_001C0A30;
    case 82u: goto L_001C0A70;
    case 83u: goto L_001C0A94;
    case 84u: goto L_001C0AB8;
    case 85u: goto L_001C0AD8;
    case 86u: goto L_001C0AF8;
    case 87u: goto L_001C0B10;
    case 88u: goto L_001C0B40;
    case 89u: goto L_001C0B58;
    case 90u: goto L_001C0B70;
    case 91u: goto L_001C0BA0;
    case 92u: goto L_001C0BB8;
    case 93u: goto L_001C0BD0;
    case 94u: goto L_001C0C10;
    case 95u: goto L_001C0C28;
    case 96u: goto L_001C0C40;
    case 97u: goto L_001C0C80;
    case 98u: goto L_001C0C98;
    case 99u: goto L_001C0CB0;
    case 100u: goto L_001C0CF0;
    case 101u: goto L_001C0D08;
    case 102u: goto L_001C0D20;
    case 103u: goto L_001C0D50;
    case 104u: goto L_001C0D68;
    case 105u: goto L_001C0D80;
    case 106u: goto L_001C0D94;
    case 107u: goto L_001C0DB4;
    case 108u: goto L_001C0DF4;
    case 109u: goto L_001C0E00;
    case 110u: goto L_001C0E40;
    case 111u: goto L_001C0E4C;
    case 112u: goto L_001C0E8C;
    case 113u: goto L_001C0E98;
    case 114u: goto L_001C0ED8;
    case 115u: goto L_001C0EF0;
    case 116u: goto L_001C0F04;
    case 117u: goto L_001C0F24;
    case 118u: goto L_001C0F40;
    case 119u: goto L_001C0F68;
    case 120u: goto L_001C0F98;
    case 121u: goto L_001C0FA0;
    case 122u: goto L_001C0FB8;
    case 123u: goto L_001C0FC0;
    case 124u: goto L_001C0FD8;
    case 125u: goto L_001C0FE0;
    case 126u: goto L_001C0FF8;
    case 127u: goto L_001C1000;
    case 128u: goto L_001C100C;
    case 129u: goto L_001C1020;
    case 130u: goto L_001C1028;
    case 131u: goto L_001C1040;
    case 132u: goto L_001C1048;
    case 133u: goto L_001C1060;
    case 134u: goto L_001C1068;
    case 135u: goto L_001C1080;
    case 136u: goto L_001C1088;
    case 137u: goto L_001C109C;
    case 138u: goto L_001C10C0;
    case 139u: goto L_001C1100;
    case 140u: goto L_001C1118;
    case 141u: goto L_001C1130;
    case 142u: goto L_001C1154;
    case 143u: goto L_001C11F8;
    case 144u: goto L_001C1228;
    case 145u: goto L_001C1248;
    case 146u: goto L_001C1254;
    case 147u: goto L_001C127C;
    case 148u: goto L_001C1288;
    case 149u: goto L_001C12A8;
    case 150u: goto L_001C12B4;
    case 151u: goto L_001C12D4;
    case 152u: goto L_001C12E4;
    case 153u: goto L_001C12F0;
    case 154u: goto L_001C12FC;
    case 155u: goto L_001C1320;
    case 156u: goto L_001C1360;
    case 157u: goto L_001C1378;
    case 158u: goto L_001C1390;
    case 159u: goto L_001C13AC;
    case 160u: goto L_001C13B4;
    case 161u: goto L_001C1448;
    case 162u: goto L_001C1450;
    case 163u: goto L_001C1460;
    case 164u: goto L_001C1518;
    case 165u: goto L_001C152C;
    case 166u: goto L_001C1538;
    case 167u: goto L_001C156C;
    case 168u: goto L_001C1598;
    case 169u: goto L_001C15BC;
    case 170u: goto L_001C15C8;
    case 171u: goto L_001C1618;
    case 172u: goto L_001C162C;
    case 173u: goto L_001C1644;
    case 174u: goto L_001C1658;
    case 175u: goto L_001C1670;
    case 176u: goto L_001C1684;
    case 177u: goto L_001C1698;
    case 178u: goto L_001C16A4;
    case 179u: goto L_001C16B4;
    case 180u: goto L_001C16BC;
    case 181u: goto L_001C16D4;
    case 182u: goto L_001C16E4;
    case 183u: goto L_001C16F0;
    case 184u: goto L_001C16FC;
    case 185u: goto L_001C170C;
    case 186u: goto L_001C1728;
    case 187u: goto L_001C1730;
    case 188u: goto L_001C173C;
    case 189u: goto L_001C174C;
    case 190u: goto L_001C1768;
    case 191u: goto L_001C1770;
    case 192u: goto L_001C177C;
    case 193u: goto L_001C17A0;
    case 194u: goto L_001C17BC;
    case 195u: goto L_001C17D0;
    case 196u: goto L_001C17E0;
    case 197u: goto L_001C17FC;
    case 198u: goto L_001C1810;
    case 199u: goto L_001C181C;
    case 200u: goto L_001C1828;
    case 201u: goto L_001C1834;
    case 202u: goto L_001C1840;
    case 203u: goto L_001C1860;
    case 204u: goto L_001C187C;
    case 205u: goto L_001C1884;
    case 206u: goto L_001C1908;
    case 207u: goto L_001C1914;
    case 208u: goto L_001C1920;
    case 209u: goto L_001C1948;
    case 210u: goto L_001C1950;
    case 211u: goto L_001C1958;
    case 212u: goto L_001C198C;
    case 213u: goto L_001C1994;
    case 214u: goto L_001C19A4;
    case 215u: goto L_001C19B4;
    case 216u: goto L_001C19BC;
    case 217u: goto L_001C19C4;
    case 218u: goto L_001C19D0;
    case 219u: goto L_001C19DC;
    case 220u: goto L_001C19FC;
    case 221u: goto L_001C1A18;
    case 222u: goto L_001C1A24;
    case 223u: goto L_001C1A30;
    case 224u: goto L_001C1A50;
    case 225u: goto L_001C1A7C;
    case 226u: goto L_001C1A94;
    case 227u: goto L_001C1AB0;
    case 228u: goto L_001C1B2C;
    case 229u: goto L_001C1B90;
    case 230u: goto L_001C1BA8;
    case 231u: goto L_001C1BC0;
    case 232u: goto L_001C1C5C;
    case 233u: goto L_001C1C6C;
    case 234u: goto L_001C1CC8;
    case 235u: goto L_001C1CD8;
    case 236u: goto L_001C1D00;
    case 237u: goto L_001C1DD0;
    case 238u: goto L_001C1DF0;
    case 239u: goto L_001C1DFC;
    case 240u: goto L_001C1E08;
    case 241u: goto L_001C1E14;
    case 242u: goto L_001C1E30;
    case 243u: goto L_001C1E54;
    case 244u: goto L_001C1E68;
    case 245u: goto L_001C1E98;
    case 246u: goto L_001C1EA4;
    case 247u: goto L_001C1EB8;
    case 248u: goto L_001C200C;
    case 249u: goto L_001C202C;
    case 250u: goto L_001C2050;
    case 251u: goto L_001C2080;
    case 252u: goto L_001C2098;
    case 253u: goto L_001C20A0;
    case 254u: goto L_001C20AC;
    case 255u: goto L_001C20C0;
    case 256u: goto L_001C20C8;
    case 257u: goto L_001C20D4;
    case 258u: goto L_001C20E0;
    case 259u: goto L_001C20EC;
    case 260u: goto L_001C2160;
    case 261u: goto L_001C21B8;
    case 262u: goto L_001C21D0;
    case 263u: goto L_001C2210;
    case 264u: goto L_001C2234;
    case 265u: goto L_001C224C;
    case 266u: goto L_001C22A0;
    case 267u: goto L_001C22B8;
    case 268u: goto L_001C22E0;
    case 269u: goto L_001C230C;
    case 270u: goto L_001C2338;
    case 271u: goto L_001C2340;
    case 272u: goto L_001C2358;
    case 273u: goto L_001C2360;
    case 274u: goto L_001C2370;
    case 275u: goto L_001C23CC;
    case 276u: goto L_001C23D8;
    case 277u: goto L_001C23EC;
    case 278u: goto L_001C23F8;
    case 279u: goto L_001C2410;
    case 280u: goto L_001C2418;
    case 281u: goto L_001C2424;
    case 282u: goto L_001C2438;
    case 283u: goto L_001C2440;
    case 284u: goto L_001C2458;
    case 285u: goto L_001C2474;
    case 286u: goto L_001C247C;
    case 287u: goto L_001C2488;
    case 288u: goto L_001C24A8;
    case 289u: goto L_001C24B0;
    case 290u: goto L_001C24C8;
    case 291u: goto L_001C24D0;
    case 292u: goto L_001C24E8;
    case 293u: goto L_001C24F0;
    case 294u: goto L_001C2508;
    case 295u: goto L_001C2510;
    case 296u: goto L_001C2530;
    case 297u: goto L_001C2550;
    case 298u: goto L_001C2558;
    case 299u: goto L_001C2570;
    case 300u: goto L_001C2578;
    case 301u: goto L_001C2590;
    case 302u: goto L_001C2598;
    case 303u: goto L_001C25BC;
    case 304u: goto L_001C25DC;
    case 305u: goto L_001C25E4;
    case 306u: goto L_001C25FC;
    case 307u: goto L_001C2604;
    case 308u: goto L_001C261C;
    case 309u: goto L_001C2624;
    case 310u: goto L_001C266C;
    case 311u: goto L_001C26AC;
    case 312u: goto L_001C26D0;
    case 313u: goto L_001C26F4;
    case 314u: goto L_001C2704;
    case 315u: goto L_001C2724;
    case 316u: goto L_001C272C;
    case 317u: goto L_001C2744;
    case 318u: goto L_001C274C;
    case 319u: goto L_001C2760;
    case 320u: goto L_001C276C;
    case 321u: goto L_001C27A0;
    case 322u: goto L_001C27BC;
    case 323u: goto L_001C27F4;
    case 324u: goto L_001C27FC;
    case 325u: goto L_001C2814;
    case 326u: goto L_001C281C;
    case 327u: goto L_001C282C;
    case 328u: goto L_001C2860;
    case 329u: goto L_001C2868;
    case 330u: goto L_001C2870;
    case 331u: goto L_001C2878;
    case 332u: goto L_001C2890;
    case 333u: goto L_001C289C;
    case 334u: goto L_001C28A4;
    case 335u: goto L_001C28AC;
    case 336u: goto L_001C28B4;
    case 337u: goto L_001C28C0;
    case 338u: goto L_001C28F4;
    case 339u: goto L_001C2900;
    case 340u: goto L_001C2934;
    case 341u: goto L_001C293C;
    case 342u: goto L_001C2944;
    case 343u: goto L_001C2960;
    case 344u: goto L_001C2968;
    case 345u: goto L_001C29A0;
    case 346u: goto L_001C29BC;
    case 347u: goto L_001C29D8;
    case 348u: goto L_001C29E8;
    case 349u: goto L_001C29F4;
    case 350u: goto L_001C2A10;
    case 351u: goto L_001C2A30;
    case 352u: goto L_001C2A50;
    case 353u: goto L_001C2A80;
    case 354u: goto L_001C2AA4;
    case 355u: goto L_001C2AD4;
    case 356u: goto L_001C2AF4;
    case 357u: goto L_001C2B04;
    case 358u: goto L_001C2B2C;
    case 359u: goto L_001C2B4C;
    case 360u: goto L_001C2B74;
    case 361u: goto L_001C2B88;
    case 362u: goto L_001C2B94;
    case 363u: goto L_001C2B9C;
    case 364u: goto L_001C2BA8;
    case 365u: goto L_001C2BB0;
    case 366u: goto L_001C2BBC;
    case 367u: goto L_001C2BC8;
    case 368u: goto L_001C2BD0;
    case 369u: goto L_001C2BDC;
    case 370u: goto L_001C2BE8;
    case 371u: goto L_001C2BF4;
    case 372u: goto L_001C2BFC;
    case 373u: goto L_001C2C08;
    case 374u: goto L_001C2C14;
    case 375u: goto L_001C2C20;
    case 376u: goto L_001C2C28;
    case 377u: goto L_001C2C34;
    case 378u: goto L_001C2C40;
    case 379u: goto L_001C2C4C;
    case 380u: goto L_001C2C58;
    case 381u: goto L_001C2C80;
    case 382u: goto L_001C2CC0;
    case 383u: goto L_001C2CF0;
    case 384u: goto L_001C2CFC;
    case 385u: goto L_001C2D10;
    case 386u: goto L_001C2D20;
    case 387u: goto L_001C2D40;
    case 388u: goto L_001C2E9C;
    case 389u: goto L_001C2EC0;
    case 390u: goto L_001C2ED0;
    case 391u: goto L_001C2EDC;
    case 392u: goto L_001C2EFC;
    case 393u: goto L_001C2F1C;
    case 394u: goto L_001C2F40;
    case 395u: goto L_001C2F68;
    case 396u: goto L_001C2F78;
    case 397u: goto L_001C2F98;
    case 398u: goto L_001C2FB8;
    case 399u: goto L_001C2FD0;
    case 400u: goto L_001C2FE8;
    case 401u: goto L_001C3030;
    case 402u: goto L_001C3050;
    case 403u: goto L_001C306C;
    case 404u: goto L_001C3074;
    case 405u: goto L_001C30B8;
    case 406u: goto L_001C30C4;
    case 407u: goto L_001C3108;
    case 408u: goto L_001C3114;
    case 409u: goto L_001C3158;
    case 410u: goto L_001C3164;
    case 411u: goto L_001C31A8;
    case 412u: goto L_001C31C0;
    case 413u: goto L_001C31DC;
    case 414u: goto L_001C31E4;
    case 415u: goto L_001C3224;
    case 416u: goto L_001C3230;
    case 417u: goto L_001C3270;
    case 418u: goto L_001C327C;
    case 419u: goto L_001C32BC;
    case 420u: goto L_001C32C8;
    case 421u: goto L_001C3308;
    case 422u: goto L_001C3320;
    case 423u: goto L_001C333C;
    case 424u: goto L_001C3344;
    case 425u: goto L_001C3390;
    case 426u: goto L_001C339C;
    case 427u: goto L_001C33E8;
    case 428u: goto L_001C33F4;
    case 429u: goto L_001C3440;
    case 430u: goto L_001C3460;
    case 431u: goto L_001C347C;
    case 432u: goto L_001C34C8;
    case 433u: goto L_001C350C;
    case 434u: goto L_001C3518;
    case 435u: goto L_001C355C;
    case 436u: goto L_001C3568;
    case 437u: goto L_001C35AC;
    case 438u: goto L_001C35D0;
    case 439u: goto L_001C35F0;
    case 440u: goto L_001C35F8;
    case 441u: goto L_001C363C;
    case 442u: goto L_001C3648;
    case 443u: goto L_001C368C;
    case 444u: goto L_001C36B0;
    case 445u: goto L_001C36E0;
    case 446u: goto L_001C36F4;
    case 447u: goto L_001C370C;
    case 448u: goto L_001C3720;
    case 449u: goto L_001C3730;
    case 450u: goto L_001C3740;
    case 451u: goto L_001C3750;
    case 452u: goto L_001C3764;
    case 453u: goto L_001C3790;
    case 454u: goto L_001C37A4;
    case 455u: goto L_001C37B8;
    case 456u: goto L_001C37D0;
    case 457u: goto L_001C37F0;
    case 458u: goto L_001C3810;
    case 459u: goto L_001C3824;
    case 460u: goto L_001C3838;
    case 461u: goto L_001C3850;
    case 462u: goto L_001C3864;
    case 463u: goto L_001C3878;
    case 464u: goto L_001C3890;
    case 465u: goto L_001C38A4;
    case 466u: goto L_001C38B8;
    case 467u: goto L_001C38D0;
    case 468u: goto L_001C38F0;
    case 469u: goto L_001C3908;
    case 470u: goto L_001C3914;
    case 471u: goto L_001C3930;
    case 472u: goto L_001C3948;
    case 473u: goto L_001C3968;
    case 474u: goto L_001C3990;
    case 475u: goto L_001C3AAC;
    case 476u: goto L_001C3ADC;
    case 477u: goto L_001C3AE8;
    case 478u: goto L_001C3B0C;
    case 479u: goto L_001C3B2C;
    case 480u: goto L_001C3B34;
    case 481u: goto L_001C3B48;
    case 482u: goto L_001C3B84;
    case 483u: goto L_001C3B94;
    case 484u: goto L_001C3BA8;
    case 485u: goto L_001C3BE4;
    case 486u: goto L_001C3BF4;
    case 487u: goto L_001C3C34;
    case 488u: goto L_001C3C40;
    case 489u: goto L_001C3C88;
    case 490u: goto L_001C3C94;
    case 491u: goto L_001C3CDC;
    case 492u: goto L_001C3CE8;
    case 493u: goto L_001C3D30;
    case 494u: goto L_001C3D3C;
    case 495u: goto L_001C3D84;
    case 496u: goto L_001C3D90;
    case 497u: goto L_001C3DD8;
    case 498u: goto L_001C3DE4;
    case 499u: goto L_001C3E2C;
    case 500u: goto L_001C3E38;
    case 501u: goto L_001C3E80;
    case 502u: goto L_001C3E8C;
    case 503u: goto L_001C3ED4;
    case 504u: goto L_001C3EE0;
    case 505u: goto L_001C3F20;
    case 506u: goto L_001C3F2C;
    case 507u: goto L_001C3F6C;
    case 508u: goto L_001C3F78;
    case 509u: goto L_001C3FB8;
    case 510u: goto L_001C3FC4;
    default: bad_entry(c, 0x001C0000u); return;
    }
L_001C0000:
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 96u), c.f[22]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[29].w[0] + 64u), c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    st32((c.r[16].w[0] + 204u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 208u), c.r[2].w[0]);
    ldr(c.r[5], (c.r[16].w[0] + 188u));
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    ldl(c.r[5], (c.r[16].w[0] + 195u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0044u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C0044u) [[unlikely]] return; }
L_001C0044:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 88u), c.f[21]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 88u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0064u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C0064u) [[unlikely]] return; }
L_001C0064:
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[29].w[0] + 56u), c.f[1]);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0] + 212u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 216u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001C00C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C00DCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0027(c, 296u, depth + 1u); else { c.pc = 0x001BF050u; return; } if (c.pc != 0x001C00DCu) [[unlikely]] return; }
L_001C00DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001C024C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C00ECu); set32(c.r[4], c.r[16].w[0] + 188u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C00ECu) [[unlikely]] return; }
L_001C00EC:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C00F8u); set32(c.r[4], c.r[16].w[0] + 204u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C00F8u) [[unlikely]] return; }
L_001C00F8:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[16].w[0] + 188u);  goto L_001C010C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_001C0188; } }
L_001C010C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0114u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C0114u) [[unlikely]] return; }
L_001C0114:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0120u); set32(c.r[4], c.r[16].w[0] + 196u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C0120u) [[unlikely]] return; }
L_001C0120:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[16].w[0] + 188u);  goto L_001C0134; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C0188; } }
L_001C0134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C013Cu);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C013Cu) [[unlikely]] return; }
L_001C013C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0148u); set32(c.r[4], c.r[16].w[0] + 196u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C0148u) [[unlikely]] return; }
L_001C0148:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[16].w[0] + 204u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0160u); c.f[21] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C0160u) [[unlikely]] return; }
L_001C0160:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C016Cu); set32(c.r[4], c.r[16].w[0] + 196u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C016Cu) [[unlikely]] return; }
L_001C016C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[12] = fp::ee::div(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0188u);  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x001C0188u) [[unlikely]] return; }
L_001C0188:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], 0u + 124u);
    set32(c.r[6], c.r[4].w[0] + 1u);
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 62u);  if (t) { goto L_001C01B0; } }
L_001C01A4:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 3;
L_001C01B0:
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C01A4u | kUnwind; return; } goto L_001C01A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 45u);  if (t) { goto L_001C01D4; } }
L_001C01C8:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 3;
L_001C01D4:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C01C8u | kUnwind; return; } goto L_001C01C8; } }
    set32(c.r[2], 0u + 124u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C01F8u); st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001C01F8u) [[unlikely]] return; }
L_001C01F8:
    set32(c.r[3], 0u + 63u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C020Cu); set32(c.r[5], c.r[16].w[0] + 124u);  if (depth < kMaxDepth) unit_0009(c, 222u, depth + 1u); else { c.pc = 0x001479F8u; return; } if (c.pc != 0x001C020Cu) [[unlikely]] return; }
L_001C020C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0214u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 274u, depth + 1u); else { c.pc = 0x001BEC30u; return; } if (c.pc != 0x001C0214u) [[unlikely]] return; }
L_001C0214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C021Cu); set32(c.r[4], c.r[16].w[0] + 188u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C021Cu) [[unlikely]] return; }
L_001C021C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0224u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001C0224u) [[unlikely]] return; }
L_001C0224:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0234u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 275u, depth + 1u); else { c.pc = 0x001BEC50u; return; } if (c.pc != 0x001C0234u) [[unlikely]] return; }
L_001C0234:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
L_001C024C:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001C0260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], c.r[8].w[0] + 10592u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0280u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 299u, depth + 1u); else { c.pc = 0x001BF140u; return; } if (c.pc != 0x001C0280u) [[unlikely]] return; }
L_001C0280:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11808u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 308u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C029Cu); st32((c.r[16].w[0] + 312u), 0u);  if (depth < kMaxDepth) unit_0028(c, 31u, depth + 1u); else { c.pc = 0x001C0350u; return; } if (c.pc != 0x001C029Cu) [[unlikely]] return; }
L_001C029C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C02B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[9].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 10592u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C02E4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0027(c, 299u, depth + 1u); else { c.pc = 0x001BF140u; return; } if (c.pc != 0x001C02E4u) [[unlikely]] return; }
L_001C02E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11808u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 308u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0300u); st32((c.r[19].w[0] + 312u), 0u);  if (depth < kMaxDepth) unit_0028(c, 31u, depth + 1u); else { c.pc = 0x001C0350u; return; } if (c.pc != 0x001C0300u) [[unlikely]] return; }
L_001C0300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001C0324; } }
L_001C0308:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0320u); set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0028(c, 72u, depth + 1u); else { c.pc = 0x001C08C0u; return; } if (c.pc != 0x001C0320u) [[unlikely]] return; }
L_001C0320:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001C0324:
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0308u | kUnwind; return; } goto L_001C0308; }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C0350:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 17479ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 240u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 244u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 316u), 0u);
    st32((c.r[4].w[0] + 196u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 200u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0390u); set32(c.r[4], c.r[16].w[0] + 188u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C0390u) [[unlikely]] return; }
L_001C0390:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C03B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C03B0u) [[unlikely]] return; }
L_001C03B0:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 188u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C03C8u); st32((c.r[16].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C03C8u) [[unlikely]] return; }
L_001C03C8:
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C03E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C03E8u) [[unlikely]] return; }
L_001C03E8:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C040Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C040Cu) [[unlikely]] return; }
L_001C040C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[29].w[0] + 64u), c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st32((c.r[16].w[0] + 212u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 216u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C0450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C04B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 11808u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C047Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0028(c, 56u, depth + 1u); else { c.pc = 0x001C06C0u; return; } if (c.pc != 0x001C047Cu) [[unlikely]] return; }
L_001C047C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001C04A0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11488u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C049Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 270u, depth + 1u); else { c.pc = 0x001BEBA0u; return; } if (c.pc != 0x001C049Cu) [[unlikely]] return; }
L_001C049C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001C04A0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001C04B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C04B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001C04B4u) [[unlikely]] return; }
L_001C04B4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C04B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C04D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C04E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0027(c, 296u, depth + 1u); else { c.pc = 0x001BF050u; return; } if (c.pc != 0x001C04E8u) [[unlikely]] return; }
L_001C04E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001C054C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C04F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 64u, depth + 1u); else { c.pc = 0x001C07B0u; return; } if (c.pc != 0x001C04F8u) [[unlikely]] return; }
L_001C04F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0504u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 274u, depth + 1u); else { c.pc = 0x001BEC30u; return; } if (c.pc != 0x001C0504u) [[unlikely]] return; }
L_001C0504:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001C0524; }
    set32(c.r[6], c.r[16].w[0] + 4u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C051Cu); set32(c.r[5], c.r[17].w[0] + 124u);  if (depth < kMaxDepth) unit_0027(c, 275u, depth + 1u); else { c.pc = 0x001BEC50u; return; } if (c.pc != 0x001C051Cu) [[unlikely]] return; }
L_001C051C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 56u)));  if (t) { goto L_001C0538; } }
L_001C0524:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0534u); set32(c.r[6], c.r[6].w[0] + 10600u);  if (depth < kMaxDepth) unit_0027(c, 275u, depth + 1u); else { c.pc = 0x001BEC50u; return; } if (c.pc != 0x001C0534u) [[unlikely]] return; }
L_001C0534:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_001C0538:
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
L_001C054C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C0560:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[19].w[0] + 240u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 104u), c.r[7].d[0]);  if (t) { goto L_001C0678; } }
L_001C0590:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0])));  goto L_001C0674; }
    set32(c.r[20], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C05A4u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001C05A4u) [[unlikely]] return; }
L_001C05A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[16].w[0]);  goto L_001C05BC; }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 3;
L_001C05BC:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_001C05CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C0694; } }
L_001C05CC:
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[6], 0u + 63u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C05DCu); st32((c.r[16].w[0]), c.r[20].w[0]);  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x001C05DCu) [[unlikely]] return; }
L_001C05DC:
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[4], c.r[19].w[0] + 188u);
    st32((c.r[16].w[0] + 68u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 196u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0600u); st32((c.r[19].w[0] + 200u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C0600u) [[unlikely]] return; }
L_001C0600:
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 120u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0620u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C0620u) [[unlikely]] return; }
L_001C0620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0628u); set32(c.r[4], c.r[19].w[0] + 204u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C0628u) [[unlikely]] return; }
L_001C0628:
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[19].w[0] + 188u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 204u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0640u); st32((c.r[19].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C0640u) [[unlikely]] return; }
L_001C0640:
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 112u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0660u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C0660u) [[unlikely]] return; }
L_001C0660:
    set32(c.r[3], ld32((c.r[19].w[0] + 316u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 316u), c.r[3].w[0]);  if (t) { goto L_001C0694; } }
L_001C0674:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 1;
L_001C0678:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001C0694; }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0590u | kUnwind; return; } goto L_001C0590; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C0694:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001C06C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 240u)));  if (t) { goto L_001C06E8; } }
L_001C06DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C06E4u); set32(c.r[17], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001C06E4u) [[unlikely]] return; }
L_001C06E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C06E8:
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C06DCu | kUnwind; return; } goto L_001C06DC; } }
    st32((c.r[16].w[0] + 240u), 0u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 244u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 316u), 0u);
    set32(c.r[4], c.r[16].w[0] + 188u);
    st32((c.r[16].w[0] + 196u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C071Cu); st32((c.r[16].w[0] + 200u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C071Cu) [[unlikely]] return; }
L_001C071C:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C073Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C073Cu) [[unlikely]] return; }
L_001C073C:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 188u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0754u); st32((c.r[16].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C0754u) [[unlikely]] return; }
L_001C0754:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0774u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C0774u) [[unlikely]] return; }
L_001C0774:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 72u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0798u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C0798u) [[unlikely]] return; }
L_001C0798:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C07B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 240u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C07C8u); set32(c.r[4], c.r[4].w[0] + 188u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C07C8u) [[unlikely]] return; }
L_001C07C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_001C07D8; } }
L_001C07D0:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[3].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001C07D8:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001C07F4; }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C07D0u | kUnwind; return; } goto L_001C07D0; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001C07F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C0810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0828u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 64u, depth + 1u); else { c.pc = 0x001C07B0u; return; } if (c.pc != 0x001C0828u) [[unlikely]] return; }
L_001C0828:
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 72u)));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C0850:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 240u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001C0874; } }
L_001C0870:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001C0874:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C0898; } }
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0890u); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003A(c, 344u, depth + 1u); else { c.pc = 0x0020B610u; return; } if (c.pc != 0x001C0890u) [[unlikely]] return; }
L_001C0890:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0870u | kUnwind; return; } goto L_001C0870; }
L_001C0898:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], 0u - 1u);  goto L_001C08A0; }
L_001C08A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C08C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001C0920; } }
L_001C08F0:
    set32(c.r[5], ld32((c.r[19].w[0] + 316u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    ldr(c.r[7], (c.r[2].w[0] + 4u));
    set32(c.r[6], ld32((c.r[2].w[0])));
    ldl(c.r[7], (c.r[2].w[0] + 11u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0914u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 47u, depth + 1u); else { c.pc = 0x001C0560u; return; } if (c.pc != 0x001C0914u) [[unlikely]] return; }
L_001C0914:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001C0930; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001C0920:
    c.r[3].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C08F0u | kUnwind; return; } goto L_001C08F0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001C0930:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C0950:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0970u); c.r[8].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 23u, depth + 1u); else { c.pc = 0x001C0260u; return; } if (c.pc != 0x001C0970u) [[unlikely]] return; }
L_001C0970:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 11728u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x57530000u);
    c.r[3].d[0] = c.r[2].d[0] | 17479ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 316u)));
    c.r[7].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C09ACu); set32(c.r[6], c.r[6].w[0] + 10608u);  if (depth < kMaxDepth) unit_0028(c, 47u, depth + 1u); else { c.pc = 0x001C0560u; return; } if (c.pc != 0x001C09ACu) [[unlikely]] return; }
L_001C09AC:
    set32(c.r[2], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 316u)));
    c.r[7].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C09D0u); set32(c.r[6], c.r[6].w[0] + 10616u);  if (depth < kMaxDepth) unit_0028(c, 47u, depth + 1u); else { c.pc = 0x001C0560u; return; } if (c.pc != 0x001C09D0u) [[unlikely]] return; }
L_001C09D0:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.r[3].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C09F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C09F4u) [[unlikely]] return; }
L_001C09F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C0A10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0A30u); c.r[8].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 23u, depth + 1u); else { c.pc = 0x001C0260u; return; } if (c.pc != 0x001C0A30u) [[unlikely]] return; }
L_001C0A30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53330000u);
    set32(c.r[3], c.r[3].w[0] + 11648u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17479ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 316u)));
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[7].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0A70u); set32(c.r[6], c.r[6].w[0] + 10624u);  if (depth < kMaxDepth) unit_0028(c, 47u, depth + 1u); else { c.pc = 0x001C0560u; return; } if (c.pc != 0x001C0A70u) [[unlikely]] return; }
L_001C0A70:
    set32(c.r[2], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 316u)));
    c.r[7].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0A94u); set32(c.r[6], c.r[6].w[0] + 10608u);  if (depth < kMaxDepth) unit_0028(c, 47u, depth + 1u); else { c.pc = 0x001C0560u; return; } if (c.pc != 0x001C0A94u) [[unlikely]] return; }
L_001C0A94:
    set32(c.r[2], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 316u)));
    c.r[7].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0AB8u); set32(c.r[6], c.r[6].w[0] + 10616u);  if (depth < kMaxDepth) unit_0028(c, 47u, depth + 1u); else { c.pc = 0x001C0560u; return; } if (c.pc != 0x001C0AB8u) [[unlikely]] return; }
L_001C0AB8:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 64u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0AD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C0AD8u) [[unlikely]] return; }
L_001C0AD8:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0AF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C0AF8u) [[unlikely]] return; }
L_001C0AF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001C0B10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C0B58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0B40u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0028(c, 37u, depth + 1u); else { c.pc = 0x001C0450u; return; } if (c.pc != 0x001C0B40u) [[unlikely]] return; }
L_001C0B40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001C0B5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0B58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001C0B58u) [[unlikely]] return; }
L_001C0B58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C0B5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C0B70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C0BB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0BA0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0028(c, 37u, depth + 1u); else { c.pc = 0x001C0450u; return; } if (c.pc != 0x001C0BA0u) [[unlikely]] return; }
L_001C0BA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001C0BBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0BB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001C0BB8u) [[unlikely]] return; }
L_001C0BB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C0BBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C0BD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C0C28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 11888u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001C0C10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C10u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 270u, depth + 1u); else { c.pc = 0x001BEBA0u; return; } if (c.pc != 0x001C0C10u) [[unlikely]] return; }
L_001C0C10:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001C0C2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001C0C28u) [[unlikely]] return; }
L_001C0C28:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C0C2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C0C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C0C98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 11968u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001C0C80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C80u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 270u, depth + 1u); else { c.pc = 0x001BEBA0u; return; } if (c.pc != 0x001C0C80u) [[unlikely]] return; }
L_001C0C80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001C0C9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001C0C98u) [[unlikely]] return; }
L_001C0C98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C0C9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C0CB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C0D08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12048u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001C0CF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0CF0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 270u, depth + 1u); else { c.pc = 0x001BEBA0u; return; } if (c.pc != 0x001C0CF0u) [[unlikely]] return; }
L_001C0CF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001C0D0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001C0D08u) [[unlikely]] return; }
L_001C0D08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C0D0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C0D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C0D68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D50u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 270u, depth + 1u); else { c.pc = 0x001BEBA0u; return; } if (c.pc != 0x001C0D50u) [[unlikely]] return; }
L_001C0D50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001C0D6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001C0D68u) [[unlikely]] return; }
L_001C0D68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C0D6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C0D80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 225u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x001C0D94u) [[unlikely]] return; }
L_001C0D94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43420000u);
    set32(c.r[3], c.r[3].w[0] + 12208u);
    c.r[2].d[0] = c.r[2].d[0] | 17479ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], 0u + 240u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0DB4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C0DB4u) [[unlikely]] return; }
L_001C0DB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 244u), c.r[2].w[0]);  goto L_001C0DF8; }
    c.f[15] = ld32((c.r[28].w[0] - 32236u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = 0u;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10000u);
    set32(c.r[7], c.r[7].w[0] + 10632u);
    set32(c.r[8], c.r[8].w[0] + 10640u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0DF4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C0DF4u) [[unlikely]] return; }
L_001C0DF4:
    st32((c.r[16].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 1;
L_001C0DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0E00u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C0E00u) [[unlikely]] return; }
L_001C0E00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 248u), c.r[2].w[0]);  goto L_001C0E44; }
    c.f[15] = ld32((c.r[28].w[0] - 32236u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = 0u;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 9999u);
    set32(c.r[7], c.r[7].w[0] + 10648u);
    set32(c.r[8], c.r[8].w[0] + 10640u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0E40u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C0E40u) [[unlikely]] return; }
L_001C0E40:
    st32((c.r[16].w[0] + 248u), c.r[2].w[0]);
    c.budget -= 1;
L_001C0E44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0E4Cu); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C0E4Cu) [[unlikely]] return; }
L_001C0E4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 252u), c.r[2].w[0]);  goto L_001C0E90; }
    c.f[15] = ld32((c.r[28].w[0] - 32236u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = 0u;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 9998u);
    set32(c.r[7], c.r[7].w[0] + 10656u);
    set32(c.r[8], c.r[8].w[0] + 10640u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0E8Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C0E8Cu) [[unlikely]] return; }
L_001C0E8C:
    st32((c.r[16].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 1;
L_001C0E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0E98u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C0E98u) [[unlikely]] return; }
L_001C0E98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 256u), c.r[2].w[0]);  goto L_001C0EDC; }
    c.f[15] = ld32((c.r[28].w[0] - 32236u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = 0u;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 9997u);
    set32(c.r[7], c.r[7].w[0] + 10664u);
    set32(c.r[8], c.r[8].w[0] + 10640u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0ED8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C0ED8u) [[unlikely]] return; }
L_001C0ED8:
    st32((c.r[16].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 1;
L_001C0EDC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C0EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0F04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 228u, depth + 1u); else { c.pc = 0x001BE460u; return; } if (c.pc != 0x001C0F04u) [[unlikely]] return; }
L_001C0F04:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C0F28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0F24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 118u, depth + 1u); else { c.pc = 0x001C0F40u; return; } if (c.pc != 0x001C0F24u) [[unlikely]] return; }
L_001C0F24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C0F28:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C0F40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_001C0F84; } }
L_001C0F68:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0F68u | kUnwind; return; } goto L_001C0F68; } }
L_001C0F84:
    set32(c.r[5], ld32((c.r[16].w[0] + 244u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0F98u); set32(c.r[4], c.r[29].w[0] + 120u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C0F98u) [[unlikely]] return; }
L_001C0F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0FA0u); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C0FA0u) [[unlikely]] return; }
L_001C0FA0:
    st32((c.r[29].w[0] + 48u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 248u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0FB8u); set32(c.r[4], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C0FB8u) [[unlikely]] return; }
L_001C0FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0FC0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C0FC0u) [[unlikely]] return; }
L_001C0FC0:
    st32((c.r[29].w[0] + 52u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0FD8u); set32(c.r[4], c.r[29].w[0] + 104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C0FD8u) [[unlikely]] return; }
L_001C0FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0FE0u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C0FE0u) [[unlikely]] return; }
L_001C0FE0:
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 256u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0FF8u); set32(c.r[4], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C0FF8u) [[unlikely]] return; }
L_001C0FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1000u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C1000u) [[unlikely]] return; }
L_001C1000:
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C100Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 57u, depth + 1u); else { c.pc = 0x00164500u; return; } if (c.pc != 0x001C100Cu) [[unlikely]] return; }
L_001C100C:
    set32(c.r[5], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1020u); set32(c.r[4], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C1020u) [[unlikely]] return; }
L_001C1020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1028u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C1028u) [[unlikely]] return; }
L_001C1028:
    set32(c.r[5], ld32((c.r[16].w[0] + 248u)));
    c.f[22] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1040u); set32(c.r[4], c.r[29].w[0] + 72u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C1040u) [[unlikely]] return; }
L_001C1040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1048u); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C1048u) [[unlikely]] return; }
L_001C1048:
    set32(c.r[5], ld32((c.r[16].w[0] + 244u)));
    c.f[21] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1060u); set32(c.r[4], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C1060u) [[unlikely]] return; }
L_001C1060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1068u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C1068u) [[unlikely]] return; }
L_001C1068:
    set32(c.r[5], ld32((c.r[16].w[0] + 256u)));
    c.f[20] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1080u); set32(c.r[4], c.r[29].w[0] + 88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C1080u) [[unlikely]] return; }
L_001C1080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1088u); set32(c.r[4], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C1088u) [[unlikely]] return; }
L_001C1088:
    c.f[12] = c.f[0];
    c.f[13] = c.f[20];
    c.f[14] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C109Cu); c.f[15] = c.f[22];  if (depth < kMaxDepth) unit_0023(c, 305u, depth + 1u); else { c.pc = 0x001AFAA0u; return; } if (c.pc != 0x001C109Cu) [[unlikely]] return; }
L_001C109C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001C10C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C1118; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12208u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001C1100; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1100u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 270u, depth + 1u); else { c.pc = 0x001BEBA0u; return; } if (c.pc != 0x001C1100u) [[unlikely]] return; }
L_001C1100:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001C111C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1118u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001C1118u) [[unlikely]] return; }
L_001C1118:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C111C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C1130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1154u); c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 225u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x001C1154u) [[unlikely]] return; }
L_001C1154:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    set32(c.r[3], c.r[3].w[0] + 12288u);
    c.r[2].d[0] = c.r[2].d[0] | 17479ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_001C1178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 304u), c.r[17].w[0]);  if (t) { goto L_001C1184; } }
L_001C1178:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 36u)));
    st32((c.r[16].w[0] + 304u), c.r[17].w[0]);
    c.budget -= 3;
L_001C1184:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[16].w[0] + 316u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 308u), 0u);
    c.r[8].d[0] = ld64((c.r[2].w[0] + 10672u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 264u), 0u);
    set32(c.r[6], c.r[6].w[0] + 10704u);
    st32((c.r[16].w[0] + 260u), 0u);
    set32(c.r[5], c.r[16].w[0] + 352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 256u), 0u);
    c.r[7].d[0] = ld64((c.r[2].w[0] + 10680u));
    set32(c.r[4], 0u + 21u);
    st32((c.r[16].w[0] + 268u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 276u), 0u);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 10688u));
    st32((c.r[16].w[0] + 272u), 0u);
    st32((c.r[16].w[0] + 284u), c.r[9].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 312u), 0u);
    st64((c.r[16].w[0] + 320u), c.r[8].d[0]);
    st64((c.r[16].w[0] + 328u), c.r[7].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 10696u));
    st64((c.r[16].w[0] + 336u), c.r[3].d[0]);
    st64((c.r[16].w[0] + 344u), c.r[2].d[0]);
    c.budget -= 29;
L_001C11F8:
    c.r[3].d[0] = ld64((c.r[6].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = ld64((c.r[6].w[0] + 8u));
    st64((c.r[5].w[0]), c.r[3].d[0]);
    st64((c.r[5].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C11F8u | kUnwind; return; } goto L_001C11F8; } }
    st32((c.r[16].w[0] + 688u), 0u);
    set32(c.r[4], 0u + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1228u); st32((c.r[16].w[0] + 692u), 0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C1228u) [[unlikely]] return; }
L_001C1228:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 288u), c.r[2].w[0]);  goto L_001C124C; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10200u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1248u); set32(c.r[7], c.r[7].w[0] + 11040u);  if (depth < kMaxDepth) unit_0027(c, 371u, depth + 1u); else { c.pc = 0x001BFB20u; return; } if (c.pc != 0x001C1248u) [[unlikely]] return; }
L_001C1248:
    st32((c.r[16].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 1;
L_001C124C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1254u); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C1254u) [[unlikely]] return; }
L_001C1254:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  goto L_001C1280; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10199u);
    set32(c.r[7], c.r[7].w[0] + 11056u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C127Cu); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 75u, depth + 1u); else { c.pc = 0x001C0950u; return; } if (c.pc != 0x001C127Cu) [[unlikely]] return; }
L_001C127C:
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 1;
L_001C1280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1288u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C1288u) [[unlikely]] return; }
L_001C1288:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 296u), c.r[2].w[0]);  goto L_001C12AC; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10198u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C12A8u); set32(c.r[7], c.r[7].w[0] + 11072u);  if (depth < kMaxDepth) unit_0027(c, 371u, depth + 1u); else { c.pc = 0x001BFB20u; return; } if (c.pc != 0x001C12A8u) [[unlikely]] return; }
L_001C12A8:
    st32((c.r[16].w[0] + 296u), c.r[2].w[0]);
    c.budget -= 1;
L_001C12AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C12B4u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C12B4u) [[unlikely]] return; }
L_001C12B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 300u), c.r[2].w[0]);  goto L_001C12D8; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10197u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C12D4u); set32(c.r[7], c.r[7].w[0] + 11088u);  if (depth < kMaxDepth) unit_0027(c, 371u, depth + 1u); else { c.pc = 0x001BFB20u; return; } if (c.pc != 0x001C12D4u) [[unlikely]] return; }
L_001C12D4:
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 1;
L_001C12D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C12E4u); set32(c.r[5], c.r[16].w[0] + 256u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x001C12E4u) [[unlikely]] return; }
L_001C12E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C12F0u); set32(c.r[5], c.r[16].w[0] + 272u);  if (depth < kMaxDepth) unit_000D(c, 330u, depth + 1u); else { c.pc = 0x001572B0u; return; } if (c.pc != 0x001C12F0u) [[unlikely]] return; }
L_001C12F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C12FCu); set32(c.r[5], c.r[16].w[0] + 312u);  if (depth < kMaxDepth) unit_000D(c, 332u, depth + 1u); else { c.pc = 0x001572F0u; return; } if (c.pc != 0x001C12FCu) [[unlikely]] return; }
L_001C12FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C1320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C1378; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12288u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001C1360; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1360u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 270u, depth + 1u); else { c.pc = 0x001BEBA0u; return; } if (c.pc != 0x001C1360u) [[unlikely]] return; }
L_001C1360:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001C137C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1378u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001C1378u) [[unlikely]] return; }
L_001C1378:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C137C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C1390:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C13ACu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0027(c, 228u, depth + 1u); else { c.pc = 0x001BE460u; return; } if (c.pc != 0x001C13ACu) [[unlikely]] return; }
L_001C13AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C13B4u);  if (depth < kMaxDepth) unit_0024(c, 129u, depth + 1u); else { c.pc = 0x001B0C00u; return; } if (c.pc != 0x001C13B4u) [[unlikely]] return; }
L_001C13B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001C1844; }
    set32(c.r[3], ld32((c.r[17].w[0] + 692u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], ld32((c.r[28].w[0] - 30628u)));  if (t) { goto L_001C1410; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 688u)));  goto L_001C1414; }
    c.r[4].d[0] = ld64((c.r[16].w[0] + 72u));
    set32(c.r[3], 0u + 256u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C1410; } }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C1410; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 688u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st32((c.r[17].w[0] + 688u), c.r[3].w[0]);
    c.budget -= 4;
L_001C1410:
    set32(c.r[4], ld32((c.r[17].w[0] + 688u)));
    c.budget -= 1;
L_001C1414:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001C1468; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[17].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C1468; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 292u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1448u); set32(c.r[4], c.r[29].w[0] + 232u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C1448u) [[unlikely]] return; }
L_001C1448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1450u); set32(c.r[4], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C1450u) [[unlikely]] return; }
L_001C1450:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C1840; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1460u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 237u, depth + 1u); else { c.pc = 0x001C1DD0u; return; } if (c.pc != 0x001C1460u) [[unlikely]] return; }
L_001C1460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C1840; } }
L_001C1468:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 56u)));  goto L_001C147C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C1480; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_001C147C:
    set32(c.r[16], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 1;
L_001C1480:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001C1840; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001C1540; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 308u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C1540; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001C14C0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001C14C0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001C14C0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001C1530; }
    set32(c.r[3], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 10200u);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001C1524; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001C1510; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001C14FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C152C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C14FC:
    st32((c.r[17].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 72u), 0u);  if (t) { goto L_001C152C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C1510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1518u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 227u, depth + 1u); else { c.pc = 0x001C1AB0u; return; } if (c.pc != 0x001C1518u) [[unlikely]] return; }
L_001C1518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C152C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C1524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C152Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 227u, depth + 1u); else { c.pc = 0x001C1AB0u; return; } if (c.pc != 0x001C152Cu) [[unlikely]] return; }
L_001C152C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C1530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1538u);  if (depth < kMaxDepth) unit_0028(c, 237u, depth + 1u); else { c.pc = 0x001C1DD0u; return; } if (c.pc != 0x001C1538u) [[unlikely]] return; }
L_001C1538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C1840; } }
L_001C1540:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001C1558; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 308u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C1840; } }
L_001C1558:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 80u));  goto L_001C1578; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C156Cu); st32((c.r[17].w[0] + 308u), 0u);  if (depth < kMaxDepth) unit_0028(c, 237u, depth + 1u); else { c.pc = 0x001C1DD0u; return; } if (c.pc != 0x001C156Cu) [[unlikely]] return; }
L_001C156C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C1840; } }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 80u));
    c.budget -= 1;
L_001C1578:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 320u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 80u));  goto L_001C159C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1598u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 227u, depth + 1u); else { c.pc = 0x001C1AB0u; return; } if (c.pc != 0x001C1598u) [[unlikely]] return; }
L_001C1598:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 80u));
    c.budget -= 1;
L_001C159C:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 328u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001C15C0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C15BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 227u, depth + 1u); else { c.pc = 0x001C1AB0u; return; } if (c.pc != 0x001C15BCu) [[unlikely]] return; }
L_001C15BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C15C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C15C8u);  if (depth < kMaxDepth) unit_0028(c, 237u, depth + 1u); else { c.pc = 0x001C1DD0u; return; } if (c.pc != 0x001C15C8u) [[unlikely]] return; }
L_001C15C8:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 80u));
    c.r[3].d[0] = ld64((c.r[17].w[0] + 336u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_001C15F8; }
    st32((c.r[17].w[0] + 308u), 0u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 72u), c.r[4].w[0]);  if (t) { goto L_001C1840; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_001C15F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 216u), 0u);
    st32((c.r[29].w[0] + 212u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1618u); st32((c.r[29].w[0] + 208u), 0u);  if (depth < kMaxDepth) unit_0028(c, 231u, depth + 1u); else { c.pc = 0x001C1BC0u; return; } if (c.pc != 0x001C1618u) [[unlikely]] return; }
L_001C1618:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C162Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001C1D00u; return; } if (c.pc != 0x001C162Cu) [[unlikely]] return; }
L_001C162C:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1644u); st32((c.r[29].w[0] + 208u), c.f[0]);  if (depth < kMaxDepth) unit_0028(c, 231u, depth + 1u); else { c.pc = 0x001C1BC0u; return; } if (c.pc != 0x001C1644u) [[unlikely]] return; }
L_001C1644:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1658u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001C1D00u; return; } if (c.pc != 0x001C1658u) [[unlikely]] return; }
L_001C1658:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1670u); st32((c.r[29].w[0] + 212u), c.f[0]);  if (depth < kMaxDepth) unit_0028(c, 231u, depth + 1u); else { c.pc = 0x001C1BC0u; return; } if (c.pc != 0x001C1670u) [[unlikely]] return; }
L_001C1670:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1684u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001C1D00u; return; } if (c.pc != 0x001C1684u) [[unlikely]] return; }
L_001C1684:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1698u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x001C1698u) [[unlikely]] return; }
L_001C1698:
    set32(c.r[4], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C16A4u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000D(c, 330u, depth + 1u); else { c.pc = 0x001572B0u; return; } if (c.pc != 0x001C16A4u) [[unlikely]] return; }
L_001C16A4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C16B4u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000D(c, 289u, depth + 1u); else { c.pc = 0x00156D00u; return; } if (c.pc != 0x001C16B4u) [[unlikely]] return; }
L_001C16B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C16BCu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x001C16BCu) [[unlikely]] return; }
L_001C16BC:
    set32(c.r[6], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[7], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C16D4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x001C16D4u) [[unlikely]] return; }
L_001C16D4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C16E4u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x001C16E4u) [[unlikely]] return; }
L_001C16E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C16F0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000D(c, 336u, depth + 1u); else { c.pc = 0x00157340u; return; } if (c.pc != 0x001C16F0u) [[unlikely]] return; }
L_001C16F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C16FCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000D(c, 338u, depth + 1u); else { c.pc = 0x00157380u; return; } if (c.pc != 0x001C16FCu) [[unlikely]] return; }
L_001C16FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C170Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0028(c, 231u, depth + 1u); else { c.pc = 0x001C1BC0u; return; } if (c.pc != 0x001C170Cu) [[unlikely]] return; }
L_001C170C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1728u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001C1D00u; return; } if (c.pc != 0x001C1728u) [[unlikely]] return; }
L_001C1728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1730u); c.f[12] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x001C1730u) [[unlikely]] return; }
L_001C1730:
    set32(c.r[4], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C173Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 339u, depth + 1u); else { c.pc = 0x001573A0u; return; } if (c.pc != 0x001C173Cu) [[unlikely]] return; }
L_001C173C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C174Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0028(c, 231u, depth + 1u); else { c.pc = 0x001C1BC0u; return; } if (c.pc != 0x001C174Cu) [[unlikely]] return; }
L_001C174C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1768u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001C1D00u; return; } if (c.pc != 0x001C1768u) [[unlikely]] return; }
L_001C1768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1770u); c.f[12] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x001C1770u) [[unlikely]] return; }
L_001C1770:
    set32(c.r[4], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C177Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 350u, depth + 1u); else { c.pc = 0x001574A0u; return; } if (c.pc != 0x001C177Cu) [[unlikely]] return; }
L_001C177C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 6u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C17A0u); st32((c.r[29].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0028(c, 231u, depth + 1u); else { c.pc = 0x001C1BC0u; return; } if (c.pc != 0x001C17A0u) [[unlikely]] return; }
L_001C17A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C17BCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001C1D00u; return; } if (c.pc != 0x001C17BCu) [[unlikely]] return; }
L_001C17BC:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C17D0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000D(c, 337u, depth + 1u); else { c.pc = 0x00157360u; return; } if (c.pc != 0x001C17D0u) [[unlikely]] return; }
L_001C17D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C17E0u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0028(c, 231u, depth + 1u); else { c.pc = 0x001C1BC0u; return; } if (c.pc != 0x001C17E0u) [[unlikely]] return; }
L_001C17E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B60000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C17FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001C1D00u; return; } if (c.pc != 0x001C17FCu) [[unlikely]] return; }
L_001C17FC:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1810u); set32(c.r[4], ld32((c.r[17].w[0] + 304u)));  if (depth < kMaxDepth) unit_000D(c, 333u, depth + 1u); else { c.pc = 0x00157300u; return; } if (c.pc != 0x001C1810u) [[unlikely]] return; }
L_001C1810:
    set32(c.r[4], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C181Cu); set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_000D(c, 331u, depth + 1u); else { c.pc = 0x001572E0u; return; } if (c.pc != 0x001C181Cu) [[unlikely]] return; }
L_001C181C:
    set32(c.r[4], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1828u); set32(c.r[5], c.r[17].w[0] + 256u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x001C1828u) [[unlikely]] return; }
L_001C1828:
    set32(c.r[4], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1834u); set32(c.r[5], c.r[17].w[0] + 272u);  if (depth < kMaxDepth) unit_000D(c, 330u, depth + 1u); else { c.pc = 0x001572B0u; return; } if (c.pc != 0x001C1834u) [[unlikely]] return; }
L_001C1834:
    set32(c.r[4], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1840u); set32(c.r[5], c.r[17].w[0] + 312u);  if (depth < kMaxDepth) unit_000D(c, 332u, depth + 1u); else { c.pc = 0x001572F0u; return; } if (c.pc != 0x001C1840u) [[unlikely]] return; }
L_001C1840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001C1844:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001C1860:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C187Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 233u, depth + 1u); else { c.pc = 0x001BE580u; return; } if (c.pc != 0x001C187Cu) [[unlikely]] return; }
L_001C187C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1884u);  if (depth < kMaxDepth) unit_0024(c, 129u, depth + 1u); else { c.pc = 0x001B0C00u; return; } if (c.pc != 0x001C1884u) [[unlikely]] return; }
L_001C1884:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001C1A98; }
    set32(c.r[4], ld32((c.r[16].w[0] + 688u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001C18B0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C1A94; } }
L_001C18B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001C18C8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C1A94; } }
L_001C18C8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  goto L_001C18EC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C1A94; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_001C18EC:
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[4], ld32((c.r[16].w[0] + 304u)));
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1908u); st32((c.r[29].w[0] + 148u), c.f[0]);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x001C1908u) [[unlikely]] return; }
L_001C1908:
    set32(c.r[4], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1914u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000D(c, 330u, depth + 1u); else { c.pc = 0x001572B0u; return; } if (c.pc != 0x001C1914u) [[unlikely]] return; }
L_001C1914:
    set32(c.r[4], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1920u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_000D(c, 332u, depth + 1u); else { c.pc = 0x001572F0u; return; } if (c.pc != 0x001C1920u) [[unlikely]] return; }
L_001C1920:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1948u); st32((c.r[29].w[0] + 144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x001C1948u) [[unlikely]] return; }
L_001C1948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1950u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x001C1950u) [[unlikely]] return; }
L_001C1950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1958u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x001C1958u) [[unlikely]] return; }
L_001C1958:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C198Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000D(c, 330u, depth + 1u); else { c.pc = 0x001572B0u; return; } if (c.pc != 0x001C198Cu) [[unlikely]] return; }
L_001C198C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1994u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x001C1994u) [[unlikely]] return; }
L_001C1994:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C19A4u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x001C19A4u) [[unlikely]] return; }
L_001C19A4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C19B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 84u, depth + 1u); else { c.pc = 0x0016D2B0u; return; } if (c.pc != 0x001C19B4u) [[unlikely]] return; }
L_001C19B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C19BCu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x001C19BCu) [[unlikely]] return; }
L_001C19BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C19C4u); c.f[12] = ld32((c.r[29].w[0] + 128u));  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001C19C4u) [[unlikely]] return; }
L_001C19C4:
    c.f[12] = ld32((c.r[29].w[0] + 132u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C19D0u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001C19D0u) [[unlikely]] return; }
L_001C19D0:
    c.f[12] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C19DCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001C19DCu) [[unlikely]] return; }
L_001C19DC:
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 148u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C19FCu); set32(c.r[6], c.r[6].w[0] + 11104u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001C19FCu) [[unlikely]] return; }
L_001C19FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[3], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A18u); st32((c.r[29].w[0] + 148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001C1A18u) [[unlikely]] return; }
L_001C1A18:
    c.f[12] = ld32((c.r[29].w[0] + 116u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A24u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001C1A24u) [[unlikely]] return; }
L_001C1A24:
    c.f[12] = ld32((c.r[29].w[0] + 120u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A30u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001C1A30u) [[unlikely]] return; }
L_001C1A30:
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 148u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A50u); set32(c.r[6], c.r[6].w[0] + 11136u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001C1A50u) [[unlikely]] return; }
L_001C1A50:
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 148u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A7Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001C1A7Cu) [[unlikely]] return; }
L_001C1A7C:
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[6], c.r[6].w[0] + 11160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A94u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001C1A94u) [[unlikely]] return; }
L_001C1A94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001C1A98:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001C1AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 11184u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 11188u);
    set32(c.r[6], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 11192u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 11196u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[4].w[0] + 256u), c.f[3]);
    st32((c.r[4].w[0] + 260u), c.f[2]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 264u), c.f[1]);
    st32((c.r[4].w[0] + 268u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 304u)));
    c.budget -= 29;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C1B2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1B2Cu);  if (depth < kMaxDepth) unit_000D(c, 327u, depth + 1u); else { c.pc = 0x00157220u; return; } if (c.pc != 0x001C1B2Cu) [[unlikely]] return; }
L_001C1B2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 11220u);
    set32(c.r[4], c.r[4].w[0] + 11216u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 11224u);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 11228u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 272u), c.f[3]);
    c.f[1] = ld32((c.r[4].w[0]));
    st32((c.r[17].w[0] + 276u), c.f[2]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 280u), c.f[1]);
    st32((c.r[17].w[0] + 284u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 23;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 312u), 0u);  goto L_001C1B94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1B90u);  if (depth < kMaxDepth) unit_000D(c, 329u, depth + 1u); else { c.pc = 0x00157280u; return; } if (c.pc != 0x001C1B90u) [[unlikely]] return; }
L_001C1B90:
    st32((c.r[17].w[0] + 312u), 0u);
    c.budget -= 1;
L_001C1B94:
    set32(c.r[4], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001C1BAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1BA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 331u, depth + 1u); else { c.pc = 0x001572E0u; return; } if (c.pc != 0x001C1BA8u) [[unlikely]] return; }
L_001C1BA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001C1BAC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C1BC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[6].w[0] << 1);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[6].w[0] + 7u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] + 352u);
    c.r[4].d[0] = ld64((c.r[3].w[0] + 352u));
    c.f[20] = 0u;
    c.budget -= 20;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 352u);  if (t) { goto L_001C1C44; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C1C2C; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 72u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 16u)));  goto L_001C1C48; }
L_001C1C2C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld64((c.r[16].w[0]));  goto L_001C1C74; }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 72u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C1C70; } }
L_001C1C44:
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 1;
L_001C1C48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 12u)));  goto L_001C1C64; }
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 470u, depth + 1u); else { c.pc = 0x001B7600u; return; } if (c.pc != 0x001C1C5Cu) [[unlikely]] return; }
L_001C1C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_001C1C6C; } }
L_001C1C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 470u, depth + 1u); else { c.pc = 0x001B7600u; return; } if (c.pc != 0x001C1C6Cu) [[unlikely]] return; }
L_001C1C6C:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_001C1C70:
    c.r[4].d[0] = ld64((c.r[16].w[0]));
    c.budget -= 1;
L_001C1C74:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  goto L_001C1CB4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C1C98; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 72u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C1CB0; } }
L_001C1C98:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.f[0] = c.f[20];  goto L_001C1CE0; }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 72u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C1CDC; } }
L_001C1CB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_001C1CB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  goto L_001C1CD0; }
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1CC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 470u, depth + 1u); else { c.pc = 0x001B7600u; return; } if (c.pc != 0x001C1CC8u) [[unlikely]] return; }
L_001C1CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_001C1CD8; } }
L_001C1CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1CD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 470u, depth + 1u); else { c.pc = 0x001B7600u; return; } if (c.pc != 0x001C1CD8u) [[unlikely]] return; }
L_001C1CD8:
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 1;
L_001C1CDC:
    c.f[0] = c.f[20];
    c.budget -= 1;
L_001C1CE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C1D00:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001C1D78; } }
    c.r[2].d[0] = ld64((c.r[5].w[0] + 72u));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 344u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C1D78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001C1D3C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001C1D54; } }
L_001C1D3C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_001C1D54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = ld32((c.r[2].w[0] + 27140u));
    c.f[1] = ld32((c.r[4].w[0] + 316u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_001C1DC0; } }
L_001C1D78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001C1D94; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001C1DAC; } }
L_001C1D94:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 6;
L_001C1DAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[2].w[0] + 27140u));
    c.f[0] = ld32((c.r[4].w[0] + 316u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 5;
L_001C1DC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 304u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1DF0u); set32(c.r[5], c.r[5].w[0] + 11248u);  if (depth < kMaxDepth) unit_000D(c, 334u, depth + 1u); else { c.pc = 0x00157310u; return; } if (c.pc != 0x001C1DF0u) [[unlikely]] return; }
L_001C1DF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1DFCu); set32(c.r[5], c.r[16].w[0] + 256u);  if (depth < kMaxDepth) unit_000D(c, 327u, depth + 1u); else { c.pc = 0x00157220u; return; } if (c.pc != 0x001C1DFCu) [[unlikely]] return; }
L_001C1DFC:
    set32(c.r[4], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1E08u); set32(c.r[5], c.r[16].w[0] + 272u);  if (depth < kMaxDepth) unit_000D(c, 329u, depth + 1u); else { c.pc = 0x00157280u; return; } if (c.pc != 0x001C1E08u) [[unlikely]] return; }
L_001C1E08:
    set32(c.r[5], ld32((c.r[16].w[0] + 312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1E14u); set32(c.r[4], ld32((c.r[16].w[0] + 304u)));  if (depth < kMaxDepth) unit_000D(c, 331u, depth + 1u); else { c.pc = 0x001572E0u; return; } if (c.pc != 0x001C1E14u) [[unlikely]] return; }
L_001C1E14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C1E30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1E54u); c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 225u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x001C1E54u) [[unlikely]] return; }
L_001C1E54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[17].w[0] + 336u);
    set32(c.r[2], c.r[2].w[0] + 12368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1E68u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0029(c, 192u, depth + 1u); else { c.pc = 0x001C5240u; return; } if (c.pc != 0x001C1E68u) [[unlikely]] return; }
L_001C1E68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 17479ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001C1E80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 244u);  if (t) { goto L_001C1E88; } }
L_001C1E80:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], c.r[17].w[0] + 244u);
    c.budget -= 2;
L_001C1E88:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1E98u); st32((c.r[17].w[0] + 320u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001C1E98u) [[unlikely]] return; }
L_001C1E98:
    set32(c.r[4], 0u + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1EA4u); st32((c.r[17].w[0] + 324u), 0u);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001C1EA4u) [[unlikely]] return; }
L_001C1EA4:
    st32((c.r[17].w[0] + 324u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1EB8u); set32(c.r[6], 0u + 72u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001C1EB8u) [[unlikely]] return; }
L_001C1EB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 30568u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001C200C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 11376u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 11264u), c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 11268u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 11392u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11272u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 11384u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st8((c.r[28].w[0] - 30568u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 11276u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11280u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 11292u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 11284u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 11400u);
    st32((c.r[3].w[0] + 11288u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], 0u + 2u);
    st32((c.r[3].w[0] + 11296u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11300u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 11304u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11308u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 11408u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11312u), c.r[4].w[0]);
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 11316u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11320u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 11416u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11324u), c.r[4].w[0]);
    set32(c.r[5], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 11328u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11332u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 11424u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11336u), c.r[4].w[0]);
    set32(c.r[5], 0u + 5u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 11340u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11344u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 11432u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11348u), c.r[4].w[0]);
    set32(c.r[5], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 11352u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11356u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 11440u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11360u), c.r[4].w[0]);
    set32(c.r[5], 0u + 7u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 11364u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 11368u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 82;
L_001C200C:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 11264u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C202Cu); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C202Cu) [[unlikely]] return; }
L_001C202C:
    set32(c.r[4], ld32((c.r[17].w[0] + 324u)));
    set32(c.r[5], c.r[16].w[0] << 3);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C200Cu | kUnwind; return; } goto L_001C200C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2050u); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C2050u) [[unlikely]] return; }
L_001C2050:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 244u), c.r[2].w[0]);  goto L_001C2084; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u - 10300u);
    set32(c.r[7], c.r[7].w[0] + 11448u);
    set32(c.r[8], c.r[8].w[0] + 11264u);
    set32(c.r[9], 0u + 9u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2080u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 26u, depth + 1u); else { c.pc = 0x001C02B0u; return; } if (c.pc != 0x001C2080u) [[unlikely]] return; }
L_001C2080:
    st32((c.r[17].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 1;
L_001C2084:
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[25], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2098u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2098u) [[unlikely]] return; }
L_001C2098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C20A0u); set32(c.r[4], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C20A0u) [[unlikely]] return; }
L_001C20A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C20ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 387u, depth + 1u); else { c.pc = 0x001C2D40u; return; } if (c.pc != 0x001C20ACu) [[unlikely]] return; }
L_001C20AC:
    set32(c.r[5], ld32((c.r[17].w[0] + 244u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C20C0u); set32(c.r[4], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C20C0u) [[unlikely]] return; }
L_001C20C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C20C8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C20C8u) [[unlikely]] return; }
L_001C20C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C20D4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 381u, depth + 1u); else { c.pc = 0x001C2C80u; return; } if (c.pc != 0x001C20D4u) [[unlikely]] return; }
L_001C20D4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C20E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 353u, depth + 1u); else { c.pc = 0x001C2A80u; return; } if (c.pc != 0x001C20E0u) [[unlikely]] return; }
L_001C20E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 320u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C20ECu); st32((c.r[17].w[0] + 408u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 183u, depth + 1u); else { c.pc = 0x001B1510u; return; } if (c.pc != 0x001C20ECu) [[unlikely]] return; }
L_001C20EC:
    st32((c.r[17].w[0] + 412u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 340u)));
    c.f[2] = ld32((c.r[2].w[0] - 976u));
    c.f[1] = ld32((c.r[3].w[0] - 972u));
    c.r[5].d[0] = c.r[4].d[0] | 2ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[17].w[0] + 340u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[2].w[0] - 968u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[17].w[0] + 384u), c.f[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[17].w[0] + 388u), c.f[1]);
    st32((c.r[17].w[0] + 392u), c.f[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] - 964u));
    st32((c.r[17].w[0] + 396u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 340u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[17].w[0] + 340u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 404u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C2160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001C21BC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12528u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001C21A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_001C21A0:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001C21B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C21B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001C21B8u) [[unlikely]] return; }
L_001C21B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001C21BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C21D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C22B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12368u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 324u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] + 336u);  goto L_001C2250; }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 324u)));
    c.budget -= 2;
L_001C2210:
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001C2238; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2234u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2234u) [[unlikely]] return; }
L_001C2234:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001C2238:
    c.r[2].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 324u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C2210u | kUnwind; return; } goto L_001C2210; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C224Cu); set32(c.r[4], ld32((c.r[18].w[0] + 324u)));  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001C224Cu) [[unlikely]] return; }
L_001C224C:
    set32(c.r[3], c.r[18].w[0] + 336u);
    c.budget -= 1;
L_001C2250:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C2280; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12528u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[18].w[0] + 352u), c.r[2].w[0]);  if (t) { goto L_001C2280; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[18].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 6;
L_001C2280:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_001C22A4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11328u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C22A0u); st32((c.r[18].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 270u, depth + 1u); else { c.pc = 0x001BEBA0u; return; } if (c.pc != 0x001C22A0u) [[unlikely]] return; }
L_001C22A0:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_001C22A4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_001C22BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C22B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001C22B8u) [[unlikely]] return; }
L_001C22B8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001C22BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C22E0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C230Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0027(c, 228u, depth + 1u); else { c.pc = 0x001BE460u; return; } if (c.pc != 0x001C230Cu) [[unlikely]] return; }
L_001C230C:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[19].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_001C2770; }
    set32(c.r[5], ld32((c.r[19].w[0] + 244u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2338u); set32(c.r[4], c.r[29].w[0] + 296u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2338u) [[unlikely]] return; }
L_001C2338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2340u); set32(c.r[4], c.r[29].w[0] + 296u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C2340u) [[unlikely]] return; }
L_001C2340:
    set32(c.r[5], ld32((c.r[19].w[0] + 248u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2358u); set32(c.r[4], c.r[29].w[0] + 288u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2358u) [[unlikely]] return; }
L_001C2358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2360u); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C2360u) [[unlikely]] return; }
L_001C2360:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2370u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 381u, depth + 1u); else { c.pc = 0x001C2C80u; return; } if (c.pc != 0x001C2370u) [[unlikely]] return; }
L_001C2370:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001C2398; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001C2398; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001C2398:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 244u)));  goto L_001C2400; }
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 10300u);
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[7].d[0]) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_001C23E0; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001C23C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C23FC; } }
L_001C23C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C23CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 387u, depth + 1u); else { c.pc = 0x001C2D40u; return; } if (c.pc != 0x001C23CCu) [[unlikely]] return; }
L_001C23CC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C23D8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 353u, depth + 1u); else { c.pc = 0x001C2A80u; return; } if (c.pc != 0x001C23D8u) [[unlikely]] return; }
L_001C23D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C23FC; } }
L_001C23E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C23ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 444u, depth + 1u); else { c.pc = 0x001C36B0u; return; } if (c.pc != 0x001C23ECu) [[unlikely]] return; }
L_001C23EC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C23F8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 381u, depth + 1u); else { c.pc = 0x001C2C80u; return; } if (c.pc != 0x001C23F8u) [[unlikely]] return; }
L_001C23F8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C23FC:
    set32(c.r[5], ld32((c.r[19].w[0] + 244u)));
    c.budget -= 1;
L_001C2400:
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2410u); set32(c.r[4], c.r[29].w[0] + 280u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2410u) [[unlikely]] return; }
L_001C2410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2418u); set32(c.r[4], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C2418u) [[unlikely]] return; }
L_001C2418:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2424u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 343u, depth + 1u); else { c.pc = 0x001C2960u; return; } if (c.pc != 0x001C2424u) [[unlikely]] return; }
L_001C2424:
    set32(c.r[5], ld32((c.r[19].w[0] + 248u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2438u); set32(c.r[4], c.r[29].w[0] + 272u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2438u) [[unlikely]] return; }
L_001C2438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2440u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C2440u) [[unlikely]] return; }
L_001C2440:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001C2764; }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2458u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 453u, depth + 1u); else { c.pc = 0x001C3790u; return; } if (c.pc != 0x001C2458u) [[unlikely]] return; }
L_001C2458:
    set32(c.r[5], ld32((c.r[19].w[0] + 252u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 256u)));  goto L_001C248C; }
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2474u); set32(c.r[4], c.r[29].w[0] + 264u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2474u) [[unlikely]] return; }
L_001C2474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C247Cu); set32(c.r[4], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C247Cu) [[unlikely]] return; }
L_001C247C:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2488u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 456u, depth + 1u); else { c.pc = 0x001C37D0u; return; } if (c.pc != 0x001C2488u) [[unlikely]] return; }
L_001C2488:
    set32(c.r[2], ld32((c.r[19].w[0] + 256u)));
    c.budget -= 1;
L_001C248C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 288u)));  goto L_001C2534; }
    set32(c.r[5], ld32((c.r[19].w[0] + 268u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C24A8u); set32(c.r[4], c.r[29].w[0] + 216u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C24A8u) [[unlikely]] return; }
L_001C24A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C24B0u); set32(c.r[4], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C24B0u) [[unlikely]] return; }
L_001C24B0:
    set32(c.r[5], ld32((c.r[19].w[0] + 264u)));
    c.f[22] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C24C8u); set32(c.r[4], c.r[29].w[0] + 208u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C24C8u) [[unlikely]] return; }
L_001C24C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C24D0u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C24D0u) [[unlikely]] return; }
L_001C24D0:
    set32(c.r[5], ld32((c.r[19].w[0] + 260u)));
    c.f[21] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C24E8u); set32(c.r[4], c.r[29].w[0] + 200u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C24E8u) [[unlikely]] return; }
L_001C24E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C24F0u); set32(c.r[4], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C24F0u) [[unlikely]] return; }
L_001C24F0:
    set32(c.r[5], ld32((c.r[19].w[0] + 256u)));
    c.f[20] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2508u); set32(c.r[4], c.r[29].w[0] + 192u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2508u) [[unlikely]] return; }
L_001C2508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2510u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C2510u) [[unlikely]] return; }
L_001C2510:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 140u), c.f[22]);
    st32((c.r[29].w[0] + 132u), c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2530u); st32((c.r[29].w[0] + 136u), c.f[21]);  if (depth < kMaxDepth) unit_0028(c, 458u, depth + 1u); else { c.pc = 0x001C3810u; return; } if (c.pc != 0x001C2530u) [[unlikely]] return; }
L_001C2530:
    set32(c.r[2], ld32((c.r[19].w[0] + 288u)));
    c.budget -= 1;
L_001C2534:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 300u)));  goto L_001C25C0; }
    set32(c.r[5], ld32((c.r[19].w[0] + 296u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2550u); set32(c.r[4], c.r[29].w[0] + 184u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2550u) [[unlikely]] return; }
L_001C2550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2558u); set32(c.r[4], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C2558u) [[unlikely]] return; }
L_001C2558:
    set32(c.r[5], ld32((c.r[19].w[0] + 292u)));
    c.f[21] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2570u); set32(c.r[4], c.r[29].w[0] + 176u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2570u) [[unlikely]] return; }
L_001C2570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2578u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C2578u) [[unlikely]] return; }
L_001C2578:
    set32(c.r[5], ld32((c.r[19].w[0] + 288u)));
    c.f[20] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2590u); set32(c.r[4], c.r[29].w[0] + 168u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2590u) [[unlikely]] return; }
L_001C2590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2598u); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C2598u) [[unlikely]] return; }
L_001C2598:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 116u), c.f[20]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C25BCu); st32((c.r[29].w[0] + 120u), c.f[21]);  if (depth < kMaxDepth) unit_0028(c, 461u, depth + 1u); else { c.pc = 0x001C3850u; return; } if (c.pc != 0x001C25BCu) [[unlikely]] return; }
L_001C25BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 300u)));
    c.budget -= 1;
L_001C25C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 312u)));  goto L_001C2708; }
    set32(c.r[5], ld32((c.r[19].w[0] + 308u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C25DCu); set32(c.r[4], c.r[29].w[0] + 160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C25DCu) [[unlikely]] return; }
L_001C25DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C25E4u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C25E4u) [[unlikely]] return; }
L_001C25E4:
    set32(c.r[5], ld32((c.r[19].w[0] + 304u)));
    c.f[21] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C25FCu); set32(c.r[4], c.r[29].w[0] + 152u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C25FCu) [[unlikely]] return; }
L_001C25FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2604u); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C2604u) [[unlikely]] return; }
L_001C2604:
    set32(c.r[5], ld32((c.r[19].w[0] + 300u)));
    c.f[20] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C261Cu); set32(c.r[4], c.r[29].w[0] + 144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C261Cu) [[unlikely]] return; }
L_001C261C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2624u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C2624u) [[unlikely]] return; }
L_001C2624:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 100u), c.f[20]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.f[21]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[19].w[0] + 368u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[19].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[19].w[0] + 376u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[19].w[0] + 380u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[19].w[0] + 352u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C266Cu); set32(c.r[4], c.r[19].w[0] + 336u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C266Cu) [[unlikely]] return; }
L_001C266C:
    c.f[0] = ld32((c.r[19].w[0] + 368u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 372u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 376u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 380u));
    st32((c.r[29].w[0] + 108u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C26ACu); c.r[5].d[0] = ld64((c.r[29].w[0] + 256u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C26ACu) [[unlikely]] return; }
L_001C26AC:
    set32(c.r[4], ld32((c.r[19].w[0] + 304u)));
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 248u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C26D0u); c.r[5].d[0] = ld64((c.r[29].w[0] + 248u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C26D0u) [[unlikely]] return; }
L_001C26D0:
    set32(c.r[4], ld32((c.r[19].w[0] + 308u)));
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 240u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C26F4u); c.r[5].d[0] = ld64((c.r[29].w[0] + 240u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C26F4u) [[unlikely]] return; }
L_001C26F4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2704u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0028(c, 464u, depth + 1u); else { c.pc = 0x001C3890u; return; } if (c.pc != 0x001C2704u) [[unlikely]] return; }
L_001C2704:
    set32(c.r[2], ld32((c.r[19].w[0] + 312u)));
    c.budget -= 1;
L_001C2708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C2760; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 316u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2724u); set32(c.r[4], c.r[29].w[0] + 224u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2724u) [[unlikely]] return; }
L_001C2724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C272Cu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C272Cu) [[unlikely]] return; }
L_001C272C:
    set32(c.r[5], ld32((c.r[19].w[0] + 312u)));
    c.f[20] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2744u); set32(c.r[4], c.r[29].w[0] + 232u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2744u) [[unlikely]] return; }
L_001C2744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C274Cu); set32(c.r[4], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C274Cu) [[unlikely]] return; }
L_001C274C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2760u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0028(c, 467u, depth + 1u); else { c.pc = 0x001C38D0u; return; } if (c.pc != 0x001C2760u) [[unlikely]] return; }
L_001C2760:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001C2764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C276Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 353u, depth + 1u); else { c.pc = 0x001C2A80u; return; } if (c.pc != 0x001C276Cu) [[unlikely]] return; }
L_001C276C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001C2770:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_001C27A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C27BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0027(c, 233u, depth + 1u); else { c.pc = 0x001BE580u; return; } if (c.pc != 0x001C27BCu) [[unlikely]] return; }
L_001C27BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[17].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001C2948; }
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C2944; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 244u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C27F4u); set32(c.r[4], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C27F4u) [[unlikely]] return; }
L_001C27F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C27FCu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C27FCu) [[unlikely]] return; }
L_001C27FC:
    set32(c.r[5], ld32((c.r[17].w[0] + 248u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2814u); set32(c.r[4], c.r[29].w[0] + 104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2814u) [[unlikely]] return; }
L_001C2814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C281Cu); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C281Cu) [[unlikely]] return; }
L_001C281C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C282Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 381u, depth + 1u); else { c.pc = 0x001C2C80u; return; } if (c.pc != 0x001C282Cu) [[unlikely]] return; }
L_001C282C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001C2944; } }
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C2944; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 11456u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001C0000u < 16384u) { entry = entries_0028[(t - 0x001C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001C2860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2868u); set32(c.r[4], c.r[17].w[0] + 336u);  if (depth < kMaxDepth) unit_0029(c, 193u, depth + 1u); else { c.pc = 0x001C52D0u; return; } if (c.pc != 0x001C2868u) [[unlikely]] return; }
L_001C2868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C2944; } }
L_001C2870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2878u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x001C2878u) [[unlikely]] return; }
L_001C2878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C2944; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2890u); set32(c.r[6], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_000E(c, 452u, depth + 1u); else { c.pc = 0x0015BD50u; return; } if (c.pc != 0x001C2890u) [[unlikely]] return; }
L_001C2890:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C289Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 449u, depth + 1u); else { c.pc = 0x0015BCC0u; return; } if (c.pc != 0x001C289Cu) [[unlikely]] return; }
L_001C289C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C28A4u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x001C28A4u) [[unlikely]] return; }
L_001C28A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C28ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x001C28ACu) [[unlikely]] return; }
L_001C28AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C28B4u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x001C28B4u) [[unlikely]] return; }
L_001C28B4:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C28C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001C28C0u) [[unlikely]] return; }
L_001C28C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[7], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 40u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C28F4u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 84u, depth + 1u); else { c.pc = 0x0016D2B0u; return; } if (c.pc != 0x001C28F4u) [[unlikely]] return; }
L_001C28F4:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2900u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001C2900u) [[unlikely]] return; }
L_001C2900:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 40u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2934u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 84u, depth + 1u); else { c.pc = 0x0016D2B0u; return; } if (c.pc != 0x001C2934u) [[unlikely]] return; }
L_001C2934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C293Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x001C293Cu) [[unlikely]] return; }
L_001C293C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2944u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x001C2944u) [[unlikely]] return; }
L_001C2944:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001C2948:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001C2960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001C2984; } }
L_001C2968:
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001C2984; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C2994; } }
L_001C2984:
    c.r[2].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 324u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C2968u | kUnwind; return; } goto L_001C2968; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C2994:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C29A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C29BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 381u, depth + 1u); else { c.pc = 0x001C2C80u; return; } if (c.pc != 0x001C29BCu) [[unlikely]] return; }
L_001C29BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001C29FC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C29D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C29D8u) [[unlikely]] return; }
L_001C29D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C29E8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 382u, depth + 1u); else { c.pc = 0x001C2CC0u; return; } if (c.pc != 0x001C29E8u) [[unlikely]] return; }
L_001C29E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C29F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 343u, depth + 1u); else { c.pc = 0x001C2960u; return; } if (c.pc != 0x001C29F4u) [[unlikely]] return; }
L_001C29F4:
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_001C29FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C2A10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], 0u + 2u);
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 8;
L_001C2A30:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 244u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 244u);  if (t) { goto L_001C2A54; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2A50u) [[unlikely]] return; }
L_001C2A50:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_001C2A54:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(19ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C2A30u | kUnwind; return; } goto L_001C2A30; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C2A80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2AA4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 350u, depth + 1u); else { c.pc = 0x001C2A10u; return; } if (c.pc != 0x001C2AA4u) [[unlikely]] return; }
L_001C2AA4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001C2AFC; }
    set32(c.r[16], ld32((c.r[17].w[0] + 248u)));
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 104u));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2AD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2AD4u) [[unlikely]] return; }
L_001C2AD4:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 88u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2AF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2AF4u) [[unlikely]] return; }
L_001C2AF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001C2C5C; } }
L_001C2AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B04u);  if (depth < kMaxDepth) unit_000E(c, 460u, depth + 1u); else { c.pc = 0x0015BE30u; return; } if (c.pc != 0x001C2B04u) [[unlikely]] return; }
L_001C2B04:
    set32(c.r[19], ld32((c.r[17].w[0] + 248u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 96u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.r[5].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B2Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2B2Cu) [[unlikely]] return; }
L_001C2B2C:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B4Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2B4Cu) [[unlikely]] return; }
L_001C2B4C:
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C2C58; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 11488u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001C0000u < 16384u) { entry = entries_0028[(t - 0x001C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001C2B74:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 352u)));
    c.f[12] = ld32((c.r[2].w[0] + 68u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 399u, depth + 1u); else { c.pc = 0x001C2FD0u; return; } if (c.pc != 0x001C2B88u) [[unlikely]] return; }
L_001C2B88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B94u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 402u, depth + 1u); else { c.pc = 0x001C3050u; return; } if (c.pc != 0x001C2B94u) [[unlikely]] return; }
L_001C2B94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C2C58; } }
L_001C2B9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2BA8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 402u, depth + 1u); else { c.pc = 0x001C3050u; return; } if (c.pc != 0x001C2BA8u) [[unlikely]] return; }
L_001C2BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C2C58; } }
L_001C2BB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2BBCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 402u, depth + 1u); else { c.pc = 0x001C3050u; return; } if (c.pc != 0x001C2BBCu) [[unlikely]] return; }
L_001C2BBC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2BC8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 430u, depth + 1u); else { c.pc = 0x001C3460u; return; } if (c.pc != 0x001C2BC8u) [[unlikely]] return; }
L_001C2BC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C2C58; } }
L_001C2BD0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2BDCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 402u, depth + 1u); else { c.pc = 0x001C3050u; return; } if (c.pc != 0x001C2BDCu) [[unlikely]] return; }
L_001C2BDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2BE8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 412u, depth + 1u); else { c.pc = 0x001C31C0u; return; } if (c.pc != 0x001C2BE8u) [[unlikely]] return; }
L_001C2BE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2BF4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 430u, depth + 1u); else { c.pc = 0x001C3460u; return; } if (c.pc != 0x001C2BF4u) [[unlikely]] return; }
L_001C2BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C2C58; } }
L_001C2BFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C08u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 402u, depth + 1u); else { c.pc = 0x001C3050u; return; } if (c.pc != 0x001C2C08u) [[unlikely]] return; }
L_001C2C08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C14u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 422u, depth + 1u); else { c.pc = 0x001C3320u; return; } if (c.pc != 0x001C2C14u) [[unlikely]] return; }
L_001C2C14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C20u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 438u, depth + 1u); else { c.pc = 0x001C35D0u; return; } if (c.pc != 0x001C2C20u) [[unlikely]] return; }
L_001C2C20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C2C58; } }
L_001C2C28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C34u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 402u, depth + 1u); else { c.pc = 0x001C3050u; return; } if (c.pc != 0x001C2C34u) [[unlikely]] return; }
L_001C2C34:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C40u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 412u, depth + 1u); else { c.pc = 0x001C31C0u; return; } if (c.pc != 0x001C2C40u) [[unlikely]] return; }
L_001C2C40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C4Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 422u, depth + 1u); else { c.pc = 0x001C3320u; return; } if (c.pc != 0x001C2C4Cu) [[unlikely]] return; }
L_001C2C4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C58u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 438u, depth + 1u); else { c.pc = 0x001C35D0u; return; } if (c.pc != 0x001C2C58u) [[unlikely]] return; }
L_001C2C58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001C2C5C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001C2C80:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 320u)));  goto L_001C2C9C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 448u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_001C2CAC; } }
L_001C2C9C:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
L_001C2CAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C2CC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001C2D04; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2CF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 171u, depth + 1u); else { c.pc = 0x00161880u; return; } if (c.pc != 0x001C2CF0u) [[unlikely]] return; }
L_001C2CF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2CFCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 473u, depth + 1u); else { c.pc = 0x0015BFD0u; return; } if (c.pc != 0x001C2CFCu) [[unlikely]] return; }
L_001C2CFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001C2D24; } }
L_001C2D04:
    set32(c.r[16], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2D10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 171u, depth + 1u); else { c.pc = 0x00161880u; return; } if (c.pc != 0x001C2D10u) [[unlikely]] return; }
L_001C2D10:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2D20u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 474u, depth + 1u); else { c.pc = 0x0015BFE0u; return; } if (c.pc != 0x001C2D20u) [[unlikely]] return; }
L_001C2D20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001C2D24:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C2D40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 30564u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C2D8C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 11376u);
    st32((c.r[2].w[0] + 11520u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 11524u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st8((c.r[28].w[0] - 30564u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 11528u), c.r[3].w[0]);
    c.budget -= 10;
L_001C2D8C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 30560u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 30556u)));  goto L_001C2DE8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 11616u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 11536u), c.r[3].w[0]);
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 11540u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 11544u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 11624u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st8((c.r[28].w[0] - 30560u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 11548u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 11552u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 11556u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 30556u)));
    c.budget -= 20;
L_001C2DE8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 248u)));  goto L_001C2E8C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 11616u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 11568u), c.r[3].w[0]);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 11572u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 11576u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 11640u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st8((c.r[28].w[0] - 30556u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 11580u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11584u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 11588u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 11656u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 11592u), c.r[3].w[0]);
    set32(c.r[4], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11596u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 11600u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 11664u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 11604u), c.r[3].w[0]);
    set32(c.r[4], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11608u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 11612u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 248u)));
    c.budget -= 39;
L_001C2E8C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 248u)));  goto L_001C2EC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2E9Cu); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C2E9Cu) [[unlikely]] return; }
L_001C2E9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 248u), c.r[2].w[0]);  goto L_001C2EC4; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u - 10299u);
    set32(c.r[7], c.r[7].w[0] + 11680u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2EC0u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 23u, depth + 1u); else { c.pc = 0x001C0260u; return; } if (c.pc != 0x001C2EC0u) [[unlikely]] return; }
L_001C2EC0:
    st32((c.r[18].w[0] + 248u), c.r[2].w[0]);
    c.budget -= 1;
L_001C2EC4:
    set32(c.r[16], ld32((c.r[18].w[0] + 248u)));
    c.budget -= 1;
L_001C2EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2ED0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 56u, depth + 1u); else { c.pc = 0x001C06C0u; return; } if (c.pc != 0x001C2ED0u) [[unlikely]] return; }
L_001C2ED0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2EDCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 381u, depth + 1u); else { c.pc = 0x001C2C80u; return; } if (c.pc != 0x001C2EDCu) [[unlikely]] return; }
L_001C2EDC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C2F24; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 11520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2EFCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 72u, depth + 1u); else { c.pc = 0x001C08C0u; return; } if (c.pc != 0x001C2EFCu) [[unlikely]] return; }
L_001C2EFC:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2F1Cu) [[unlikely]] return; }
L_001C2F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001C2FBC; } }
L_001C2F24:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_001C2FB8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 11568u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F40u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0028(c, 72u, depth + 1u); else { c.pc = 0x001C08C0u; return; } if (c.pc != 0x001C2F40u) [[unlikely]] return; }
L_001C2F40:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001C2F70; }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 72u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2F68u) [[unlikely]] return; }
L_001C2F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C2FB8; } }
L_001C2F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F78u);  if (depth < kMaxDepth) unit_000E(c, 460u, depth + 1u); else { c.pc = 0x0015BE30u; return; } if (c.pc != 0x001C2F78u) [[unlikely]] return; }
L_001C2F78:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 88u));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2F98u) [[unlikely]] return; }
L_001C2F98:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2FB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C2FB8u) [[unlikely]] return; }
L_001C2FB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001C2FBC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001C2FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2FE8u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C2FE8u) [[unlikely]] return; }
L_001C2FE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 252u), c.r[4].w[0]);  goto L_001C3038; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[13] = c.r[2].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.f[15] = ld32((c.r[28].w[0] - 32660u));
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10298u);
    set32(c.r[7], c.r[7].w[0] + 11688u);
    set32(c.r[2], ld32((c.r[2].w[0] + 352u)));
    set32(c.r[8], c.r[8].w[0] + 11704u);
    c.f[14] = ld32((c.r[2].w[0] + 68u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3030u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C3030u) [[unlikely]] return; }
L_001C3030:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 252u), c.r[4].w[0]);
    c.budget -= 2;
L_001C3038:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C3050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C306Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 440u, depth + 1u); else { c.pc = 0x0015BB60u; return; } if (c.pc != 0x001C306Cu) [[unlikely]] return; }
L_001C306C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3074u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3074u) [[unlikely]] return; }
L_001C3074:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 256u), c.r[2].w[0]);  goto L_001C30BC; }
    set32(c.r[3], 0u + 10000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = c.r[3].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10297u);
    set32(c.r[7], c.r[7].w[0] + 11712u);
    set32(c.r[8], c.r[8].w[0] + 11704u);
    c.f[14] = ld32((c.r[29].w[0] + 32u));
    c.f[15] = ld32((c.r[28].w[0] - 32660u));
    c.f[12] = 0u;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C30B8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C30B8u) [[unlikely]] return; }
L_001C30B8:
    st32((c.r[16].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 1;
L_001C30BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C30C4u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C30C4u) [[unlikely]] return; }
L_001C30C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 260u), c.r[2].w[0]);  goto L_001C310C; }
    set32(c.r[3], 0u + 10000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = c.r[3].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10296u);
    set32(c.r[7], c.r[7].w[0] + 11720u);
    set32(c.r[8], c.r[8].w[0] + 11704u);
    c.f[14] = ld32((c.r[29].w[0] + 36u));
    c.f[15] = ld32((c.r[28].w[0] - 32660u));
    c.f[12] = 0u;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3108u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C3108u) [[unlikely]] return; }
L_001C3108:
    st32((c.r[16].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 1;
L_001C310C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3114u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3114u) [[unlikely]] return; }
L_001C3114:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 264u), c.r[2].w[0]);  goto L_001C315C; }
    set32(c.r[3], 0u + 10000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = c.r[3].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10295u);
    set32(c.r[7], c.r[7].w[0] + 11728u);
    set32(c.r[8], c.r[8].w[0] + 11704u);
    c.f[14] = ld32((c.r[29].w[0] + 40u));
    c.f[15] = ld32((c.r[28].w[0] - 32660u));
    c.f[12] = 0u;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3158u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C3158u) [[unlikely]] return; }
L_001C3158:
    st32((c.r[16].w[0] + 264u), c.r[2].w[0]);
    c.budget -= 1;
L_001C315C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3164u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3164u) [[unlikely]] return; }
L_001C3164:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 268u), c.r[4].w[0]);  goto L_001C31B0; }
    set32(c.r[2], 0u + 10000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = c.r[2].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10294u);
    set32(c.r[7], c.r[7].w[0] + 11736u);
    set32(c.r[8], c.r[8].w[0] + 11704u);
    c.f[14] = ld32((c.r[29].w[0] + 44u));
    c.f[15] = ld32((c.r[28].w[0] - 32660u));
    c.f[12] = 0u;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C31A8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C31A8u) [[unlikely]] return; }
L_001C31A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 268u), c.r[4].w[0]);
    c.budget -= 2;
L_001C31B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C31C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C31DCu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 442u, depth + 1u); else { c.pc = 0x0015BB80u; return; } if (c.pc != 0x001C31DCu) [[unlikely]] return; }
L_001C31DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C31E4u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C31E4u) [[unlikely]] return; }
L_001C31E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 272u), c.r[2].w[0]);  goto L_001C3228; }
    c.f[14] = ld32((c.r[29].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[15] = ld32((c.r[28].w[0] - 32660u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    set32(c.r[6], 0u - 10293u);
    set32(c.r[7], c.r[7].w[0] + 11744u);
    set32(c.r[8], c.r[8].w[0] + 11704u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3224u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C3224u) [[unlikely]] return; }
L_001C3224:
    st32((c.r[16].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3230u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3230u) [[unlikely]] return; }
L_001C3230:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 276u), c.r[2].w[0]);  goto L_001C3274; }
    c.f[14] = ld32((c.r[29].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[15] = ld32((c.r[28].w[0] - 32660u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    set32(c.r[6], 0u - 10292u);
    set32(c.r[7], c.r[7].w[0] + 11752u);
    set32(c.r[8], c.r[8].w[0] + 11704u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3270u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C3270u) [[unlikely]] return; }
L_001C3270:
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C327Cu); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C327Cu) [[unlikely]] return; }
L_001C327C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 280u), c.r[2].w[0]);  goto L_001C32C0; }
    c.f[14] = ld32((c.r[29].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[15] = ld32((c.r[28].w[0] - 32660u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    set32(c.r[6], 0u - 10291u);
    set32(c.r[7], c.r[7].w[0] + 11760u);
    set32(c.r[8], c.r[8].w[0] + 11704u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C32BCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C32BCu) [[unlikely]] return; }
L_001C32BC:
    st32((c.r[16].w[0] + 280u), c.r[2].w[0]);
    c.budget -= 1;
L_001C32C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C32C8u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C32C8u) [[unlikely]] return; }
L_001C32C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 284u), c.r[4].w[0]);  goto L_001C3310; }
    c.f[14] = ld32((c.r[29].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[15] = ld32((c.r[28].w[0] - 32660u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[6], 0u - 10290u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[7], c.r[7].w[0] + 11768u);
    set32(c.r[8], c.r[8].w[0] + 11704u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3308u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C3308u) [[unlikely]] return; }
L_001C3308:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 284u), c.r[4].w[0]);
    c.budget -= 2;
L_001C3310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C3320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C333Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 449u, depth + 1u); else { c.pc = 0x0015BCC0u; return; } if (c.pc != 0x001C333Cu) [[unlikely]] return; }
L_001C333C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3344u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3344u) [[unlikely]] return; }
L_001C3344:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 288u), c.r[2].w[0]);  goto L_001C3394; }
    set32(c.r[4], 0u - 10000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = c.r[4].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], 0u + 10000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10289u);
    set32(c.r[7], c.r[7].w[0] + 11776u);
    set32(c.r[8], c.r[8].w[0] + 11784u);
    c.r[9].d[0] = 0ull + 0ull;
    c.f[0] = c.r[3].w[0];
    c.f[14] = ld32((c.r[29].w[0] + 32u));
    c.f[15] = ld32((c.r[28].w[0] - 32684u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3390u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C3390u) [[unlikely]] return; }
L_001C3390:
    st32((c.r[16].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C339Cu); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C339Cu) [[unlikely]] return; }
L_001C339C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  goto L_001C33EC; }
    set32(c.r[4], 0u - 10000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = c.r[4].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], 0u + 10000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10288u);
    set32(c.r[7], c.r[7].w[0] + 11792u);
    set32(c.r[8], c.r[8].w[0] + 11784u);
    c.r[9].d[0] = 0ull + 0ull;
    c.f[0] = c.r[3].w[0];
    c.f[14] = ld32((c.r[29].w[0] + 36u));
    c.f[15] = ld32((c.r[28].w[0] - 32684u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C33E8u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C33E8u) [[unlikely]] return; }
L_001C33E8:
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 1;
L_001C33EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C33F4u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C33F4u) [[unlikely]] return; }
L_001C33F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 296u), c.r[4].w[0]);  goto L_001C3448; }
    set32(c.r[3], 0u - 10000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = c.r[3].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 10000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10287u);
    set32(c.r[7], c.r[7].w[0] + 11800u);
    set32(c.r[8], c.r[8].w[0] + 11784u);
    c.r[9].d[0] = 0ull + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = ld32((c.r[29].w[0] + 40u));
    c.f[15] = ld32((c.r[28].w[0] - 32684u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3440u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C3440u) [[unlikely]] return; }
L_001C3440:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 296u), c.r[4].w[0]);
    c.budget -= 2;
L_001C3448:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C3460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C347Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 445u, depth + 1u); else { c.pc = 0x0015BC00u; return; } if (c.pc != 0x001C347Cu) [[unlikely]] return; }
L_001C347C:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], 0u + 240u);  goto L_001C34C0; }
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C34BC; } }
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C34BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_001C34BC:
    set32(c.r[4], 0u + 240u);
    c.budget -= 1;
L_001C34C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C34C8u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C34C8u) [[unlikely]] return; }
L_001C34C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 300u), c.r[2].w[0]);  goto L_001C3510; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[12] = c.r[4].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 32u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[15] = ld32((c.r[28].w[0] - 32660u));
    set32(c.r[6], 0u - 10286u);
    c.f[13] = c.r[3].w[0];
    set32(c.r[7], c.r[7].w[0] + 11808u);
    set32(c.r[8], c.r[8].w[0] + 11704u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C350Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C350Cu) [[unlikely]] return; }
L_001C350C:
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3518u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3518u) [[unlikely]] return; }
L_001C3518:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 304u), c.r[2].w[0]);  goto L_001C3560; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[12] = c.r[4].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 36u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[15] = ld32((c.r[28].w[0] - 32660u));
    set32(c.r[6], 0u - 10285u);
    c.f[13] = c.r[3].w[0];
    set32(c.r[7], c.r[7].w[0] + 11816u);
    set32(c.r[8], c.r[8].w[0] + 11704u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C355Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C355Cu) [[unlikely]] return; }
L_001C355C:
    st32((c.r[16].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3568u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3568u) [[unlikely]] return; }
L_001C3568:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 308u), c.r[4].w[0]);  goto L_001C35B4; }
    c.f[14] = ld32((c.r[29].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[15] = ld32((c.r[28].w[0] - 32660u));
    set32(c.r[6], 0u - 10284u);
    c.f[12] = c.r[3].w[0];
    set32(c.r[7], c.r[7].w[0] + 11824u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[8], c.r[8].w[0] + 11704u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C35ACu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C35ACu) [[unlikely]] return; }
L_001C35AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 308u), c.r[4].w[0]);
    c.budget -= 2;
L_001C35B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C35D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 40u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C35F0u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000E(c, 452u, depth + 1u); else { c.pc = 0x0015BD50u; return; } if (c.pc != 0x001C35F0u) [[unlikely]] return; }
L_001C35F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C35F8u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C35F8u) [[unlikely]] return; }
L_001C35F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 312u), c.r[2].w[0]);  goto L_001C3640; }
    set32(c.r[3], 0u + 10000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = c.r[3].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10283u);
    set32(c.r[7], c.r[7].w[0] + 11832u);
    set32(c.r[8], c.r[8].w[0] + 11784u);
    c.f[14] = ld32((c.r[29].w[0] + 44u));
    c.f[15] = ld32((c.r[28].w[0] - 32684u));
    c.f[12] = 0u;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C363Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C363Cu) [[unlikely]] return; }
L_001C363C:
    st32((c.r[16].w[0] + 312u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3648u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3648u) [[unlikely]] return; }
L_001C3648:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 316u), c.r[4].w[0]);  goto L_001C3694; }
    set32(c.r[2], 0u + 10000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = c.r[2].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10282u);
    set32(c.r[7], c.r[7].w[0] + 11840u);
    set32(c.r[8], c.r[8].w[0] + 11784u);
    c.f[14] = ld32((c.r[29].w[0] + 40u));
    c.f[15] = ld32((c.r[28].w[0] - 32684u));
    c.f[12] = 0u;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C368Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 399u, depth + 1u); else { c.pc = 0x001BFF70u; return; } if (c.pc != 0x001C368Cu) [[unlikely]] return; }
L_001C368C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 316u), c.r[4].w[0]);
    c.budget -= 2;
L_001C3694:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C36B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C36E0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0028(c, 381u, depth + 1u); else { c.pc = 0x001C2C80u; return; } if (c.pc != 0x001C36E0u) [[unlikely]] return; }
L_001C36E0:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C36FC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C36F4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 345u, depth + 1u); else { c.pc = 0x001C29A0u; return; } if (c.pc != 0x001C36F4u) [[unlikely]] return; }
L_001C36F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001C3740; } }
L_001C36FC:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_001C3738; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C370Cu); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001C370Cu) [[unlikely]] return; }
L_001C370C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001C3728; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3720u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 402u, depth + 1u); else { c.pc = 0x0015B500u; return; } if (c.pc != 0x001C3720u) [[unlikely]] return; }
L_001C3720:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_001C3728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3730u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 343u, depth + 1u); else { c.pc = 0x001C2960u; return; } if (c.pc != 0x001C3730u) [[unlikely]] return; }
L_001C3730:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001C3738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3740u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 459u, depth + 1u); else { c.pc = 0x0015BE20u; return; } if (c.pc != 0x001C3740u) [[unlikely]] return; }
L_001C3740:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3750u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 382u, depth + 1u); else { c.pc = 0x001C2CC0u; return; } if (c.pc != 0x001C3750u) [[unlikely]] return; }
L_001C3750:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_001C3768; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3764u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 353u, depth + 1u); else { c.pc = 0x001C2A80u; return; } if (c.pc != 0x001C3764u) [[unlikely]] return; }
L_001C3764:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001C3768:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001C3790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C37A4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 381u, depth + 1u); else { c.pc = 0x001C2C80u; return; } if (c.pc != 0x001C37A4u) [[unlikely]] return; }
L_001C37A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C37BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C37B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 459u, depth + 1u); else { c.pc = 0x0015BE20u; return; } if (c.pc != 0x001C37B8u) [[unlikely]] return; }
L_001C37B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C37BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C37D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.f[20] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C37F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001C37F0u) [[unlikely]] return; }
L_001C37F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    st32((c.r[3].w[0] + 68u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C3810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3824u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 381u, depth + 1u); else { c.pc = 0x001C2C80u; return; } if (c.pc != 0x001C3824u) [[unlikely]] return; }
L_001C3824:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C383C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3838u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 439u, depth + 1u); else { c.pc = 0x0015BB50u; return; } if (c.pc != 0x001C3838u) [[unlikely]] return; }
L_001C3838:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C383C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C3850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3864u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 381u, depth + 1u); else { c.pc = 0x001C2C80u; return; } if (c.pc != 0x001C3864u) [[unlikely]] return; }
L_001C3864:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C387C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3878u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 447u, depth + 1u); else { c.pc = 0x0015BC50u; return; } if (c.pc != 0x001C3878u) [[unlikely]] return; }
L_001C3878:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C387C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C3890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C38A4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 381u, depth + 1u); else { c.pc = 0x001C2C80u; return; } if (c.pc != 0x001C38A4u) [[unlikely]] return; }
L_001C38A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C38BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C38B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 443u, depth + 1u); else { c.pc = 0x0015BB90u; return; } if (c.pc != 0x001C38B8u) [[unlikely]] return; }
L_001C38B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C38BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C38D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C38F0u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0028(c, 381u, depth + 1u); else { c.pc = 0x001C2C80u; return; } if (c.pc != 0x001C38F0u) [[unlikely]] return; }
L_001C38F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001C3918; }
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3908u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 455u, depth + 1u); else { c.pc = 0x0015BDA0u; return; } if (c.pc != 0x001C3908u) [[unlikely]] return; }
L_001C3908:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3914u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 457u, depth + 1u); else { c.pc = 0x0015BDE0u; return; } if (c.pc != 0x001C3914u) [[unlikely]] return; }
L_001C3914:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001C3918:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C3930:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3948u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 225u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x001C3948u) [[unlikely]] return; }
L_001C3948:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43530000u);
    set32(c.r[3], c.r[3].w[0] + 12448u);
    c.r[2].d[0] = c.r[2].d[0] | 17479ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], 0u + 320u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3968u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3968u) [[unlikely]] return; }
L_001C3968:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 244u), c.r[2].w[0]);  goto L_001C3994; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10500u);
    set32(c.r[7], c.r[7].w[0] + 11944u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3990u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 75u, depth + 1u); else { c.pc = 0x001C0950u; return; } if (c.pc != 0x001C3990u) [[unlikely]] return; }
L_001C3990:
    st32((c.r[16].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3994:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 30552u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 320u);  goto L_001C3AA4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 11960u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 11856u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 11976u);
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11860u), c.r[2].w[0]);
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st8((c.r[28].w[0] - 30552u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 11864u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11868u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11872u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 11992u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[3].w[0] + 11876u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11880u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11884u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 12008u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[3].w[0] + 11888u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11892u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11896u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 12024u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 5u);
    st32((c.r[3].w[0] + 11900u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11904u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11908u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 12040u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 6u);
    st32((c.r[3].w[0] + 11912u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11916u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11920u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 12064u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 7u);
    st32((c.r[3].w[0] + 11924u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11928u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11932u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 11936u), c.r[2].w[0]);
    set32(c.r[4], 0u + 320u);
    c.budget -= 65;
L_001C3AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3AACu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3AACu) [[unlikely]] return; }
L_001C3AAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 248u), c.r[2].w[0]);  goto L_001C3AE0; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10499u);
    set32(c.r[7], c.r[7].w[0] + 12080u);
    set32(c.r[8], c.r[8].w[0] + 11856u);
    set32(c.r[9], 0u + 7u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3ADCu); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 26u, depth + 1u); else { c.pc = 0x001C02B0u; return; } if (c.pc != 0x001C3ADCu) [[unlikely]] return; }
L_001C3ADC:
    st32((c.r[16].w[0] + 248u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3AE8u);  if (depth < kMaxDepth) unit_0011(c, 71u, depth + 1u); else { c.pc = 0x001647A0u; return; } if (c.pc != 0x001C3AE8u) [[unlikely]] return; }
L_001C3AE8:
    set32(c.r[17], ld32((c.r[16].w[0] + 248u)));
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 72u));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C3B0Cu) [[unlikely]] return; }
L_001C3B0C:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C3B2Cu) [[unlikely]] return; }
L_001C3B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B34u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3B34u) [[unlikely]] return; }
L_001C3B34:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], 0u + 240u);  goto L_001C3B8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B48u);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x001C3B48u) [[unlikely]] return; }
L_001C3B48:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], 0u + 16u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10498u);
    set32(c.r[7], c.r[7].w[0] + 12096u);
    set32(c.r[8], c.r[8].w[0] + 12112u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 10000u);
    set32(c.r[11], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B84u); st64((c.r[29].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001C3B84u) [[unlikely]] return; }
L_001C3B84:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 240u);
    c.budget -= 2;
L_001C3B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B94u); st32((c.r[16].w[0] + 252u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3B94u) [[unlikely]] return; }
L_001C3B94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], 0u + 240u);  goto L_001C3BEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3BA8u);  if (depth < kMaxDepth) unit_0011(c, 73u, depth + 1u); else { c.pc = 0x001647C0u; return; } if (c.pc != 0x001C3BA8u) [[unlikely]] return; }
L_001C3BA8:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], 0u + 16u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10497u);
    set32(c.r[7], c.r[7].w[0] + 12120u);
    set32(c.r[8], c.r[8].w[0] + 12112u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 10000u);
    set32(c.r[11], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3BE4u); st64((c.r[29].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001C3BE4u) [[unlikely]] return; }
L_001C3BE4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 240u);
    c.budget -= 2;
L_001C3BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3BF4u); st32((c.r[16].w[0] + 256u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3BF4u) [[unlikely]] return; }
L_001C3BF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 260u), c.r[2].w[0]);  goto L_001C3C38; }
    c.f[15] = ld32((c.r[28].w[0] - 32684u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[12] = 0u;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10496u);
    set32(c.r[7], c.r[7].w[0] + 12136u);
    set32(c.r[8], c.r[8].w[0] + 12152u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3C34u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0027(c, 388u, depth + 1u); else { c.pc = 0x001BFDB0u; return; } if (c.pc != 0x001C3C34u) [[unlikely]] return; }
L_001C3C34:
    st32((c.r[16].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3C40u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3C40u) [[unlikely]] return; }
L_001C3C40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 264u), c.r[2].w[0]);  goto L_001C3C8C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[12] = c.r[3].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[13] = c.r[4].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u - 10495u);
    c.f[15] = c.r[3].w[0];
    set32(c.r[7], c.r[7].w[0] + 12160u);
    c.f[14] = 0u;
    set32(c.r[8], c.r[8].w[0] + 12152u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3C88u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 388u, depth + 1u); else { c.pc = 0x001BFDB0u; return; } if (c.pc != 0x001C3C88u) [[unlikely]] return; }
L_001C3C88:
    st32((c.r[16].w[0] + 264u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3C94u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3C94u) [[unlikely]] return; }
L_001C3C94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 268u), c.r[2].w[0]);  goto L_001C3CE0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[12] = c.r[3].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[13] = c.r[4].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u - 10494u);
    c.f[15] = c.r[3].w[0];
    set32(c.r[7], c.r[7].w[0] + 12176u);
    c.f[14] = 0u;
    set32(c.r[8], c.r[8].w[0] + 12152u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3CDCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 388u, depth + 1u); else { c.pc = 0x001BFDB0u; return; } if (c.pc != 0x001C3CDCu) [[unlikely]] return; }
L_001C3CDC:
    st32((c.r[16].w[0] + 268u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3CE8u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3CE8u) [[unlikely]] return; }
L_001C3CE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 272u), c.r[2].w[0]);  goto L_001C3D34; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[12] = c.r[3].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[13] = c.r[4].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u - 10493u);
    c.f[15] = c.r[3].w[0];
    set32(c.r[7], c.r[7].w[0] + 12192u);
    c.f[14] = 0u;
    set32(c.r[8], c.r[8].w[0] + 12152u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D30u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 388u, depth + 1u); else { c.pc = 0x001BFDB0u; return; } if (c.pc != 0x001C3D30u) [[unlikely]] return; }
L_001C3D30:
    st32((c.r[16].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D3Cu); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3D3Cu) [[unlikely]] return; }
L_001C3D3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 276u), c.r[2].w[0]);  goto L_001C3D88; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[12] = c.r[3].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[13] = c.r[4].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u - 10492u);
    c.f[15] = c.r[3].w[0];
    set32(c.r[7], c.r[7].w[0] + 12208u);
    c.f[14] = 0u;
    set32(c.r[8], c.r[8].w[0] + 12152u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D84u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 388u, depth + 1u); else { c.pc = 0x001BFDB0u; return; } if (c.pc != 0x001C3D84u) [[unlikely]] return; }
L_001C3D84:
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D90u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3D90u) [[unlikely]] return; }
L_001C3D90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 280u), c.r[2].w[0]);  goto L_001C3DDC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[12] = c.r[3].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[13] = c.r[4].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u - 10491u);
    c.f[15] = c.r[3].w[0];
    set32(c.r[7], c.r[7].w[0] + 12224u);
    c.f[14] = 0u;
    set32(c.r[8], c.r[8].w[0] + 12152u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3DD8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 388u, depth + 1u); else { c.pc = 0x001BFDB0u; return; } if (c.pc != 0x001C3DD8u) [[unlikely]] return; }
L_001C3DD8:
    st32((c.r[16].w[0] + 280u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3DE4u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3DE4u) [[unlikely]] return; }
L_001C3DE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 284u), c.r[2].w[0]);  goto L_001C3E30; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[12] = c.r[3].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[13] = c.r[4].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u - 10490u);
    c.f[15] = c.r[3].w[0];
    set32(c.r[7], c.r[7].w[0] + 12240u);
    c.f[14] = 0u;
    set32(c.r[8], c.r[8].w[0] + 12152u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E2Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 388u, depth + 1u); else { c.pc = 0x001BFDB0u; return; } if (c.pc != 0x001C3E2Cu) [[unlikely]] return; }
L_001C3E2C:
    st32((c.r[16].w[0] + 284u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E38u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3E38u) [[unlikely]] return; }
L_001C3E38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 288u), c.r[2].w[0]);  goto L_001C3E84; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[12] = c.r[3].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[13] = c.r[4].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u - 10489u);
    c.f[15] = c.r[3].w[0];
    set32(c.r[7], c.r[7].w[0] + 12256u);
    c.f[14] = 0u;
    set32(c.r[8], c.r[8].w[0] + 12152u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E80u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 388u, depth + 1u); else { c.pc = 0x001BFDB0u; return; } if (c.pc != 0x001C3E80u) [[unlikely]] return; }
L_001C3E80:
    st32((c.r[16].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E8Cu); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3E8Cu) [[unlikely]] return; }
L_001C3E8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  goto L_001C3ED8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[12] = c.r[3].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[13] = c.r[4].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u - 10488u);
    c.f[15] = c.r[3].w[0];
    set32(c.r[7], c.r[7].w[0] + 12272u);
    c.f[14] = 0u;
    set32(c.r[8], c.r[8].w[0] + 12152u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3ED4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 388u, depth + 1u); else { c.pc = 0x001BFDB0u; return; } if (c.pc != 0x001C3ED4u) [[unlikely]] return; }
L_001C3ED4:
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3EE0u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3EE0u) [[unlikely]] return; }
L_001C3EE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 296u), c.r[2].w[0]);  goto L_001C3F24; }
    c.f[15] = ld32((c.r[28].w[0] - 32660u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = 0u;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10487u);
    set32(c.r[7], c.r[7].w[0] + 12288u);
    set32(c.r[8], c.r[8].w[0] + 12304u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F20u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0027(c, 388u, depth + 1u); else { c.pc = 0x001BFDB0u; return; } if (c.pc != 0x001C3F20u) [[unlikely]] return; }
L_001C3F20:
    st32((c.r[16].w[0] + 296u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F2Cu); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3F2Cu) [[unlikely]] return; }
L_001C3F2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 300u), c.r[2].w[0]);  goto L_001C3F70; }
    c.f[15] = ld32((c.r[28].w[0] - 32660u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = 0u;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10486u);
    set32(c.r[7], c.r[7].w[0] + 12312u);
    set32(c.r[8], c.r[8].w[0] + 12304u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F6Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0027(c, 388u, depth + 1u); else { c.pc = 0x001BFDB0u; return; } if (c.pc != 0x001C3F6Cu) [[unlikely]] return; }
L_001C3F6C:
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F78u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3F78u) [[unlikely]] return; }
L_001C3F78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 304u), c.r[2].w[0]);  goto L_001C3FBC; }
    c.f[15] = ld32((c.r[28].w[0] - 32660u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = 0u;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10485u);
    set32(c.r[7], c.r[7].w[0] + 12328u);
    set32(c.r[8], c.r[8].w[0] + 12304u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3FB8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0027(c, 388u, depth + 1u); else { c.pc = 0x001BFDB0u; return; } if (c.pc != 0x001C3FB8u) [[unlikely]] return; }
L_001C3FB8:
    st32((c.r[16].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3FC4u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C3FC4u) [[unlikely]] return; }
L_001C3FC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 308u), c.r[2].w[0]);  [[clang::musttail]] return unit_0029(c, 3u, depth); }
    c.f[15] = ld32((c.r[28].w[0] - 32660u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = 0u;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10484u);
    set32(c.r[7], c.r[7].w[0] + 12344u);
    set32(c.r[8], c.r[8].w[0] + 12304u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4004u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0027(c, 388u, depth + 1u); else { c.pc = 0x001BFDB0u; return; } if (c.pc != 0x001C4004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0029(c, 2u, depth);
}

}
