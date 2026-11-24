#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0044[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 19, 0, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0,
    0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 0,
    0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 40, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90,
    0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104,
    105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 115,
    0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    159, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0,
    0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0,
    0, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189,
    0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197,
    0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0,
    0, 210, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0,
    218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    227, 0, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 245, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 251, 0, 252,
    0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270,
    0, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0,
    287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291,
    0, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 299, 0,
    0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0,
    0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0,
    0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0,
    0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 331, 0, 0,
    0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 339,
    0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 345,
    0, 346, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 361, 0,
    0, 362, 0, 0, 363, 0, 364, 0, 0, 365, 0, 366, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 371, 0,
    372, 0, 0, 373, 0, 0, 374, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 381, 0, 0,
    382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 0,
    0, 392, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 397, 0, 398, 0, 0, 399, 0, 400,
    0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 405, 0, 406, 0, 407, 0, 0, 408, 0, 409, 0, 410,
    0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0,
    0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 421, 0, 422, 0, 423, 0, 424, 0, 0, 0, 0,
    0, 425, 0, 0, 0, 426, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0,
    0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438,
    0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0,
    0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0,
    0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 0,
    0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0,
    0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0,
    0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0,
    0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0,
    0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0,
    502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 505, 506, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512,
    0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 517, 0, 518, 0, 0, 0, 519, 0, 520, 0, 0, 521,
    0, 0, 0, 522, 0, 523, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0,
    0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0,
    0, 531, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 535, 0, 536, 0, 0, 0, 537, 0, 0,
    0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 541, 0, 0,
    0, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0,
    0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0044(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00230000;
    case 2u: goto L_00230004;
    case 3u: goto L_0023000C;
    case 4u: goto L_00230024;
    case 5u: goto L_0023002C;
    case 6u: goto L_00230034;
    case 7u: goto L_00230038;
    case 8u: goto L_00230048;
    case 9u: goto L_00230074;
    case 10u: goto L_0023007C;
    case 11u: goto L_002300A4;
    case 12u: goto L_002300AC;
    case 13u: goto L_002300C4;
    case 14u: goto L_002300E4;
    case 15u: goto L_00230104;
    case 16u: goto L_0023011C;
    case 17u: goto L_00230148;
    case 18u: goto L_00230150;
    case 19u: goto L_00230184;
    case 20u: goto L_00230190;
    case 21u: goto L_00230198;
    case 22u: goto L_002301A8;
    case 23u: goto L_002301EC;
    case 24u: goto L_002301F4;
    case 25u: goto L_00230200;
    case 26u: goto L_0023025C;
    case 27u: goto L_0023026C;
    case 28u: goto L_00230278;
    case 29u: goto L_00230288;
    case 30u: goto L_00230294;
    case 31u: goto L_002302C8;
    case 32u: goto L_002302D8;
    case 33u: goto L_002302E8;
    case 34u: goto L_002302F4;
    case 35u: goto L_00230308;
    case 36u: goto L_00230314;
    case 37u: goto L_00230338;
    case 38u: goto L_0023035C;
    case 39u: goto L_00230388;
    case 40u: goto L_00230404;
    case 41u: goto L_00230408;
    case 42u: goto L_00230414;
    case 43u: goto L_00230428;
    case 44u: goto L_00230468;
    case 45u: goto L_00230490;
    case 46u: goto L_00230498;
    case 47u: goto L_002304A0;
    case 48u: goto L_002304AC;
    case 49u: goto L_002304C0;
    case 50u: goto L_002304EC;
    case 51u: goto L_0023051C;
    case 52u: goto L_00230524;
    case 53u: goto L_0023053C;
    case 54u: goto L_00230544;
    case 55u: goto L_00230550;
    case 56u: goto L_00230560;
    case 57u: goto L_002305A0;
    case 58u: goto L_002305C4;
    case 59u: goto L_002305D0;
    case 60u: goto L_002305E8;
    case 61u: goto L_00230600;
    case 62u: goto L_00230664;
    case 63u: goto L_002306D8;
    case 64u: goto L_00230850;
    case 65u: goto L_00230854;
    case 66u: goto L_00230878;
    case 67u: goto L_002308C4;
    case 68u: goto L_00230984;
    case 69u: goto L_002309B8;
    case 70u: goto L_00230AC4;
    case 71u: goto L_00230BC4;
    case 72u: goto L_00230C80;
    case 73u: goto L_00230C88;
    case 74u: goto L_00230D18;
    case 75u: goto L_00230D38;
    case 76u: goto L_00230D5C;
    case 77u: goto L_00230D74;
    case 78u: goto L_00230D98;
    case 79u: goto L_00230DC0;
    case 80u: goto L_00230DF8;
    case 81u: goto L_00230E08;
    case 82u: goto L_00230E20;
    case 83u: goto L_00230E30;
    case 84u: goto L_00230E60;
    case 85u: goto L_00230EA0;
    case 86u: goto L_00230EB8;
    case 87u: goto L_00230EC4;
    case 88u: goto L_00230ED4;
    case 89u: goto L_00230EEC;
    case 90u: goto L_00230EFC;
    case 91u: goto L_00230F08;
    case 92u: goto L_00230F10;
    case 93u: goto L_00230F2C;
    case 94u: goto L_00230F38;
    case 95u: goto L_00230F60;
    case 96u: goto L_00230F7C;
    case 97u: goto L_00230F90;
    case 98u: goto L_00230FA8;
    case 99u: goto L_00230FD8;
    case 100u: goto L_00230FF0;
    case 101u: goto L_00231018;
    case 102u: goto L_00231020;
    case 103u: goto L_00231054;
    case 104u: goto L_0023107C;
    case 105u: goto L_00231080;
    case 106u: goto L_00231098;
    case 107u: goto L_002310B4;
    case 108u: goto L_002310E8;
    case 109u: goto L_00231114;
    case 110u: goto L_0023112C;
    case 111u: goto L_00231138;
    case 112u: goto L_00231148;
    case 113u: goto L_00231160;
    case 114u: goto L_0023116C;
    case 115u: goto L_0023117C;
    case 116u: goto L_00231194;
    case 117u: goto L_002311A8;
    case 118u: goto L_002311C0;
    case 119u: goto L_002311F0;
    case 120u: goto L_00231208;
    case 121u: goto L_00231238;
    case 122u: goto L_00231250;
    case 123u: goto L_00231278;
    case 124u: goto L_0023128C;
    case 125u: goto L_002312B0;
    case 126u: goto L_002312B8;
    case 127u: goto L_002312C8;
    case 128u: goto L_002312EC;
    case 129u: goto L_00231320;
    case 130u: goto L_00231360;
    case 131u: goto L_00231378;
    case 132u: goto L_002313AC;
    case 133u: goto L_002313BC;
    case 134u: goto L_002313D0;
    case 135u: goto L_00231400;
    case 136u: goto L_00231420;
    case 137u: goto L_00231454;
    case 138u: goto L_002314D0;
    case 139u: goto L_002314E0;
    case 140u: goto L_002314F0;
    case 141u: goto L_00231508;
    case 142u: goto L_002315A8;
    case 143u: goto L_002315DC;
    case 144u: goto L_00231630;
    case 145u: goto L_00231644;
    case 146u: goto L_00231650;
    case 147u: goto L_00231680;
    case 148u: goto L_002316C0;
    case 149u: goto L_002316F0;
    case 150u: goto L_00231720;
    case 151u: goto L_00231778;
    case 152u: goto L_002317D0;
    case 153u: goto L_00231824;
    case 154u: goto L_0023189C;
    case 155u: goto L_002318AC;
    case 156u: goto L_002318BC;
    case 157u: goto L_002318D4;
    case 158u: goto L_002318D8;
    case 159u: goto L_00231900;
    case 160u: goto L_00231904;
    case 161u: goto L_0023192C;
    case 162u: goto L_00231994;
    case 163u: goto L_002319C0;
    case 164u: goto L_002319E4;
    case 165u: goto L_00231A04;
    case 166u: goto L_00231A14;
    case 167u: goto L_00231A34;
    case 168u: goto L_00231A80;
    case 169u: goto L_00231A90;
    case 170u: goto L_00231AD0;
    case 171u: goto L_00231AE8;
    case 172u: goto L_00231B0C;
    case 173u: goto L_00231BA8;
    case 174u: goto L_00231BBC;
    case 175u: goto L_00231BC0;
    case 176u: goto L_00231BE0;
    case 177u: goto L_00231C04;
    case 178u: goto L_00231C14;
    case 179u: goto L_00231C30;
    case 180u: goto L_00231C64;
    case 181u: goto L_00231C74;
    case 182u: goto L_00231C88;
    case 183u: goto L_00231C94;
    case 184u: goto L_00231CA4;
    case 185u: goto L_00231CB0;
    case 186u: goto L_00231CBC;
    case 187u: goto L_00231CD0;
    case 188u: goto L_00231CE0;
    case 189u: goto L_00231CFC;
    case 190u: goto L_00231D1C;
    case 191u: goto L_00231D3C;
    case 192u: goto L_00231D5C;
    case 193u: goto L_00231D7C;
    case 194u: goto L_00231D9C;
    case 195u: goto L_00231DBC;
    case 196u: goto L_00231DDC;
    case 197u: goto L_00231DFC;
    case 198u: goto L_00231E1C;
    case 199u: goto L_00231E3C;
    case 200u: goto L_00231E7C;
    case 201u: goto L_00231EAC;
    case 202u: goto L_00231EB8;
    case 203u: goto L_00231ED0;
    case 204u: goto L_00231EF0;
    case 205u: goto L_00231F1C;
    case 206u: goto L_00231F24;
    case 207u: goto L_00231F54;
    case 208u: goto L_00231F68;
    case 209u: goto L_00231F70;
    case 210u: goto L_00231F84;
    case 211u: goto L_00231F90;
    case 212u: goto L_00231FA4;
    case 213u: goto L_00231FB0;
    case 214u: goto L_00231FC4;
    case 215u: goto L_00231FD0;
    case 216u: goto L_00231FE0;
    case 217u: goto L_00231FEC;
    case 218u: goto L_00232000;
    case 219u: goto L_00232054;
    case 220u: goto L_00232068;
    case 221u: goto L_00232074;
    case 222u: goto L_002320AC;
    case 223u: goto L_002320B4;
    case 224u: goto L_002320C4;
    case 225u: goto L_002320CC;
    case 226u: goto L_002320F0;
    case 227u: goto L_00232100;
    case 228u: goto L_0023210C;
    case 229u: goto L_0023211C;
    case 230u: goto L_00232128;
    case 231u: goto L_00232130;
    case 232u: goto L_0023213C;
    case 233u: goto L_0023214C;
    case 234u: goto L_00232154;
    case 235u: goto L_00232160;
    case 236u: goto L_00232180;
    case 237u: goto L_00232190;
    case 238u: goto L_002321AC;
    case 239u: goto L_002321B8;
    case 240u: goto L_002321C0;
    case 241u: goto L_002321C8;
    case 242u: goto L_002321D0;
    case 243u: goto L_002321D8;
    case 244u: goto L_002321F0;
    case 245u: goto L_002321F8;
    case 246u: goto L_00232200;
    case 247u: goto L_0023223C;
    case 248u: goto L_00232254;
    case 249u: goto L_0023225C;
    case 250u: goto L_0023226C;
    case 251u: goto L_00232274;
    case 252u: goto L_0023227C;
    case 253u: goto L_00232294;
    case 254u: goto L_002322B4;
    case 255u: goto L_002322C4;
    case 256u: goto L_002322D4;
    case 257u: goto L_002322DC;
    case 258u: goto L_002322E4;
    case 259u: goto L_002322EC;
    case 260u: goto L_002322F4;
    case 261u: goto L_0023233C;
    case 262u: goto L_0023235C;
    case 263u: goto L_00232370;
    case 264u: goto L_00232388;
    case 265u: goto L_0023239C;
    case 266u: goto L_002323A8;
    case 267u: goto L_002323BC;
    case 268u: goto L_002323C8;
    case 269u: goto L_002323D8;
    case 270u: goto L_002323FC;
    case 271u: goto L_0023240C;
    case 272u: goto L_00232418;
    case 273u: goto L_00232424;
    case 274u: goto L_0023243C;
    case 275u: goto L_0023245C;
    case 276u: goto L_00232464;
    case 277u: goto L_00232494;
    case 278u: goto L_002324B8;
    case 279u: goto L_002324C4;
    case 280u: goto L_002324EC;
    case 281u: goto L_00232508;
    case 282u: goto L_0023251C;
    case 283u: goto L_0023252C;
    case 284u: goto L_0023253C;
    case 285u: goto L_00232550;
    case 286u: goto L_0023256C;
    case 287u: goto L_00232580;
    case 288u: goto L_00232588;
    case 289u: goto L_002325C4;
    case 290u: goto L_002325EC;
    case 291u: goto L_002325FC;
    case 292u: goto L_0023260C;
    case 293u: goto L_00232618;
    case 294u: goto L_00232624;
    case 295u: goto L_00232644;
    case 296u: goto L_00232654;
    case 297u: goto L_00232664;
    case 298u: goto L_00232670;
    case 299u: goto L_00232678;
    case 300u: goto L_0023268C;
    case 301u: goto L_002326BC;
    case 302u: goto L_002326D0;
    case 303u: goto L_002326E4;
    case 304u: goto L_002326F4;
    case 305u: goto L_0023270C;
    case 306u: goto L_00232718;
    case 307u: goto L_0023272C;
    case 308u: goto L_0023273C;
    case 309u: goto L_00232748;
    case 310u: goto L_00232750;
    case 311u: goto L_00232774;
    case 312u: goto L_00232798;
    case 313u: goto L_002327A0;
    case 314u: goto L_002327AC;
    case 315u: goto L_002327C8;
    case 316u: goto L_002327E0;
    case 317u: goto L_002327F4;
    case 318u: goto L_00232810;
    case 319u: goto L_00232828;
    case 320u: goto L_0023283C;
    case 321u: goto L_00232848;
    case 322u: goto L_00232854;
    case 323u: goto L_0023285C;
    case 324u: goto L_00232874;
    case 325u: goto L_00232894;
    case 326u: goto L_002328A0;
    case 327u: goto L_002328A8;
    case 328u: goto L_002328B4;
    case 329u: goto L_002328E0;
    case 330u: goto L_002328E8;
    case 331u: goto L_002328F4;
    case 332u: goto L_00232904;
    case 333u: goto L_0023291C;
    case 334u: goto L_00232934;
    case 335u: goto L_00232944;
    case 336u: goto L_00232954;
    case 337u: goto L_00232964;
    case 338u: goto L_00232974;
    case 339u: goto L_0023297C;
    case 340u: goto L_00232984;
    case 341u: goto L_0023299C;
    case 342u: goto L_002329D0;
    case 343u: goto L_002329EC;
    case 344u: goto L_002329F4;
    case 345u: goto L_002329FC;
    case 346u: goto L_00232A04;
    case 347u: goto L_00232A0C;
    case 348u: goto L_00232A1C;
    case 349u: goto L_00232A24;
    case 350u: goto L_00232A38;
    case 351u: goto L_00232A4C;
    case 352u: goto L_00232A64;
    case 353u: goto L_00232A70;
    case 354u: goto L_00232A80;
    case 355u: goto L_00232AA8;
    case 356u: goto L_00232ABC;
    case 357u: goto L_00232ACC;
    case 358u: goto L_00232AD4;
    case 359u: goto L_00232ADC;
    case 360u: goto L_00232AF0;
    case 361u: goto L_00232AF8;
    case 362u: goto L_00232B04;
    case 363u: goto L_00232B10;
    case 364u: goto L_00232B18;
    case 365u: goto L_00232B24;
    case 366u: goto L_00232B2C;
    case 367u: goto L_00232B34;
    case 368u: goto L_00232B4C;
    case 369u: goto L_00232B58;
    case 370u: goto L_00232B60;
    case 371u: goto L_00232B78;
    case 372u: goto L_00232B80;
    case 373u: goto L_00232B8C;
    case 374u: goto L_00232B98;
    case 375u: goto L_00232BA0;
    case 376u: goto L_00232BAC;
    case 377u: goto L_00232BB4;
    case 378u: goto L_00232BC8;
    case 379u: goto L_00232BE0;
    case 380u: goto L_00232BEC;
    case 381u: goto L_00232BF4;
    case 382u: goto L_00232C00;
    case 383u: goto L_00232C14;
    case 384u: goto L_00232C28;
    case 385u: goto L_00232C3C;
    case 386u: goto L_00232C48;
    case 387u: goto L_00232C54;
    case 388u: goto L_00232C5C;
    case 389u: goto L_00232C64;
    case 390u: goto L_00232C6C;
    case 391u: goto L_00232C74;
    case 392u: goto L_00232C84;
    case 393u: goto L_00232C94;
    case 394u: goto L_00232C9C;
    case 395u: goto L_00232CCC;
    case 396u: goto L_00232CD8;
    case 397u: goto L_00232CE0;
    case 398u: goto L_00232CE8;
    case 399u: goto L_00232CF4;
    case 400u: goto L_00232CFC;
    case 401u: goto L_00232D08;
    case 402u: goto L_00232D1C;
    case 403u: goto L_00232D30;
    case 404u: goto L_00232D44;
    case 405u: goto L_00232D50;
    case 406u: goto L_00232D58;
    case 407u: goto L_00232D60;
    case 408u: goto L_00232D6C;
    case 409u: goto L_00232D74;
    case 410u: goto L_00232D7C;
    case 411u: goto L_00232D90;
    case 412u: goto L_00232DA4;
    case 413u: goto L_00232DB8;
    case 414u: goto L_00232DC0;
    case 415u: goto L_00232DDC;
    case 416u: goto L_00232DF8;
    case 417u: goto L_00232E08;
    case 418u: goto L_00232E14;
    case 419u: goto L_00232E3C;
    case 420u: goto L_00232E48;
    case 421u: goto L_00232E54;
    case 422u: goto L_00232E5C;
    case 423u: goto L_00232E64;
    case 424u: goto L_00232E6C;
    case 425u: goto L_00232E84;
    case 426u: goto L_00232E94;
    case 427u: goto L_00232E9C;
    case 428u: goto L_00232EA4;
    case 429u: goto L_00232EC4;
    case 430u: goto L_00232EE0;
    case 431u: goto L_00232F14;
    case 432u: goto L_00232F24;
    case 433u: goto L_00232F3C;
    case 434u: goto L_00232F64;
    case 435u: goto L_00232F74;
    case 436u: goto L_00232F84;
    case 437u: goto L_00232FA0;
    case 438u: goto L_00232FFC;
    case 439u: goto L_00233010;
    case 440u: goto L_00233020;
    case 441u: goto L_00233030;
    case 442u: goto L_00233040;
    case 443u: goto L_0023307C;
    case 444u: goto L_00233128;
    case 445u: goto L_00233138;
    case 446u: goto L_00233170;
    case 447u: goto L_0023318C;
    case 448u: goto L_0023319C;
    case 449u: goto L_002331B0;
    case 450u: goto L_002331D4;
    case 451u: goto L_00233200;
    case 452u: goto L_00233210;
    case 453u: goto L_00233220;
    case 454u: goto L_00233294;
    case 455u: goto L_002332D0;
    case 456u: goto L_002332EC;
    case 457u: goto L_0023332C;
    case 458u: goto L_0023335C;
    case 459u: goto L_00233374;
    case 460u: goto L_00233388;
    case 461u: goto L_002333CC;
    case 462u: goto L_002333F0;
    case 463u: goto L_00233428;
    case 464u: goto L_002334D0;
    case 465u: goto L_002334EC;
    case 466u: goto L_002334F4;
    case 467u: goto L_00233510;
    case 468u: goto L_00233524;
    case 469u: goto L_00233538;
    case 470u: goto L_00233558;
    case 471u: goto L_00233590;
    case 472u: goto L_002335DC;
    case 473u: goto L_002335F0;
    case 474u: goto L_00233614;
    case 475u: goto L_00233630;
    case 476u: goto L_0023364C;
    case 477u: goto L_0023365C;
    case 478u: goto L_00233670;
    case 479u: goto L_002336A8;
    case 480u: goto L_002336C4;
    case 481u: goto L_002336E8;
    case 482u: goto L_00233710;
    case 483u: goto L_00233748;
    case 484u: goto L_00233764;
    case 485u: goto L_00233788;
    case 486u: goto L_002337B0;
    case 487u: goto L_002337EC;
    case 488u: goto L_00233808;
    case 489u: goto L_00233834;
    case 490u: goto L_00233850;
    case 491u: goto L_00233880;
    case 492u: goto L_002338A8;
    case 493u: goto L_002338CC;
    case 494u: goto L_002338F8;
    case 495u: goto L_00233910;
    case 496u: goto L_00233920;
    case 497u: goto L_00233930;
    case 498u: goto L_00233940;
    case 499u: goto L_00233950;
    case 500u: goto L_00233960;
    case 501u: goto L_00233970;
    case 502u: goto L_00233980;
    case 503u: goto L_00233990;
    case 504u: goto L_002339C8;
    case 505u: goto L_002339D8;
    case 506u: goto L_002339DC;
    case 507u: goto L_00233AAC;
    case 508u: goto L_00233AC0;
    case 509u: goto L_00233B30;
    case 510u: goto L_00233B54;
    case 511u: goto L_00233B64;
    case 512u: goto L_00233B7C;
    case 513u: goto L_00233B84;
    case 514u: goto L_00233B9C;
    case 515u: goto L_00233BB4;
    case 516u: goto L_00233BC4;
    case 517u: goto L_00233BD0;
    case 518u: goto L_00233BD8;
    case 519u: goto L_00233BE8;
    case 520u: goto L_00233BF0;
    case 521u: goto L_00233BFC;
    case 522u: goto L_00233C0C;
    case 523u: goto L_00233C14;
    case 524u: goto L_00233C24;
    case 525u: goto L_00233C30;
    case 526u: goto L_00233C48;
    case 527u: goto L_00233C70;
    case 528u: goto L_00233C84;
    case 529u: goto L_00233CB0;
    case 530u: goto L_00233CF0;
    case 531u: goto L_00233D04;
    case 532u: goto L_00233D0C;
    case 533u: goto L_00233D20;
    case 534u: goto L_00233D50;
    case 535u: goto L_00233D5C;
    case 536u: goto L_00233D64;
    case 537u: goto L_00233D74;
    case 538u: goto L_00233D90;
    case 539u: goto L_00233DD8;
    case 540u: goto L_00233DEC;
    case 541u: goto L_00233DF4;
    case 542u: goto L_00233E08;
    case 543u: goto L_00233E24;
    case 544u: goto L_00233E30;
    case 545u: goto L_00233E38;
    case 546u: goto L_00233E60;
    case 547u: goto L_00233EA0;
    case 548u: goto L_00233EB8;
    case 549u: goto L_00233EE4;
    case 550u: goto L_00233EF0;
    case 551u: goto L_00233F54;
    case 552u: goto L_00233F68;
    case 553u: goto L_00233F88;
    default: bad_entry(c, 0x00230000u); return;
    }
