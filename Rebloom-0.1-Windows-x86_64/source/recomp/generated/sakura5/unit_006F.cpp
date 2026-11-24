#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006F[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 56, 0, 0, 57, 0,
    0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68,
    0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92,
    0, 0, 93, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107,
    0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124,
    0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141,
    0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0,
    154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0,
    0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178,
    0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189,
    0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0,
    0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0,
    0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 235,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 247, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0,
    257, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272,
    0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    0, 280, 0, 0, 281, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 0, 286, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 292, 0, 0, 0,
    293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323,
    0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0,
    0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340,
    0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348,
    0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0,
    0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0,
    0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0,
    0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0,
    396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0,
    0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0,
    0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0,
    0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418,
    0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0,
    430, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 439, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0,
    0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0,
    0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0,
    475, 0, 476, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0,
    493, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0,
    504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 509, 0, 510, 0, 511, 0, 0, 512, 0, 0, 513, 0, 514, 0,
    515, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002DC000;
    case 2u: goto L_002DC018;
    case 3u: goto L_002DC030;
    case 4u: goto L_002DC03C;
    case 5u: goto L_002DC048;
    case 6u: goto L_002DC054;
    case 7u: goto L_002DC060;
    case 8u: goto L_002DC06C;
    case 9u: goto L_002DC078;
    case 10u: goto L_002DC08C;
    case 11u: goto L_002DC0A4;
    case 12u: goto L_002DC0C4;
    case 13u: goto L_002DC0E4;
    case 14u: goto L_002DC130;
    case 15u: goto L_002DC140;
    case 16u: goto L_002DC150;
    case 17u: goto L_002DC170;
    case 18u: goto L_002DC188;
    case 19u: goto L_002DC1B4;
    case 20u: goto L_002DC1CC;
    case 21u: goto L_002DC1E4;
    case 22u: goto L_002DC1F0;
    case 23u: goto L_002DC224;
    case 24u: goto L_002DC238;
    case 25u: goto L_002DC284;
    case 26u: goto L_002DC294;
    case 27u: goto L_002DC29C;
    case 28u: goto L_002DC2AC;
    case 29u: goto L_002DC2F8;
    case 30u: goto L_002DC348;
    case 31u: goto L_002DC354;
    case 32u: goto L_002DC37C;
    case 33u: goto L_002DC3B0;
    case 34u: goto L_002DC3E0;
    case 35u: goto L_002DC414;
    case 36u: goto L_002DC41C;
    case 37u: goto L_002DC434;
    case 38u: goto L_002DC43C;
    case 39u: goto L_002DC448;
    case 40u: goto L_002DC460;
    case 41u: goto L_002DC468;
    case 42u: goto L_002DC4E4;
    case 43u: goto L_002DC4F4;
    case 44u: goto L_002DC580;
    case 45u: goto L_002DC58C;
    case 46u: goto L_002DC598;
    case 47u: goto L_002DC5A8;
    case 48u: goto L_002DC5CC;
    case 49u: goto L_002DC5F0;
    case 50u: goto L_002DC600;
    case 51u: goto L_002DC624;
    case 52u: goto L_002DC64C;
    case 53u: goto L_002DC6CC;
    case 54u: goto L_002DC6D8;
    case 55u: goto L_002DC6E0;
    case 56u: goto L_002DC6EC;
    case 57u: goto L_002DC6F8;
    case 58u: goto L_002DC704;
    case 59u: goto L_002DC710;
    case 60u: goto L_002DC71C;
    case 61u: goto L_002DC728;
    case 62u: goto L_002DC734;
    case 63u: goto L_002DC740;
    case 64u: goto L_002DC74C;
    case 65u: goto L_002DC758;
    case 66u: goto L_002DC764;
    case 67u: goto L_002DC770;
    case 68u: goto L_002DC77C;
    case 69u: goto L_002DC78C;
    case 70u: goto L_002DC798;
    case 71u: goto L_002DC7A0;
    case 72u: goto L_002DC7C4;
    case 73u: goto L_002DC7E0;
    case 74u: goto L_002DC7F8;
    case 75u: goto L_002DC810;
    case 76u: goto L_002DC81C;
    case 77u: goto L_002DC840;
    case 78u: goto L_002DC84C;
    case 79u: goto L_002DC858;
    case 80u: goto L_002DC864;
    case 81u: goto L_002DC898;
    case 82u: goto L_002DC8B0;
    case 83u: goto L_002DC8D4;
    case 84u: goto L_002DC8EC;
    case 85u: goto L_002DC904;
    case 86u: goto L_002DC910;
    case 87u: goto L_002DC940;
    case 88u: goto L_002DC94C;
    case 89u: goto L_002DC954;
    case 90u: goto L_002DC960;
    case 91u: goto L_002DC970;
    case 92u: goto L_002DC97C;
    case 93u: goto L_002DC988;
    case 94u: goto L_002DC994;
    case 95u: goto L_002DC99C;
    case 96u: goto L_002DC9A8;
    case 97u: goto L_002DC9B4;
    case 98u: goto L_002DC9C0;
    case 99u: goto L_002DC9D0;
    case 100u: goto L_002DC9D8;
    case 101u: goto L_002DC9E4;
    case 102u: goto L_002DC9F4;
    case 103u: goto L_002DCA10;
    case 104u: goto L_002DCA28;
    case 105u: goto L_002DCA4C;
    case 106u: goto L_002DCA64;
    case 107u: goto L_002DCA7C;
    case 108u: goto L_002DCA88;
    case 109u: goto L_002DCAB8;
    case 110u: goto L_002DCAC4;
    case 111u: goto L_002DCACC;
    case 112u: goto L_002DCAD8;
    case 113u: goto L_002DCAF8;
    case 114u: goto L_002DCB10;
    case 115u: goto L_002DCB2C;
    case 116u: goto L_002DCB44;
    case 117u: goto L_002DCB5C;
    case 118u: goto L_002DCB68;
    case 119u: goto L_002DCB8C;
    case 120u: goto L_002DCB98;
    case 121u: goto L_002DCBB0;
    case 122u: goto L_002DCBCC;
    case 123u: goto L_002DCBE4;
    case 124u: goto L_002DCBFC;
    case 125u: goto L_002DCC04;
    case 126u: goto L_002DCC30;
    case 127u: goto L_002DCC54;
    case 128u: goto L_002DCC5C;
    case 129u: goto L_002DCC68;
    case 130u: goto L_002DCC90;
    case 131u: goto L_002DCCBC;
    case 132u: goto L_002DCCE8;
    case 133u: goto L_002DCCFC;
    case 134u: goto L_002DCD10;
    case 135u: goto L_002DCD24;
    case 136u: goto L_002DCD30;
    case 137u: goto L_002DCD40;
    case 138u: goto L_002DCD50;
    case 139u: goto L_002DCD60;
    case 140u: goto L_002DCD6C;
    case 141u: goto L_002DCD7C;
    case 142u: goto L_002DCD8C;
    case 143u: goto L_002DCD98;
    case 144u: goto L_002DCDA8;
    case 145u: goto L_002DCDB8;
    case 146u: goto L_002DCDC4;
    case 147u: goto L_002DCE14;
    case 148u: goto L_002DCE28;
    case 149u: goto L_002DCE3C;
    case 150u: goto L_002DCE48;
    case 151u: goto L_002DCE58;
    case 152u: goto L_002DCE68;
    case 153u: goto L_002DCE70;
    case 154u: goto L_002DCE80;
    case 155u: goto L_002DCE90;
    case 156u: goto L_002DCEA0;
    case 157u: goto L_002DCEB0;
    case 158u: goto L_002DCEC0;
    case 159u: goto L_002DCED0;
    case 160u: goto L_002DCEDC;
    case 161u: goto L_002DCF10;
    case 162u: goto L_002DCF40;
    case 163u: goto L_002DCF54;
    case 164u: goto L_002DCF64;
    case 165u: goto L_002DCF74;
    case 166u: goto L_002DCF84;
    case 167u: goto L_002DCF94;
    case 168u: goto L_002DCFA4;
    case 169u: goto L_002DCFAC;
    case 170u: goto L_002DCFBC;
    case 171u: goto L_002DCFCC;
    case 172u: goto L_002DCFDC;
    case 173u: goto L_002DCFEC;
    case 174u: goto L_002DCFFC;
    case 175u: goto L_002DD040;
    case 176u: goto L_002DD05C;
    case 177u: goto L_002DD0EC;
    case 178u: goto L_002DD0FC;
    case 179u: goto L_002DD10C;
    case 180u: goto L_002DD11C;
    case 181u: goto L_002DD12C;
    case 182u: goto L_002DD140;
    case 183u: goto L_002DD158;
    case 184u: goto L_002DD180;
    case 185u: goto L_002DD1B8;
    case 186u: goto L_002DD1C0;
    case 187u: goto L_002DD1C8;
    case 188u: goto L_002DD1D8;
    case 189u: goto L_002DD1FC;
    case 190u: goto L_002DD214;
    case 191u: goto L_002DD230;
    case 192u: goto L_002DD24C;
    case 193u: goto L_002DD268;
    case 194u: goto L_002DD284;
    case 195u: goto L_002DD2A0;
    case 196u: goto L_002DD2BC;
    case 197u: goto L_002DD2D8;
    case 198u: goto L_002DD304;
    case 199u: goto L_002DD32C;
    case 200u: goto L_002DD33C;
    case 201u: goto L_002DD364;
    case 202u: goto L_002DD374;
    case 203u: goto L_002DD38C;
    case 204u: goto L_002DD39C;
    case 205u: goto L_002DD3AC;
    case 206u: goto L_002DD3CC;
    case 207u: goto L_002DD3E4;
    case 208u: goto L_002DD3EC;
    case 209u: goto L_002DD41C;
    case 210u: goto L_002DD444;
    case 211u: goto L_002DD468;
    case 212u: goto L_002DD48C;
    case 213u: goto L_002DD4B4;
    case 214u: goto L_002DD4C4;
    case 215u: goto L_002DD4DC;
    case 216u: goto L_002DD4EC;
    case 217u: goto L_002DD50C;
    case 218u: goto L_002DD524;
    case 219u: goto L_002DD534;
    case 220u: goto L_002DD53C;
    case 221u: goto L_002DD544;
    case 222u: goto L_002DD554;
    case 223u: goto L_002DD578;
    case 224u: goto L_002DD588;
    case 225u: goto L_002DD594;
    case 226u: goto L_002DD5B0;
    case 227u: goto L_002DD5BC;
    case 228u: goto L_002DD5C8;
    case 229u: goto L_002DD5D0;
    case 230u: goto L_002DD5DC;
    case 231u: goto L_002DD628;
    case 232u: goto L_002DD640;
    case 233u: goto L_002DD664;
    case 234u: goto L_002DD670;
    case 235u: goto L_002DD67C;
    case 236u: goto L_002DD6AC;
    case 237u: goto L_002DD6B8;
    case 238u: goto L_002DD6C4;
    case 239u: goto L_002DD704;
    case 240u: goto L_002DD714;
    case 241u: goto L_002DD728;
    case 242u: goto L_002DD750;
    case 243u: goto L_002DD768;
    case 244u: goto L_002DD780;
    case 245u: goto L_002DD798;
    case 246u: goto L_002DD7A8;
    case 247u: goto L_002DD7B0;
    case 248u: goto L_002DD7B8;
    case 249u: goto L_002DD7C8;
    case 250u: goto L_002DD7EC;
    case 251u: goto L_002DD7FC;
    case 252u: goto L_002DD820;
    case 253u: goto L_002DD850;
    case 254u: goto L_002DD8D0;
    case 255u: goto L_002DD8EC;
    case 256u: goto L_002DD8F8;
    case 257u: goto L_002DD900;
    case 258u: goto L_002DD90C;
    case 259u: goto L_002DD920;
    case 260u: goto L_002DD93C;
    case 261u: goto L_002DD954;
    case 262u: goto L_002DD968;
    case 263u: goto L_002DD990;
    case 264u: goto L_002DD9FC;
    case 265u: goto L_002DDA24;
    case 266u: goto L_002DDA40;
    case 267u: goto L_002DDA50;
    case 268u: goto L_002DDA78;
    case 269u: goto L_002DDAA4;
    case 270u: goto L_002DDAB0;
    case 271u: goto L_002DDAE8;
    case 272u: goto L_002DDAFC;
    case 273u: goto L_002DDB18;
    case 274u: goto L_002DDB4C;
    case 275u: goto L_002DDB80;
    case 276u: goto L_002DDC30;
    case 277u: goto L_002DDC38;
    case 278u: goto L_002DDC40;
    case 279u: goto L_002DDC68;
    case 280u: goto L_002DDC84;
    case 281u: goto L_002DDC90;
    case 282u: goto L_002DDC98;
    case 283u: goto L_002DDCA8;
    case 284u: goto L_002DDCCC;
    case 285u: goto L_002DDCF0;
    case 286u: goto L_002DDD0C;
    case 287u: goto L_002DDD14;
    case 288u: goto L_002DDD1C;
    case 289u: goto L_002DDD40;
    case 290u: goto L_002DDD5C;
    case 291u: goto L_002DDD68;
    case 292u: goto L_002DDD70;
    case 293u: goto L_002DDD80;
    case 294u: goto L_002DDDBC;
    case 295u: goto L_002DDDD8;
    case 296u: goto L_002DDE04;
    case 297u: goto L_002DDE1C;
    case 298u: goto L_002DDE30;
    case 299u: goto L_002DDE5C;
    case 300u: goto L_002DDE90;
    case 301u: goto L_002DDEBC;
    case 302u: goto L_002DDED4;
    case 303u: goto L_002DDED8;
    case 304u: goto L_002DDEE8;
    case 305u: goto L_002DDF20;
    case 306u: goto L_002DDFA4;
    case 307u: goto L_002DDFC0;
    case 308u: goto L_002DDFC8;
    case 309u: goto L_002DDFD0;
    case 310u: goto L_002DDFE0;
    case 311u: goto L_002DE010;
    case 312u: goto L_002DE034;
    case 313u: goto L_002DE050;
    case 314u: goto L_002DE05C;
    case 315u: goto L_002DE070;
    case 316u: goto L_002DE084;
    case 317u: goto L_002DE0B0;
    case 318u: goto L_002DE0C4;
    case 319u: goto L_002DE0F0;
    case 320u: goto L_002DE124;
    case 321u: goto L_002DE140;
    case 322u: goto L_002DE170;
    case 323u: goto L_002DE1FC;
    case 324u: goto L_002DE218;
    case 325u: goto L_002DE224;
    case 326u: goto L_002DE240;
    case 327u: goto L_002DE250;
    case 328u: goto L_002DE278;
    case 329u: goto L_002DE2A4;
    case 330u: goto L_002DE2AC;
    case 331u: goto L_002DE2C4;
    case 332u: goto L_002DE2F8;
    case 333u: goto L_002DE304;
    case 334u: goto L_002DE33C;
    case 335u: goto L_002DE350;
    case 336u: goto L_002DE37C;
    case 337u: goto L_002DE3B0;
    case 338u: goto L_002DE3E0;
    case 339u: goto L_002DE45C;
    case 340u: goto L_002DE47C;
    case 341u: goto L_002DE488;
    case 342u: goto L_002DE4C0;
    case 343u: goto L_002DE4D4;
    case 344u: goto L_002DE500;
    case 345u: goto L_002DE534;
    case 346u: goto L_002DE560;
    case 347u: goto L_002DE5E0;
    case 348u: goto L_002DE5FC;
    case 349u: goto L_002DE608;
    case 350u: goto L_002DE624;
    case 351u: goto L_002DE634;
    case 352u: goto L_002DE65C;
    case 353u: goto L_002DE688;
    case 354u: goto L_002DE690;
    case 355u: goto L_002DE6AC;
    case 356u: goto L_002DE6D8;
    case 357u: goto L_002DE710;
    case 358u: goto L_002DE724;
    case 359u: goto L_002DE750;
    case 360u: goto L_002DE784;
    case 361u: goto L_002DE7B0;
    case 362u: goto L_002DE82C;
    case 363u: goto L_002DE84C;
    case 364u: goto L_002DE858;
    case 365u: goto L_002DE890;
    case 366u: goto L_002DE8A4;
    case 367u: goto L_002DE8D0;
    case 368u: goto L_002DE904;
    case 369u: goto L_002DE930;
    case 370u: goto L_002DE98C;
    case 371u: goto L_002DE9A4;
    case 372u: goto L_002DE9C4;
    case 373u: goto L_002DE9E0;
    case 374u: goto L_002DEA04;
    case 375u: goto L_002DEA20;
    case 376u: goto L_002DEA88;
    case 377u: goto L_002DEAA4;
    case 378u: goto L_002DEAC8;
    case 379u: goto L_002DEAE0;
    case 380u: goto L_002DEB3C;
    case 381u: goto L_002DEB54;
    case 382u: goto L_002DEB74;
    case 383u: goto L_002DEB98;
    case 384u: goto L_002DEBC0;
    case 385u: goto L_002DEC28;
    case 386u: goto L_002DEC3C;
    case 387u: goto L_002DEC60;
    case 388u: goto L_002DEC80;
    case 389u: goto L_002DECDC;
    case 390u: goto L_002DECF4;
    case 391u: goto L_002DED14;
    case 392u: goto L_002DED38;
    case 393u: goto L_002DED60;
    case 394u: goto L_002DEDC8;
    case 395u: goto L_002DEDDC;
    case 396u: goto L_002DEE00;
    case 397u: goto L_002DEE20;
    case 398u: goto L_002DEEC4;
    case 399u: goto L_002DEEDC;
    case 400u: goto L_002DEEF0;
    case 401u: goto L_002DEF08;
    case 402u: goto L_002DEF1C;
    case 403u: goto L_002DEF34;
    case 404u: goto L_002DEF4C;
    case 405u: goto L_002DEF64;
    case 406u: goto L_002DEF88;
    case 407u: goto L_002DEFA4;
    case 408u: goto L_002DEFC4;
    case 409u: goto L_002DEFF0;
    case 410u: goto L_002DF04C;
    case 411u: goto L_002DF064;
    case 412u: goto L_002DF084;
    case 413u: goto L_002DF0A0;
    case 414u: goto L_002DF0C4;
    case 415u: goto L_002DF0E0;
    case 416u: goto L_002DF148;
    case 417u: goto L_002DF170;
    case 418u: goto L_002DF17C;
    case 419u: goto L_002DF1A0;
    case 420u: goto L_002DF1C0;
    case 421u: goto L_002DF1DC;
    case 422u: goto L_002DF1E8;
    case 423u: goto L_002DF21C;
    case 424u: goto L_002DF22C;
    case 425u: goto L_002DF250;
    case 426u: goto L_002DF264;
    case 427u: goto L_002DF290;
    case 428u: goto L_002DF2B8;
    case 429u: goto L_002DF2E4;
    case 430u: goto L_002DF300;
    case 431u: goto L_002DF310;
    case 432u: goto L_002DF324;
    case 433u: goto L_002DF348;
    case 434u: goto L_002DF38C;
    case 435u: goto L_002DF3A8;
    case 436u: goto L_002DF3B8;
    case 437u: goto L_002DF3D0;
    case 438u: goto L_002DF440;
    case 439u: goto L_002DF484;
    case 440u: goto L_002DF498;
    case 441u: goto L_002DF4A4;
    case 442u: goto L_002DF4D0;
    case 443u: goto L_002DF51C;
    case 444u: goto L_002DF52C;
    case 445u: goto L_002DF540;
    case 446u: goto L_002DF564;
    case 447u: goto L_002DF57C;
    case 448u: goto L_002DF5B4;
    case 449u: goto L_002DF5BC;
    case 450u: goto L_002DF5D8;
    case 451u: goto L_002DF60C;
    case 452u: goto L_002DF628;
    case 453u: goto L_002DF630;
    case 454u: goto L_002DF644;
    case 455u: goto L_002DF698;
    case 456u: goto L_002DF710;
    case 457u: goto L_002DF734;
    case 458u: goto L_002DF75C;
    case 459u: goto L_002DF77C;
    case 460u: goto L_002DF7C0;
    case 461u: goto L_002DF7F4;
    case 462u: goto L_002DF814;
    case 463u: goto L_002DF82C;
    case 464u: goto L_002DF860;
    case 465u: goto L_002DF8B4;
    case 466u: goto L_002DF8C4;
    case 467u: goto L_002DF8D0;
    case 468u: goto L_002DF8FC;
    case 469u: goto L_002DF930;
    case 470u: goto L_002DF974;
    case 471u: goto L_002DF984;
    case 472u: goto L_002DF998;
    case 473u: goto L_002DF9B4;
    case 474u: goto L_002DF9E4;
    case 475u: goto L_002DFA00;
    case 476u: goto L_002DFA08;
    case 477u: goto L_002DFA14;
    case 478u: goto L_002DFA2C;
    case 479u: goto L_002DFA74;
    case 480u: goto L_002DFAC0;
    case 481u: goto L_002DFAD0;
    case 482u: goto L_002DFB00;
    case 483u: goto L_002DFB5C;
    case 484u: goto L_002DFBA8;
    case 485u: goto L_002DFBB8;
    case 486u: goto L_002DFBE8;
    case 487u: goto L_002DFC38;
    case 488u: goto L_002DFC48;
    case 489u: goto L_002DFC78;
    case 490u: goto L_002DFCA0;
    case 491u: goto L_002DFCC4;
    case 492u: goto L_002DFCDC;
    case 493u: goto L_002DFD00;
    case 494u: goto L_002DFD14;
    case 495u: goto L_002DFD1C;
    case 496u: goto L_002DFD44;
    case 497u: goto L_002DFD4C;
    case 498u: goto L_002DFD64;
    case 499u: goto L_002DFD70;
    case 500u: goto L_002DFDA0;
    case 501u: goto L_002DFDBC;
    case 502u: goto L_002DFDC8;
    case 503u: goto L_002DFDF0;
    case 504u: goto L_002DFE00;
    case 505u: goto L_002DFE64;
    case 506u: goto L_002DFEF4;
    case 507u: goto L_002DFF2C;
    case 508u: goto L_002DFF40;
    case 509u: goto L_002DFF48;
    case 510u: goto L_002DFF50;
    case 511u: goto L_002DFF58;
    case 512u: goto L_002DFF64;
    case 513u: goto L_002DFF70;
    case 514u: goto L_002DFF78;
    case 515u: goto L_002DFF80;
    case 516u: goto L_002DFF8C;
    case 517u: goto L_002DFFD0;
    default: bad_entry(c, 0x002DC000u); return;
    }
L_002DC000:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBFC4u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 432u, depth); }
    set32(c.r[4], c.r[29].w[0] + 456u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC018u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DC018u) [[unlikely]] return; }
L_002DC018:
    set32(c.r[2], ld32((c.r[29].w[0] + 456u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 460u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC030u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DC030u) [[unlikely]] return; }
L_002DC030:
    st32((c.r[20].w[0] + 3176u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC03Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DC03Cu) [[unlikely]] return; }
L_002DC03C:
    st32((c.r[20].w[0] + 3180u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC048u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC048u) [[unlikely]] return; }
L_002DC048:
    st32((c.r[20].w[0] + 3184u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC054u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DC054u) [[unlikely]] return; }
L_002DC054:
    st32((c.r[20].w[0] + 3188u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC060u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DC060u) [[unlikely]] return; }
L_002DC060:
    st32((c.r[20].w[0] + 3192u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC06Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DC06Cu) [[unlikely]] return; }
L_002DC06C:
    c.f[1] = ld32((c.r[28].w[0] - 32688u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC078u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DC078u) [[unlikely]] return; }
L_002DC078:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; st32((c.r[20].w[0] + 3196u), c.r[2].w[0]);  if (t) { goto L_002DC094; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC08Cu); set32(c.r[4], c.r[4].w[0] + 26624u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002DC08Cu) [[unlikely]] return; }
L_002DC08C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DCC6C; } }
L_002DC094:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC0A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DC0A4u) [[unlikely]] return; }
L_002DC0A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 448u)));
    set32(c.r[4], c.r[29].w[0] + 440u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 452u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC0C4u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DC0C4u) [[unlikely]] return; }
L_002DC0C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 440u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 5u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 444u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC0E4u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002DC0E4u) [[unlikely]] return; }
L_002DC0E4:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002DC0F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 208u)));  if (t) { goto L_002DC10C; } }
L_002DC0F8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_002DC10C; }
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_002DC10C:
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DC130; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002DC130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC130u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002DC130u) [[unlikely]] return; }
L_002DC130:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002DC148; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC140u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC140u) [[unlikely]] return; }
L_002DC140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[20].w[0] + 20u);  if (t) { goto L_002DC168; } }
L_002DC148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC150u);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC150u) [[unlikely]] return; }
L_002DC150:
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DC164; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_002DC164:
    set32(c.r[4], c.r[20].w[0] + 20u);
    c.budget -= 1;
L_002DC168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC170u);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x002DC170u) [[unlikely]] return; }
L_002DC170:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_002DC19C; } }
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC188u); set32(c.r[6], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_005C(c, 73u, depth + 1u); else { c.pc = 0x00290CD0u; return; } if (c.pc != 0x002DC188u) [[unlikely]] return; }
L_002DC188:
    set32(c.r[2], ld32((c.r[29].w[0] + 432u)));
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 436u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002DC890; } }
L_002DC19C:
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC1B4u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DC1B4u) [[unlikely]] return; }
L_002DC1B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_002DCC5C; } }
    set32(c.r[4], c.r[29].w[0] + 424u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC1CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DC1CCu) [[unlikely]] return; }
L_002DC1CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 424u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 428u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002DC880; } }
L_002DC1E4:
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC1F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DC1F0u) [[unlikely]] return; }
L_002DC1F0:
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[29].w[0] + 420u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC224u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC224u) [[unlikely]] return; }
L_002DC224:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC238u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002DC238u) [[unlikely]] return; }
L_002DC238:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002DC24C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_002DC260; } }
L_002DC24C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_002DC260; }
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 3;
L_002DC260:
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DC284; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002DC284; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC284u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002DC284u) [[unlikely]] return; }
L_002DC284:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002DC2A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC294u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC294u) [[unlikely]] return; }
L_002DC294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC29Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC29Cu) [[unlikely]] return; }
L_002DC29C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002DC340; } }
L_002DC2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC2ACu);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC2ACu) [[unlikely]] return; }
L_002DC2AC:
    set32(c.r[6], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002DC2F0; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], c.r[16].w[0] + 176u);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], 0u - 16u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[6].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (t) { goto L_002DC2EC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002DC2EC; } }
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002DC2EC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002DC2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC2F8u);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC2F8u) [[unlikely]] return; }
L_002DC2F8:
    set32(c.r[6], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002DC33C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], c.r[16].w[0] + 176u);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], 0u - 241u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (t) { goto L_002DC33C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002DC33C; } }
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002DC33C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002DC340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC348u); set32(c.r[5], c.r[18].w[0] + 112u);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00291060u; return; } if (c.pc != 0x002DC348u) [[unlikely]] return; }
L_002DC348:
    c.f[0] = ld32((c.r[18].w[0] + 112u));
    set32(c.r[17], c.r[18].w[0] + 112u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
L_002DC354:
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 116u));
    st32((c.r[18].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 120u));
    st32((c.r[18].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 124u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC37Cu); st32((c.r[18].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002DC37Cu) [[unlikely]] return; }
L_002DC37C:
    c.f[3] = ld32((c.r[29].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[29].w[0] + 156u));
    set32(c.r[5], c.r[18].w[0] + 176u);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[18].w[0] + 176u), c.f[0]);
    st32((c.r[18].w[0] + 180u), c.f[3]);
    st32((c.r[18].w[0] + 184u), c.f[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC3B0u); st32((c.r[18].w[0] + 188u), c.f[1]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002DC3B0u) [[unlikely]] return; }