L_00230000:
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00230004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023000Cu);  if (depth < kMaxDepth) unit_0045(c, 78u, depth + 1u); else { c.pc = 0x002355F0u; return; } if (c.pc != 0x0023000Cu) [[unlikely]] return; }
L_0023000C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00230034; } }
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[3], c.r[4].w[0] + 124u);
    c.budget -= 4;
L_00230024:
    set32(c.r[2], c.r[2].w[0] - 30u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[4].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_00230034; } }
    goto L_00230030;
L_0023002C:
    st32((c.r[4].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 1;
L_00230030:
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_00230034:
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 1;
L_00230038:
    set32(c.r[20], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230048u); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00234190u; return; } if (c.pc != 0x00230048u) [[unlikely]] return; }
L_00230048:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 124u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[23], c.r[20].w[0] + 124u);  if (t) { goto L_00230524; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 120u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[21], c.r[20].w[0] + 120u);  if (t) { goto L_002300CC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230074u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0045(c, 234u, depth + 1u); else { c.pc = 0x00236C10u; return; } if (c.pc != 0x00230074u) [[unlikely]] return; }
L_00230074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023007Cu); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 286u, depth + 1u); else { c.pc = 0x002372E0u; return; } if (c.pc != 0x0023007Cu) [[unlikely]] return; }
L_0023007C:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 29360u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002300A4u); st32((c.r[29].w[0] + 212u), c.f[0]);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x002300A4u) [[unlikely]] return; }
L_002300A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002300ACu); set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x002300ACu) [[unlikely]] return; }
L_002300AC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 208u);
    set32(c.r[7], c.r[29].w[0] + 236u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002300C4u); set32(c.r[8], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_000F(c, 60u, depth + 1u); else { c.pc = 0x0015C690u; return; } if (c.pc != 0x002300C4u) [[unlikely]] return; }
L_002300C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (t) { goto L_00230188; } }
L_002300CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 436u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 436u)));  goto L_00230108; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002300E4u); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 22u, depth + 1u); else { c.pc = 0x00234240u; return; } if (c.pc != 0x002300E4u) [[unlikely]] return; }
L_002300E4:
    set32(c.r[2], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00230104; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x439B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43110000u);
    st32((c.r[29].w[0] + 236u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 232u), c.r[2].w[0]);  if (t) { goto L_00230184; } }
L_00230104:
    set32(c.r[3], ld32((c.r[17].w[0] + 436u)));
    c.budget -= 1;
L_00230108:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 1u);  goto L_00230140; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023011Cu); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 22u, depth + 1u); else { c.pc = 0x00234240u; return; } if (c.pc != 0x0023011Cu) [[unlikely]] return; }
L_0023011C:
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023013C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    st32((c.r[29].w[0] + 236u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 232u), c.r[2].w[0]);  if (t) { goto L_00230184; } }
L_0023013C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00230140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230148u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x00230148u) [[unlikely]] return; }
L_00230148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230150u); set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x00230150u) [[unlikely]] return; }
L_00230150:
    set32(c.r[6], ld32((c.r[17].w[0] + 436u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 30864u);
    set32(c.r[7], c.r[29].w[0] + 236u);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[8], c.r[29].w[0] + 232u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230184u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 60u, depth + 1u); else { c.pc = 0x0015C690u; return; } if (c.pc != 0x00230184u) [[unlikely]] return; }
L_00230184:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_00230188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230190u);  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x00230190u) [[unlikely]] return; }
L_00230190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230198u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00230198u) [[unlikely]] return; }
L_00230198:
    c.f[20] = ld32((c.r[29].w[0] + 232u));
    c.f[21] = ld32((c.r[29].w[0] + 236u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002301A8u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x002301A8u) [[unlikely]] return; }
L_002301A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 7840u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 7844u));
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 7852u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[29].w[0] + 200u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 192u), c.f[2]);
    st32((c.r[29].w[0] + 196u), c.f[1]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 204u), c.f[0]);
    st32((c.r[29].w[0] + 192u), c.f[21]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002301ECu); st32((c.r[29].w[0] + 196u), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002301ECu) [[unlikely]] return; }
L_002301EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002301F4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x002301F4u) [[unlikely]] return; }
L_002301F4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230200u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00230200u) [[unlikely]] return; }
L_00230200:
    set32(c.r[3], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[4], 0u + 163u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 12u)));  goto L_002302A0; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023029C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 112u)));  goto L_00230280; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_00230244; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002302FC; } }
L_00230244:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 112u)));  goto L_00230264; }
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023025Cu); set32(c.r[5], c.r[2].w[0] + 14u);  if (depth < kMaxDepth) unit_0013(c, 393u, depth + 1u); else { c.pc = 0x0016FF80u; return; } if (c.pc != 0x0023025Cu) [[unlikely]] return; }
L_0023025C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 112u)));  if (t) { goto L_00230270; } }
L_00230264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023026Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0013(c, 393u, depth + 1u); else { c.pc = 0x0016FF80u; return; } if (c.pc != 0x0023026Cu) [[unlikely]] return; }
L_0023026C:
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_00230270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230278u); c.f[12] = ld32((c.r[20].w[0] + 128u));  if (depth < kMaxDepth) unit_0014(c, 7u, depth + 1u); else { c.pc = 0x001700C0u; return; } if (c.pc != 0x00230278u) [[unlikely]] return; }
L_00230278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[23].w[0])));  if (t) { goto L_0023030C; } }
L_00230280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230288u); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_0013(c, 393u, depth + 1u); else { c.pc = 0x0016FF80u; return; } if (c.pc != 0x00230288u) [[unlikely]] return; }
L_00230288:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230294u); set32(c.r[4], ld32((c.r[17].w[0] + 112u)));  if (depth < kMaxDepth) unit_0014(c, 7u, depth + 1u); else { c.pc = 0x001700C0u; return; } if (c.pc != 0x00230294u) [[unlikely]] return; }
L_00230294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230308; } }
L_0023029C:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_002302A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 112u)));  goto L_002302E0; }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 112u)));  goto L_002302D0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002302C8u); set32(c.r[5], c.r[2].w[0] + 6u);  if (depth < kMaxDepth) unit_0013(c, 393u, depth + 1u); else { c.pc = 0x0016FF80u; return; } if (c.pc != 0x002302C8u) [[unlikely]] return; }
L_002302C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 112u)));  if (t) { goto L_002302EC; } }
L_002302D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002302D8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0013(c, 393u, depth + 1u); else { c.pc = 0x0016FF80u; return; } if (c.pc != 0x002302D8u) [[unlikely]] return; }
L_002302D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002302E8; } }
L_002302E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002302E8u); set32(c.r[5], 0u + 25u);  if (depth < kMaxDepth) unit_0013(c, 393u, depth + 1u); else { c.pc = 0x0016FF80u; return; } if (c.pc != 0x002302E8u) [[unlikely]] return; }
L_002302E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_002302EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002302F4u); c.f[12] = ld32((c.r[20].w[0] + 128u));  if (depth < kMaxDepth) unit_0014(c, 7u, depth + 1u); else { c.pc = 0x001700C0u; return; } if (c.pc != 0x002302F4u) [[unlikely]] return; }
L_002302F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230308; } }
L_002302FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230308u); set32(c.r[5], c.r[5].w[0] - 29014u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00230308u) [[unlikely]] return; }
L_00230308:
    set32(c.r[4], ld32((c.r[23].w[0])));
    c.budget -= 1;
L_0023030C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230314u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00230314u) [[unlikely]] return; }
L_00230314:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 120u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 108u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230338u); set32(c.r[4], ld32((c.r[17].w[0] + 112u)));  if (depth < kMaxDepth) unit_0014(c, 16u, depth + 1u); else { c.pc = 0x001701C0u; return; } if (c.pc != 0x00230338u) [[unlikely]] return; }
L_00230338:
    c.f[1] = ld32((c.r[20].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 128u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023035Cu); set32(c.r[18], c.r[20].w[0] + 128u);  if (depth < kMaxDepth) unit_0014(c, 3u, depth + 1u); else { c.pc = 0x00170040u; return; } if (c.pc != 0x0023035Cu) [[unlikely]] return; }
L_0023035C:
    c.f[1] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[21].w[0])));  goto L_00230374; }
    st32((c.r[18].w[0]), 0u);
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 2;
L_00230374:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00230528; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230388u); set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00230388u) [[unlikely]] return; }
L_00230388:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.f[1] = c.r[3].w[0];
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_002303B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[21] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_002303D8; } }
L_002303B0:
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_002303CC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[21] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_002303D8; } }
L_002303CC:
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 3;
L_002303D8:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0xC1D00000u);  goto L_002303F8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00230400; } }
L_002303F8:
    c.f[20] = c.r[2].w[0];
    set32(c.r[4], 0u + 2u);
    c.budget -= 2;
L_00230400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230408u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x00230408u) [[unlikely]] return; }
    goto L_00230408;
L_00230404:
    c.budget -= 1;