L_002DC3B0:
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[5], c.r[18].w[0] + 160u);
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[6], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[29].w[0] + 240u), c.f[2]);
    st32((c.r[29].w[0] + 244u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC3E0u); st32((c.r[29].w[0] + 252u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002DC3E0u) [[unlikely]] return; }
L_002DC3E0:
    c.f[3] = ld32((c.r[29].w[0] + 132u));
    c.f[2] = ld32((c.r[29].w[0] + 136u));
    c.f[1] = ld32((c.r[29].w[0] + 140u));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[18].w[0] + 192u), c.f[0]);
    st32((c.r[18].w[0] + 196u), c.f[3]);
    st32((c.r[18].w[0] + 200u), c.f[2]);
    st32((c.r[18].w[0] + 204u), c.f[1]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.f[12] = ld32((c.r[18].w[0] + 176u));  goto L_002DC424; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC414u); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002DC414u) [[unlikely]] return; }
L_002DC414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC41Cu); set32(c.r[4], c.r[18].w[0] + 272u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002DC41Cu) [[unlikely]] return; }
L_002DC41C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0]));  if (t) { goto L_002DC4F8; } }
L_002DC424:
    c.f[13] = ld32((c.r[18].w[0] + 180u));
    c.f[14] = ld32((c.r[18].w[0] + 184u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC434u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_003A(c, 294u, depth + 1u); else { c.pc = 0x0020AC90u; return; } if (c.pc != 0x002DC434u) [[unlikely]] return; }
L_002DC434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC43Cu); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002DC43Cu) [[unlikely]] return; }
L_002DC43C:
    set32(c.r[4], c.r[18].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC448u); set32(c.r[5], c.r[18].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002DC448u) [[unlikely]] return; }
L_002DC448:
    set32(c.r[6], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[4], c.r[18].w[0] + 208u);
    set32(c.r[7], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC460u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002DC460u) [[unlikely]] return; }
L_002DC460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC468u); set32(c.r[4], c.r[18].w[0] + 272u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002DC468u) [[unlikely]] return; }
L_002DC468:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[18].w[0] + 272u);  goto L_002DC4EC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[18].w[0] + 272u);
    c.f[7] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.f[2] = ld32((c.r[2].w[0] + 19632u));
    c.f[3] = ld32((c.r[18].w[0] + 168u));
    c.f[5] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 19640u));
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[3]);
    c.f[6] = ld32((c.r[18].w[0] + 184u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[4] = ld32((c.r[18].w[0] + 176u));
    c.f[3] = ld32((c.r[18].w[0] + 160u));
    c.f[0] = ld32((c.r[2].w[0] + 19644u));
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[6]);
    st32((c.r[29].w[0] + 168u), c.f[1]);
    st32((c.r[29].w[0] + 164u), 0u);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[3]);
    st32((c.r[29].w[0] + 160u), c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[4]);
    st32((c.r[29].w[0] + 172u), c.f[0]);
    st32((c.r[29].w[0] + 160u), c.f[2]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC4E4u); st32((c.r[29].w[0] + 168u), c.f[6]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002DC4E4u) [[unlikely]] return; }
L_002DC4E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC4F4; } }
L_002DC4EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC4F4u); set32(c.r[5], c.r[18].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002DC4F4u) [[unlikely]] return; }
L_002DC4F4:
    c.f[0] = ld32((c.r[17].w[0]));
    c.budget -= 1;
L_002DC4F8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[18].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[18].w[0] + 44u), c.f[0]);
    st32((c.r[18].w[0] + 48u), 0u);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[18].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[18].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[18].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[18].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC580u); st32((c.r[18].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DC580u) [[unlikely]] return; }
L_002DC580:
    st32((c.r[18].w[0] + 96u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC58Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC58Cu) [[unlikely]] return; }
L_002DC58C:
    st32((c.r[18].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC598u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00290C50u; return; } if (c.pc != 0x002DC598u) [[unlikely]] return; }
L_002DC598:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC5A8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 80u, depth + 1u); else { c.pc = 0x00290D90u; return; } if (c.pc != 0x002DC5A8u) [[unlikely]] return; }
L_002DC5A8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002DC5C0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 536u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[2].w[0] << 4);  goto L_002DC5D4; }
L_002DC5C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC5CCu); set32(c.r[4], c.r[4].w[0] + 26688u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DC5CCu) [[unlikely]] return; }
L_002DC5CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DCC5C; } }
L_002DC5D4:
    set32(c.r[3], ld32((c.r[20].w[0] + 532u)));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC5F0u); st32((c.r[18].w[0] + 404u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00290C50u; return; } if (c.pc != 0x002DC5F0u) [[unlikely]] return; }
L_002DC5F0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC600u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 80u, depth + 1u); else { c.pc = 0x00290D90u; return; } if (c.pc != 0x002DC600u) [[unlikely]] return; }
L_002DC600:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002DC618; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 536u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[2].w[0] << 4);  goto L_002DC62C; }
L_002DC618:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC624u); set32(c.r[4], c.r[4].w[0] + 26688u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DC624u) [[unlikely]] return; }
L_002DC624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DCC5C; } }
L_002DC62C:
    set32(c.r[3], ld32((c.r[20].w[0] + 532u)));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 408u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC64Cu); set32(c.r[4], ld32((c.r[2].w[0] + 40u)));  if (depth < kMaxDepth) unit_000F(c, 45u, depth + 1u); else { c.pc = 0x0015C500u; return; } if (c.pc != 0x002DC64Cu) [[unlikely]] return; }
L_002DC64C:
    c.f[3] = ld32((c.r[18].w[0] + 144u));
    set32(c.r[2], ld32((c.r[18].w[0] + 404u)));
    c.f[2] = ld32((c.r[18].w[0] + 96u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 352u);
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[2] = c.f[1] ^ fp::kSign;
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[2].w[0] + 228u), c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 224u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 220u), c.f[1]);
    set32(c.r[2], ld32((c.r[18].w[0] + 408u)));
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    c.f[3] = c.f[1] ^ fp::kSign;
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 228u), c.f[2]);
    st32((c.r[2].w[0] + 224u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC6CCu); st32((c.r[2].w[0] + 220u), c.f[0]);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x002DC6CCu) [[unlikely]] return; }
L_002DC6CC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC6D8u); set32(c.r[5], c.r[18].w[0] + 368u);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x002DC6D8u) [[unlikely]] return; }
L_002DC6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC6E0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DC6E0u) [[unlikely]] return; }
L_002DC6E0:
    c.f[1] = ld32((c.r[28].w[0] - 32688u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC6ECu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DC6ECu) [[unlikely]] return; }
L_002DC6EC:
    st32((c.r[18].w[0] + 384u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC6F8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DC6F8u) [[unlikely]] return; }
L_002DC6F8:
    c.f[1] = ld32((c.r[28].w[0] - 32688u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC704u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DC704u) [[unlikely]] return; }
L_002DC704:
    st32((c.r[18].w[0] + 388u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC710u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DC710u) [[unlikely]] return; }
L_002DC710:
    c.f[1] = ld32((c.r[28].w[0] - 32688u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC71Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DC71Cu) [[unlikely]] return; }
L_002DC71C:
    st32((c.r[18].w[0] + 392u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC728u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DC728u) [[unlikely]] return; }
L_002DC728:
    c.f[1] = ld32((c.r[28].w[0] - 32688u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC734u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DC734u) [[unlikely]] return; }
L_002DC734:
    st32((c.r[18].w[0] + 396u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC740u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC740u) [[unlikely]] return; }
L_002DC740:
    st32((c.r[18].w[0] + 400u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC74Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC74Cu) [[unlikely]] return; }
L_002DC74C:
    st32((c.r[18].w[0] + 412u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC758u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC758u) [[unlikely]] return; }
L_002DC758:
    st32((c.r[18].w[0] + 416u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC764u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC764u) [[unlikely]] return; }
L_002DC764:
    st32((c.r[18].w[0] + 420u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC770u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC770u) [[unlikely]] return; }
L_002DC770:
    st32((c.r[18].w[0] + 424u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC77Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC77Cu) [[unlikely]] return; }
L_002DC77C:
    st32((c.r[18].w[0] + 428u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC78Cu); set32(c.r[5], c.r[18].w[0] + 432u);  if (depth < kMaxDepth) unit_005C(c, 96u, depth + 1u); else { c.pc = 0x00290EC0u; return; } if (c.pc != 0x002DC78Cu) [[unlikely]] return; }
L_002DC78C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC798u); set32(c.r[5], c.r[18].w[0] + 448u);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x002DC798u) [[unlikely]] return; }
L_002DC798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC7A0u); set32(c.r[4], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x002DC7A0u) [[unlikely]] return; }
L_002DC7A0:
    st32((c.r[18].w[0] + 344u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 340u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 344u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[2].w[0] << 4);  goto L_002DC7D8; }
    set32(c.r[4], c.r[29].w[0] + 408u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC7C4u); set32(c.r[6], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_005C(c, 73u, depth + 1u); else { c.pc = 0x00290CD0u; return; } if (c.pc != 0x002DC7C4u) [[unlikely]] return; }
L_002DC7C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 408u)));
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 412u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002DC87C; } }
L_002DC7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC7E0u);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DC7E0u) [[unlikely]] return; }
L_002DC7E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 340u), c.r[2].w[0]);  if (t) { goto L_002DCC5C; } }
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC7F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DC7F8u) [[unlikely]] return; }
L_002DC7F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 400u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 404u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002DC86C; } }
L_002DC810:
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC81Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DC81Cu) [[unlikely]] return; }
L_002DC81C:
    set32(c.r[2], ld32((c.r[29].w[0] + 392u)));
    set32(c.r[3], c.r[17].w[0] << 4);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 396u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 340u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC840u); set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC840u) [[unlikely]] return; }
L_002DC840:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC84Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC84Cu) [[unlikely]] return; }
L_002DC84C:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC858u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC858u) [[unlikely]] return; }
L_002DC858:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC864u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC864u) [[unlikely]] return; }
L_002DC864:
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002DC86C:
    set32(c.r[2], ld32((c.r[18].w[0] + 344u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 392u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC810u | kUnwind; return; } goto L_002DC810; }
L_002DC87C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002DC880:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 416u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC1E4u | kUnwind; return; } goto L_002DC1E4; }
L_002DC890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC898u); set32(c.r[4], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x002DC898u) [[unlikely]] return; }
L_002DC898:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_002DC8C4; } }
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC8B0u); set32(c.r[6], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_005C(c, 73u, depth + 1u); else { c.pc = 0x00290CD0u; return; } if (c.pc != 0x002DC8B0u) [[unlikely]] return; }
L_002DC8B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 388u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002DCA08; } }
L_002DC8C4:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC8D4u); set32(c.r[4], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DC8D4u) [[unlikely]] return; }
L_002DC8D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_002DCC5C; } }
    set32(c.r[4], c.r[29].w[0] + 376u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC8ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DC8ECu) [[unlikely]] return; }
L_002DC8EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 376u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 380u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002DC9F8; } }
L_002DC904:
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC910u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DC910u) [[unlikely]] return; }
L_002DC910:
    set32(c.r[5], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 5);
    st32((c.r[20].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 372u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC940u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x002DC940u) [[unlikely]] return; }
L_002DC940:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC94Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_005C(c, 102u, depth + 1u); else { c.pc = 0x00290F70u; return; } if (c.pc != 0x002DC94Cu) [[unlikely]] return; }
L_002DC94C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC954u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DC954u) [[unlikely]] return; }
L_002DC954:
    c.f[1] = ld32((c.r[28].w[0] - 32688u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC960u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DC960u) [[unlikely]] return; }
L_002DC960:
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC970u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x002DC970u) [[unlikely]] return; }
L_002DC970:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC97Cu); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_005C(c, 102u, depth + 1u); else { c.pc = 0x00290F70u; return; } if (c.pc != 0x002DC97Cu) [[unlikely]] return; }
L_002DC97C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC988u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x002DC988u) [[unlikely]] return; }
L_002DC988:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC994u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_005C(c, 102u, depth + 1u); else { c.pc = 0x00290F70u; return; } if (c.pc != 0x002DC994u) [[unlikely]] return; }
L_002DC994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC99Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC99Cu) [[unlikely]] return; }
L_002DC99C:
    st32((c.r[17].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC9A8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC9A8u) [[unlikely]] return; }
L_002DC9A8:
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC9B4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC9B4u) [[unlikely]] return; }
L_002DC9B4:
    st32((c.r[17].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC9C0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC9C0u) [[unlikely]] return; }
L_002DC9C0:
    st32((c.r[17].w[0] + 136u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC9D0u); set32(c.r[5], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_005C(c, 102u, depth + 1u); else { c.pc = 0x00290F70u; return; } if (c.pc != 0x002DC9D0u) [[unlikely]] return; }
L_002DC9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC9D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC9D8u) [[unlikely]] return; }
L_002DC9D8:
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC9E4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DC9E4u) [[unlikely]] return; }
L_002DC9E4:
    st32((c.r[17].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC9F4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 102u, depth + 1u); else { c.pc = 0x00290F70u; return; } if (c.pc != 0x002DC9F4u) [[unlikely]] return; }
L_002DC9F4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002DC9F8:
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 368u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC904u | kUnwind; return; } goto L_002DC904; }
L_002DCA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCA10u); set32(c.r[4], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x002DCA10u) [[unlikely]] return; }
L_002DCA10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_002DCA3C; } }
    set32(c.r[4], c.r[29].w[0] + 360u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCA28u); set32(c.r[6], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_005C(c, 73u, depth + 1u); else { c.pc = 0x00290CD0u; return; } if (c.pc != 0x002DCA28u) [[unlikely]] return; }
L_002DCA28:
    set32(c.r[2], ld32((c.r[29].w[0] + 360u)));
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002DCAF0; } }
L_002DCA3C:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCA4Cu); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DCA4Cu) [[unlikely]] return; }
L_002DCA4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_002DCC5C; } }
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCA64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DCA64u) [[unlikely]] return; }
L_002DCA64:
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002DCAE0; } }
L_002DCA7C:
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCA88u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DCA88u) [[unlikely]] return; }
L_002DCA88:
    set32(c.r[5], ld32((c.r[29].w[0] + 344u)));
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 4);
    st32((c.r[20].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 348u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCAB8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x002DCAB8u) [[unlikely]] return; }
L_002DCAB8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCAC4u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x002DCAC4u) [[unlikely]] return; }
L_002DCAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCACCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DCACCu) [[unlikely]] return; }
L_002DCACC:
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCAD8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DCAD8u) [[unlikely]] return; }
L_002DCAD8:
    st32((c.r[17].w[0] + 36u), c.f[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_002DCAE0:
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 344u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCA7Cu | kUnwind; return; } goto L_002DCA7C; }
L_002DCAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCAF8u); set32(c.r[4], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x002DCAF8u) [[unlikely]] return; }
L_002DCAF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 3168u), c.r[2].w[0]);  if (t) { goto L_002DCB24; } }
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCB10u); set32(c.r[6], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_005C(c, 73u, depth + 1u); else { c.pc = 0x00290CD0u; return; } if (c.pc != 0x002DCB10u) [[unlikely]] return; }
L_002DCB10:
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 340u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002DCC48; } }
L_002DCB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCB2Cu); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DCB2Cu) [[unlikely]] return; }
L_002DCB2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 3172u), c.r[2].w[0]);  if (t) { goto L_002DCC5C; } }
    set32(c.r[4], c.r[29].w[0] + 328u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCB44u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DCB44u) [[unlikely]] return; }
L_002DCB44:
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002DCC38; } }
L_002DCB5C:
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCB68u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DCB68u) [[unlikely]] return; }
L_002DCB68:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[3], c.r[18].w[0] << 4);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 3172u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCB8Cu); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DCB8Cu) [[unlikely]] return; }
L_002DCB8C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCB98u); set32(c.r[4], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x002DCB98u) [[unlikely]] return; }
L_002DCB98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002DCBC4; } }
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCBB0u); set32(c.r[6], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_005C(c, 73u, depth + 1u); else { c.pc = 0x00290CD0u; return; } if (c.pc != 0x002DCBB0u) [[unlikely]] return; }
L_002DCBB0:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002DCC34; } }
L_002DCBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCBCCu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DCBCCu) [[unlikely]] return; }
L_002DCBCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002DCC5C; } }
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCBE4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DCBE4u) [[unlikely]] return; }
L_002DCBE4:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002DCC18; } }
L_002DCBFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCC04u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00291140u; return; } if (c.pc != 0x002DCC04u) [[unlikely]] return; }
L_002DCC04:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_002DCC18:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCBFCu | kUnwind; return; } goto L_002DCBFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCC30u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DCC30u) [[unlikely]] return; }
L_002DCC30:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_002DCC34:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002DCC38:
    set32(c.r[2], ld32((c.r[20].w[0] + 3168u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 320u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCB5Cu | kUnwind; return; } goto L_002DCB5C; }
L_002DCC48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCC54u); set32(c.r[4], c.r[4].w[0] + 26736u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002DCC54u) [[unlikely]] return; }
L_002DCC54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DCC6C; } }
L_002DCC5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCC68u); set32(c.r[4], c.r[4].w[0] + 26784u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002DCC68u) [[unlikely]] return; }
L_002DCC68:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DCC6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 976u);  c.pc = t; return; }
L_002DCC90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCCBCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005F(c, 153u, depth + 1u); else { c.pc = 0x0029D800u; return; } if (c.pc != 0x002DCCBCu) [[unlikely]] return; }
L_002DCCBC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30372u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 12u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30368u)));  goto L_002DCCF0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCCE8u); set32(c.r[4], c.r[4].w[0] + 26848u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DCCE8u) [[unlikely]] return; }
L_002DCCE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DCEF0; } }
L_002DCCF0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCCFCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x002DCCFCu) [[unlikely]] return; }
L_002DCCFC:
    st32((c.r[18].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCD10u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002DCD10u) [[unlikely]] return; }
L_002DCD10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCD24u); set32(c.r[4], c.r[4].w[0] + 26928u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002DCD24u) [[unlikely]] return; }
L_002DCD24:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCD30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002DCD30u) [[unlikely]] return; }
L_002DCD30:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCD40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002DCD40u) [[unlikely]] return; }
L_002DCD40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCD50u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 369u, depth + 1u); else { c.pc = 0x002DE930u; return; } if (c.pc != 0x002DCD50u) [[unlikely]] return; }
L_002DCD50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCEEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCD60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DCD60u) [[unlikely]] return; }
L_002DCD60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCD6Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DCD6Cu) [[unlikely]] return; }
L_002DCD6C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCD7Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 379u, depth + 1u); else { c.pc = 0x002DEAE0u; return; } if (c.pc != 0x002DCD7Cu) [[unlikely]] return; }
L_002DCD7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCEEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCD8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DCD8Cu) [[unlikely]] return; }
L_002DCD8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCD98u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DCD98u) [[unlikely]] return; }
L_002DCD98:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCDA8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 388u, depth + 1u); else { c.pc = 0x002DEC80u; return; } if (c.pc != 0x002DCDA8u) [[unlikely]] return; }
L_002DCDA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCEEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCDB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DCDB8u) [[unlikely]] return; }
L_002DCDB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCDC4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DCDC4u) [[unlikely]] return; }
L_002DCDC4:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20545ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DCEEC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 96u), c.r[17].w[0]);  if (t) { goto L_002DCEEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCE14u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002DCE14u) [[unlikely]] return; }
L_002DCE14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 100u), c.r[2].w[0]);  goto L_002DCE2C; }
    set32(c.r[5], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCE28u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 178u, depth + 1u); else { c.pc = 0x00209830u; return; } if (c.pc != 0x002DCE28u) [[unlikely]] return; }
L_002DCE28:
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 1;
L_002DCE2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCEEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCE3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DCE3Cu) [[unlikely]] return; }
L_002DCE3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCE48u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DCE48u) [[unlikely]] return; }
L_002DCE48:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCE58u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 409u, depth + 1u); else { c.pc = 0x002DEFF0u; return; } if (c.pc != 0x002DCE58u) [[unlikely]] return; }
L_002DCE58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCEEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCE68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DCE68u) [[unlikely]] return; }
L_002DCE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCE70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DCE70u) [[unlikely]] return; }
L_002DCE70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCE80u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002DD990u; return; } if (c.pc != 0x002DCE80u) [[unlikely]] return; }
L_002DCE80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCEEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCE90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DCE90u) [[unlikely]] return; }
L_002DCE90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCEA0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 322u, depth + 1u); else { c.pc = 0x002DE170u; return; } if (c.pc != 0x002DCEA0u) [[unlikely]] return; }
L_002DCEA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCEEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCEB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DCEB0u) [[unlikely]] return; }
L_002DCEB0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCEC0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 346u, depth + 1u); else { c.pc = 0x002DE560u; return; } if (c.pc != 0x002DCEC0u) [[unlikely]] return; }
L_002DCEC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCEEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCED0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DCED0u) [[unlikely]] return; }
L_002DCED0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCEDCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 175u, depth + 1u); else { c.pc = 0x002DD040u; return; } if (c.pc != 0x002DCEDCu) [[unlikely]] return; }
L_002DCEDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCEEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DCEF0; } }
L_002DCEEC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DCEF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DCF10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCF40u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002DCF40u) [[unlikely]] return; }
L_002DCF40:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DCFF0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCF54u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 253u, depth + 1u); else { c.pc = 0x002DD850u; return; } if (c.pc != 0x002DCF54u) [[unlikely]] return; }
L_002DCF54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DD020; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCF64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DCF64u) [[unlikely]] return; }
L_002DCF64:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCF74u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002DCF74u) [[unlikely]] return; }
L_002DCF74:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCF84u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002DCF84u) [[unlikely]] return; }
L_002DCF84:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCF94u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 275u, depth + 1u); else { c.pc = 0x002DDB80u; return; } if (c.pc != 0x002DCF94u) [[unlikely]] return; }
L_002DCF94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DD01C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCFA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DCFA4u) [[unlikely]] return; }
L_002DCFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCFACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DCFACu) [[unlikely]] return; }
L_002DCFAC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCFBCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 305u, depth + 1u); else { c.pc = 0x002DDF20u; return; } if (c.pc != 0x002DCFBCu) [[unlikely]] return; }
L_002DCFBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DD01C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCFCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DCFCCu) [[unlikely]] return; }
L_002DCFCC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCFDCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 415u, depth + 1u); else { c.pc = 0x002DF0E0u; return; } if (c.pc != 0x002DCFDCu) [[unlikely]] return; }
L_002DCFDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DD01C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCFECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DCFECu) [[unlikely]] return; }
L_002DCFEC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002DCFF0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCFFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 175u, depth + 1u); else { c.pc = 0x002DD040u; return; } if (c.pc != 0x002DCFFCu) [[unlikely]] return; }
L_002DCFFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DD01C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002DD020; } }
L_002DD01C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DD020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DD040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DD15C; } }
L_002DD05C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x55410000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 17234ull;
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[4], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65280ull;
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[7].w[0] >> 24);
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DD134; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x55470000u);
    c.r[3].d[0] = c.r[3].d[0] | 21043ull;
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002DD124; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x55530000u);
    c.r[3].d[0] = c.r[3].d[0] | 18241ull;
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002DD114; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x55430000u);
    c.r[3].d[0] = c.r[4].d[0] | 21842ull;
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002DD104; }
    c.r[3].d[0] = c.r[4].d[0] | 20289ull;
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002DD0F4; }
    c.r[3].d[0] = c.r[4].d[0] | 20295ull;
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002DD0E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DD140; } }
L_002DD0E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD0ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 375u, depth + 1u); else { c.pc = 0x002DEA20u; return; } if (c.pc != 0x002DD0ECu) [[unlikely]] return; }
L_002DD0EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DD140; } }
L_002DD0F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD0FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 384u, depth + 1u); else { c.pc = 0x002DEBC0u; return; } if (c.pc != 0x002DD0FCu) [[unlikely]] return; }
L_002DD0FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DD140; } }
L_002DD104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD10Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 393u, depth + 1u); else { c.pc = 0x002DED60u; return; } if (c.pc != 0x002DD10Cu) [[unlikely]] return; }
L_002DD10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DD140; } }
L_002DD114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD11Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 397u, depth + 1u); else { c.pc = 0x002DEE20u; return; } if (c.pc != 0x002DD11Cu) [[unlikely]] return; }
L_002DD11C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DD140; } }
L_002DD124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD12Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 338u, depth + 1u); else { c.pc = 0x002DE3E0u; return; } if (c.pc != 0x002DD12Cu) [[unlikely]] return; }
L_002DD12C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DD140; } }
L_002DD134:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD140u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 361u, depth + 1u); else { c.pc = 0x002DE7B0u; return; } if (c.pc != 0x002DD140u) [[unlikely]] return; }
L_002DD140:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002DD150; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DD168; } }
L_002DD150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD158u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DD158u) [[unlikely]] return; }
L_002DD158:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002DD15C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[7], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD05Cu | kUnwind; return; } goto L_002DD05C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002DD168:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DD180:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD1B8u); set32(c.r[4], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x002DD1B8u) [[unlikely]] return; }
L_002DD1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD1C0u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x002DD1C0u) [[unlikely]] return; }
L_002DD1C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD1C8u); set32(c.r[4], c.r[29].w[0] + 328u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x002DD1C8u) [[unlikely]] return; }
L_002DD1C8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD1D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DD1D8u) [[unlikely]] return; }
L_002DD1D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 312u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    set32(c.r[6], c.r[6].w[0] + 27000u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD1FCu); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x002DD1FCu) [[unlikely]] return; }
L_002DD1FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD214u); st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DD214u) [[unlikely]] return; }
L_002DD214:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[4], c.r[29].w[0] + 296u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD230u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002DD230u) [[unlikely]] return; }
L_002DD230:
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD24Cu); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002DD24Cu) [[unlikely]] return; }
L_002DD24C:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[4], c.r[29].w[0] + 280u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD268u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002DD268u) [[unlikely]] return; }
L_002DD268:
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD284u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002DD284u) [[unlikely]] return; }
L_002DD284:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[4], c.r[29].w[0] + 264u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD2A0u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002DD2A0u) [[unlikely]] return; }
L_002DD2A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD2BCu); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002DD2BCu) [[unlikely]] return; }
L_002DD2BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[4], c.r[29].w[0] + 248u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD2D8u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002DD2D8u) [[unlikely]] return; }
L_002DD2D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[29].w[0] + 344u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD304u); st32((c.r[29].w[0] + 348u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002DD304u) [[unlikely]] return; }
L_002DD304:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], c.r[17].w[0] + 20u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD32Cu); st32((c.r[29].w[0] + 340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x002DD32Cu) [[unlikely]] return; }
L_002DD32C:
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD33Cu); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002DD33Cu) [[unlikely]] return; }
L_002DD33C:
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[4], c.r[17].w[0] + 20u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[29].w[0] + 328u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD364u); st32((c.r[29].w[0] + 332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x002DD364u) [[unlikely]] return; }
L_002DD364:
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD374u); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002DD374u) [[unlikely]] return; }
L_002DD374:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[4], c.r[17].w[0] + 20u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD38Cu); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x002DD38Cu) [[unlikely]] return; }
L_002DD38C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_002DD3B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD39Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DD39Cu) [[unlikely]] return; }
L_002DD39C:
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD3ACu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DD3ACu) [[unlikely]] return; }
L_002DD3AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002DD3BC; } }
L_002DD3B4:
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 80u), 0u);
    c.budget -= 2;