L_00230408:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230414u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00230414u) [[unlikely]] return; }
L_00230414:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[3], 0u + 164u);
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230428u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x00230428u) [[unlikely]] return; }
L_00230428:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[2] = ld32((c.r[3].w[0] + 7840u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 184u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 7844u));
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[29].w[0] + 176u), c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 7852u));
    st32((c.r[29].w[0] + 180u), c.f[1]);
    st32((c.r[29].w[0] + 180u), c.f[20]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230468u); st32((c.r[29].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00230468u) [[unlikely]] return; }
L_00230468:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 124u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 20u);
    set32(c.r[8], 0u + 2u);
    set32(c.r[9], c.r[2].w[0] << 24);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230490u); set32(c.r[21], c.r[20].w[0] + 124u);  if (depth < kMaxDepth) unit_003B(c, 239u, depth + 1u); else { c.pc = 0x0020E490u; return; } if (c.pc != 0x00230490u) [[unlikely]] return; }
L_00230490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230498u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_003B(c, 248u, depth + 1u); else { c.pc = 0x0020E740u; return; } if (c.pc != 0x00230498u) [[unlikely]] return; }
L_00230498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002304A0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x002304A0u) [[unlikely]] return; }
L_002304A0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002304ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002304ACu) [[unlikely]] return; }
L_002304AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[3], 0u + 166u);
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002304C0u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x002304C0u) [[unlikely]] return; }
L_002304C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 7852u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 168u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 172u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002304ECu); st32((c.r[29].w[0] + 164u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002304ECu) [[unlikely]] return; }
L_002304EC:
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 54509ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 24);
    set32(c.r[7], 0u + 20u);
    c.r[9].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[8], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023051Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003B(c, 239u, depth + 1u); else { c.pc = 0x0020E490u; return; } if (c.pc != 0x0023051Cu) [[unlikely]] return; }
L_0023051C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230524u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_003B(c, 248u, depth + 1u); else { c.pc = 0x0020E740u; return; } if (c.pc != 0x00230524u) [[unlikely]] return; }
L_00230524:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00230528:
    c.r[2].d[0] = c.r[16].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022FF18u | kUnwind; return; } [[clang::musttail]] return unit_0043(c, 577u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023053Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0023053Cu) [[unlikely]] return; }
L_0023053C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230544u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x00230544u) [[unlikely]] return; }
L_00230544:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230550u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00230550u) [[unlikely]] return; }
L_00230550:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 2049u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230560u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x00230560u) [[unlikely]] return; }
L_00230560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_002305A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002305C4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x002305C4u) [[unlikely]] return; }
L_002305C4:
    set32(c.r[17], ld32((c.r[18].w[0] + 436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002305D0u); set32(c.r[4], ld32((c.r[18].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x002305D0u) [[unlikely]] return; }
L_002305D0:
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002305E8u); set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002305E8u) [[unlikely]] return; }
L_002305E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230600u); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00230600u) [[unlikely]] return; }
L_00230600:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[17].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - 29936u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29932u);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 352u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 29928u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[3].w[0]));
    st32((c.r[6].w[0] + 48u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 29924u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    st32((c.r[6].w[0] + 44u), c.f[1]);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[6].w[0] + 52u), c.f[0]);
    set32(c.r[2], 0u + 16u);
    c.f[0] = ld32((c.r[4].w[0]));
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[6].w[0] + 56u), c.f[0]);  if (t) { goto L_00230680; } }
L_00230664:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00230664u | kUnwind; return; } goto L_00230664; } }
L_00230680:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] - 29916u);
    set32(c.r[2], c.r[2].w[0] - 29912u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 29908u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 29920u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 72u), c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002306D8u); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002306D8u) [[unlikely]] return; }
L_002306D8:
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_00230710; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 72u));  if (t) { goto L_00230728; } }
L_00230710:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 6;
L_00230728:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[3].w[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[4].w[0] << 24);  if (t) { goto L_00230760; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_0023077C; } }
L_00230760:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
L_0023077C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_002307BC; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_002307D4; } }
L_002307BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_002307D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_00230814; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 352u)));  if (t) { goto L_0023082C; } }
L_00230814:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.budget -= 6;
L_0023082C:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00230850:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.budget -= 1;
L_00230854:
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230878u); set32(c.r[4], ld32((c.r[4].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x00230878u) [[unlikely]] return; }
L_00230878:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[3], ld32((c.r[20].w[0] + 436u)));
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0] + 1120u)));
    set32(c.r[2], c.r[2].w[0] - 30016u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], 0u + 1u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002308C4u); set32(c.r[19], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002308C4u) [[unlikely]] return; }
L_002308C4:
    set32(c.r[5], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002308DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_002308FC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002308DC:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_002308FC; }
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 100u);  if (t) { goto L_00230900; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002308FC:
    set32(c.r[3], 0u + 100u);
    c.budget -= 1;
L_00230900:
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 4;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0023091C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_0023093C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0023091C:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_0023093C; }
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 100u);  if (t) { goto L_00230940; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023093C:
    set32(c.r[3], 0u + 100u);
    c.budget -= 1;
L_00230940:
    set32(c.r[5], 0u + 20u);
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 5;
    if (c.r[16].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 100u)));  goto L_00230964; }
    set32(c.r[7], 0u + 2u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[7].d[0]) { set32(c.r[5], ld32((c.r[20].w[0] + 436u)));  goto L_00230990; }
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_00230964:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00230D9C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00230D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230984u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00230984u) [[unlikely]] return; }
L_00230984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D98; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 436u)));
    c.budget -= 1;
L_00230990:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 100u)));  goto L_00230D3C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 29216u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[5].w[0];  c.pc = t; if (t - 0x00230000u < 16384u) { entry = entries_0044[(t - 0x00230000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002309B8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;  goto L_00230A60; }
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], 0u + 100u);  goto L_00230D64; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002309F0; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_00230A00; }
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002309FC; } }
L_002309F0:
    set32(c.r[18], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
L_002309FC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00230A00:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[18], 0u + 200u);  goto L_00230D64; }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_00230A24; }
    set32(c.r[18], 0u + 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00230A24:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[18], 0u + 300u);  goto L_00230D64; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00230A44; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[18], 0u + 400u);  goto L_00230D64; }
L_00230A44:
    set32(c.r[18], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
    set32(c.r[18], 0u + 400u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_00230A60:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], 0u + 100u);  goto L_00230D64; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00230A80; } }
    set32(c.r[18], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
L_00230A80:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[7].d[0]) { set32(c.r[18], 0u + 200u);  goto L_00230D64; }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_00230AA4; }
    set32(c.r[18], 0u + 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00230AA4:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[18], 0u + 300u);  goto L_00230D64; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00230D64; } }
    set32(c.r[18], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
L_00230AC4:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;  goto L_00230B60; }
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], 0u + 100u);  goto L_00230D64; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00230B08; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00230B08; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_00230B18; }
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00230B14; } }
L_00230B08:
    set32(c.r[18], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
L_00230B14:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00230B18:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[18], 0u + 200u);  goto L_00230D64; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00230B44; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00230B44; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[18], 0u + 300u);  goto L_00230D64; }
L_00230B44:
    set32(c.r[18], 0u + 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
    set32(c.r[18], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_00230B60:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], 0u + 100u);  goto L_00230D64; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00230B80; } }
    set32(c.r[18], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
L_00230B80:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[7].d[0]) { set32(c.r[18], 0u + 200u);  goto L_00230D64; }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_00230BA4; }
    set32(c.r[18], 0u + 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00230BA4:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[18], 0u + 300u);  goto L_00230D64; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00230D64; } }
    set32(c.r[18], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
L_00230BC4:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 100u)));  goto L_00230C60; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[18], 0u + 100u);  goto L_00230D64; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;  goto L_00230BF4; }
    set32(c.r[18], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
    c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 1;
L_00230BF4:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], 0u + 200u);  goto L_00230D64; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00230C14; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 5u);  goto L_00230C24; }
L_00230C14:
    set32(c.r[18], 0u + 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_00230C24:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[18], 0u + 300u);  goto L_00230D64; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[18], 0u + 400u);  goto L_00230D64; }
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00230C50; } }
    set32(c.r[18], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
L_00230C50:
    set32(c.r[18], 0u + 400u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_00230C60:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00230D98; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00230D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230C80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00230C80u) [[unlikely]] return; }
L_00230C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D98; } }
L_00230C88:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;  goto L_00230D0C; }
    c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], 0u + 100u);  goto L_00230D64; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00230CC0; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_00230CD0; }
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00230CCC; } }
L_00230CC0:
    set32(c.r[18], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
L_00230CCC:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00230CD0:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[18], 0u + 200u);  goto L_00230D64; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[18], 0u + 300u);  goto L_00230D64; }
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00230CFC; } }
    set32(c.r[18], 0u + 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
L_00230CFC:
    set32(c.r[18], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
    c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 1;
L_00230D0C:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], 0u + 100u);  goto L_00230D64; }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_00230D18:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[18], 0u + 200u);  goto L_00230D64; }
    set32(c.r[18], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
    set32(c.r[18], 0u + 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D64; } }
L_00230D38:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_00230D3C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00230D98; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00230D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230D5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00230D5Cu) [[unlikely]] return; }
L_00230D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D98; } }
L_00230D64:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230D74u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 487u, depth + 1u); else { c.pc = 0x0022F550u; return; } if (c.pc != 0x00230D74u) [[unlikely]] return; }
L_00230D74:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00230D98; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00230D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230D98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00230D98u) [[unlikely]] return; }
L_00230D98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00230D9C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00230DC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00230E20; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 4116u);  goto L_00230E00; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], 0u + 20055u);  goto L_00230DEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00230E24; } }
L_00230DEC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230DF8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00230DF8u) [[unlikely]] return; }
L_00230DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230E20; } }
L_00230E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230E08u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00230E08u) [[unlikely]] return; }
L_00230E08:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00230E20; } }
    set32(c.r[5], 0u + 21u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230E20u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00230E20u) [[unlikely]] return; }
L_00230E20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00230E24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00230E30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230E60u); c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x00230E60u) [[unlikely]] return; }
L_00230E60:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_00231334; }
    set32(c.r[5], ld32((c.r[16].w[0] + 440u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[16].w[0] + 436u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[19], c.r[5].w[0] + 1u);  if (t) { goto L_00231108; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 2u);  goto L_00230E94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00231330; } }
L_00230E94:
    set32(c.r[4], 0u + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230EA0u); st32((c.r[16].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00230EA0u) [[unlikely]] return; }
L_00230EA0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], 0u + 80u);  goto L_00230ECC; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230EB8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00230EB8u) [[unlikely]] return; }
L_00230EB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230EC4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 248u, depth + 1u); else { c.pc = 0x00166140u; return; } if (c.pc != 0x00230EC4u) [[unlikely]] return; }
L_00230EC4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 80u);
    c.budget -= 2;
L_00230ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230ED4u); st32((c.r[16].w[0] + 460u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00230ED4u) [[unlikely]] return; }
L_00230ED4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 464u), c.r[17].w[0]);  goto L_00230F04; }
    set32(c.r[5], c.r[19].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230EECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00230EECu) [[unlikely]] return; }
L_00230EEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230EFCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0015D3D0u; return; } if (c.pc != 0x00230EFCu) [[unlikely]] return; }
L_00230EFC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 464u), c.r[17].w[0]);
    c.budget -= 2;
L_00230F04:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00230F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230F10u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00230F10u) [[unlikely]] return; }
L_00230F10:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  goto L_00230F40; }
    set32(c.r[2], c.r[19].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230F2Cu); set32(c.r[5], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00230F2Cu) [[unlikely]] return; }
L_00230F2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230F38u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 278u, depth + 1u); else { c.pc = 0x00166630u; return; } if (c.pc != 0x00230F38u) [[unlikely]] return; }
L_00230F38:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 2;
L_00230F40:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[2].w[0] + 468u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00230F08u | kUnwind; return; } goto L_00230F08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230F60u); set32(c.r[4], 0u + 352u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00230F60u) [[unlikely]] return; }
L_00230F60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 476u), c.r[2].w[0]);  goto L_00230F80; }
    set32(c.r[5], ld32((c.r[16].w[0] + 460u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 468u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 464u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230F7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 111u, depth + 1u); else { c.pc = 0x00158A60u; return; } if (c.pc != 0x00230F7Cu) [[unlikely]] return; }
L_00230F7C:
    st32((c.r[16].w[0] + 476u), c.r[2].w[0]);
    c.budget -= 1;
L_00230F80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230F90u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00230F90u) [[unlikely]] return; }
L_00230F90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230FA8u); c.f[20] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00230FA8u) [[unlikely]] return; }
L_00230FA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 480u), c.f[0]);
    st32((c.r[16].w[0] + 484u), c.r[4].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 488u), c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230FD8u); st32((c.r[16].w[0] + 492u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00230FD8u) [[unlikely]] return; }
L_00230FD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230FF0u); c.f[20] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00230FF0u) [[unlikely]] return; }
L_00230FF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[18].d[0] = 0ull + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 608u), c.f[0]);
    st32((c.r[16].w[0] + 612u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 616u), c.f[20]);
    st32((c.r[16].w[0] + 620u), c.r[2].w[0]);
    c.budget -= 10;
L_00231018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231020u); set32(c.r[4], 0u + 360u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x00231020u) [[unlikely]] return; }
L_00231020:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00231034; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0023104C; } }
L_00231034:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 6;
L_0023104C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231054u);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00231054u) [[unlikely]] return; }
L_00231054:
    set32(c.r[3], c.r[2].w[0] - 180u);
    set32(c.r[4], 0u + 30u);
    set32(c.r[2], c.r[18].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 360u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023107Cu); st32((c.r[17].w[0] + 576u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x0023107Cu) [[unlikely]] return; }
L_0023107C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00231090; }
    goto L_00231084;
L_00231080:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_00231084:
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002310A8; } }
L_00231090:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_00231098:
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 4;
L_002310A8:
    st32((c.r[17].w[0] + 580u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002310B4u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x002310B4u) [[unlikely]] return; }
L_002310B4:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_002310C8; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002310E0; } }
L_002310C8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 6;
L_002310E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002310E8u);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002310E8u) [[unlikely]] return; }
L_002310E8:
    set32(c.r[3], c.r[2].w[0] + 30u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[17].w[0] + 596u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00231018u | kUnwind; return; } goto L_00231018; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00231330; } }
L_00231108:
    st32((c.r[16].w[0] + 452u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231114u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00231114u) [[unlikely]] return; }
L_00231114:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], 0u + 80u);  goto L_00231140; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023112Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0023112Cu) [[unlikely]] return; }
L_0023112C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231138u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 248u, depth + 1u); else { c.pc = 0x00166140u; return; } if (c.pc != 0x00231138u) [[unlikely]] return; }
L_00231138:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 80u);
    c.budget -= 2;
L_00231140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231148u); st32((c.r[16].w[0] + 460u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00231148u) [[unlikely]] return; }
L_00231148:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], 0u + 352u);  goto L_00231174; }
    set32(c.r[5], c.r[19].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231160u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00231160u) [[unlikely]] return; }
L_00231160:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023116Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 278u, depth + 1u); else { c.pc = 0x00166630u; return; } if (c.pc != 0x0023116Cu) [[unlikely]] return; }
L_0023116C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 352u);
    c.budget -= 2;
L_00231174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023117Cu); st32((c.r[16].w[0] + 468u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0023117Cu) [[unlikely]] return; }
L_0023117C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 476u), c.r[2].w[0]);  goto L_00231198; }
    set32(c.r[5], ld32((c.r[16].w[0] + 460u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 468u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231194u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 103u, depth + 1u); else { c.pc = 0x00158920u; return; } if (c.pc != 0x00231194u) [[unlikely]] return; }
L_00231194:
    st32((c.r[16].w[0] + 476u), c.r[2].w[0]);
    c.budget -= 1;
L_00231198:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002311A8u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002311A8u) [[unlikely]] return; }
L_002311A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002311C0u); c.f[20] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002311C0u) [[unlikely]] return; }
L_002311C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3960000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0] + 480u), c.f[0]);
    st32((c.r[16].w[0] + 484u), c.r[4].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 488u), c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002311F0u); st32((c.r[16].w[0] + 492u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002311F0u) [[unlikely]] return; }