L_002DD3BC:
    set32(c.r[4], c.r[29].w[0] + 216u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD3CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DD3CCu) [[unlikely]] return; }
L_002DD3CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    c.r[21].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002DD6EC; } }
L_002DD3E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD3ECu); set32(c.r[19], c.r[21].w[0] << 2);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x002DD3ECu) [[unlikely]] return; }
L_002DD3EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 76u)));  goto L_002DD42C; }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD41Cu); set32(c.r[4], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DD41Cu) [[unlikely]] return; }
L_002DD41C:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_002DD458; } }
L_002DD42C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 20u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD444u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_005C(c, 73u, depth + 1u); else { c.pc = 0x00290CD0u; return; } if (c.pc != 0x002DD444u) [[unlikely]] return; }
L_002DD444:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002DD6E8; } }
L_002DD458:
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD468u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DD468u) [[unlikely]] return; }
L_002DD468:
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002DD6DC; } }
L_002DD48C:
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 84u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD4B4u); st32((c.r[18].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0022(c, 100u, depth + 1u); else { c.pc = 0x001A8FF0u; return; } if (c.pc != 0x002DD4B4u) [[unlikely]] return; }
L_002DD4B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD4C4u); set32(c.r[5], c.r[5].w[0] + 27016u);  if (depth < kMaxDepth) unit_0018(c, 153u, depth + 1u); else { c.pc = 0x00181DC0u; return; } if (c.pc != 0x002DD4C4u) [[unlikely]] return; }
L_002DD4C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 20u);  goto L_002DD4D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_002DD4FC; } }
L_002DD4D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD4DCu);  if (depth < kMaxDepth) unit_0022(c, 100u, depth + 1u); else { c.pc = 0x001A8FF0u; return; } if (c.pc != 0x002DD4DCu) [[unlikely]] return; }
L_002DD4DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD4ECu); set32(c.r[5], c.r[5].w[0] + 27024u);  if (depth < kMaxDepth) unit_0018(c, 153u, depth + 1u); else { c.pc = 0x00181DC0u; return; } if (c.pc != 0x002DD4ECu) [[unlikely]] return; }
L_002DD4EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 192u);  goto L_002DD500; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002DD4FC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_002DD500:
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD50Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DD50Cu) [[unlikely]] return; }
L_002DD50C:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD524u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00290C50u; return; } if (c.pc != 0x002DD524u) [[unlikely]] return; }
L_002DD524:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD534u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 80u, depth + 1u); else { c.pc = 0x00290D90u; return; } if (c.pc != 0x002DD534u) [[unlikely]] return; }
L_002DD534:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002DD53C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD544u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00290C50u; return; } if (c.pc != 0x002DD544u) [[unlikely]] return; }
L_002DD544:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD554u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 80u, depth + 1u); else { c.pc = 0x00290D90u; return; } if (c.pc != 0x002DD554u) [[unlikely]] return; }
L_002DD554:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD53Cu | kUnwind; return; } goto L_002DD53C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD578u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00290C50u; return; } if (c.pc != 0x002DD578u) [[unlikely]] return; }
L_002DD578:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD588u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 80u, depth + 1u); else { c.pc = 0x00290D90u; return; } if (c.pc != 0x002DD588u) [[unlikely]] return; }
L_002DD588:
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD594u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 89u, depth + 1u); else { c.pc = 0x00290E60u; return; } if (c.pc != 0x002DD594u) [[unlikely]] return; }
L_002DD594:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002DD5E4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD5B0u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x002DD5B0u) [[unlikely]] return; }
L_002DD5B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD5BCu); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_005C(c, 102u, depth + 1u); else { c.pc = 0x00290F70u; return; } if (c.pc != 0x002DD5BCu) [[unlikely]] return; }
L_002DD5BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD5C8u); set32(c.r[5], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x002DD5C8u) [[unlikely]] return; }
L_002DD5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD5D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 92u, depth + 1u); else { c.pc = 0x00290E90u; return; } if (c.pc != 0x002DD5D0u) [[unlikely]] return; }
L_002DD5D0:
    c.f[1] = ld32((c.r[28].w[0] - 32688u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD5DCu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002DD5DCu) [[unlikely]] return; }
L_002DD5DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002DD6D8; } }
L_002DD5E4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002DD6DC; }
    st32((c.r[18].w[0] + 40u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 36u), 0u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    st32((c.r[18].w[0] + 32u), 0u);
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 56u), 0u);
    st32((c.r[18].w[0] + 52u), 0u);
    st32((c.r[18].w[0] + 48u), 0u);
    st32((c.r[18].w[0] + 72u), 0u);
    st32((c.r[18].w[0] + 68u), 0u);
    st32((c.r[18].w[0] + 64u), 0u);
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD628u); st32((c.r[18].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x002DD628u) [[unlikely]] return; }
L_002DD628:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_002DD6D8; } }
    set32(c.r[4], c.r[29].w[0] + 184u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD640u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DD640u) [[unlikely]] return; }
L_002DD640:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD664u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DD664u) [[unlikely]] return; }
L_002DD664:
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002DD6C8; } }
L_002DD670:
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD67Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DD67Cu) [[unlikely]] return; }
L_002DD67C:
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 4);
    st32((c.r[17].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD6ACu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x002DD6ACu) [[unlikely]] return; }
L_002DD6AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD6B8u); set32(c.r[5], c.r[22].w[0] + 16u);  if (depth < kMaxDepth) unit_005C(c, 102u, depth + 1u); else { c.pc = 0x00290F70u; return; } if (c.pc != 0x002DD6B8u) [[unlikely]] return; }
L_002DD6B8:
    set32(c.r[5], c.r[22].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD6C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 99u, depth + 1u); else { c.pc = 0x00290F10u; return; } if (c.pc != 0x002DD6C4u) [[unlikely]] return; }
L_002DD6C4:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002DD6C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD670u | kUnwind; return; } goto L_002DD670; }
L_002DD6D8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002DD6DC:
    c.r[2].d[0] = c.r[16].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD48Cu | kUnwind; return; } goto L_002DD48C; }
L_002DD6E8:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002DD6EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD3E4u | kUnwind; return; } goto L_002DD3E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD704u); set32(c.r[4], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x002DD704u) [[unlikely]] return; }
L_002DD704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_002DD73C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD714u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DD714u) [[unlikely]] return; }
L_002DD714:
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD728u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DD728u) [[unlikely]] return; }
L_002DD728:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002DD760; } }
L_002DD73C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD750u); st32((c.r[17].w[0] + 84u), 0u);  if (depth < kMaxDepth) unit_005C(c, 73u, depth + 1u); else { c.pc = 0x00290CD0u; return; } if (c.pc != 0x002DD750u) [[unlikely]] return; }
L_002DD750:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 4;
L_002DD760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002DD804; } }
L_002DD768:
    set32(c.r[3], c.r[19].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD780u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002DD780u) [[unlikely]] return; }
L_002DD780:
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD798u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00290C50u; return; } if (c.pc != 0x002DD798u) [[unlikely]] return; }
L_002DD798:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7A8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 80u, depth + 1u); else { c.pc = 0x00290D90u; return; } if (c.pc != 0x002DD7A8u) [[unlikely]] return; }
L_002DD7A8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002DD7B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00290C50u; return; } if (c.pc != 0x002DD7B8u) [[unlikely]] return; }
L_002DD7B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7C8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 80u, depth + 1u); else { c.pc = 0x00290D90u; return; } if (c.pc != 0x002DD7C8u) [[unlikely]] return; }
L_002DD7C8:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD7B0u | kUnwind; return; } goto L_002DD7B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 69u, depth + 1u); else { c.pc = 0x00290C50u; return; } if (c.pc != 0x002DD7ECu) [[unlikely]] return; }
L_002DD7EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7FCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 80u, depth + 1u); else { c.pc = 0x00290D90u; return; } if (c.pc != 0x002DD7FCu) [[unlikely]] return; }
L_002DD7FC:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_002DD804:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD768u | kUnwind; return; } goto L_002DD768; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD820u); set32(c.r[4], c.r[4].w[0] + 27040u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002DD820u) [[unlikely]] return; }
L_002DD820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_002DD850:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47530000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = c.r[2].d[0] | 17232ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002DD948; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[19], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002DD948; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD8D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x002DD8D0u) [[unlikely]] return; }
L_002DD8D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002DD948; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD8ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002DD8ECu) [[unlikely]] return; }
L_002DD8EC:
    set32(c.r[4], 0u + 111u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD8F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 477u, depth + 1u); else { c.pc = 0x001B7840u; return; } if (c.pc != 0x002DD8F8u) [[unlikely]] return; }
L_002DD8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD900u); set32(c.r[4], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x002DD900u) [[unlikely]] return; }
L_002DD900:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD90Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 92u, depth + 1u); else { c.pc = 0x001A8E80u; return; } if (c.pc != 0x002DD90Cu) [[unlikely]] return; }
L_002DD90C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DD948; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD920u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_006F(c, 184u, depth + 1u); else { c.pc = 0x002DD180u; return; } if (c.pc != 0x002DD920u) [[unlikely]] return; }
L_002DD920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DD948; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002DD96C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD93Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002DD93Cu) [[unlikely]] return; }
L_002DD93C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DD96C; } }
L_002DD948:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD954u); set32(c.r[4], c.r[4].w[0] + 27088u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DD954u) [[unlikely]] return; }
L_002DD954:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DD96C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD968u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002DD968u) [[unlikely]] return; }
L_002DD968:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DD96C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002DD990:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x554D0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[2].d[0] = c.r[2].d[0] | 17484ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DDADC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD9FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 109u, depth + 1u); else { c.pc = 0x00200FB0u; return; } if (c.pc != 0x002DD9FCu) [[unlikely]] return; }
L_002DD9FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002DDA0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DDB58; } }
L_002DDA0C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA24u); set32(c.r[21], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DDA24u) [[unlikely]] return; }
L_002DDA24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_002DDADC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA40u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002DDA40u) [[unlikely]] return; }
L_002DDA40:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_002DDAB4; } }
L_002DDA50:
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[16], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[17].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA78u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x002DDA78u) [[unlikely]] return; }
L_002DDA78:
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DDADC; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDAA4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002DDAA4u) [[unlikely]] return; }
L_002DDAA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDAB0u); set32(c.r[19], c.r[19].w[0] + 1u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DDAB0u) [[unlikely]] return; }
L_002DDAB0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002DDAB4:
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002DDB58; }
    c.r[2].d[0] = c.r[18].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDA50u | kUnwind; return; } goto L_002DDA50; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DDB58; } }
L_002DDADC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDAE8u); set32(c.r[4], c.r[4].w[0] + 27136u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DDAE8u) [[unlikely]] return; }
L_002DDAE8:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 52u), 0u);  goto L_002DDB54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002DDB28; } }
L_002DDAFC:
    set32(c.r[17], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002DDB28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDB18u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002DDB18u) [[unlikely]] return; }
L_002DDB18:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
L_002DDB28:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDAFCu | kUnwind; return; } goto L_002DDAFC; }
    set32(c.r[4], ld32((c.r[20].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DDB50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDB4Cu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002DDB4Cu) [[unlikely]] return; }
L_002DDB4C:
    st32((c.r[20].w[0] + 48u), 0u);
    c.budget -= 1;
L_002DDB50:
    st32((c.r[20].w[0] + 52u), 0u);
    c.budget -= 1;
L_002DDB54:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DDB58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002DDB80:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41430000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[2].d[0] = c.r[2].d[0] | 18758ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[8].w[0] << 8);
    set32(c.r[6], c.r[8].w[0] << 24);
    c.r[5].d[0] = c.r[4].d[0] & c.r[7].d[0];
    set32(c.r[3], c.r[8].w[0] >> 8);
    c.r[4].d[0] = c.r[3].d[0] & 65280ull;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[8].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002DDE10; } }
    set32(c.r[6], ld32((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41490000u);
    c.r[2].d[0] = c.r[2].d[0] | 20038ull;
    set32(c.r[3], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[3].d[0] & c.r[7].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DDE10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDC30u); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x002DDC30u) [[unlikely]] return; }
L_002DDC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDC38u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x002DDC38u) [[unlikely]] return; }
L_002DDC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDC40u); set32(c.r[4], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x002DDC40u) [[unlikely]] return; }
L_002DDC40:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002DDE10; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDC68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x002DDC68u) [[unlikely]] return; }
L_002DDC68:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002DDE10; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDC84u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002DDC84u) [[unlikely]] return; }
L_002DDC84:
    set32(c.r[4], 0u + 130u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDC90u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 477u, depth + 1u); else { c.pc = 0x001B7840u; return; } if (c.pc != 0x002DDC90u) [[unlikely]] return; }
L_002DDC90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDC98u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002DDC98u) [[unlikely]] return; }
L_002DDC98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[21].w[0] + 64u), c.r[2].w[0]);  goto L_002DDCAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDCA8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 183u, depth + 1u); else { c.pc = 0x002E19C0u; return; } if (c.pc != 0x002DDCA8u) [[unlikely]] return; }
L_002DDCA8:
    st32((c.r[21].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_002DDCAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DDE10; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 152u);
    set32(c.r[7], c.r[29].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDCCCu); set32(c.r[8], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0070(c, 191u, depth + 1u); else { c.pc = 0x002E1AC0u; return; } if (c.pc != 0x002DDCCCu) [[unlikely]] return; }
L_002DDCCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DDE10; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[21].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_002DDCE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DDEEC; } }
L_002DDCE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDCF0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DDCF0u) [[unlikely]] return; }
L_002DDCF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_002DDE10; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD0Cu); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002DDD0Cu) [[unlikely]] return; }
L_002DDD0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002DDDE0; } }
L_002DDD14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD1Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002DDD1Cu) [[unlikely]] return; }
L_002DDD1C:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002DDE10; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x002DDD40u) [[unlikely]] return; }
L_002DDD40:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002DDE10; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD5Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002DDD5Cu) [[unlikely]] return; }
L_002DDD5C:
    set32(c.r[4], 0u + 130u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD68u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 477u, depth + 1u); else { c.pc = 0x001B7840u; return; } if (c.pc != 0x002DDD68u) [[unlikely]] return; }
L_002DDD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD70u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002DDD70u) [[unlikely]] return; }
L_002DDD70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 68u)));  goto L_002DDD84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 142u, depth + 1u); else { c.pc = 0x002E1570u; return; } if (c.pc != 0x002DDD80u) [[unlikely]] return; }
L_002DDD80:
    set32(c.r[3], ld32((c.r[21].w[0] + 68u)));
    c.budget -= 1;
L_002DDD84:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DDE10; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 64u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 152u);
    set32(c.r[8], c.r[29].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDDBCu); set32(c.r[9], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0070(c, 147u, depth + 1u); else { c.pc = 0x002E1610u; return; } if (c.pc != 0x002DDDBCu) [[unlikely]] return; }
L_002DDDBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DDE10; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002DDDE0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDDD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002DDDD8u) [[unlikely]] return; }
L_002DDDD8:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002DDDE0:
    set32(c.r[2], ld32((c.r[21].w[0] + 72u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDD14u | kUnwind; return; } goto L_002DDD14; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002DDEEC; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002DDE04u) [[unlikely]] return; }
L_002DDE04:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DDEEC; } }
L_002DDE10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE1Cu); set32(c.r[4], c.r[4].w[0] + 27184u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DDE1Cu) [[unlikely]] return; }
L_002DDE1C:
    set32(c.r[2], ld32((c.r[21].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[21].w[0] + 72u), 0u);  goto L_002DDE98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002DDE6C; } }
L_002DDE30:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002DDE6C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 68u)));  goto L_002DDE60; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE5Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDE5Cu) [[unlikely]] return; }
L_002DDE5C:
    set32(c.r[2], ld32((c.r[21].w[0] + 68u)));
    c.budget -= 1;
L_002DDE60:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_002DDE6C:
    set32(c.r[2], ld32((c.r[21].w[0] + 72u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 68u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDE30u | kUnwind; return; } goto L_002DDE30; }
    set32(c.r[4], ld32((c.r[21].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DDE94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE90u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002DDE90u) [[unlikely]] return; }
L_002DDE90:
    st32((c.r[21].w[0] + 68u), 0u);
    c.budget -= 1;
L_002DDE94:
    st32((c.r[21].w[0] + 72u), 0u);
    c.budget -= 1;
L_002DDE98:
    set32(c.r[4], ld32((c.r[21].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DDEC0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[21].w[0] + 64u), 0u);  goto L_002DDEC0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDEBCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDEBCu) [[unlikely]] return; }
L_002DDEBC:
    st32((c.r[21].w[0] + 64u), 0u);
    c.budget -= 1;
L_002DDEC0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002DDED4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDED4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002DDED4u) [[unlikely]] return; }
L_002DDED4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DDEEC; }
    goto L_002DDEDC;
L_002DDED8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DDEDC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDEE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002DDEE8u) [[unlikely]] return; }
L_002DDEE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DDEEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002DDF20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55490000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[2].d[0] = c.r[2].d[0] | 20038ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002DE0A4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[21].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_002DDF9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DE144; } }
L_002DDF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDFA4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DDFA4u) [[unlikely]] return; }
L_002DDFA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_002DE0A4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDFC0u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002DDFC0u) [[unlikely]] return; }
L_002DDFC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002DE08C; } }
L_002DDFC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDFD0u); set32(c.r[4], 0u + 2160u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002DDFD0u) [[unlikely]] return; }
L_002DDFD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 56u)));  goto L_002DDFE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDFE0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 57u, depth + 1u); else { c.pc = 0x00284660u; return; } if (c.pc != 0x002DDFE0u) [[unlikely]] return; }
L_002DDFE0:
    set32(c.r[3], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 1;
L_002DDFE4:
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DE0A4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE010u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002DE010u) [[unlikely]] return; }
L_002DE010:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002DE0A4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE034u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x002DE034u) [[unlikely]] return; }
L_002DE034:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002DE0A4; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE050u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002DE050u) [[unlikely]] return; }
L_002DE050:
    set32(c.r[4], 0u + 149u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE05Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 477u, depth + 1u); else { c.pc = 0x001B7840u; return; } if (c.pc != 0x002DE05Cu) [[unlikely]] return; }
L_002DE05C:
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE070u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 65u, depth + 1u); else { c.pc = 0x00284740u; return; } if (c.pc != 0x002DE070u) [[unlikely]] return; }
L_002DE070:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002DE08C; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE084u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002DE084u) [[unlikely]] return; }
L_002DE084:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_002DE08C:
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDFC8u | kUnwind; return; } goto L_002DDFC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DE144; } }
L_002DE0A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE0B0u); set32(c.r[4], c.r[4].w[0] + 27232u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DE0B0u) [[unlikely]] return; }
L_002DE0B0:
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[21].w[0] + 60u), 0u);  goto L_002DE12C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002DE100; } }
L_002DE0C4:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002DE100; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 56u)));  goto L_002DE0F4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE0F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE0F0u) [[unlikely]] return; }
L_002DE0F0:
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 1;
L_002DE0F4:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_002DE100:
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE0C4u | kUnwind; return; } goto L_002DE0C4; }
    set32(c.r[4], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DE128; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE124u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002DE124u) [[unlikely]] return; }
L_002DE124:
    st32((c.r[21].w[0] + 56u), 0u);
    c.budget -= 1;
L_002DE128:
    st32((c.r[21].w[0] + 60u), 0u);
    c.budget -= 1;
L_002DE12C:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DE144; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE140u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002DE140u) [[unlikely]] return; }
L_002DE140:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DE144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002DE170:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55470000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[2].d[0] = c.r[2].d[0] | 21043ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DE330; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[2].w[0] << 2);  goto L_002DE1E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DE3B8; } }
L_002DE1E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE1FCu); set32(c.r[21], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DE1FCu) [[unlikely]] return; }
L_002DE1FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_002DE330; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE218u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002DE218u) [[unlikely]] return; }
L_002DE218:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE224u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DE224u) [[unlikely]] return; }
L_002DE224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002DE330; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE240u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002DE240u) [[unlikely]] return; }
L_002DE240:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_002DE308; } }
L_002DE250:
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[16], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[17].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE278u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x002DE278u) [[unlikely]] return; }
L_002DE278:
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DE330; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE2A4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002DE2A4u) [[unlikely]] return; }
L_002DE2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE2ACu); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002DE2ACu) [[unlikely]] return; }
L_002DE2AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 36u)));  goto L_002DE2C8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE2C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 56u, depth + 1u); else { c.pc = 0x00208610u; return; } if (c.pc != 0x002DE2C4u) [[unlikely]] return; }
L_002DE2C4:
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 1;
L_002DE2C8:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DE330; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE2F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x00208770u; return; } if (c.pc != 0x002DE2F8u) [[unlikely]] return; }
L_002DE2F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE304u); set32(c.r[19], c.r[19].w[0] + 1u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DE304u) [[unlikely]] return; }
L_002DE304:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002DE308:
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002DE3B8; }
    c.r[2].d[0] = c.r[18].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE250u | kUnwind; return; } goto L_002DE250; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DE3B8; } }
L_002DE330:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE33Cu); set32(c.r[4], c.r[4].w[0] + 27296u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DE33Cu) [[unlikely]] return; }
L_002DE33C:
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DE3B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002DE38C; } }
L_002DE350:
    set32(c.r[17], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002DE38C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 36u)));  goto L_002DE380; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE37Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE37Cu) [[unlikely]] return; }
L_002DE37C:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 1;
L_002DE380:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_002DE38C:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE350u | kUnwind; return; } goto L_002DE350; }
    set32(c.r[4], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DE3B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE3B0u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002DE3B0u) [[unlikely]] return; }
L_002DE3B0:
    st32((c.r[20].w[0] + 36u), 0u);
    c.budget -= 1;
L_002DE3B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DE3B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002DE3E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55470000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = c.r[2].d[0] | 21043ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DE4B4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002DE4B4; } }
    set32(c.r[17], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002DE48C; } }
L_002DE45C:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DE4B4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE47Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x00208770u; return; } if (c.pc != 0x002DE47Cu) [[unlikely]] return; }
L_002DE47C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE488u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DE488u) [[unlikely]] return; }
L_002DE488:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002DE48C:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002DE53C; }
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE45Cu | kUnwind; return; } goto L_002DE45C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DE53C; } }
L_002DE4B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE4C0u); set32(c.r[4], c.r[4].w[0] + 27344u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DE4C0u) [[unlikely]] return; }
L_002DE4C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DE53C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002DE510; } }
L_002DE4D4:
    set32(c.r[17], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002DE510; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 36u)));  goto L_002DE504; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE500u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE500u) [[unlikely]] return; }
L_002DE500:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_002DE504:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_002DE510:
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE4D4u | kUnwind; return; } goto L_002DE4D4; }
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DE538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE534u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002DE534u) [[unlikely]] return; }
L_002DE534:
    st32((c.r[19].w[0] + 36u), 0u);
    c.budget -= 1;
L_002DE538:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DE53C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DE560:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55410000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[2].d[0] = c.r[2].d[0] | 17234ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DE704; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[21], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE5E0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DE5E0u) [[unlikely]] return; }
L_002DE5E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_002DE704; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE5FCu); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002DE5FCu) [[unlikely]] return; }
L_002DE5FC:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE608u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002DE608u) [[unlikely]] return; }
L_002DE608:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_002DE704; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE624u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002DE624u) [[unlikely]] return; }
L_002DE624:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_002DE6DC; } }
L_002DE634:
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[16], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[17].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE65Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x002DE65Cu) [[unlikely]] return; }
L_002DE65C:
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DE704; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE688u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002DE688u) [[unlikely]] return; }
L_002DE688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE690u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x002DE690u) [[unlikely]] return; }
L_002DE690:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 44u)));  goto L_002DE6B0; }
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE6ACu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x002DE6ACu) [[unlikely]] return; }
L_002DE6AC:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_002DE6B0:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DE704; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE6D8u); set32(c.r[19], c.r[19].w[0] + 1u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DE6D8u) [[unlikely]] return; }
L_002DE6D8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002DE6DC:
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002DE78C; }
    c.r[2].d[0] = c.r[18].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE634u | kUnwind; return; } goto L_002DE634; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DE78C; } }
L_002DE704:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE710u); set32(c.r[4], c.r[4].w[0] + 27392u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DE710u) [[unlikely]] return; }
L_002DE710:
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DE78C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002DE760; } }
L_002DE724:
    set32(c.r[17], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002DE760; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 44u)));  goto L_002DE754; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE750u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE750u) [[unlikely]] return; }
L_002DE750:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_002DE754:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_002DE760:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE724u | kUnwind; return; } goto L_002DE724; }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DE788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE784u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002DE784u) [[unlikely]] return; }
L_002DE784:
    st32((c.r[20].w[0] + 44u), 0u);
    c.budget -= 1;
L_002DE788:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DE78C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002DE7B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55410000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = c.r[2].d[0] | 17234ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DE884; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002DE884; } }
    set32(c.r[17], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002DE85C; } }
L_002DE82C:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DE884; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE84Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x002DE84Cu) [[unlikely]] return; }
L_002DE84C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE858u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002DE858u) [[unlikely]] return; }
L_002DE858:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002DE85C:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002DE90C; }
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE82Cu | kUnwind; return; } goto L_002DE82C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DE90C; } }
L_002DE884:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE890u); set32(c.r[4], c.r[4].w[0] + 27440u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DE890u) [[unlikely]] return; }
L_002DE890:
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DE90C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002DE8E0; } }
L_002DE8A4:
    set32(c.r[17], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002DE8E0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  goto L_002DE8D4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE8D0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE8D0u) [[unlikely]] return; }
L_002DE8D0:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 1;
L_002DE8D4:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_002DE8E0:
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE8A4u | kUnwind; return; } goto L_002DE8A4; }
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DE908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE904u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002DE904u) [[unlikely]] return; }
L_002DE904:
    st32((c.r[19].w[0] + 44u), 0u);
    c.budget -= 1;