L_002311F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231208u); c.f[20] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00231208u) [[unlikely]] return; }
L_00231208:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3910000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0] + 608u), c.f[0]);
    st32((c.r[16].w[0] + 612u), c.r[4].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 616u), c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231238u); st32((c.r[16].w[0] + 620u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00231238u) [[unlikely]] return; }
L_00231238:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231250u); c.f[20] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00231250u) [[unlikely]] return; }
L_00231250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.f[1] = c.r[2].w[0];
    c.r[18].d[0] = 0ull + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 736u), c.f[0]);
    st32((c.r[16].w[0] + 740u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 744u), c.f[20]);
    st32((c.r[16].w[0] + 748u), c.r[2].w[0]);
    c.budget -= 10;
L_00231278:
    set32(c.r[3], c.r[18].w[0] << 7);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023128Cu); set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0023128Cu) [[unlikely]] return; }
L_0023128C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], 0u + 3094u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 496u), c.f[0]);
    st32((c.r[17].w[0] + 576u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002312B0u); set32(c.r[4], ld32((c.r[16].w[0] + 476u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x002312B0u) [[unlikely]] return; }
L_002312B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002312B8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002312B8u) [[unlikely]] return; }
L_002312B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002312C8u); st32((c.r[17].w[0] + 580u), c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002312C8u) [[unlikely]] return; }
L_002312C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[4], 0u + 360u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 584u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 484u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002312ECu); st32((c.r[17].w[0] + 600u), c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x002312ECu) [[unlikely]] return; }
L_002312EC:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00231300; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00231318; } }
L_00231300:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 6;
L_00231318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231320u);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00231320u) [[unlikely]] return; }
L_00231320:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0] + 596u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00231278u | kUnwind; return; } goto L_00231278; } }
L_00231330:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00231334:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00231360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231378u); set32(c.r[4], ld32((c.r[4].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x00231378u) [[unlikely]] return; }
L_00231378:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002313C0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 436u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002313B4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002313A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002313BC; } }
L_002313A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002313ACu);  if (depth < kMaxDepth) unit_0044(c, 134u, depth + 1u); else { c.pc = 0x002313D0u; return; } if (c.pc != 0x002313ACu) [[unlikely]] return; }
L_002313AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002313BC; } }
L_002313B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002313BCu);  if (depth < kMaxDepth) unit_0044(c, 159u, depth + 1u); else { c.pc = 0x00231900u; return; } if (c.pc != 0x002313BCu) [[unlikely]] return; }
L_002313BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002313C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002313D0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[19].w[0] << 7);
    c.budget -= 12;
L_00231400:
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 596u)));
    set32(c.r[16], c.r[17].w[0] + 596u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 596u), c.r[2].w[0]);  if (t) { goto L_002315E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231420u); set32(c.r[4], 0u + 90u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x00231420u) [[unlikely]] return; }
L_00231420:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00231434; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0023144C; } }
L_00231434:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 6;
L_0023144C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231454u);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00231454u) [[unlikely]] return; }
L_00231454:
    set32(c.r[2], c.r[2].w[0] - 45u);
    set32(c.r[3], 0u + 360u);
    set32(c.r[4], c.r[2].w[0] << 16);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 576u)));
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[17].w[0] + 576u), c.r[2].w[0]);  if (t) { goto L_00231488; } }
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull | 65535ull;  if (t) { goto L_00231498; } }
L_00231488:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = 0ull | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 4;
L_00231498:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;  goto L_002314B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);  if (t) { goto L_002314BC; } }
L_002314B0:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], c.r[17].w[0] + 496u);  goto L_002314C0; }
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_002314BC:
    set32(c.r[18], c.r[17].w[0] + 496u);
    c.budget -= 1;
L_002314C0:
    st32((c.r[17].w[0] + 576u), c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] - 16384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002314D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 20u, depth + 1u); else { c.pc = 0x002506C0u; return; } if (c.pc != 0x002314D0u) [[unlikely]] return; }
L_002314D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002314E0u); st32((c.r[17].w[0] + 500u), 0u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002314E0u) [[unlikely]] return; }
L_002314E0:
    c.f[12] = ld32((c.r[28].w[0] - 32272u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002314F0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002314F0u) [[unlikely]] return; }
L_002314F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 588u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[18], c.r[17].w[0] + 588u);
    set32(c.r[21], c.r[17].w[0] + 592u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231508u); st32((c.r[17].w[0] + 592u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x00231508u) [[unlikely]] return; }
L_00231508:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0023151C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00231534; } }
L_0023151C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_00231534:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);  goto L_00231554; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_00231578; } }
L_00231554:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 2u);  goto L_00231574; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_00231578; } }
L_00231574:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00231578:
    st32((c.r[17].w[0] + 580u), 0u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], 0u + 40u);  goto L_002315A0; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0023159C; } }
    st32((c.r[18].w[0]), 0u);
    c.budget -= 1;
L_0023159C:
    set32(c.r[4], 0u + 40u);
    c.budget -= 1;
L_002315A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002315A8u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x002315A8u) [[unlikely]] return; }
L_002315A8:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_002315BC; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002315D4; } }
L_002315BC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 6;
L_002315D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002315DCu);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002315DCu) [[unlikely]] return; }
L_002315DC:
    set32(c.r[2], c.r[2].w[0] + 30u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002315E4:
    set32(c.r[3], ld32((c.r[17].w[0] + 588u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[22], c.r[17].w[0] + 588u);  if (t) { goto L_0023187C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[17].w[0] + 504u), 0u);  goto L_0023184C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 580u));  goto L_00231610; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_00231880; } }
L_00231610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[21], c.r[17].w[0] + 480u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231630u); st32((c.r[17].w[0] + 580u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x00231630u) [[unlikely]] return; }
L_00231630:
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 496u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231644u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x00231644u) [[unlikely]] return; }
L_00231644:
    set32(c.r[4], c.r[20].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231650u); set32(c.r[5], c.r[20].w[0] + 608u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x00231650u) [[unlikely]] return; }
L_00231650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  goto L_00231688; }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231680u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x00231680u) [[unlikely]] return; }
L_00231680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 480u));  if (t) { goto L_002316F4; } }
L_00231688:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 7808u));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 7812u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 7816u));
    st32((c.r[29].w[0] + 132u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 7820u));
    st32((c.r[29].w[0] + 136u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002316C0u); st32((c.r[29].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x002316C0u) [[unlikely]] return; }
L_002316C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002316F0; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002316F0u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x002316F0u) [[unlikely]] return; }
L_002316F0:
    c.f[1] = ld32((c.r[17].w[0] + 480u));
    c.budget -= 1;
L_002316F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AC0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[17].w[0] + 480u);  if (t) { goto L_0023174C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231720u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00231720u) [[unlikely]] return; }
L_00231720:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull | 49152ull;  goto L_00231744; }
    set32(c.r[2], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 576u), c.r[2].w[0]);  if (t) { goto L_00231888; } }
L_00231744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 576u), c.r[2].w[0]);  if (t) { goto L_00231888; } }
L_0023174C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[17].w[0] + 488u));  goto L_002317A4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231778u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00231778u) [[unlikely]] return; }
L_00231778:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull | 49152ull;  goto L_0023179C; }
    set32(c.r[2], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 576u), c.r[2].w[0]);  if (t) { goto L_00231888; } }
L_0023179C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 576u), c.r[2].w[0]);  if (t) { goto L_00231888; } }
L_002317A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42300000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[17].w[0] + 488u);  if (t) { goto L_002317F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002317D0u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002317D0u) [[unlikely]] return; }
L_002317D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull | 32768ull;  goto L_002317F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 576u), 0u);  if (t) { goto L_00231888; } }
L_002317F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 576u), c.r[2].w[0]);  if (t) { goto L_00231888; } }
L_002317F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_0023188C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231824u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00231824u) [[unlikely]] return; }
L_00231824:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull | 32768ull;  goto L_00231844; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 576u), 0u);  if (t) { goto L_00231888; } }
L_00231844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 576u), c.r[2].w[0]);  if (t) { goto L_00231888; } }
L_0023184C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 500u), 0u);
    c.f[0] = ld32((c.r[28].w[0] - 32264u));
    st32((c.r[17].w[0] + 496u), 0u);
    st32((c.r[17].w[0] + 508u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 580u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 580u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00231888; } }
L_0023187C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00231880:
    set32(c.r[2], c.r[2].w[0] - 2u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00231888:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_0023188C:
    set32(c.r[16], c.r[17].w[0] + 512u);
    st32((c.r[17].w[0] + 484u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023189Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0023189Cu) [[unlikely]] return; }
L_0023189C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002318ACu); set32(c.r[6], c.r[17].w[0] + 480u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002318ACu) [[unlikely]] return; }
L_002318AC:
    set32(c.r[6], ld32((c.r[17].w[0] + 576u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002318BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x002318BCu) [[unlikely]] return; }
L_002318BC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 7);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00231400u | kUnwind; return; } goto L_00231400; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.budget -= 2;
L_002318D4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.budget -= 1;
L_002318D8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00231900:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.budget -= 1;
L_00231904:
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[19].w[0] << 7);
    c.budget -= 10;
L_0023192C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[17], c.r[20].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 580u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[16], c.r[17].w[0] + 580u);  if (t) { goto L_00231964; } }
    c.f[1] = ld32((c.r[17].w[0] + 484u));
    set32(c.r[18], c.r[17].w[0] + 484u);
    c.f[0] = ld32((c.r[28].w[0] - 32260u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 484u), c.f[0]);  if (t) { goto L_00231978; } }
L_00231964:
    c.f[1] = ld32((c.r[17].w[0] + 484u));
    set32(c.r[18], c.r[17].w[0] + 484u);
    c.f[0] = ld32((c.r[28].w[0] - 32304u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 484u), c.f[0]);
    c.budget -= 5;
L_00231978:
    c.f[1] = ld32((c.r[17].w[0] + 580u));
    c.f[0] = ld32((c.r[28].w[0] - 32676u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 580u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 476u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231994u); set32(c.r[21], c.r[17].w[0] + 580u);  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x00231994u) [[unlikely]] return; }
L_00231994:
    c.f[1] = ld32((c.r[21].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = ld32((c.r[17].w[0] + 496u));  goto L_002319B4; }
    st32((c.r[16].w[0]), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 600u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[17].w[0] + 496u));
    c.budget -= 4;
L_002319B4:
    set32(c.r[18], c.r[17].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002319C0u); set32(c.r[16], c.r[17].w[0] + 596u);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002319C0u) [[unlikely]] return; }
L_002319C0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002319F8; } }
    set32(c.r[3], 0u + 360u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002319E4u); st32((c.r[16].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002319E4u) [[unlikely]] return; }
L_002319E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 5;
L_002319F8:
    set32(c.r[18], c.r[17].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231A04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00231A04u) [[unlikely]] return; }
L_00231A04:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231A14u); set32(c.r[6], c.r[17].w[0] + 480u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00231A14u) [[unlikely]] return; }
L_00231A14:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 360u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231A34u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x00231A34u) [[unlikely]] return; }
L_00231A34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 7824u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 584u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 7828u));
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 7832u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 7836u));
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 120u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231A80u); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00231A80u) [[unlikely]] return; }
L_00231A80:
    set32(c.r[6], ld32((c.r[17].w[0] + 576u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231A90u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 243u, depth + 1u); else { c.pc = 0x0018FE00u; return; } if (c.pc != 0x00231A90u) [[unlikely]] return; }
L_00231A90:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 7);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023192Cu | kUnwind; return; } goto L_0023192C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00231AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 4116u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231AE8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x00231AE8u) [[unlikely]] return; }
L_00231AE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F430000u);
    set32(c.r[3], c.r[3].w[0] + 19184u);
    c.r[2].d[0] = c.r[2].d[0] | 19777ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1312u), 0u);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 1316u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 9;
L_00231B0C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 160u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00231B0Cu | kUnwind; return; } goto L_00231B0C; } }
    st32((c.r[16].w[0] + 172u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 176u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 180u), 0u);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 152u), 0u);
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 212u), 0u);
    st32((c.r[16].w[0] + 228u), 0u);
    st32((c.r[16].w[0] + 232u), 0u);
    st32((c.r[16].w[0] + 244u), 0u);
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 196u), 0u);
    st32((c.r[16].w[0] + 1328u), 0u);
    st32((c.r[16].w[0] + 1332u), 0u);
    st32((c.r[16].w[0] + 1424u), 0u);
    st32((c.r[16].w[0] + 1384u), 0u);
    st32((c.r[16].w[0] + 1348u), 0u);
    st32((c.r[16].w[0] + 188u), 0u);
    st32((c.r[16].w[0] + 192u), 0u);
    st32((c.r[16].w[0] + 200u), 0u);
    st32((c.r[16].w[0] + 204u), 0u);
    st32((c.r[16].w[0] + 208u), 0u);
    st32((c.r[16].w[0] + 1364u), 0u);
    st32((c.r[16].w[0] + 1368u), 0u);
    st32((c.r[16].w[0] + 1352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1372u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1380u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1356u), 0u);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231BA8u); st32((c.r[16].w[0] + 1416u), 0u);  if (depth < kMaxDepth) unit_0046(c, 157u, depth + 1u); else { c.pc = 0x002391C0u; return; } if (c.pc != 0x00231BA8u) [[unlikely]] return; }
L_00231BA8:
    st32((c.r[16].w[0] + 236u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 240u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231BBCu); st32((c.r[16].w[0] + 248u), 0u);  if (depth < kMaxDepth) unit_0046(c, 433u, depth + 1u); else { c.pc = 0x0023B030u; return; } if (c.pc != 0x00231BBCu) [[unlikely]] return; }
L_00231BBC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00231BC0:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 252u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 54ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 256u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00231BC0u | kUnwind; return; } goto L_00231BC0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00231BE0:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 216u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00231BE0u | kUnwind; return; } goto L_00231BE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231C04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 98u, depth + 1u); else { c.pc = 0x00238A90u; return; } if (c.pc != 0x00231C04u) [[unlikely]] return; }
L_00231C04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231C14u); set32(c.r[5], c.r[5].w[0] - 27328u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x00231C14u) [[unlikely]] return; }
L_00231C14:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00231C30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00231ED0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 19184u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231C64u); st32((c.r[17].w[0] + 1164u), 0u);  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x00231C64u) [[unlikely]] return; }
L_00231C64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 1128u)));  goto L_00231C78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231C74u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 301u, depth + 1u); else { c.pc = 0x00252F90u; return; } if (c.pc != 0x00231C74u) [[unlikely]] return; }
L_00231C74:
    set32(c.r[18], ld32((c.r[17].w[0] + 1128u)));
    c.budget -= 1;
L_00231C78:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00231CB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231C88u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x00231C88u) [[unlikely]] return; }
L_00231C88:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231C94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x00231C94u) [[unlikely]] return; }
L_00231C94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00231CB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231CA4u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x00231CA4u) [[unlikely]] return; }
L_00231CA4:
    set32(c.r[5], ld32((c.r[17].w[0] + 1128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231CB0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 334u, depth + 1u); else { c.pc = 0x001FBEA0u; return; } if (c.pc != 0x00231CB0u) [[unlikely]] return; }
L_00231CB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00231CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231CBCu);  if (depth < kMaxDepth) unit_0046(c, 263u, depth + 1u); else { c.pc = 0x00239C60u; return; } if (c.pc != 0x00231CBCu) [[unlikely]] return; }
L_00231CBC:
    set32(c.r[4], ld32((c.r[17].w[0] + 244u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00231CD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231CD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x00231CD0u) [[unlikely]] return; }
L_00231CD0:
    st32((c.r[17].w[0] + 244u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00231CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231CE0u);  if (depth < kMaxDepth) unit_0046(c, 292u, depth + 1u); else { c.pc = 0x00239F90u; return; } if (c.pc != 0x00231CE0u) [[unlikely]] return; }
L_00231CE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 240u)));  goto L_00231D04; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00231CFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00231CFCu) [[unlikely]] return; }
L_00231CFC:
    st32((c.r[17].w[0] + 184u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 240u)));
    c.budget -= 2;
L_00231D04:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 236u)));  goto L_00231D24; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00231D1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00231D1Cu) [[unlikely]] return; }
L_00231D1C:
    st32((c.r[17].w[0] + 240u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 236u)));
    c.budget -= 2;
L_00231D24:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 212u)));  goto L_00231D44; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00231D3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00231D3Cu) [[unlikely]] return; }
L_00231D3C:
    st32((c.r[17].w[0] + 236u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 2;
L_00231D44:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 156u)));  goto L_00231D64; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00231D5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00231D5Cu) [[unlikely]] return; }
L_00231D5C:
    st32((c.r[17].w[0] + 212u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 2;
L_00231D64:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1424u)));  goto L_00231D84; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00231D7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00231D7Cu) [[unlikely]] return; }
L_00231D7C:
    st32((c.r[17].w[0] + 156u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1424u)));
    c.budget -= 2;
L_00231D84:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 200u)));  goto L_00231DA4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00231D9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00231D9Cu) [[unlikely]] return; }
L_00231D9C:
    st32((c.r[17].w[0] + 1424u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 200u)));
    c.budget -= 2;
L_00231DA4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 208u)));  goto L_00231DC4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00231DBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00231DBCu) [[unlikely]] return; }
L_00231DBC:
    st32((c.r[17].w[0] + 200u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 208u)));
    c.budget -= 2;
L_00231DC4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 180u)));  goto L_00231DE4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00231DDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00231DDCu) [[unlikely]] return; }
L_00231DDC:
    st32((c.r[17].w[0] + 208u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 2;
L_00231DE4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 176u)));  goto L_00231E04; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00231DFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00231DFCu) [[unlikely]] return; }
L_00231DFC:
    st32((c.r[17].w[0] + 180u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 2;
L_00231E04:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 172u)));  goto L_00231E24; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00231E1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00231E1Cu) [[unlikely]] return; }
L_00231E1C:
    st32((c.r[17].w[0] + 176u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 2;
L_00231E24:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1120u);  goto L_00231E44; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00231E3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00231E3Cu) [[unlikely]] return; }
L_00231E3C:
    st32((c.r[17].w[0] + 172u), 0u);
    set32(c.r[2], c.r[17].w[0] + 1120u);
    c.budget -= 2;
L_00231E44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00231EB0; }
    set32(c.r[2], c.r[17].w[0] + 1316u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1312u);  goto L_00231E80; }
    set32(c.r[4], ld32((c.r[17].w[0] + 1316u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00231E7C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00231E7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231E7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00231E7Cu) [[unlikely]] return; }
L_00231E7C:
    set32(c.r[2], c.r[17].w[0] + 1312u);
    c.budget -= 1;
L_00231E80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00231EAC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1312u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00231EAC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00231EAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231EACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00231EACu) [[unlikely]] return; }
L_00231EAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00231EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231EB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x00231EB8u) [[unlikely]] return; }
L_00231EB8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00231ED4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231ED0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00231ED0u) [[unlikely]] return; }
L_00231ED0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00231ED4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00231EF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1328u)));
    c.r[2].d[0] = c.r[2].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00231F1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231F1Cu);  if (depth < kMaxDepth) unit_0046(c, 383u, depth + 1u); else { c.pc = 0x0023AAF0u; return; } if (c.pc != 0x00231F1Cu) [[unlikely]] return; }
L_00231F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231F24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 103u, depth + 1u); else { c.pc = 0x00238B10u; return; } if (c.pc != 0x00231F24u) [[unlikely]] return; }
L_00231F24:
    set32(c.r[3], ld32((c.r[16].w[0] + 1328u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(33ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_00231F58; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 27280u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00230000u < 16384u) { entry = entries_0044[(t - 0x00230000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00231F54:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00231F58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00232EC4; } }
L_00231F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231F70u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00231F70u) [[unlikely]] return; }
L_00231F70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 1424u), c.r[2].w[0]);  goto L_00231F88; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231F84u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 48u, depth + 1u); else { c.pc = 0x0023D4E0u; return; } if (c.pc != 0x00231F84u) [[unlikely]] return; }
L_00231F84:
    st32((c.r[16].w[0] + 1424u), c.r[2].w[0]);
    c.budget -= 1;
L_00231F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231F90u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00231F90u) [[unlikely]] return; }
L_00231F90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 180u), c.r[2].w[0]);  goto L_00231FA8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231FA4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 176u, depth + 1u); else { c.pc = 0x0025DCF0u; return; } if (c.pc != 0x00231FA4u) [[unlikely]] return; }
L_00231FA4:
    st32((c.r[16].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 1;
L_00231FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231FB0u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00231FB0u) [[unlikely]] return; }
L_00231FB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 172u), c.r[2].w[0]);  goto L_00231FC8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231FC4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 463u, depth + 1u); else { c.pc = 0x0023B370u; return; } if (c.pc != 0x00231FC4u) [[unlikely]] return; }
L_00231FC4:
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 1;
L_00231FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231FD0u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00231FD0u) [[unlikely]] return; }
L_00231FD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 236u), c.r[2].w[0]);  goto L_00231FE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231FE0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 402u, depth + 1u); else { c.pc = 0x0015B500u; return; } if (c.pc != 0x00231FE0u) [[unlikely]] return; }
L_00231FE0:
    st32((c.r[16].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 1;
L_00231FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231FECu); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00231FECu) [[unlikely]] return; }
L_00231FEC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 240u), c.r[4].w[0]);  goto L_00232008; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232000u);  if (depth < kMaxDepth) unit_000E(c, 402u, depth + 1u); else { c.pc = 0x0015B500u; return; } if (c.pc != 0x00232000u) [[unlikely]] return; }
L_00232000:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 240u), c.r[4].w[0]);
    c.budget -= 2;
L_00232008:
    set32(c.r[3], ld32((c.r[16].w[0] + 1424u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00232044; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00232044; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00232044; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00232044; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[16].w[0] + 1420u), 0u);  goto L_0023205C; }
L_00232044:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232054u); set32(c.r[5], c.r[5].w[0] - 27098u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00232054u) [[unlikely]] return; }
L_00232054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_00232EB0; } }
L_0023205C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00232EC4; } }
L_00232068:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232074u); set32(c.r[5], 0u + 25u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00232074u) [[unlikely]] return; }
L_00232074:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 176u)));  goto L_00232088; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00232EC4; } }
L_00232088:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00232EC8; }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002320ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x002320ACu) [[unlikely]] return; }
L_002320AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002320B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 296u, depth + 1u); else { c.pc = 0x00252F30u; return; } if (c.pc != 0x002320B4u) [[unlikely]] return; }
L_002320B4:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002320C4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x002320C4u) [[unlikely]] return; }
L_002320C4:
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);
    c.budget -= 2;
L_002320CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002320F0u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x002320F0u) [[unlikely]] return; }
L_002320F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  goto L_002321B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232100u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x00232100u) [[unlikely]] return; }
L_00232100:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023210Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 290u, depth + 1u); else { c.pc = 0x00252E70u; return; } if (c.pc != 0x0023210Cu) [[unlikely]] return; }
L_0023210C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023211Cu); set32(c.r[4], ld32((c.r[16].w[0] + 176u)));  if (depth < kMaxDepth) unit_004B(c, 321u, depth + 1u); else { c.pc = 0x0024EDE0u; return; } if (c.pc != 0x0023211Cu) [[unlikely]] return; }
L_0023211C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232128u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 292u, depth + 1u); else { c.pc = 0x00252E90u; return; } if (c.pc != 0x00232128u) [[unlikely]] return; }
L_00232128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232130u); set32(c.r[4], ld32((c.r[16].w[0] + 176u)));  if (depth < kMaxDepth) unit_004B(c, 296u, depth + 1u); else { c.pc = 0x0024EB80u; return; } if (c.pc != 0x00232130u) [[unlikely]] return; }
L_00232130:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023213Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 299u, depth + 1u); else { c.pc = 0x0024EBC0u; return; } if (c.pc != 0x0023213Cu) [[unlikely]] return; }
L_0023213C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023214Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 273u, depth + 1u); else { c.pc = 0x00252A50u; return; } if (c.pc != 0x0023214Cu) [[unlikely]] return; }
L_0023214C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232154u); set32(c.r[4], ld32((c.r[16].w[0] + 176u)));  if (depth < kMaxDepth) unit_004B(c, 318u, depth + 1u); else { c.pc = 0x0024EDA0u; return; } if (c.pc != 0x00232154u) [[unlikely]] return; }
L_00232154:
    st32((c.r[16].w[0] + 1384u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232160u); set32(c.r[4], ld32((c.r[16].w[0] + 176u)));  if (depth < kMaxDepth) unit_004B(c, 308u, depth + 1u); else { c.pc = 0x0024EC80u; return; } if (c.pc != 0x00232160u) [[unlikely]] return; }
L_00232160:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[6].d[0] = c.r[3].d[0] | 43279ull;
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 176u)));  goto L_00232188; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232180u); set32(c.r[5], c.r[5].w[0] - 27060u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00232180u) [[unlikely]] return; }
L_00232180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002321AC; } }
L_00232188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232190u);  if (depth < kMaxDepth) unit_004B(c, 308u, depth + 1u); else { c.pc = 0x0024EC80u; return; } if (c.pc != 0x00232190u) [[unlikely]] return; }
L_00232190:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27030u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002321ACu); c.r[6].d[0] = c.r[2].d[0] | 43279ull;  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x002321ACu) [[unlikely]] return; }
L_002321AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 1;
L_002321B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002321B8u);  if (depth < kMaxDepth) unit_004F(c, 191u, depth + 1u); else { c.pc = 0x0025DF30u; return; } if (c.pc != 0x002321B8u) [[unlikely]] return; }
L_002321B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002321C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 120u, depth + 1u); else { c.pc = 0x00238CF0u; return; } if (c.pc != 0x002321C0u) [[unlikely]] return; }
L_002321C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002321C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 300u, depth + 1u); else { c.pc = 0x0023A0F0u; return; } if (c.pc != 0x002321C8u) [[unlikely]] return; }
L_002321C8:
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 1328u), c.r[2].w[0]);
    c.budget -= 2;
L_002321D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002321D8u); set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  if (depth < kMaxDepth) unit_004F(c, 186u, depth + 1u); else { c.pc = 0x0025DE70u; return; } if (c.pc != 0x002321D8u) [[unlikely]] return; }
L_002321D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002321F0u); set32(c.r[5], c.r[5].w[0] - 26990u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x002321F0u) [[unlikely]] return; }
L_002321F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002321F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 399u, depth + 1u); else { c.pc = 0x0023ACE0u; return; } if (c.pc != 0x002321F8u) [[unlikely]] return; }
L_002321F8:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 2;
L_00232200:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00232240; }
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1168u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0023223C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023223Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 206u, depth + 1u); else { c.pc = 0x0025E170u; return; } if (c.pc != 0x0023223Cu) [[unlikely]] return; }
L_0023223C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00232240:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00232200u | kUnwind; return; } goto L_00232200; }
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 1328u), c.r[2].w[0]);
    c.budget -= 2;
L_00232254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023225Cu); set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  if (depth < kMaxDepth) unit_004F(c, 189u, depth + 1u); else { c.pc = 0x0025DEE0u; return; } if (c.pc != 0x0023225Cu) [[unlikely]] return; }
L_0023225C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023226Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 144u, depth + 1u); else { c.pc = 0x00238FB0u; return; } if (c.pc != 0x0023226Cu) [[unlikely]] return; }
L_0023226C:
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0] + 1328u), c.r[2].w[0]);
    c.budget -= 2;
L_00232274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002322A0; } }
L_0023227C:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002322A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232294u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x00232294u) [[unlikely]] return; }
L_00232294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002322A0:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023227Cu | kUnwind; return; } goto L_0023227C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002322B4u); set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  if (depth < kMaxDepth) unit_004F(c, 217u, depth + 1u); else { c.pc = 0x0025E390u; return; } if (c.pc != 0x002322B4u) [[unlikely]] return; }
L_002322B4:
    set32(c.r[5], ld32((c.r[16].w[0] + 1132u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002322C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0044(c, 546u, depth + 1u); else { c.pc = 0x00233E60u; return; } if (c.pc != 0x002322C4u) [[unlikely]] return; }
L_002322C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002322D4u); set32(c.r[5], c.r[5].w[0] - 26968u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x002322D4u) [[unlikely]] return; }
L_002322D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232EC4; } }
L_002322DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002322E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 433u, depth + 1u); else { c.pc = 0x0023B030u; return; } if (c.pc != 0x002322E4u) [[unlikely]] return; }
L_002322E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002322ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 355u, depth + 1u); else { c.pc = 0x0023A740u; return; } if (c.pc != 0x002322ECu) [[unlikely]] return; }
L_002322EC:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 2;
L_002322F4:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 160u);  if (t) { goto L_00232340; } }
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 1168u)));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00232344; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00232340; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023233Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023233Cu) [[unlikely]] return; }
L_0023233C:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_00232340:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00232344:
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002322F4u | kUnwind; return; } goto L_002322F4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023235Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x0023235Cu) [[unlikely]] return; }
L_0023235C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00232390; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232370u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00232370u) [[unlikely]] return; }
L_00232370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232388u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00232388u) [[unlikely]] return; }
L_00232388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232EC4; } }
L_00232390:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023239Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x0023239Cu) [[unlikely]] return; }
L_0023239C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002323A8u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x002323A8u) [[unlikely]] return; }
L_002323A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 8u);  goto L_002323C0; }
    set32(c.r[5], ld32((c.r[16].w[0] + 1132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002323BCu); set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  if (depth < kMaxDepth) unit_004F(c, 194u, depth + 1u); else { c.pc = 0x0025DFA0u; return; } if (c.pc != 0x002323BCu) [[unlikely]] return; }
L_002323BC:
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
L_002323C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00232EC4; } }
L_002323C8:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 1328u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002323D8u); set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  if (depth < kMaxDepth) unit_004F(c, 187u, depth + 1u); else { c.pc = 0x0025DEA0u; return; } if (c.pc != 0x002323D8u) [[unlikely]] return; }
L_002323D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1132u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0023241C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002323FCu); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x002323FCu) [[unlikely]] return; }
L_002323FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00232410; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023240Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 149u, depth + 1u); else { c.pc = 0x00239080u; return; } if (c.pc != 0x0023240Cu) [[unlikely]] return; }
L_0023240C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00232410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232418u);  if (depth < kMaxDepth) unit_0046(c, 252u, depth + 1u); else { c.pc = 0x00239AF0u; return; } if (c.pc != 0x00232418u) [[unlikely]] return; }
L_00232418:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0023241C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232424u);  if (depth < kMaxDepth) unit_0046(c, 136u, depth + 1u); else { c.pc = 0x00238ED0u; return; } if (c.pc != 0x00232424u) [[unlikely]] return; }
L_00232424:
    set32(c.r[4], ld32((c.r[16].w[0] + 1132u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 9u);  goto L_00232460; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023243Cu); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0023243Cu) [[unlikely]] return; }
L_0023243C:
    set32(c.r[6], ld32((c.r[16].w[0] + 1352u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0023245C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023245C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023245Cu); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x0023245Cu) [[unlikely]] return; }
L_0023245C:
    set32(c.r[3], 0u + 9u);
    c.budget -= 1;
L_00232460:
    st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);
    c.budget -= 1;
L_00232464:
    set32(c.r[4], ld32((c.r[16].w[0] + 1132u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 156u)));  goto L_002324F8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232494u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00232494u) [[unlikely]] return; }
L_00232494:
    set32(c.r[6], ld32((c.r[16].w[0] + 1352u)));
    c.budget -= 3;
    if (c.r[6].sd[0] < 0) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_002324BC; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002324B8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01200000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002324B8u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x002324B8u) [[unlikely]] return; }