L_002DE908:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DE90C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DE930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55430000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[2].d[0] | 20295ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DE9D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE98Cu); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002DE98Cu) [[unlikely]] return; }
L_002DE98C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  goto L_002DE9A8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE9A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 56u, depth + 1u); else { c.pc = 0x00208610u; return; } if (c.pc != 0x002DE9A4u) [[unlikely]] return; }
L_002DE9A4:
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 1;
L_002DE9A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DE9D4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE9C4u); set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x00208770u; return; } if (c.pc != 0x002DE9C4u) [[unlikely]] return; }
L_002DE9C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DE9D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DEA0C; } }
L_002DE9D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE9E0u); set32(c.r[4], c.r[4].w[0] + 27488u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DE9E0u) [[unlikely]] return; }
L_002DE9E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DEA0C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 108u), 0u);  goto L_002DEA08; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEA04u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DEA04u) [[unlikely]] return; }
L_002DEA04:
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 1;
L_002DEA08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DEA0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DEA20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55430000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] | 20295ull;
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DEA98; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DEA98; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEA88u); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x00208770u; return; } if (c.pc != 0x002DEA88u) [[unlikely]] return; }
L_002DEA88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DEA98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DEAD0; } }
L_002DEA98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEAA4u); set32(c.r[4], c.r[4].w[0] + 27552u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DEAA4u) [[unlikely]] return; }
L_002DEAA4:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DEAD0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 108u), 0u);  goto L_002DEACC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEAC8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DEAC8u) [[unlikely]] return; }
L_002DEAC8:
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 1;
L_002DEACC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DEAD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DEAE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55430000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[2].d[0] | 20289ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DEB68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB3Cu); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x002DEB3Cu) [[unlikely]] return; }
L_002DEB3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 112u), c.r[2].w[0]);  goto L_002DEB58; }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB54u); set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x002DEB54u) [[unlikely]] return; }
L_002DEB54:
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 1;
L_002DEB58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DEB68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DEBA0; } }
L_002DEB68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB74u); set32(c.r[4], c.r[4].w[0] + 27616u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DEB74u) [[unlikely]] return; }
L_002DEB74:
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DEBA0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 112u), 0u);  goto L_002DEB9C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB98u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DEB98u) [[unlikely]] return; }
L_002DEB98:
    st32((c.r[17].w[0] + 112u), 0u);
    c.budget -= 1;
L_002DEB9C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DEBA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DEBC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55430000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] | 20289ull;
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DEC30; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DEC30; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEC28u); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x002DEC28u) [[unlikely]] return; }
L_002DEC28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DEC68; } }
L_002DEC30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEC3Cu); set32(c.r[4], c.r[4].w[0] + 27680u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DEC3Cu) [[unlikely]] return; }
L_002DEC3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DEC68; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 112u), 0u);  goto L_002DEC64; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEC60u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DEC60u) [[unlikely]] return; }
L_002DEC60:
    st32((c.r[16].w[0] + 112u), 0u);
    c.budget -= 1;
L_002DEC64:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DEC68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DEC80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55430000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[2].d[0] | 21842ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DED08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DECDCu); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x002DECDCu) [[unlikely]] return; }
L_002DECDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 116u), c.r[2].w[0]);  goto L_002DECF8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DECF4u); set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x002DECF4u) [[unlikely]] return; }
L_002DECF4:
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 1;
L_002DECF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DED08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DED40; } }
L_002DED08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED14u); set32(c.r[4], c.r[4].w[0] + 27744u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DED14u) [[unlikely]] return; }
L_002DED14:
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DED40; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 116u), 0u);  goto L_002DED3C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED38u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DED38u) [[unlikely]] return; }
L_002DED38:
    st32((c.r[17].w[0] + 116u), 0u);
    c.budget -= 1;
L_002DED3C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DED40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DED60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55430000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] | 21842ull;
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DEDD0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DEDD0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEDC8u); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x002DEDC8u) [[unlikely]] return; }
L_002DEDC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DEE08; } }
L_002DEDD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEDDCu); set32(c.r[4], c.r[4].w[0] + 27792u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DEDDCu) [[unlikely]] return; }
L_002DEDDC:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DEE08; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 116u), 0u);  goto L_002DEE04; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE00u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DEE00u) [[unlikely]] return; }
L_002DEE00:
    st32((c.r[16].w[0] + 116u), 0u);
    c.budget -= 1;
L_002DEE04:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DEE08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DEE20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55530000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[2].d[0] = c.r[2].d[0] | 18241ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DEF7C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], 0u + 80u);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEEC4u); set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002DEEC4u) [[unlikely]] return; }
L_002DEEC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 128u), c.r[2].w[0]);  goto L_002DEEE0; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEEDCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0015D3D0u; return; } if (c.pc != 0x002DEEDCu) [[unlikely]] return; }
L_002DEEDC:
    st32((c.r[19].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 1;
L_002DEEE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DEF7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEEF0u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002DEEF0u) [[unlikely]] return; }
L_002DEEF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 124u), c.r[2].w[0]);  goto L_002DEF0C; }
    set32(c.r[6], ld32((c.r[19].w[0] + 128u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF08u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 380u, depth + 1u); else { c.pc = 0x0016FE10u; return; } if (c.pc != 0x002DEF08u) [[unlikely]] return; }
L_002DEF08:
    st32((c.r[19].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 1;
L_002DEF0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DEF7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF1Cu); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002DEF1Cu) [[unlikely]] return; }
L_002DEF1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 136u), c.r[2].w[0]);  goto L_002DEF38; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF34u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0015D3D0u; return; } if (c.pc != 0x002DEF34u) [[unlikely]] return; }
L_002DEF34:
    st32((c.r[19].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 1;
L_002DEF38:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DEF7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF4Cu); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002DEF4Cu) [[unlikely]] return; }
L_002DEF4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 132u), c.r[2].w[0]);  goto L_002DEF68; }
    set32(c.r[6], ld32((c.r[19].w[0] + 136u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 380u, depth + 1u); else { c.pc = 0x0016FE10u; return; } if (c.pc != 0x002DEF64u) [[unlikely]] return; }
L_002DEF64:
    st32((c.r[19].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 1;
L_002DEF68:
    set32(c.r[2], ld32((c.r[19].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DEF7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DEFCC; } }
L_002DEF7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF88u); set32(c.r[4], c.r[4].w[0] + 27840u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DEF88u) [[unlikely]] return; }
L_002DEF88:
    set32(c.r[4], ld32((c.r[19].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 128u)));  goto L_002DEFAC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEFA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DEFA4u) [[unlikely]] return; }
L_002DEFA4:
    st32((c.r[19].w[0] + 124u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 2;
L_002DEFAC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DEFCC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEFC4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DEFC4u) [[unlikely]] return; }
L_002DEFC4:
    st32((c.r[19].w[0] + 128u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002DEFCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002DEFF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[2].d[0] | 19795ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DF094; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF04Cu); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002DF04Cu) [[unlikely]] return; }
L_002DF04C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 120u), c.r[2].w[0]);  goto L_002DF068; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF064u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 56u, depth + 1u); else { c.pc = 0x00208610u; return; } if (c.pc != 0x002DF064u) [[unlikely]] return; }
L_002DF064:
    st32((c.r[17].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 1;
L_002DF068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DF094; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF084u); set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x00208770u; return; } if (c.pc != 0x002DF084u) [[unlikely]] return; }
L_002DF084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DF094; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DF0CC; } }
L_002DF094:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF0A0u); set32(c.r[4], c.r[4].w[0] + 27904u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DF0A0u) [[unlikely]] return; }
L_002DF0A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DF0CC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 120u), 0u);  goto L_002DF0C8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF0C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF0C4u) [[unlikely]] return; }
L_002DF0C4:
    st32((c.r[17].w[0] + 120u), 0u);
    c.budget -= 1;
L_002DF0C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DF0CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DF0E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] | 19795ull;
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DF170; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DF170; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF148u); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x00208770u; return; } if (c.pc != 0x002DF148u) [[unlikely]] return; }
L_002DF148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DF170; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], 0u + 11u);
    set32(c.r[5], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[6].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002DF1A8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF170u); set32(c.r[4], c.r[4].w[0] + 27952u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DF170u) [[unlikely]] return; }
L_002DF170:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF17Cu); set32(c.r[4], c.r[4].w[0] + 28048u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002DF17Cu) [[unlikely]] return; }
L_002DF17C:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DF1A8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 120u), 0u);  goto L_002DF1A4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF1A0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF1A0u) [[unlikely]] return; }
L_002DF1A0:
    st32((c.r[16].w[0] + 120u), 0u);
    c.budget -= 1;
L_002DF1A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DF1A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DF1C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF1DCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002DF1DCu) [[unlikely]] return; }
L_002DF1DC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF1E8u); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002DF1E8u) [[unlikely]] return; }
L_002DF1E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28592u);
    set32(c.r[2], c.r[2].w[0] + 28648u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 92u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[6], 0u + 12u);
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF21Cu); st32((c.r[17].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002DF21Cu) [[unlikely]] return; }
L_002DF21C:
    set32(c.r[4], c.r[17].w[0] + 104u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF22Cu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002DF22Cu) [[unlikely]] return; }
L_002DF22C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DF250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF264u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 456u, depth + 1u); else { c.pc = 0x002DF710u; return; } if (c.pc != 0x002DF264u) [[unlikely]] return; }
L_002DF264:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DF290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DF2C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF2B8u);  if (depth < kMaxDepth) unit_006F(c, 456u, depth + 1u); else { c.pc = 0x002DF710u; return; } if (c.pc != 0x002DF2B8u) [[unlikely]] return; }
L_002DF2B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002DF3BC; } }
L_002DF2C0:
    set32(c.r[4], ld32((c.r[5].w[0] + 1100u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[5].w[0] + 16u)));  goto L_002DF2D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF3B8; } }
L_002DF2D8:
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF2E4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF2E4u) [[unlikely]] return; }
L_002DF2E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002DF308; }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DF3B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF300u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 456u, depth + 1u); else { c.pc = 0x002DF710u; return; } if (c.pc != 0x002DF300u) [[unlikely]] return; }
L_002DF300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF3B8; } }
L_002DF308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF310u);  if (depth < kMaxDepth) unit_006F(c, 467u, depth + 1u); else { c.pc = 0x002DF8D0u; return; } if (c.pc != 0x002DF310u) [[unlikely]] return; }
L_002DF310:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DF32C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF324u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 445u, depth + 1u); else { c.pc = 0x002DF540u; return; } if (c.pc != 0x002DF324u) [[unlikely]] return; }
L_002DF324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_002DF34C; } }
L_002DF32C:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002DF348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF348u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 460u, depth + 1u); else { c.pc = 0x002DF7C0u; return; } if (c.pc != 0x002DF348u) [[unlikely]] return; }
L_002DF348:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002DF34C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DF3B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002DF3B0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002DF370; }
    set32(c.r[17], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_002DF370:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002DF3A0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF38Cu); st32((c.r[17].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006F(c, 467u, depth + 1u); else { c.pc = 0x002DF8D0u; return; } if (c.pc != 0x002DF38Cu) [[unlikely]] return; }
L_002DF38C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 5u);  goto L_002DF398; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002DF398:
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002DF3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF3A8u);  if (depth < kMaxDepth) unit_006F(c, 469u, depth + 1u); else { c.pc = 0x002DF930u; return; } if (c.pc != 0x002DF3A8u) [[unlikely]] return; }
L_002DF3A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF3B8; } }
L_002DF3B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF3B8u);  if (depth < kMaxDepth) unit_006F(c, 503u, depth + 1u); else { c.pc = 0x002DFDF0u; return; } if (c.pc != 0x002DF3B8u) [[unlikely]] return; }
L_002DF3B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002DF3BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DF3D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DF4B4; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002DF414; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF414; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DF414:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002DF4B8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[19], ld32((c.r[28].w[0] - 31436u)));  goto L_002DF430; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF4B4; } }
    set32(c.r[19], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_002DF430:
    set32(c.r[2], ld32((c.r[19].w[0] + 352u)));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF440u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002DF440u) [[unlikely]] return; }
L_002DF440:
    set32(c.r[3], ld32((c.r[19].w[0] + 352u)));
    set32(c.r[4], 0u + 7000u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 1100u)));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 76u)));  goto L_002DF468; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));  if (t) { goto L_002DF49C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_002DF468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DF498; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002DF490; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF484u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 490u, depth + 1u); else { c.pc = 0x002DFCA0u; return; } if (c.pc != 0x002DF484u) [[unlikely]] return; }
L_002DF484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF498; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002DF490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF498u);  if (depth < kMaxDepth) unit_006F(c, 504u, depth + 1u); else { c.pc = 0x002DFE00u; return; } if (c.pc != 0x002DF498u) [[unlikely]] return; }
L_002DF498:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_002DF49C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF4A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002DF4A4u) [[unlikely]] return; }
L_002DF4A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002DF4B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002DF4B8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DF4D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002DF530; }
    set32(c.r[5], ld32((c.r[3].w[0] + 1100u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 76u)));  goto L_002DF500; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF52C; } }