L_002324B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_002324BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002324C4u);  if (depth < kMaxDepth) unit_0047(c, 259u, depth + 1u); else { c.pc = 0x0023EB50u; return; } if (c.pc != 0x002324C4u) [[unlikely]] return; }
L_002324C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002324ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0047(c, 256u, depth + 1u); else { c.pc = 0x0023EAC0u; return; } if (c.pc != 0x002324ECu) [[unlikely]] return; }
L_002324EC:
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00232EC4; } }
L_002324F8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_00232534; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232508u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 483u, depth + 1u); else { c.pc = 0x0022F4C0u; return; } if (c.pc != 0x00232508u) [[unlikely]] return; }
L_00232508:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023251Cu); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x0023251Cu) [[unlikely]] return; }
L_0023251C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00232EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023252Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 435u, depth + 1u); else { c.pc = 0x0023B070u; return; } if (c.pc != 0x0023252Cu) [[unlikely]] return; }
L_0023252C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00232548; } }
L_00232534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023253Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 483u, depth + 1u); else { c.pc = 0x0022F4C0u; return; } if (c.pc != 0x0023253Cu) [[unlikely]] return; }
L_0023253C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00232548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232550u);  if (depth < kMaxDepth) unit_0046(c, 280u, depth + 1u); else { c.pc = 0x00239E70u; return; } if (c.pc != 0x00232550u) [[unlikely]] return; }
L_00232550:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_00232574; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023256Cu); set32(c.r[5], c.r[5].w[0] - 26940u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0023256Cu) [[unlikely]] return; }
L_0023256C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00232584; } }
L_00232574:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232580u); set32(c.r[5], c.r[5].w[0] - 26915u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00232580u) [[unlikely]] return; }
L_00232580:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00232584:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_00232588:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 160u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002325C8; }
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1168u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002325C4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002325C4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 206u, depth + 1u); else { c.pc = 0x0025E170u; return; } if (c.pc != 0x002325C4u) [[unlikely]] return; }
L_002325C4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002325C8:
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00232588u | kUnwind; return; } goto L_00232588; }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 11u);  goto L_00232610; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002325ECu); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x002325ECu) [[unlikely]] return; }
L_002325EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00232604; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002325FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 81u, depth + 1u); else { c.pc = 0x00235640u; return; } if (c.pc != 0x002325FCu) [[unlikely]] return; }
L_002325FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023260C; } }
L_00232604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023260Cu);  if (depth < kMaxDepth) unit_0046(c, 149u, depth + 1u); else { c.pc = 0x00239080u; return; } if (c.pc != 0x0023260Cu) [[unlikely]] return; }
L_0023260C:
    set32(c.r[3], 0u + 11u);
    c.budget -= 1;
L_00232610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00232EC4; } }
L_00232618:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232624u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00232624u) [[unlikely]] return; }
L_00232624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00232EC4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 11u);  goto L_00232668; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232644u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00232644u) [[unlikely]] return; }
L_00232644:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0023265C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232654u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 149u, depth + 1u); else { c.pc = 0x00239080u; return; } if (c.pc != 0x00232654u) [[unlikely]] return; }
L_00232654:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232664; } }
L_0023265C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232664u);  if (depth < kMaxDepth) unit_0045(c, 81u, depth + 1u); else { c.pc = 0x00235640u; return; } if (c.pc != 0x00232664u) [[unlikely]] return; }
L_00232664:
    set32(c.r[3], 0u + 11u);
    c.budget -= 1;
L_00232668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00232EC4; } }
L_00232670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232678u); set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  if (depth < kMaxDepth) unit_004F(c, 189u, depth + 1u); else { c.pc = 0x0025DEE0u; return; } if (c.pc != 0x00232678u) [[unlikely]] return; }
L_00232678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023268Cu); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x0023268Cu) [[unlikely]] return; }
L_0023268C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00232EC4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00232740; }
    set32(c.r[3], ld32((c.r[16].w[0] + 1132u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00232700; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002326BCu); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x002326BCu) [[unlikely]] return; }
L_002326BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002326FC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002326D0u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x002326D0u) [[unlikely]] return; }
L_002326D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002326FC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002326E4u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x002326E4u) [[unlikely]] return; }
L_002326E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002326FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002326F4u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0047(c, 258u, depth + 1u); else { c.pc = 0x0023EB20u; return; } if (c.pc != 0x002326F4u) [[unlikely]] return; }
L_002326F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
L_002326FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00232700:
    set32(c.r[5], 0u + 19u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023270Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x0023270Cu) [[unlikely]] return; }
L_0023270C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232718u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00232718u) [[unlikely]] return; }
L_00232718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023273C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023272Cu); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x0023272Cu) [[unlikely]] return; }
L_0023272C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023273C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023273Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 149u, depth + 1u); else { c.pc = 0x00239080u; return; } if (c.pc != 0x0023273Cu) [[unlikely]] return; }
L_0023273C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00232740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232748u);  if (depth < kMaxDepth) unit_0046(c, 297u, depth + 1u); else { c.pc = 0x0023A010u; return; } if (c.pc != 0x00232748u) [[unlikely]] return; }
L_00232748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232750u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 252u, depth + 1u); else { c.pc = 0x00239AF0u; return; } if (c.pc != 0x00232750u) [[unlikely]] return; }
L_00232750:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00232768; }
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 156u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00232768:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232774u); st32((c.r[16].w[0] + 1356u), 0u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00232774u) [[unlikely]] return; }
L_00232774:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00232840; }
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 436u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023283C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232798u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x00232798u) [[unlikely]] return; }
L_00232798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002327A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 276u, depth + 1u); else { c.pc = 0x00252B30u; return; } if (c.pc != 0x002327A0u) [[unlikely]] return; }
L_002327A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002327ACu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 366u, depth + 1u); else { c.pc = 0x0024F410u; return; } if (c.pc != 0x002327ACu) [[unlikely]] return; }
L_002327AC:
    st32((c.r[16].w[0] + 1356u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_002327D4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002327C8u); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x002327C8u) [[unlikely]] return; }
L_002327C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_002327E8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 1;
L_002327D4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002327E0u); set32(c.r[6], 0u + 1010u);  if (depth < kMaxDepth) unit_0043(c, 487u, depth + 1u); else { c.pc = 0x0022F550u; return; } if (c.pc != 0x002327E0u) [[unlikely]] return; }
L_002327E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 1356u)));  if (t) { goto L_002327F8; } }
L_002327E8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002327F4u); set32(c.r[6], 0u + 1010u);  if (depth < kMaxDepth) unit_0043(c, 489u, depth + 1u); else { c.pc = 0x0022F5A0u; return; } if (c.pc != 0x002327F4u) [[unlikely]] return; }
L_002327F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 1356u)));
    c.budget -= 1;
L_002327F8:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_0023281C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232810u); set32(c.r[5], 0u + 27u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00232810u) [[unlikely]] return; }
L_00232810:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_00232830; }
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 1;
L_0023281C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232828u); set32(c.r[6], 0u + 1011u);  if (depth < kMaxDepth) unit_0043(c, 487u, depth + 1u); else { c.pc = 0x0022F550u; return; } if (c.pc != 0x00232828u) [[unlikely]] return; }
L_00232828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023283C; } }
L_00232830:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023283Cu); set32(c.r[6], 0u + 1011u);  if (depth < kMaxDepth) unit_0043(c, 489u, depth + 1u); else { c.pc = 0x0022F5A0u; return; } if (c.pc != 0x0023283Cu) [[unlikely]] return; }
L_0023283C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00232840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232848u);  if (depth < kMaxDepth) unit_0046(c, 144u, depth + 1u); else { c.pc = 0x00238FB0u; return; } if (c.pc != 0x00232848u) [[unlikely]] return; }
L_00232848:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00232EC4; } }
L_00232854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00232880; } }
L_0023285C:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00232880; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232874u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x00232874u) [[unlikely]] return; }
L_00232874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00232880:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023285Cu | kUnwind; return; } goto L_0023285C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232894u); set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  if (depth < kMaxDepth) unit_004F(c, 217u, depth + 1u); else { c.pc = 0x0025E390u; return; } if (c.pc != 0x00232894u) [[unlikely]] return; }
L_00232894:
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00232EC4; } }
L_002328A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002328A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 161u, depth + 1u); else { c.pc = 0x00239220u; return; } if (c.pc != 0x002328A8u) [[unlikely]] return; }
L_002328A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002328B4u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x002328B4u) [[unlikely]] return; }
L_002328B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00232914; }
    set32(c.r[2], ld32((c.r[16].w[0] + 1128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00232910; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1152u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002328FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002328E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 300u, depth + 1u); else { c.pc = 0x0023A0F0u; return; } if (c.pc != 0x002328E0u) [[unlikely]] return; }
L_002328E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002328E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x002328E8u) [[unlikely]] return; }
L_002328E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002328F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 327u, depth + 1u); else { c.pc = 0x00253250u; return; } if (c.pc != 0x002328F4u) [[unlikely]] return; }
L_002328F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 18u);  if (t) { goto L_00232908; } }
L_002328FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232904u);  if (depth < kMaxDepth) unit_0046(c, 297u, depth + 1u); else { c.pc = 0x0023A010u; return; } if (c.pc != 0x00232904u) [[unlikely]] return; }
L_00232904:
    set32(c.r[2], 0u + 18u);
    c.budget -= 1;
L_00232908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[2].w[0]);  if (t) { goto L_00232924; } }
L_00232910:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00232914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023291Cu);  if (depth < kMaxDepth) unit_0046(c, 300u, depth + 1u); else { c.pc = 0x0023A0F0u; return; } if (c.pc != 0x0023291Cu) [[unlikely]] return; }
L_0023291C:
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 1328u), c.r[2].w[0]);
    c.budget -= 2;
L_00232924:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232934u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00232934u) [[unlikely]] return; }
L_00232934:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232944u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00232944u) [[unlikely]] return; }
L_00232944:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232954u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00232954u) [[unlikely]] return; }
L_00232954:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232964u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00232964u) [[unlikely]] return; }
L_00232964:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232974u); set32(c.r[5], c.r[5].w[0] - 26883u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00232974u) [[unlikely]] return; }
L_00232974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232EC4; } }
L_0023297C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002329AC; } }
L_00232984:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 160u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002329AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023299Cu);  if (depth < kMaxDepth) unit_0043(c, 109u, depth + 1u); else { c.pc = 0x0022C960u; return; } if (c.pc != 0x0023299Cu) [[unlikely]] return; }
L_0023299C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 1132u)));  goto L_002329BC; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002329AC:
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00232984u | kUnwind; return; } goto L_00232984; }
    set32(c.r[4], ld32((c.r[16].w[0] + 1132u)));
    c.budget -= 1;
L_002329BC:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;  goto L_002329DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002329D0u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0047(c, 258u, depth + 1u); else { c.pc = 0x0023EB20u; return; } if (c.pc != 0x002329D0u) [[unlikely]] return; }
L_002329D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 1;
L_002329DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00232EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002329ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 303u, depth + 1u); else { c.pc = 0x0023A1D0u; return; } if (c.pc != 0x002329ECu) [[unlikely]] return; }
L_002329EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232EC4; } }
L_002329F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002329FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 335u, depth + 1u); else { c.pc = 0x0023A4A0u; return; } if (c.pc != 0x002329FCu) [[unlikely]] return; }
L_002329FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232EC4; } }
L_00232A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232A0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 398u, depth + 1u); else { c.pc = 0x0023ACD0u; return; } if (c.pc != 0x00232A0Cu) [[unlikely]] return; }
L_00232A0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232A1Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00232A1Cu) [[unlikely]] return; }
L_00232A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232EC4; } }
L_00232A24:
    set32(c.r[2], ld32((c.r[16].w[0] + 1420u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00232A44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232A38u);  if (depth < kMaxDepth) unit_002B(c, 251u, depth + 1u); else { c.pc = 0x001CDFC0u; return; } if (c.pc != 0x00232A38u) [[unlikely]] return; }
L_00232A38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1152u)));  goto L_00232A50; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00232A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232A4Cu); st32((c.r[16].w[0] + 1420u), 0u);  if (depth < kMaxDepth) unit_0046(c, 214u, depth + 1u); else { c.pc = 0x002396E0u; return; } if (c.pc != 0x00232A4Cu) [[unlikely]] return; }
L_00232A4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1152u)));
    c.budget -= 1;
L_00232A50:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00232EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232A64u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00232A64u) [[unlikely]] return; }
L_00232A64:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232A70u); set32(c.r[4], 0u + 4099u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00232A70u) [[unlikely]] return; }
L_00232A70:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00232A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232A80u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 221u, depth + 1u); else { c.pc = 0x00225F70u; return; } if (c.pc != 0x00232A80u) [[unlikely]] return; }
L_00232A80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00232AB4; }
L_00232A88:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00232AA0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00232AB0; } }
L_00232AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232AA8u);  if (depth < kMaxDepth) unit_00BD(c, 363u, depth + 1u); else { c.pc = 0x004172F0u; return; } if (c.pc != 0x00232AA8u) [[unlikely]] return; }
L_00232AA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00232AC4; }
L_00232AB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00232AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232ABCu);  if (depth < kMaxDepth) unit_0046(c, 297u, depth + 1u); else { c.pc = 0x0023A010u; return; } if (c.pc != 0x00232ABCu) [[unlikely]] return; }
L_00232ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232EC4; } }
L_00232AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232ACCu);  if (depth < kMaxDepth) unit_0046(c, 300u, depth + 1u); else { c.pc = 0x0023A0F0u; return; } if (c.pc != 0x00232ACCu) [[unlikely]] return; }
L_00232ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232EC4; } }
L_00232AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232ADCu); set32(c.r[4], 0u + 4099u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00232ADCu) [[unlikely]] return; }
L_00232ADC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10030000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232AF0u); c.r[6].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 435u, depth + 1u); else { c.pc = 0x001CFFF0u; return; } if (c.pc != 0x00232AF0u) [[unlikely]] return; }
L_00232AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232AF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x00232AF8u) [[unlikely]] return; }
L_00232AF8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232B04u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004C(c, 327u, depth + 1u); else { c.pc = 0x00253250u; return; } if (c.pc != 0x00232B04u) [[unlikely]] return; }
L_00232B04:
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00232EC4; } }
L_00232B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232B18u); set32(c.r[4], 0u + 4099u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00232B18u) [[unlikely]] return; }
L_00232B18:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232B24u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00232B24u) [[unlikely]] return; }
L_00232B24:
    set32(c.r[2], 0u + 21u);
    st32((c.r[16].w[0] + 1328u), c.r[2].w[0]);
    c.budget -= 2;