L_002DF500:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DF52C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DF524; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF51Cu);  if (depth < kMaxDepth) unit_006F(c, 500u, depth + 1u); else { c.pc = 0x002DFDA0u; return; } if (c.pc != 0x002DF51Cu) [[unlikely]] return; }
L_002DF51C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF52C; } }
L_002DF524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF52Cu);  if (depth < kMaxDepth) unit_0070(c, 24u, depth + 1u); else { c.pc = 0x002E0230u; return; } if (c.pc != 0x002DF52Cu) [[unlikely]] return; }
L_002DF52C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002DF530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002DF540:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF564u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 456u, depth + 1u); else { c.pc = 0x002DF710u; return; } if (c.pc != 0x002DF564u) [[unlikely]] return; }
L_002DF564:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002DF6F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF57Cu);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002DF57Cu) [[unlikely]] return; }
L_002DF57C:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_002DF594; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), 0u);  if (t) { goto L_002DF598; } }
L_002DF594:
    st32((c.r[18].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 1;
L_002DF598:
    c.r[3].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002DF6B0; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DF5B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF5BCu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x002DF5BCu) [[unlikely]] return; }
L_002DF5BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[17].w[0] << 2);  goto L_002DF5E0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF5D8u);  if (depth < kMaxDepth) unit_00A8(c, 96u, depth + 1u); else { c.pc = 0x003C12F0u; return; } if (c.pc != 0x002DF5D8u) [[unlikely]] return; }
L_002DF5D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] << 2);
    c.budget -= 2;
L_002DF5E0:
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[3].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_002DF698; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], c.r[17].w[0] + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF60Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 178u, depth + 1u); else { c.pc = 0x003C20D0u; return; } if (c.pc != 0x002DF60Cu) [[unlikely]] return; }
L_002DF60C:
    set32(c.r[19], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF628u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF628u) [[unlikely]] return; }
L_002DF628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF630u); set32(c.r[4], 0u + 352u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002DF630u) [[unlikely]] return; }
L_002DF630:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 104u), c.r[4].w[0]);  goto L_002DF64C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF644u);  if (depth < kMaxDepth) unit_000E(c, 95u, depth + 1u); else { c.pc = 0x00158830u; return; } if (c.pc != 0x002DF644u) [[unlikely]] return; }
L_002DF644:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0] + 104u), c.r[4].w[0]);
    c.budget -= 2;
L_002DF64C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002DF69C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002DF690; }
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], c.r[17].w[0] + 5u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] + c.r[16].w[0]);  goto L_002DF68C; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF690; } }
L_002DF68C:
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_002DF690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF698u);  if (depth < kMaxDepth) unit_000E(c, 140u, depth + 1u); else { c.pc = 0x00158D80u; return; } if (c.pc != 0x002DF698u) [[unlikely]] return; }
L_002DF698:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002DF69C:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DF5B4u | kUnwind; return; } goto L_002DF5B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002DF6E8; } }
L_002DF6B0:
    set32(c.r[3], ld32((c.r[3].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[18].w[0] + 320u), 0u);  goto L_002DF6E4; }
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002DF6DC; }
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_002DF6DC; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DF6DC:
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 320u), 0u);
    c.budget -= 2;
L_002DF6E4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002DF6E8:
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_002DF6F0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DF710:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 9;
L_002DF734:
    set32(c.r[17], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 92u);  if (t) { goto L_002DF760; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_002DF760; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF75Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF75Cu) [[unlikely]] return; }
L_002DF75C:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002DF760:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002DF784; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF77Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF77Cu) [[unlikely]] return; }
L_002DF77C:
    st32((c.r[17].w[0] + 104u), 0u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_002DF784:
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DF734u | kUnwind; return; } goto L_002DF734; }
    st32((c.r[19].w[0] + 76u), 0u);
    st32((c.r[19].w[0] + 72u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DF7C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 13;
L_002DF7F4:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] + 92u);  if (t) { goto L_002DF82C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF814u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF814u) [[unlikely]] return; }
L_002DF814:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF82Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF82Cu) [[unlikely]] return; }
L_002DF82C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DF7F4u | kUnwind; return; } goto L_002DF7F4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DF860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002DF8BC; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002DF884; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002DF8C8; } }
L_002DF884:
    set32(c.r[5], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002DF8C4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DF8C4; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 1100u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002DF8C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF8B4u);  if (depth < kMaxDepth) unit_006F(c, 456u, depth + 1u); else { c.pc = 0x002DF710u; return; } if (c.pc != 0x002DF8B4u) [[unlikely]] return; }
L_002DF8B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF8C4; } }
L_002DF8BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF8C4u);  if (depth < kMaxDepth) unit_006F(c, 456u, depth + 1u); else { c.pc = 0x002DF710u; return; } if (c.pc != 0x002DF8C4u) [[unlikely]] return; }
L_002DF8C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002DF8C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002DF8D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 13392u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 112u);  if (t) { goto L_002DF918; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF8FCu); set32(c.r[16], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x002DF8FCu) [[unlikely]] return; }
L_002DF8FC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 116u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DF91C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DF91C; } }
L_002DF918:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DF91C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DF930:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], c.r[2].w[0] + 112u);
    set32(c.r[18], c.r[2].w[0] + 13296u);
    set32(c.r[17], c.r[2].w[0] + 13344u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF974u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002DF974u) [[unlikely]] return; }
L_002DF974:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF984u); st128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x002DF984u) [[unlikely]] return; }
L_002DF984:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.f[22] = ld32((c.r[18].w[0] + 32u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF998u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002DF998u) [[unlikely]] return; }
L_002DF998:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF9B4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x002DF9B4u) [[unlikely]] return; }
L_002DF9B4:
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    set32(c.r[6], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[29].w[0] + 208u), c.f[2]);
    st32((c.r[29].w[0] + 212u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF9E4u); st32((c.r[29].w[0] + 220u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x002DF9E4u) [[unlikely]] return; }
L_002DF9E4:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA00u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_003A(c, 294u, depth + 1u); else { c.pc = 0x0020AC90u; return; } if (c.pc != 0x002DFA00u) [[unlikely]] return; }
L_002DFA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA08u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002DFA08u) [[unlikely]] return; }
L_002DFA08:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA14u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x002DFA14u) [[unlikely]] return; }
L_002DFA14:
    set32(c.r[6], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[7], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 328u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA2Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x002DFA2Cu) [[unlikely]] return; }
L_002DFA2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[17], c.r[16].w[0] + 192u);
    c.f[0] = ld32((c.r[2].w[0] + 19680u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 19684u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 19688u));
    st32((c.r[29].w[0] + 148u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 19692u));
    st32((c.r[29].w[0] + 152u), c.f[1]);
    st32((c.r[29].w[0] + 152u), c.f[20]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA74u); st32((c.r[29].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002DFA74u) [[unlikely]] return; }
L_002DFA74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 19648u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[2].w[0] + 19652u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 19656u));
    c.f[0] = ld32((c.r[2].w[0] + 19660u));
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 136u), c.f[1]);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[22]);
    st32((c.r[29].w[0] + 132u), c.f[22]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFAC0u); st32((c.r[29].w[0] + 136u), c.f[22]);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x002DFAC0u) [[unlikely]] return; }
L_002DFAC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFAD0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002DFAD0u) [[unlikely]] return; }
L_002DFAD0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[4].w[0] + 80u));  goto L_002DFAF8; }
    c.f[12] = 0u;
    c.budget -= 1;
L_002DFAF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFB00u); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x002DFB00u) [[unlikely]] return; }
L_002DFB00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 19680u));
    set32(c.r[17], c.r[16].w[0] + 256u);
    c.f[1] = ld32((c.r[2].w[0] + 19684u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = c.f[21] ^ fp::kSign;
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.f[3] = ld32((c.r[3].w[0] + 19688u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 112u), c.f[2]);
    c.f[2] = ld32((c.r[2].w[0] + 19692u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[3]);
    st32((c.r[29].w[0] + 124u), c.f[2]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFB5Cu); st32((c.r[29].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002DFB5Cu) [[unlikely]] return; }
L_002DFB5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 19648u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[2].w[0] + 19652u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 19656u));
    c.f[0] = ld32((c.r[2].w[0] + 19660u));
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[22]);
    st32((c.r[29].w[0] + 100u), c.f[22]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFBA8u); st32((c.r[29].w[0] + 104u), c.f[22]);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x002DFBA8u) [[unlikely]] return; }
L_002DFBA8:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFBB8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002DFBB8u) [[unlikely]] return; }
L_002DFBB8:
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[4].w[0] + 80u));  goto L_002DFBE0; }
    c.f[12] = 0u;
    c.budget -= 1;
L_002DFBE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFBE8u); set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x002DFBE8u) [[unlikely]] return; }
L_002DFBE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[17], c.r[16].w[0] + 128u);
    c.f[0] = ld32((c.r[2].w[0] + 19664u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 19668u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 19672u));
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 19676u));
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 88u), c.f[20]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFC38u); st32((c.r[29].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x002DFC38u) [[unlikely]] return; }
L_002DFC38:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFC48u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002DFC48u) [[unlikely]] return; }
L_002DFC48:
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[4].w[0] + 80u));  goto L_002DFC70; }
    c.f[12] = 0u;
    c.budget -= 1;
L_002DFC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFC78u); set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x002DFC78u) [[unlikely]] return; }
L_002DFC78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_002DFCA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 9;
L_002DFCC4:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002DFCE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFCDCu);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x002DFCDCu) [[unlikely]] return; }
L_002DFCDC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002DFCE0:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DFCC4u | kUnwind; return; } goto L_002DFCC4; }
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[17].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFD00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002DFD00u) [[unlikely]] return; }
L_002DFD00:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[3], 0u + 6000u);
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFD14u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x002DFD14u) [[unlikely]] return; }
L_002DFD14:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 2;
L_002DFD1C:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 104u);
    set32(c.r[2], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002DFD50; }
    set32(c.r[2], c.r[18].w[0] << 6);
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFD44u); set32(c.r[5], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x002DFD44u) [[unlikely]] return; }
L_002DFD44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFD4Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000E(c, 216u, depth + 1u); else { c.pc = 0x00159970u; return; } if (c.pc != 0x002DFD4Cu) [[unlikely]] return; }
L_002DFD4C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002DFD50:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DFD1Cu | kUnwind; return; } goto L_002DFD1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFD64u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x002DFD64u) [[unlikely]] return; }
L_002DFD64:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFD70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002DFD70u) [[unlikely]] return; }
L_002DFD70:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DFDA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 7;
L_002DFDBC:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFDC8u); set32(c.r[4], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x002DFDC8u) [[unlikely]] return; }
L_002DFDC8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DFDBCu | kUnwind; return; } goto L_002DFDBC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DFDF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DFE00:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0070(c, 23u, depth); } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFE64u); set32(c.r[4], ld32((c.r[2].w[0] + 116u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002DFE64u) [[unlikely]] return; }
L_002DFE64:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002DFE88; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 13472u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[26] = ld32((c.r[2].w[0] + 16u));  if (t) { goto L_002DFE94; } }
L_002DFE88:
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 13472u)));
    c.f[26] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 3;
L_002DFE94:
    c.f[1] = ld32((c.r[3].w[0] + 13512u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[2].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[4], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 88u), c.f[0]);
    c.f[3] = ld32((c.r[20].w[0] + 88u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.f[0] = ld32((c.r[20].w[0] + 320u));
    c.f[2] = ld32((c.r[3].w[0] + 13620u));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[19], c.r[2].w[0] + 13520u);
    c.f[0] = ld32((c.r[3].w[0] + 13624u));
    c.f[25] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[24] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[24]);
    c.f[22] = ld32((c.r[3].w[0] + 13616u));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFEF4u); c.f[23] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);  if (depth < kMaxDepth) unit_006F(c, 467u, depth + 1u); else { c.pc = 0x002DF8D0u; return; } if (c.pc != 0x002DFEF4u) [[unlikely]] return; }
L_002DFEF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);  goto L_002DFF0C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x72FF0000u);
    set32(c.r[18], 0u - 32768u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] | 32768ull;  if (t) { goto L_002DFF14; } }
L_002DFF0C:
    c.r[18].d[0] = c.r[2].d[0] | 49087ull;
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_002DFF14:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.f[21] = 0u;
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[23].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFF2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002DFF2Cu) [[unlikely]] return; }
L_002DFF2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[3], 0u + 7000u);
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFF40u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x002DFF40u) [[unlikely]] return; }
L_002DFF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFF48u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x002DFF48u) [[unlikely]] return; }
L_002DFF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFF50u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002DFF50u) [[unlikely]] return; }
L_002DFF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFF58u);  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x002DFF58u) [[unlikely]] return; }
L_002DFF58:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFF64u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x002DFF64u) [[unlikely]] return; }
L_002DFF64:
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFF70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 118u, depth + 1u); else { c.pc = 0x0016D7A0u; return; } if (c.pc != 0x002DFF70u) [[unlikely]] return; }
L_002DFF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFF78u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 125u, depth + 1u); else { c.pc = 0x0016D8E0u; return; } if (c.pc != 0x002DFF78u) [[unlikely]] return; }
L_002DFF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFF80u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 148u, depth + 1u); else { c.pc = 0x0016DBC0u; return; } if (c.pc != 0x002DFF80u) [[unlikely]] return; }
L_002DFF80:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[2].w[0] + 13488u);
    c.budget -= 3;
L_002DFF8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 28096u);
    set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002DFFB0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002DFFB0:
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[15] = 0u;
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFFD0u); c.f[16] = c.f[15];  if (depth < kMaxDepth) unit_0013(c, 152u, depth + 1u); else { c.pc = 0x0016DC00u; return; } if (c.pc != 0x002DFFD0u) [[unlikely]] return; }
L_002DFFD0:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002DFFE4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002DFFE4:
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[3].w[0] + 4u));
    c.f[14] = ld32((c.r[3].w[0] + 8u));
    c.f[16] = c.r[2].w[0];
    c.f[15] = 0u;
    c.budget -= 7;
    [[clang::musttail]] return unit_0070(c, 1u, depth);
}

}