L_00232B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232B34u); set32(c.r[4], 0u + 4099u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00232B34u) [[unlikely]] return; }
L_00232B34:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232B4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 297u, depth + 1u); else { c.pc = 0x0023A010u; return; } if (c.pc != 0x00232B4Cu) [[unlikely]] return; }
L_00232B4C:
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00232EC4; } }
L_00232B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232B60u); set32(c.r[4], 0u + 4099u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00232B60u) [[unlikely]] return; }
L_00232B60:
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00232EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232B78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 300u, depth + 1u); else { c.pc = 0x0023A0F0u; return; } if (c.pc != 0x00232B78u) [[unlikely]] return; }
L_00232B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232B80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x00232B80u) [[unlikely]] return; }
L_00232B80:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232B8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 327u, depth + 1u); else { c.pc = 0x00253250u; return; } if (c.pc != 0x00232B8Cu) [[unlikely]] return; }
L_00232B8C:
    set32(c.r[3], ld32((c.r[16].w[0] + 1332u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00232EC4; } }
L_00232B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232BA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x00232BA0u) [[unlikely]] return; }
L_00232BA0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232BACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004C(c, 327u, depth + 1u); else { c.pc = 0x00253250u; return; } if (c.pc != 0x00232BACu) [[unlikely]] return; }
L_00232BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232BB4u); set32(c.r[4], 0u + 1348u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00232BB4u) [[unlikely]] return; }
L_00232BB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 196u), c.r[2].w[0]);  goto L_00232BCC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232BC8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 266u, depth + 1u); else { c.pc = 0x004069C0u; return; } if (c.pc != 0x00232BC8u) [[unlikely]] return; }
L_00232BC8:
    st32((c.r[16].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 1;
L_00232BCC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232BE0u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x00232BE0u) [[unlikely]] return; }
L_00232BE0:
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00232EC4; } }
L_00232BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232BF4u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00232BF4u) [[unlikely]] return; }
L_00232BF4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232C00u); set32(c.r[4], 0u + 132u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00232C00u) [[unlikely]] return; }
L_00232C00:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);  goto L_00232C30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232C14u);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x00232C14u) [[unlikely]] return; }
L_00232C14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232C28u); c.r[7].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B7(c, 182u, depth + 1u); else { c.pc = 0x003FE040u; return; } if (c.pc != 0x00232C28u) [[unlikely]] return; }
L_00232C28:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 2;
L_00232C30:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232C3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 187u, depth + 1u); else { c.pc = 0x003FE0E0u; return; } if (c.pc != 0x00232C3Cu) [[unlikely]] return; }
L_00232C3C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232C48u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 89u, depth + 1u); else { c.pc = 0x003FCD40u; return; } if (c.pc != 0x00232C48u) [[unlikely]] return; }
L_00232C48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232C54u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 79u, depth + 1u); else { c.pc = 0x003FCC30u; return; } if (c.pc != 0x00232C54u) [[unlikely]] return; }
L_00232C54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232C5Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 82u, depth + 1u); else { c.pc = 0x003FCC70u; return; } if (c.pc != 0x00232C5Cu) [[unlikely]] return; }
L_00232C5C:
    set32(c.r[2], 0u + 25u);
    st32((c.r[16].w[0] + 1328u), c.r[2].w[0]);
    c.budget -= 2;
L_00232C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232C6Cu);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00232C6Cu) [[unlikely]] return; }
L_00232C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232C74u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 86u, depth + 1u); else { c.pc = 0x003FCCD0u; return; } if (c.pc != 0x00232C74u) [[unlikely]] return; }
L_00232C74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00232EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232C84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 297u, depth + 1u); else { c.pc = 0x0023A010u; return; } if (c.pc != 0x00232C84u) [[unlikely]] return; }
L_00232C84:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232C94u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00232C94u) [[unlikely]] return; }
L_00232C94:
    set32(c.r[3], 0u + 26u);
    st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);
    c.budget -= 2;
L_00232C9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00232EC4; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 27u);  goto L_00232CD4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00232CCCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00232CCCu) [[unlikely]] return; }
L_00232CCC:
    st32((c.r[16].w[0] + 196u), 0u);
    set32(c.r[2], 0u + 27u);
    c.budget -= 2;
L_00232CD4:
    st32((c.r[16].w[0] + 1328u), c.r[2].w[0]);
    c.budget -= 1;
L_00232CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232CE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 300u, depth + 1u); else { c.pc = 0x0023A0F0u; return; } if (c.pc != 0x00232CE0u) [[unlikely]] return; }
L_00232CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232CE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x00232CE8u) [[unlikely]] return; }
L_00232CE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232CF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 327u, depth + 1u); else { c.pc = 0x00253250u; return; } if (c.pc != 0x00232CF4u) [[unlikely]] return; }
L_00232CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232CFCu);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00232CFCu) [[unlikely]] return; }
L_00232CFC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232D08u); set32(c.r[4], 0u + 132u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00232D08u) [[unlikely]] return; }
L_00232D08:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);  goto L_00232D38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232D1Cu);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x00232D1Cu) [[unlikely]] return; }
L_00232D1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232D30u); c.r[7].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B7(c, 182u, depth + 1u); else { c.pc = 0x003FE040u; return; } if (c.pc != 0x00232D30u) [[unlikely]] return; }
L_00232D30:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 2;
L_00232D38:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232D44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 187u, depth + 1u); else { c.pc = 0x003FE0E0u; return; } if (c.pc != 0x00232D44u) [[unlikely]] return; }
L_00232D44:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232D50u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 89u, depth + 1u); else { c.pc = 0x003FCD40u; return; } if (c.pc != 0x00232D50u) [[unlikely]] return; }
L_00232D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232D58u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 82u, depth + 1u); else { c.pc = 0x003FCC70u; return; } if (c.pc != 0x00232D58u) [[unlikely]] return; }
L_00232D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232D60u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 84u, depth + 1u); else { c.pc = 0x003FCCA0u; return; } if (c.pc != 0x00232D60u) [[unlikely]] return; }
L_00232D60:
    set32(c.r[3], 0u + 28u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00232EC4; } }
L_00232D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232D74u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00232D74u) [[unlikely]] return; }
L_00232D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232D7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 86u, depth + 1u); else { c.pc = 0x003FCCD0u; return; } if (c.pc != 0x00232D7Cu) [[unlikely]] return; }
L_00232D7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00232EC4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1332u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00232EC4; } }
L_00232D90:
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 184u)));  goto L_00232DE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232DA4u); set32(c.r[4], 0u + 200u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00232DA4u) [[unlikely]] return; }
L_00232DA4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 184u), c.r[18].w[0]);  goto L_00232DE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232DB8u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x00232DB8u) [[unlikely]] return; }
L_00232DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232DC0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 133u, depth + 1u); else { c.pc = 0x00424F50u; return; } if (c.pc != 0x00232DC0u) [[unlikely]] return; }
L_00232DC0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232DDCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 220u, depth + 1u); else { c.pc = 0x00415DE0u; return; } if (c.pc != 0x00232DDCu) [[unlikely]] return; }
L_00232DDC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 184u), c.r[18].w[0]);
    c.budget -= 2;
L_00232DE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 1;
L_00232DE8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232DF8u);  if (depth < kMaxDepth) unit_00BD(c, 362u, depth + 1u); else { c.pc = 0x004172D0u; return; } if (c.pc != 0x00232DF8u) [[unlikely]] return; }
L_00232DF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232E08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 297u, depth + 1u); else { c.pc = 0x0023A010u; return; } if (c.pc != 0x00232E08u) [[unlikely]] return; }
L_00232E08:
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00232EC4; } }
L_00232E14:
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00232EC4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00232E3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00232E3Cu) [[unlikely]] return; }
L_00232E3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232E48u); st32((c.r[16].w[0] + 184u), 0u);  if (depth < kMaxDepth) unit_0046(c, 300u, depth + 1u); else { c.pc = 0x0023A0F0u; return; } if (c.pc != 0x00232E48u) [[unlikely]] return; }
L_00232E48:
    set32(c.r[3], ld32((c.r[16].w[0] + 1332u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00232EC4; } }
L_00232E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232E5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 383u, depth + 1u); else { c.pc = 0x0023AAF0u; return; } if (c.pc != 0x00232E5Cu) [[unlikely]] return; }
L_00232E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232E64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 263u, depth + 1u); else { c.pc = 0x00239C60u; return; } if (c.pc != 0x00232E64u) [[unlikely]] return; }
L_00232E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232E6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 435u, depth + 1u); else { c.pc = 0x0023B070u; return; } if (c.pc != 0x00232E6Cu) [[unlikely]] return; }
L_00232E6C:
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1120u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232E84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00232E84u) [[unlikely]] return; }
L_00232E84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232E94u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00232E94u) [[unlikely]] return; }
L_00232E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232E9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x00232E9Cu) [[unlikely]] return; }
L_00232E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232EA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 301u, depth + 1u); else { c.pc = 0x00252F90u; return; } if (c.pc != 0x00232EA4u) [[unlikely]] return; }
L_00232EA4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00232EC4; } }
L_00232EB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[16].w[0] + 1328u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_00232EC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00232EC8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00232EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 1124u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 1120u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 104u);  goto L_00232F1C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00232F14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00232F14u) [[unlikely]] return; }
L_00232F14:
    st32((c.r[16].w[0] + 176u), 0u);
    set32(c.r[4], 0u + 104u);
    c.budget -= 2;
L_00232F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232F24u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00232F24u) [[unlikely]] return; }
L_00232F24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 176u), c.r[2].w[0]);  goto L_00232F40; }
    set32(c.r[6], ld32((c.r[16].w[0] + 1120u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232F3Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 219u, depth + 1u); else { c.pc = 0x0024E250u; return; } if (c.pc != 0x00232F3Cu) [[unlikely]] return; }
L_00232F3C:
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 1;
L_00232F40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232F64u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00232F64u) [[unlikely]] return; }
L_00232F64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232F74u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00232F74u) [[unlikely]] return; }
L_00232F74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232F84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00232F84u) [[unlikely]] return; }
L_00232F84:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00232FA0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_00233140; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 3;
L_00232FFC:
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233010u); st32((c.r[21].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00233010u) [[unlikely]] return; }
L_00233010:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233020u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00233020u) [[unlikely]] return; }
L_00233020:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233030u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00233030u) [[unlikely]] return; }
L_00233030:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233040u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00233040u) [[unlikely]] return; }
L_00233040:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; st32((c.r[21].w[0] + 1132u), c.r[3].w[0]);  if (t) { goto L_00233064; } }
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_00233070; }
L_00233064:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00233140; } }
L_00233070:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023307Cu); st32((c.r[21].w[0] + 1148u), c.r[22].w[0]);  if (depth < kMaxDepth) unit_0046(c, 360u, depth + 1u); else { c.pc = 0x0023A7C0u; return; } if (c.pc != 0x0023307Cu) [[unlikely]] return; }
L_0023307C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_002330C4; }
    st32((c.r[21].w[0] + 1168u), c.r[18].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[21].w[0] + 1172u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 1176u), c.r[20].w[0]);
    st32((c.r[21].w[0] + 1180u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 1184u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[21].w[0] + 1184u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 11;
    { const bool t = c.r[23].d[0] == 0ull; st32((c.r[21].w[0] + 1184u), c.r[2].w[0]);  if (t) { goto L_002330C0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 1184u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    st32((c.r[21].w[0] + 1184u), c.r[2].w[0]);
    c.budget -= 3;
L_002330C0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002330C4:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_002330F0; }
    st32((c.r[21].w[0] + 1216u), c.r[17].w[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[21].w[0] + 1220u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 1224u), c.r[20].w[0]);
    st32((c.r[21].w[0] + 1228u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 1280u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[21].w[0] + 1280u), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 9;
L_002330F0:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0023311C; }
    st32((c.r[21].w[0] + 1264u), c.r[16].w[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[21].w[0] + 1268u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 1272u), c.r[20].w[0]);
    st32((c.r[21].w[0] + 1276u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 1280u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[21].w[0] + 1280u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 9;
L_0023311C:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233128u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00233128u) [[unlikely]] return; }
L_00233128:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 25u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233138u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00233138u) [[unlikely]] return; }
L_00233138:
    set32(c.r[3], 0u + 3u);
    st32((c.r[21].w[0] + 1328u), c.r[3].w[0]);
    c.budget -= 2;
L_00233140:
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
L_00233170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023318Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x0023318Cu) [[unlikely]] return; }
L_0023318C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023319Cu); set32(c.r[5], c.r[5].w[0] - 26858u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0023319Cu) [[unlikely]] return; }
L_0023319C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002331B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002331D4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x002331D4u) [[unlikely]] return; }
L_002331D4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002331E8; }
    set32(c.r[3], 0u + 31u);
    st32((c.r[17].w[0] + 1328u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
L_002331E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00233200:
    c.budget -= 2;
    { set32(c.r[5], 0u + 8u);  [[clang::musttail]] return unit_0045(c, 274u, depth); }
L_00233210:
    c.budget -= 2;
    { set32(c.r[5], 0u + 11u);  [[clang::musttail]] return unit_0045(c, 274u, depth); }
L_00233220:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_00233284; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00233560; } }
L_00233284:
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { set32(c.r[16], c.r[20].w[0] - 2u);  goto L_00233314; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00233304; } }
L_00233294:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 1168u)));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[22].d[0]) { set32(c.r[2], 0u + 2u);  goto L_002332C0; }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00233310; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 1184u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] & 128ull;  if (t) { goto L_00233310; } }
L_002332C0:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00233304; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002332D0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 89u, depth + 1u); else { c.pc = 0x00235700u; return; } if (c.pc != 0x002332D0u) [[unlikely]] return; }
L_002332D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_002332F4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002332ECu); set32(c.r[5], c.r[5].w[0] - 26834u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x002332ECu) [[unlikely]] return; }
L_002332EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00233560; } }
L_002332F4:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_00233300; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00233300:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00233304:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00233294u | kUnwind; return; } goto L_00233294; }
L_00233310:
    set32(c.r[16], c.r[20].w[0] - 2u);
    c.budget -= 1;
L_00233314:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] - 4u);  goto L_002333B0; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002333A0; } }
L_0023332C:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 1168u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_00233364; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[22].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002333AC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023335Cu); set32(c.r[5], c.r[5].w[0] - 26809u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0023335Cu) [[unlikely]] return; }
L_0023335C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00233560; } }
L_00233364:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_002333A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233374u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 24u, depth + 1u); else { c.pc = 0x00250730u; return; } if (c.pc != 0x00233374u) [[unlikely]] return; }
L_00233374:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233388u); set32(c.r[5], c.r[5].w[0] - 26776u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00233388u) [[unlikely]] return; }
L_00233388:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00233560; } }
L_002333A0:
    c.r[2].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023332Cu | kUnwind; return; } goto L_0023332C; }
L_002333AC:
    set32(c.r[2], c.r[20].w[0] - 4u);
    c.budget -= 1;
L_002333B0:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002333D0; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002333CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x002333CCu) [[unlikely]] return; }
L_002333CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002333D0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_002333F8; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 1);  goto L_00233430; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002333F0u); set32(c.r[5], c.r[5].w[0] - 26756u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x002333F0u) [[unlikely]] return; }
L_002333F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0023342C; } }
L_002333F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0023342C; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00233418; } }
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023342C; } }
L_00233418:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233428u); set32(c.r[5], c.r[5].w[0] - 26714u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00233428u) [[unlikely]] return; }
L_00233428:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023342C:
    set32(c.r[2], c.r[18].w[0] << 1);
    c.budget -= 1;
L_00233430:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[21].w[0]);
    st32((c.r[2].w[0] + 1168u), c.r[22].w[0]);
    set32(c.r[4], c.r[2].w[0] + 1184u);
    st32((c.r[2].w[0] + 1172u), c.r[20].w[0]);
    st32((c.r[2].w[0] + 1176u), c.r[23].w[0]);
    st32((c.r[2].w[0] + 1180u), c.r[19].w[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[2].w[0] + 1184u), 0u);  if (t) { goto L_00233468; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_00233478; } }
L_00233468:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u - 129u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_00233478:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[30].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_0023349C; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_002334AC; } }
L_0023349C:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u - 1025u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_002334AC:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[17], c.r[2].w[0] + 160u);  if (t) { goto L_002334C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00233560; } }
L_002334C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002334D0u);  if (depth < kMaxDepth) unit_0043(c, 74u, depth + 1u); else { c.pc = 0x0022C620u; return; } if (c.pc != 0x002334D0u) [[unlikely]] return; }
L_002334D0:
    c.budget -= 2;
    if (c.r[22].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_00233540; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002334ECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 63u, depth + 1u); else { c.pc = 0x0022C510u; return; } if (c.pc != 0x002334ECu) [[unlikely]] return; }
L_002334EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002334F4u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0043(c, 73u, depth + 1u); else { c.pc = 0x0022C610u; return; } if (c.pc != 0x002334F4u) [[unlikely]] return; }
L_002334F4:
    set32(c.r[2], c.r[16].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[2].w[0] + 1184u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1184u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233510u); c.r[6].d[0] = c.r[2].d[0] & 128ull;  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x00233510u) [[unlikely]] return; }
L_00233510:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233524u); c.r[6].d[0] = c.r[2].d[0] & 2ull;  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x00233524u) [[unlikely]] return; }
L_00233524:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233538u); c.r[6].d[0] = c.r[2].d[0] & 1024ull;  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x00233538u) [[unlikely]] return; }
L_00233538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00233560; } }
L_00233540:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00233560; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00233558u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00233558u) [[unlikely]] return; }
L_00233558:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00233560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00233590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], 0u - 1u);
    st32((c.r[5].w[0] + 1184u), 0u);
    st32((c.r[5].w[0] + 1168u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 160u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 160u);  if (t) { goto L_002335E0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002335DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002335DCu) [[unlikely]] return; }
L_002335DC:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002335E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002335F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1328u)));
    c.r[1].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0023365C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233614u);  if (depth < kMaxDepth) unit_0046(c, 252u, depth + 1u); else { c.pc = 0x00239AF0u; return; } if (c.pc != 0x00233614u) [[unlikely]] return; }
L_00233614:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00233638; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00233630u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00233630u) [[unlikely]] return; }
L_00233630:
    st32((c.r[16].w[0] + 176u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00233638:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1328u), c.r[2].w[0]);
    set32(c.r[5], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023364Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x0023364Cu) [[unlikely]] return; }
L_0023364C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023365Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x0023365Cu) [[unlikely]] return; }
L_0023365C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00233670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1312u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002336A8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002336A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002336A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002336A8u) [[unlikely]] return; }
L_002336A8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 1312u), 0u);  goto L_002336F8; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002336F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002336C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x002336C4u) [[unlikely]] return; }
L_002336C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002336D4; } }
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_002336DC; }
L_002336D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002336EC; } }
L_002336DC:
    set32(c.r[4], c.r[17].w[0] + 1312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002336E8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x002336E8u) [[unlikely]] return; }
L_002336E8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002336EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1312u), c.r[3].w[0]);  if (t) { goto L_002336F8; } }
L_002336F4:
    st32((c.r[17].w[0] + 1312u), 0u);
    c.budget -= 1;
L_002336F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00233710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1316u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00233748; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00233748; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233748u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00233748u) [[unlikely]] return; }
L_00233748:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 1316u), 0u);  goto L_00233798; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00233794; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233764u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00233764u) [[unlikely]] return; }
L_00233764:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00233774; } }
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_0023377C; }
L_00233774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0023378C; } }
L_0023377C:
    set32(c.r[4], c.r[17].w[0] + 1316u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233788u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x00233788u) [[unlikely]] return; }
L_00233788:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0023378C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1316u), c.r[3].w[0]);  if (t) { goto L_00233798; } }
L_00233794:
    st32((c.r[17].w[0] + 1316u), 0u);
    c.budget -= 1;
L_00233798:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002337B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 60u), 0u);  if (t) { goto L_002337EC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002337EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002337ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002337ECu) [[unlikely]] return; }
L_002337EC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[29].w[0] + 60u), 0u);  goto L_00233844; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00233840; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233808u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00233808u) [[unlikely]] return; }
L_00233808:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00233834; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00233824; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00233834; } }
L_00233824:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233834u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x00233834u) [[unlikely]] return; }
L_00233834:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00233848; } }
L_00233840:
    st32((c.r[29].w[0] + 60u), 0u);
    c.budget -= 1;
L_00233844:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00233848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233850u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00233850u) [[unlikely]] return; }
L_00233850:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_002338D8; }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[29].w[0] + 56u), c.r[3].w[0]);  goto L_00233874; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_00233874:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233880u); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_004B(c, 327u, depth + 1u); else { c.pc = 0x0024EE60u; return; } if (c.pc != 0x00233880u) [[unlikely]] return; }
L_00233880:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002338A8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002338A8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002338A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002338A8u) [[unlikely]] return; }
L_002338A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002338FC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002338CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002338CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002338CCu) [[unlikely]] return; }
L_002338CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002338FC; } }
L_002338D8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_002338FC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002338F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002338F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002338F8u) [[unlikely]] return; }
L_002338F8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002338FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00233910:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 1176u)));  c.pc = t; return; }
L_00233920:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 180u)));  [[clang::musttail]] return unit_004F(c, 194u, depth); }
L_00233930:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1352u), c.r[5].w[0]);  c.pc = t; return; }
L_00233940:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0045(c, 274u, depth); }
L_00233950:
    set32(c.r[2], ld32((c.r[4].w[0] + 1328u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 18ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00233960:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 1152u)));  c.pc = t; return; }
L_00233970:
    c.budget -= 2;
    { set32(c.r[5], 0u + 14u);  [[clang::musttail]] return unit_0045(c, 274u, depth); }
L_00233980:
    c.budget -= 2;
    { set32(c.r[4], 0u + 4115u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D1660u | kUnwind; return; } [[clang::musttail]] return unit_002C(c, 150u, depth); }
L_00233990:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002339C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002339C8u);  if (depth < kMaxDepth) unit_0046(c, 276u, depth + 1u); else { c.pc = 0x00239DF0u; return; } if (c.pc != 0x002339C8u) [[unlikely]] return; }
L_002339C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_00233C88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002339DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x002339DCu) [[unlikely]] return; }
    goto L_002339DC;
L_002339D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002339DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00233AA4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], ld32((c.r[3].w[0] + 436u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[28].w[0] - 32328u));  goto L_00233A70; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[28].w[0] - 32304u));  goto L_00233A58; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[28].w[0] - 32360u));  goto L_00233A3C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[28].w[0] - 32360u));  goto L_00233A20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[28].w[0] - 32300u));  if (t) { goto L_00233A8C; } }
L_00233A20:
    c.f[2] = ld32((c.r[28].w[0] - 32632u));
    c.f[0] = ld32((c.r[28].w[0] - 32296u));
    st32((c.r[29].w[0] + 144u), c.f[1]);
    st32((c.r[29].w[0] + 156u), c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_00233B28; } }
L_00233A3C:
    c.f[2] = ld32((c.r[28].w[0] - 32696u));
    c.f[0] = ld32((c.r[28].w[0] - 32296u));
    st32((c.r[29].w[0] + 144u), c.f[1]);
    st32((c.r[29].w[0] + 156u), c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_00233B28; } }
L_00233A58:
    c.f[1] = ld32((c.r[28].w[0] - 32664u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 156u), c.f[1]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_00233B28; } }
L_00233A70:
    c.f[2] = ld32((c.r[28].w[0] - 32696u));
    c.f[0] = ld32((c.r[28].w[0] - 32304u));
    st32((c.r[29].w[0] + 144u), c.f[1]);
    st32((c.r[29].w[0] + 156u), c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_00233B28; } }
L_00233A8C:
    c.f[1] = ld32((c.r[28].w[0] - 32696u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 156u), c.f[1]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_00233B28; } }
L_00233AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233AACu);  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x00233AACu) [[unlikely]] return; }
L_00233AAC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.f[1] = ld32((c.r[28].w[0] - 32360u));  goto L_00233B10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233AC0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 362u, depth + 1u); else { c.pc = 0x0023A840u; return; } if (c.pc != 0x00233AC0u) [[unlikely]] return; }
L_00233AC0:
    set32(c.r[3], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 436u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[28].w[0] - 32304u));  goto L_00233ADC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.f[0]);  if (t) { goto L_00233AF4; } }
L_00233ADC:
    c.f[1] = ld32((c.r[28].w[0] - 32284u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 156u), c.f[1]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_00233B28; } }
L_00233AF4:
    c.f[2] = ld32((c.r[28].w[0] - 32280u));
    c.f[1] = ld32((c.r[28].w[0] - 32276u));
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    st32((c.r[29].w[0] + 144u), c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_00233B28; } }
L_00233B10:
    c.f[2] = ld32((c.r[28].w[0] - 32696u));
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    st32((c.r[29].w[0] + 144u), c.f[1]);
    st32((c.r[29].w[0] + 156u), c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    c.budget -= 6;
L_00233B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233B30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00233B30u) [[unlikely]] return; }
L_00233B30:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[3], 0u + 130u);
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 1132u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[18].w[0] + 212u)));  goto L_00233B68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233B54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00233B54u) [[unlikely]] return; }
L_00233B54:
    set32(c.r[4], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233B64u); c.r[6].sd[0] = static_cast<std::int32_t>(0x02000000u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x00233B64u) [[unlikely]] return; }
L_00233B64:
    set32(c.r[6], ld32((c.r[18].w[0] + 212u)));
    c.budget -= 1;
L_00233B68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233B7Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 229u, depth + 1u); else { c.pc = 0x00161F30u; return; } if (c.pc != 0x00233B7Cu) [[unlikely]] return; }
L_00233B7C:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 2;
L_00233B84:
    set32(c.r[20], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 160u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00233C4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233B9Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x00233B9Cu) [[unlikely]] return; }
L_00233B9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00233C48; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 160u)));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233BB4u); set32(c.r[19], c.r[20].w[0] + 160u);  if (depth < kMaxDepth) unit_0043(c, 99u, depth + 1u); else { c.pc = 0x0022C830u; return; } if (c.pc != 0x00233BB4u) [[unlikely]] return; }
L_00233BB4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233BC4u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0046(c, 368u, depth + 1u); else { c.pc = 0x0023A960u; return; } if (c.pc != 0x00233BC4u) [[unlikely]] return; }
L_00233BC4:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233BD0u); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x00233BD0u) [[unlikely]] return; }
L_00233BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233BD8u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x00233BD8u) [[unlikely]] return; }
L_00233BD8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233BE8u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00233BE8u) [[unlikely]] return; }
L_00233BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233BF0u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0043(c, 102u, depth + 1u); else { c.pc = 0x0022C860u; return; } if (c.pc != 0x00233BF0u) [[unlikely]] return; }
L_00233BF0:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233BFCu); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x00233BFCu) [[unlikely]] return; }
L_00233BFC:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233C0Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x00233C0Cu) [[unlikely]] return; }
L_00233C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00233C34; } }
L_00233C14:
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233C24u); set32(c.r[5], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x00233C24u) [[unlikely]] return; }
L_00233C24:
    set32(c.r[2], ld32((c.r[20].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233C30u); set32(c.r[4], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_000E(c, 218u, depth + 1u); else { c.pc = 0x001599B0u; return; } if (c.pc != 0x00233C30u) [[unlikely]] return; }
L_00233C30:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00233C34:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00233C14u | kUnwind; return; } goto L_00233C14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233C48u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x00233C48u) [[unlikely]] return; }
L_00233C48:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00233C4C:
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00233B84u | kUnwind; return; } goto L_00233B84; }
    set32(c.r[3], ld32((c.r[18].w[0] + 1132u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00233C84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233C70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00233C70u) [[unlikely]] return; }
L_00233C70:
    set32(c.r[4], ld32((c.r[17].w[0] + 352u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFDFF0000u);
    c.r[5].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233C84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x00233C84u) [[unlikely]] return; }
L_00233C84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00233C88:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00233CB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 200u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00233D74; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 148u);  goto L_00233CE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00233D78; } }
    set32(c.r[4], 0u + 148u);
    c.budget -= 1;
L_00233CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233CF0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00233CF0u) [[unlikely]] return; }
L_00233CF0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);  goto L_00233D28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233D04u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00233D04u) [[unlikely]] return; }
L_00233D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233D0Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x00233D0Cu) [[unlikely]] return; }
L_00233D0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233D20u); c.r[7].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B7(c, 146u, depth + 1u); else { c.pc = 0x003FD710u; return; } if (c.pc != 0x00233D20u) [[unlikely]] return; }
L_00233D20:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.budget -= 2;
L_00233D28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    set32(c.r[5], 0u + 3u);
    c.f[13] = c.r[3].w[0];
    set32(c.r[6], 0u + 1u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233D50u); st32((c.r[16].w[0] + 200u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00B7(c, 153u, depth + 1u); else { c.pc = 0x003FD830u; return; } if (c.pc != 0x00233D50u) [[unlikely]] return; }
L_00233D50:
    set32(c.r[4], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233D5Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 60u, depth + 1u); else { c.pc = 0x003FC8E0u; return; } if (c.pc != 0x00233D5Cu) [[unlikely]] return; }
L_00233D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233D64u); set32(c.r[4], ld32((c.r[16].w[0] + 200u)));  if (depth < kMaxDepth) unit_00B7(c, 61u, depth + 1u); else { c.pc = 0x003FC8F0u; return; } if (c.pc != 0x00233D64u) [[unlikely]] return; }
L_00233D64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233D74u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00233D74u) [[unlikely]] return; }
L_00233D74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00233D78:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00233D90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 208u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00233E38; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 200u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 144u);  goto L_00233DD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00233E3C; } }
    set32(c.r[4], 0u + 144u);
    c.budget -= 1;
L_00233DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233DD8u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00233DD8u) [[unlikely]] return; }
L_00233DD8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_00233E10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233DECu);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00233DECu) [[unlikely]] return; }
L_00233DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233DF4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x00233DF4u) [[unlikely]] return; }
L_00233DF4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233E08u); c.r[7].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B7(c, 194u, depth + 1u); else { c.pc = 0x003FE330u; return; } if (c.pc != 0x00233E08u) [[unlikely]] return; }
L_00233E08:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_00233E10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 15u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233E24u); st32((c.r[19].w[0] + 208u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00B7(c, 200u, depth + 1u); else { c.pc = 0x003FE3F0u; return; } if (c.pc != 0x00233E24u) [[unlikely]] return; }
L_00233E24:
    set32(c.r[4], ld32((c.r[19].w[0] + 208u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233E30u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 60u, depth + 1u); else { c.pc = 0x003FC8E0u; return; } if (c.pc != 0x00233E30u) [[unlikely]] return; }
L_00233E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233E38u); set32(c.r[4], ld32((c.r[19].w[0] + 208u)));  if (depth < kMaxDepth) unit_00B7(c, 61u, depth + 1u); else { c.pc = 0x003FC8F0u; return; } if (c.pc != 0x00233E38u) [[unlikely]] return; }
L_00233E38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00233E3C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00233E60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00233EA8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1132u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 1152u)));  goto L_00233E90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0045(c, 4u, depth); } }
L_00233E90:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00233EAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233EA0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 5u, depth + 1u); else { c.pc = 0x00234030u; return; } if (c.pc != 0x00233EA0u) [[unlikely]] return; }
L_00233EA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0045(c, 4u, depth); } }
L_00233EA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00233EAC:
    set32(c.r[5], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233EB8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00233EB8u) [[unlikely]] return; }
L_00233EB8:
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 1328u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 1132u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 1344u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 1132u), c.r[16].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233EE4u); st32((c.r[17].w[0] + 1340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00233EE4u) [[unlikely]] return; }
L_00233EE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233EF0u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00233EF0u) [[unlikely]] return; }
L_00233EF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 1344u)));  goto L_00233F0C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 1360u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 1344u)));  goto L_00233F2C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 1344u)));
    c.budget -= 1;
L_00233F0C:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00233F28; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1132u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00233F4C; }
L_00233F28:
    set32(c.r[3], ld32((c.r[17].w[0] + 1344u)));
    c.budget -= 1;
L_00233F2C:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  [[clang::musttail]] return unit_0045(c, 4u, depth); }
    set32(c.r[3], ld32((c.r[17].w[0] + 1132u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0045(c, 3u, depth); } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00233F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233F54u);  if (depth < kMaxDepth) unit_0045(c, 7u, depth + 1u); else { c.pc = 0x00234080u; return; } if (c.pc != 0x00233F54u) [[unlikely]] return; }
L_00233F54:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0045(c, 3u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233F68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 72u, depth + 1u); else { c.pc = 0x0022C600u; return; } if (c.pc != 0x00233F68u) [[unlikely]] return; }
L_00233F68:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 1344u)));  goto L_00233F8C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233F88u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 63u, depth + 1u); else { c.pc = 0x0022C510u; return; } if (c.pc != 0x00233F88u) [[unlikely]] return; }
L_00233F88:
    set32(c.r[3], ld32((c.r[17].w[0] + 1344u)));
    c.budget -= 1;
L_00233F8C:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0045(c, 3u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 7872u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[3].w[0] + 7876u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 7880u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 7884u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 7888u));
    st32((c.r[29].w[0] + 76u), c.f[0]);
    st32((c.r[29].w[0] + 72u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 7892u));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 7896u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 7900u));
    st32((c.r[29].w[0] + 56u), c.f[1]);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 26;
    [[clang::musttail]] return unit_0045(c, 1u, depth);
}

}
