#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0029[4096] = {
    1, 2, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39,
    0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0,
    0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0,
    0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0,
    0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0,
    0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 117, 0, 118, 0,
    0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0,
    123, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 130, 0,
    131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0,
    135, 0, 136, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0,
    148, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153,
    0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 167, 0, 0, 0, 168,
    0, 169, 0, 170, 0, 0, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182,
    0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0,
    196, 0, 0, 0, 197, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202,
    0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0,
    222, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 234, 0, 0, 235,
    0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    314, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0,
    0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0,
    0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0,
    0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0,
    0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0,
    0, 359, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0,
    0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0,
    0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0,
    0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0,
    0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0,
    0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0,
    0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0,
    0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0,
    0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0,
    437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444,
    0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0,
    452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0,
    0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0,
    0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0,
    0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0,
    0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484,
    0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0,
    0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0,
    0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0,
    0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 518,
    0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0,
};

void unit_0029(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001C4000;
    case 2u: goto L_001C4004;
    case 3u: goto L_001C4008;
    case 4u: goto L_001C4010;
    case 5u: goto L_001C405C;
    case 6u: goto L_001C4068;
    case 7u: goto L_001C40B4;
    case 8u: goto L_001C40C0;
    case 9u: goto L_001C40E0;
    case 10u: goto L_001C40EC;
    case 11u: goto L_001C4110;
    case 12u: goto L_001C4150;
    case 13u: goto L_001C4168;
    case 14u: goto L_001C4180;
    case 15u: goto L_001C4194;
    case 16u: goto L_001C41C0;
    case 17u: goto L_001C41C8;
    case 18u: goto L_001C41D8;
    case 19u: goto L_001C4230;
    case 20u: goto L_001C423C;
    case 21u: goto L_001C4250;
    case 22u: goto L_001C4264;
    case 23u: goto L_001C4290;
    case 24u: goto L_001C42D0;
    case 25u: goto L_001C42F0;
    case 26u: goto L_001C4318;
    case 27u: goto L_001C4340;
    case 28u: goto L_001C4364;
    case 29u: goto L_001C436C;
    case 30u: goto L_001C4398;
    case 31u: goto L_001C43A0;
    case 32u: goto L_001C43CC;
    case 33u: goto L_001C43EC;
    case 34u: goto L_001C440C;
    case 35u: goto L_001C442C;
    case 36u: goto L_001C444C;
    case 37u: goto L_001C4454;
    case 38u: goto L_001C4474;
    case 39u: goto L_001C447C;
    case 40u: goto L_001C449C;
    case 41u: goto L_001C44C4;
    case 42u: goto L_001C44EC;
    case 43u: goto L_001C4514;
    case 44u: goto L_001C453C;
    case 45u: goto L_001C4560;
    case 46u: goto L_001C4590;
    case 47u: goto L_001C45B0;
    case 48u: goto L_001C45D4;
    case 49u: goto L_001C45F8;
    case 50u: goto L_001C4618;
    case 51u: goto L_001C4620;
    case 52u: goto L_001C4648;
    case 53u: goto L_001C4650;
    case 54u: goto L_001C4678;
    case 55u: goto L_001C4680;
    case 56u: goto L_001C46B8;
    case 57u: goto L_001C46C8;
    case 58u: goto L_001C46EC;
    case 59u: goto L_001C4710;
    case 60u: goto L_001C4720;
    case 61u: goto L_001C4744;
    case 62u: goto L_001C4768;
    case 63u: goto L_001C4778;
    case 64u: goto L_001C479C;
    case 65u: goto L_001C47C0;
    case 66u: goto L_001C47E4;
    case 67u: goto L_001C4808;
    case 68u: goto L_001C4818;
    case 69u: goto L_001C483C;
    case 70u: goto L_001C4860;
    case 71u: goto L_001C4870;
    case 72u: goto L_001C4894;
    case 73u: goto L_001C48B8;
    case 74u: goto L_001C48C0;
    case 75u: goto L_001C48E0;
    case 76u: goto L_001C48E8;
    case 77u: goto L_001C4908;
    case 78u: goto L_001C4920;
    case 79u: goto L_001C4934;
    case 80u: goto L_001C493C;
    case 81u: goto L_001C4944;
    case 82u: goto L_001C494C;
    case 83u: goto L_001C4954;
    case 84u: goto L_001C495C;
    case 85u: goto L_001C4964;
    case 86u: goto L_001C496C;
    case 87u: goto L_001C4980;
    case 88u: goto L_001C49AC;
    case 89u: goto L_001C49B4;
    case 90u: goto L_001C49CC;
    case 91u: goto L_001C49D4;
    case 92u: goto L_001C49EC;
    case 93u: goto L_001C49F4;
    case 94u: goto L_001C4A04;
    case 95u: goto L_001C4A20;
    case 96u: goto L_001C4A40;
    case 97u: goto L_001C4A4C;
    case 98u: goto L_001C4A54;
    case 99u: goto L_001C4A6C;
    case 100u: goto L_001C4A74;
    case 101u: goto L_001C4A8C;
    case 102u: goto L_001C4AC0;
    case 103u: goto L_001C4AE4;
    case 104u: goto L_001C4AF0;
    case 105u: goto L_001C4AF8;
    case 106u: goto L_001C4B10;
    case 107u: goto L_001C4B18;
    case 108u: goto L_001C4B30;
    case 109u: goto L_001C4B38;
    case 110u: goto L_001C4B48;
    case 111u: goto L_001C4B80;
    case 112u: goto L_001C4BA4;
    case 113u: goto L_001C4BB0;
    case 114u: goto L_001C4BB8;
    case 115u: goto L_001C4BD0;
    case 116u: goto L_001C4BD8;
    case 117u: goto L_001C4BF0;
    case 118u: goto L_001C4BF8;
    case 119u: goto L_001C4C08;
    case 120u: goto L_001C4C40;
    case 121u: goto L_001C4C6C;
    case 122u: goto L_001C4C78;
    case 123u: goto L_001C4C80;
    case 124u: goto L_001C4C98;
    case 125u: goto L_001C4CA0;
    case 126u: goto L_001C4CB8;
    case 127u: goto L_001C4CC0;
    case 128u: goto L_001C4CD8;
    case 129u: goto L_001C4CE0;
    case 130u: goto L_001C4CF8;
    case 131u: goto L_001C4D00;
    case 132u: goto L_001C4D18;
    case 133u: goto L_001C4D50;
    case 134u: goto L_001C4D74;
    case 135u: goto L_001C4D80;
    case 136u: goto L_001C4D88;
    case 137u: goto L_001C4DA0;
    case 138u: goto L_001C4DA8;
    case 139u: goto L_001C4DC0;
    case 140u: goto L_001C4DC8;
    case 141u: goto L_001C4DD8;
    case 142u: goto L_001C4E10;
    case 143u: goto L_001C4E34;
    case 144u: goto L_001C4E40;
    case 145u: goto L_001C4E48;
    case 146u: goto L_001C4E60;
    case 147u: goto L_001C4E68;
    case 148u: goto L_001C4E80;
    case 149u: goto L_001C4E88;
    case 150u: goto L_001C4E98;
    case 151u: goto L_001C4ED0;
    case 152u: goto L_001C4EF0;
    case 153u: goto L_001C4EFC;
    case 154u: goto L_001C4F04;
    case 155u: goto L_001C4F1C;
    case 156u: goto L_001C4F24;
    case 157u: goto L_001C4F30;
    case 158u: goto L_001C4F44;
    case 159u: goto L_001C4F4C;
    case 160u: goto L_001C4F58;
    case 161u: goto L_001C4F90;
    case 162u: goto L_001C4FD4;
    case 163u: goto L_001C4FE0;
    case 164u: goto L_001C5050;
    case 165u: goto L_001C5058;
    case 166u: goto L_001C5060;
    case 167u: goto L_001C506C;
    case 168u: goto L_001C507C;
    case 169u: goto L_001C5084;
    case 170u: goto L_001C508C;
    case 171u: goto L_001C509C;
    case 172u: goto L_001C50A4;
    case 173u: goto L_001C50AC;
    case 174u: goto L_001C50D0;
    case 175u: goto L_001C5104;
    case 176u: goto L_001C5114;
    case 177u: goto L_001C5128;
    case 178u: goto L_001C5130;
    case 179u: goto L_001C5138;
    case 180u: goto L_001C5148;
    case 181u: goto L_001C5170;
    case 182u: goto L_001C517C;
    case 183u: goto L_001C5194;
    case 184u: goto L_001C51A4;
    case 185u: goto L_001C51B8;
    case 186u: goto L_001C51CC;
    case 187u: goto L_001C51E0;
    case 188u: goto L_001C51F4;
    case 189u: goto L_001C5208;
    case 190u: goto L_001C521C;
    case 191u: goto L_001C5228;
    case 192u: goto L_001C5240;
    case 193u: goto L_001C52D0;
    case 194u: goto L_001C535C;
    case 195u: goto L_001C536C;
    case 196u: goto L_001C5380;
    case 197u: goto L_001C5390;
    case 198u: goto L_001C5398;
    case 199u: goto L_001C53A4;
    case 200u: goto L_001C53B4;
    case 201u: goto L_001C53EC;
    case 202u: goto L_001C53FC;
    case 203u: goto L_001C540C;
    case 204u: goto L_001C541C;
    case 205u: goto L_001C542C;
    case 206u: goto L_001C5434;
    case 207u: goto L_001C5444;
    case 208u: goto L_001C5460;
    case 209u: goto L_001C5488;
    case 210u: goto L_001C5498;
    case 211u: goto L_001C54A8;
    case 212u: goto L_001C54BC;
    case 213u: goto L_001C54C4;
    case 214u: goto L_001C54D4;
    case 215u: goto L_001C54DC;
    case 216u: goto L_001C54F4;
    case 217u: goto L_001C5538;
    case 218u: goto L_001C5540;
    case 219u: goto L_001C5554;
    case 220u: goto L_001C5568;
    case 221u: goto L_001C5574;
    case 222u: goto L_001C5580;
    case 223u: goto L_001C5590;
    case 224u: goto L_001C55A4;
    case 225u: goto L_001C55B8;
    case 226u: goto L_001C55F0;
    case 227u: goto L_001C5644;
    case 228u: goto L_001C5654;
    case 229u: goto L_001C5680;
    case 230u: goto L_001C569C;
    case 231u: goto L_001C56C0;
    case 232u: goto L_001C56D8;
    case 233u: goto L_001C56E8;
    case 234u: goto L_001C56F0;
    case 235u: goto L_001C56FC;
    case 236u: goto L_001C570C;
    case 237u: goto L_001C5730;
    case 238u: goto L_001C5748;
    case 239u: goto L_001C575C;
    case 240u: goto L_001C5770;
    case 241u: goto L_001C5788;
    case 242u: goto L_001C579C;
    case 243u: goto L_001C57B0;
    case 244u: goto L_001C57C8;
    case 245u: goto L_001C57DC;
    case 246u: goto L_001C57F0;
    case 247u: goto L_001C5808;
    case 248u: goto L_001C581C;
    case 249u: goto L_001C5830;
    case 250u: goto L_001C5848;
    case 251u: goto L_001C585C;
    case 252u: goto L_001C5870;
    case 253u: goto L_001C5888;
    case 254u: goto L_001C589C;
    case 255u: goto L_001C58B0;
    case 256u: goto L_001C58C8;
    case 257u: goto L_001C58DC;
    case 258u: goto L_001C58F0;
    case 259u: goto L_001C5908;
    case 260u: goto L_001C591C;
    case 261u: goto L_001C5930;
    case 262u: goto L_001C5948;
    case 263u: goto L_001C595C;
    case 264u: goto L_001C5970;
    case 265u: goto L_001C5988;
    case 266u: goto L_001C599C;
    case 267u: goto L_001C59B0;
    case 268u: goto L_001C59C8;
    case 269u: goto L_001C59DC;
    case 270u: goto L_001C59F0;
    case 271u: goto L_001C5A08;
    case 272u: goto L_001C5A1C;
    case 273u: goto L_001C5A30;
    case 274u: goto L_001C5A48;
    case 275u: goto L_001C5A5C;
    case 276u: goto L_001C5A70;
    case 277u: goto L_001C5A88;
    case 278u: goto L_001C5A9C;
    case 279u: goto L_001C5AB0;
    case 280u: goto L_001C5AC8;
    case 281u: goto L_001C5ADC;
    case 282u: goto L_001C5AF0;
    case 283u: goto L_001C5B08;
    case 284u: goto L_001C5B1C;
    case 285u: goto L_001C5B30;
    case 286u: goto L_001C5B48;
    case 287u: goto L_001C5B5C;
    case 288u: goto L_001C5B70;
    case 289u: goto L_001C5B88;
    case 290u: goto L_001C5B9C;
    case 291u: goto L_001C5BB0;
    case 292u: goto L_001C5BC8;
    case 293u: goto L_001C5BDC;
    case 294u: goto L_001C5BF0;
    case 295u: goto L_001C5C08;
    case 296u: goto L_001C5C1C;
    case 297u: goto L_001C5C30;
    case 298u: goto L_001C5C40;
    case 299u: goto L_001C5C54;
    case 300u: goto L_001C5CA4;
    case 301u: goto L_001C5CE0;
    case 302u: goto L_001C5D34;
    case 303u: goto L_001C5D44;
    case 304u: goto L_001C5D5C;
    case 305u: goto L_001C5D80;
    case 306u: goto L_001C5DA8;
    case 307u: goto L_001C5DB8;
    case 308u: goto L_001C5DCC;
    case 309u: goto L_001C5DE0;
    case 310u: goto L_001C5E10;
    case 311u: goto L_001C5E20;
    case 312u: goto L_001C5E34;
    case 313u: goto L_001C5E40;
    case 314u: goto L_001C5E80;
    case 315u: goto L_001C5E88;
    case 316u: goto L_001C5E9C;
    case 317u: goto L_001C5EE0;
    case 318u: goto L_001C5F00;
    case 319u: goto L_001C5F18;
    case 320u: goto L_001C5F28;
    case 321u: goto L_001C5F3C;
    case 322u: goto L_001C5F58;
    case 323u: goto L_001C5F78;
    case 324u: goto L_001C5FA4;
    case 325u: goto L_001C5FB8;
    case 326u: goto L_001C5FE0;
    case 327u: goto L_001C6018;
    case 328u: goto L_001C6030;
    case 329u: goto L_001C604C;
    case 330u: goto L_001C6060;
    case 331u: goto L_001C607C;
    case 332u: goto L_001C6090;
    case 333u: goto L_001C60CC;
    case 334u: goto L_001C60E0;
    case 335u: goto L_001C60EC;
    case 336u: goto L_001C6104;
    case 337u: goto L_001C6120;
    case 338u: goto L_001C613C;
    case 339u: goto L_001C6164;
    case 340u: goto L_001C616C;
    case 341u: goto L_001C618C;
    case 342u: goto L_001C619C;
    case 343u: goto L_001C61E0;
    case 344u: goto L_001C6204;
    case 345u: goto L_001C6218;
    case 346u: goto L_001C6260;
    case 347u: goto L_001C6280;
    case 348u: goto L_001C62A0;
    case 349u: goto L_001C62B0;
    case 350u: goto L_001C62DC;
    case 351u: goto L_001C62F8;
    case 352u: goto L_001C6304;
    case 353u: goto L_001C6310;
    case 354u: goto L_001C6328;
    case 355u: goto L_001C6340;
    case 356u: goto L_001C6350;
    case 357u: goto L_001C6360;
    case 358u: goto L_001C6370;
    case 359u: goto L_001C6384;
    case 360u: goto L_001C638C;
    case 361u: goto L_001C6398;
    case 362u: goto L_001C63B0;
    case 363u: goto L_001C63C0;
    case 364u: goto L_001C63D0;
    case 365u: goto L_001C63E0;
    case 366u: goto L_001C6414;
    case 367u: goto L_001C64B0;
    case 368u: goto L_001C64DC;
    case 369u: goto L_001C650C;
    case 370u: goto L_001C653C;
    case 371u: goto L_001C656C;
    case 372u: goto L_001C6578;
    case 373u: goto L_001C6590;
    case 374u: goto L_001C65B0;
    case 375u: goto L_001C65DC;
    case 376u: goto L_001C6604;
    case 377u: goto L_001C6650;
    case 378u: goto L_001C66DC;
    case 379u: goto L_001C66EC;
    case 380u: goto L_001C6734;
    case 381u: goto L_001C6758;
    case 382u: goto L_001C67A0;
    case 383u: goto L_001C67AC;
    case 384u: goto L_001C67D0;
    case 385u: goto L_001C6818;
    case 386u: goto L_001C682C;
    case 387u: goto L_001C6860;
    case 388u: goto L_001C6878;
    case 389u: goto L_001C68C4;
    case 390u: goto L_001C68D8;
    case 391u: goto L_001C6920;
    case 392u: goto L_001C6998;
    case 393u: goto L_001C69B8;
    case 394u: goto L_001C69EC;
    case 395u: goto L_001C6A10;
    case 396u: goto L_001C6A58;
    case 397u: goto L_001C6A64;
    case 398u: goto L_001C6A88;
    case 399u: goto L_001C6AD0;
    case 400u: goto L_001C6ADC;
    case 401u: goto L_001C6B24;
    case 402u: goto L_001C6B9C;
    case 403u: goto L_001C6BF4;
    case 404u: goto L_001C6C18;
    case 405u: goto L_001C6C60;
    case 406u: goto L_001C6C6C;
    case 407u: goto L_001C6C90;
    case 408u: goto L_001C6CD8;
    case 409u: goto L_001C6CEC;
    case 410u: goto L_001C6D10;
    case 411u: goto L_001C6D58;
    case 412u: goto L_001C6D64;
    case 413u: goto L_001C6D88;
    case 414u: goto L_001C6DD0;
    case 415u: goto L_001C6DDC;
    case 416u: goto L_001C6E24;
    case 417u: goto L_001C6E40;
    case 418u: goto L_001C6E64;
    case 419u: goto L_001C6EAC;
    case 420u: goto L_001C6EB8;
    case 421u: goto L_001C6EDC;
    case 422u: goto L_001C6F24;
    case 423u: goto L_001C6F30;
    case 424u: goto L_001C6F78;
    case 425u: goto L_001C7020;
    case 426u: goto L_001C7040;
    case 427u: goto L_001C7074;
    case 428u: goto L_001C708C;
    case 429u: goto L_001C70A4;
    case 430u: goto L_001C70C8;
    case 431u: goto L_001C70DC;
    case 432u: goto L_001C70F8;
    case 433u: goto L_001C711C;
    case 434u: goto L_001C713C;
    case 435u: goto L_001C7154;
    case 436u: goto L_001C715C;
    case 437u: goto L_001C7180;
    case 438u: goto L_001C71AC;
    case 439u: goto L_001C71D0;
    case 440u: goto L_001C71E4;
    case 441u: goto L_001C720C;
    case 442u: goto L_001C7224;
    case 443u: goto L_001C7250;
    case 444u: goto L_001C727C;
    case 445u: goto L_001C7290;
    case 446u: goto L_001C72F8;
    case 447u: goto L_001C732C;
    case 448u: goto L_001C7380;
    case 449u: goto L_001C7430;
    case 450u: goto L_001C7444;
    case 451u: goto L_001C745C;
    case 452u: goto L_001C7480;
    case 453u: goto L_001C74A0;
    case 454u: goto L_001C74EC;
    case 455u: goto L_001C7504;
    case 456u: goto L_001C7520;
    case 457u: goto L_001C758C;
    case 458u: goto L_001C75EC;
    case 459u: goto L_001C7610;
    case 460u: goto L_001C7634;
    case 461u: goto L_001C7650;
    case 462u: goto L_001C76B0;
    case 463u: goto L_001C7708;
    case 464u: goto L_001C7720;
    case 465u: goto L_001C774C;
    case 466u: goto L_001C7788;
    case 467u: goto L_001C779C;
    case 468u: goto L_001C77C0;
    case 469u: goto L_001C7818;
    case 470u: goto L_001C789C;
    case 471u: goto L_001C78B0;
    case 472u: goto L_001C78C8;
    case 473u: goto L_001C78F8;
    case 474u: goto L_001C790C;
    case 475u: goto L_001C792C;
    case 476u: goto L_001C7948;
    case 477u: goto L_001C7974;
    case 478u: goto L_001C7988;
    case 479u: goto L_001C7A10;
    case 480u: goto L_001C7A38;
    case 481u: goto L_001C7A5C;
    case 482u: goto L_001C7A84;
    case 483u: goto L_001C7AC0;
    case 484u: goto L_001C7AFC;
    case 485u: goto L_001C7B04;
    case 486u: goto L_001C7B2C;
    case 487u: goto L_001C7B4C;
    case 488u: goto L_001C7B54;
    case 489u: goto L_001C7B88;
    case 490u: goto L_001C7BA4;
    case 491u: goto L_001C7BAC;
    case 492u: goto L_001C7BC8;
    case 493u: goto L_001C7C00;
    case 494u: goto L_001C7C40;
    case 495u: goto L_001C7C70;
    case 496u: goto L_001C7C90;
    case 497u: goto L_001C7CA0;
    case 498u: goto L_001C7CB0;
    case 499u: goto L_001C7CC4;
    case 500u: goto L_001C7CF0;
    case 501u: goto L_001C7D04;
    case 502u: goto L_001C7D40;
    case 503u: goto L_001C7D58;
    case 504u: goto L_001C7D78;
    case 505u: goto L_001C7D94;
    case 506u: goto L_001C7DC0;
    case 507u: goto L_001C7E10;
    case 508u: goto L_001C7E40;
    case 509u: goto L_001C7E58;
    case 510u: goto L_001C7E70;
    case 511u: goto L_001C7EA8;
    case 512u: goto L_001C7EBC;
    case 513u: goto L_001C7EC4;
    case 514u: goto L_001C7F30;
    case 515u: goto L_001C7F50;
    case 516u: goto L_001C7F60;
    case 517u: goto L_001C7F6C;
    case 518u: goto L_001C7F7C;
    case 519u: goto L_001C7F88;
    case 520u: goto L_001C7F98;
    case 521u: goto L_001C7FA8;
    case 522u: goto L_001C7FB4;
    case 523u: goto L_001C7FE4;
    default: bad_entry(c, 0x001C4000u); return;
    }
L_001C4000:
    c.f[14] = c.f[12];
    c.budget -= 1;
L_001C4004:
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 1;
L_001C4008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4010u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C4010u) [[unlikely]] return; }
L_001C4010:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 312u), c.r[2].w[0]);  goto L_001C4060; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[3].d[0] | 34464ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10483u);
    set32(c.r[7], c.r[7].w[0] + 12360u);
    set32(c.r[8], c.r[8].w[0] + 12152u);
    c.r[9].d[0] = 0ull + 0ull;
    c.f[12] = 0u;
    c.f[15] = c.r[3].w[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C405Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0027(c, 388u, depth + 1u); else { c.pc = 0x001BFDB0u; return; } if (c.pc != 0x001C405Cu) [[unlikely]] return; }
L_001C405C:
    st32((c.r[16].w[0] + 312u), c.r[2].w[0]);
    c.budget -= 1;
L_001C4060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4068u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C4068u) [[unlikely]] return; }
L_001C4068:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 316u), c.r[2].w[0]);  goto L_001C40B8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[3].d[0] | 34464ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10482u);
    set32(c.r[7], c.r[7].w[0] + 12376u);
    set32(c.r[8], c.r[8].w[0] + 12152u);
    c.r[9].d[0] = 0ull + 0ull;
    c.f[12] = 0u;
    c.f[15] = c.r[3].w[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C40B4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0027(c, 388u, depth + 1u); else { c.pc = 0x001BFDB0u; return; } if (c.pc != 0x001C40B4u) [[unlikely]] return; }
L_001C40B4:
    st32((c.r[16].w[0] + 316u), c.r[2].w[0]);
    c.budget -= 1;
L_001C40B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C40C0u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C40C0u) [[unlikely]] return; }
L_001C40C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 320u), c.r[2].w[0]);  goto L_001C40E4; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 10481u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C40E0u); set32(c.r[7], c.r[7].w[0] + 12392u);  if (depth < kMaxDepth) unit_0027(c, 371u, depth + 1u); else { c.pc = 0x001BFB20u; return; } if (c.pc != 0x001C40E0u) [[unlikely]] return; }
L_001C40E0:
    st32((c.r[16].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 1;
L_001C40E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C40ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 47u, depth + 1u); else { c.pc = 0x001C45B0u; return; } if (c.pc != 0x001C40ECu) [[unlikely]] return; }
L_001C40EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C4110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C4168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12448u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001C4150; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4150u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 270u, depth + 1u); else { c.pc = 0x001BEBA0u; return; } if (c.pc != 0x001C4150u) [[unlikely]] return; }
L_001C4150:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001C416C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4168u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001C4168u) [[unlikely]] return; }
L_001C4168:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C416C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C4180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4194u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 228u, depth + 1u); else { c.pc = 0x001BE460u; return; } if (c.pc != 0x001C4194u) [[unlikely]] return; }
L_001C4194:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 56u)));  goto L_001C41E4; }
    set32(c.r[5], ld32((c.r[16].w[0] + 244u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C41C0u); set32(c.r[4], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C41C0u) [[unlikely]] return; }
L_001C41C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C41C8u); set32(c.r[4], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C41C8u) [[unlikely]] return; }
L_001C41C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C4240; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C41D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 78u, depth + 1u); else { c.pc = 0x001C4920u; return; } if (c.pc != 0x001C41D8u) [[unlikely]] return; }
L_001C41D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C423C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 1;
L_001C41E4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C4200; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_001C4200:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001C4234; }
    set32(c.r[3], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[2], 0u + 19u);
    set32(c.r[3], c.r[3].w[0] + 10500u);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001C4228; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C4230; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001C4228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4230u);  if (depth < kMaxDepth) unit_0029(c, 23u, depth + 1u); else { c.pc = 0x001C4290u; return; } if (c.pc != 0x001C4230u) [[unlikely]] return; }
L_001C4230:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001C4234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C423Cu);  if (depth < kMaxDepth) unit_0029(c, 78u, depth + 1u); else { c.pc = 0x001C4920u; return; } if (c.pc != 0x001C423Cu) [[unlikely]] return; }
L_001C423C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C4240:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C4250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4264u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 233u, depth + 1u); else { c.pc = 0x001BE580u; return; } if (c.pc != 0x001C4264u) [[unlikely]] return; }
L_001C4264:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C4284; }
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_001C4284:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C4290:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 248u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 27096u)));
    st32((c.r[29].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 200u));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C42D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C42D0u) [[unlikely]] return; }
L_001C42D0:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C42F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C42F0u) [[unlikely]] return; }
L_001C42F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 252u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 27076u));
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 196u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4318u); c.r[5].d[0] = ld64((c.r[29].w[0] + 192u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4318u) [[unlikely]] return; }
L_001C4318:
    set32(c.r[4], ld32((c.r[16].w[0] + 256u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 27078u));
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 188u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4340u); c.r[5].d[0] = ld64((c.r[29].w[0] + 184u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4340u) [[unlikely]] return; }
L_001C4340:
    set32(c.r[4], ld32((c.r[16].w[0] + 260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4364u); c.r[5].d[0] = ld64((c.r[29].w[0] + 176u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4364u) [[unlikely]] return; }
L_001C4364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C436Cu);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x001C436Cu) [[unlikely]] return; }
L_001C436C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 264u)));
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], 0u + 2u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4398u); c.r[5].d[0] = ld64((c.r[29].w[0] + 168u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4398u) [[unlikely]] return; }
L_001C4398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C43A0u);  if (depth < kMaxDepth) unit_0011(c, 73u, depth + 1u); else { c.pc = 0x001647C0u; return; } if (c.pc != 0x001C43A0u) [[unlikely]] return; }
L_001C43A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 268u)));
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], 0u + 2u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C43CCu); c.r[5].d[0] = ld64((c.r[29].w[0] + 160u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C43CCu) [[unlikely]] return; }
L_001C43CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 272u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 152u), 0u);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C43ECu); c.r[5].d[0] = ld64((c.r[29].w[0] + 152u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C43ECu) [[unlikely]] return; }
L_001C43EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 276u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C440Cu); c.r[5].d[0] = ld64((c.r[29].w[0] + 144u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C440Cu) [[unlikely]] return; }
L_001C440C:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 136u), 0u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C442Cu); c.r[5].d[0] = ld64((c.r[29].w[0] + 136u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C442Cu) [[unlikely]] return; }
L_001C442C:
    set32(c.r[4], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C444Cu); c.r[5].d[0] = ld64((c.r[29].w[0] + 128u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C444Cu) [[unlikely]] return; }
L_001C444C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4454u);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x001C4454u) [[unlikely]] return; }
L_001C4454:
    set32(c.r[4], ld32((c.r[16].w[0] + 288u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4474u); c.r[5].d[0] = ld64((c.r[29].w[0] + 120u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4474u) [[unlikely]] return; }
L_001C4474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C447Cu);  if (depth < kMaxDepth) unit_0011(c, 73u, depth + 1u); else { c.pc = 0x001647C0u; return; } if (c.pc != 0x001C447Cu) [[unlikely]] return; }
L_001C447C:
    set32(c.r[4], ld32((c.r[16].w[0] + 292u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C449Cu); c.r[5].d[0] = ld64((c.r[29].w[0] + 112u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C449Cu) [[unlikely]] return; }
L_001C449C:
    set32(c.r[4], ld32((c.r[16].w[0] + 296u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 27080u));
    set32(c.r[3], 0u + 2u);
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C44C4u); c.r[5].d[0] = ld64((c.r[29].w[0] + 104u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C44C4u) [[unlikely]] return; }
L_001C44C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 27084u));
    set32(c.r[3], 0u + 2u);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C44ECu); c.r[5].d[0] = ld64((c.r[29].w[0] + 96u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C44ECu) [[unlikely]] return; }
L_001C44EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 27088u));
    set32(c.r[3], 0u + 2u);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4514u); c.r[5].d[0] = ld64((c.r[29].w[0] + 88u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4514u) [[unlikely]] return; }
L_001C4514:
    set32(c.r[4], ld32((c.r[16].w[0] + 308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 27092u));
    set32(c.r[3], 0u + 2u);
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C453Cu); c.r[5].d[0] = ld64((c.r[29].w[0] + 80u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C453Cu) [[unlikely]] return; }
L_001C453C:
    set32(c.r[4], ld32((c.r[16].w[0] + 312u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4560u); c.r[5].d[0] = ld64((c.r[29].w[0] + 72u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4560u) [[unlikely]] return; }
L_001C4560:
    c.r[2].d[0] = 0ull | 60000ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 316u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 2u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4590u); c.r[5].d[0] = ld64((c.r[29].w[0] + 64u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4590u) [[unlikely]] return; }
L_001C4590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001C45B0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C45D4u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 71u, depth + 1u); else { c.pc = 0x001647A0u; return; } if (c.pc != 0x001C45D4u) [[unlikely]] return; }
L_001C45D4:
    set32(c.r[18], ld32((c.r[17].w[0] + 248u)));
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 216u));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C45F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C45F8u) [[unlikely]] return; }
L_001C45F8:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 72u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4618u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4618u) [[unlikely]] return; }
L_001C4618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4620u);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x001C4620u) [[unlikely]] return; }
L_001C4620:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 252u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4648u); c.r[5].d[0] = ld64((c.r[29].w[0] + 208u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4648u) [[unlikely]] return; }
L_001C4648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4650u);  if (depth < kMaxDepth) unit_0011(c, 73u, depth + 1u); else { c.pc = 0x001647C0u; return; } if (c.pc != 0x001C4650u) [[unlikely]] return; }
L_001C4650:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 256u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4678u); c.r[5].d[0] = ld64((c.r[29].w[0] + 200u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4678u) [[unlikely]] return; }
L_001C4678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4680u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 43u, depth + 1u); else { c.pc = 0x0015C480u; return; } if (c.pc != 0x001C4680u) [[unlikely]] return; }
L_001C4680:
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 260u)));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C46B8u); c.r[5].d[0] = ld64((c.r[29].w[0] + 192u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C46B8u) [[unlikely]] return; }
L_001C46B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C46C8u); set32(c.r[6], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_000F(c, 47u, depth + 1u); else { c.pc = 0x0015C530u; return; } if (c.pc != 0x001C46C8u) [[unlikely]] return; }
L_001C46C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 264u)));
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C46ECu); c.r[5].d[0] = ld64((c.r[29].w[0] + 184u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C46ECu) [[unlikely]] return; }
L_001C46EC:
    set32(c.r[4], ld32((c.r[17].w[0] + 268u)));
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4710u); c.r[5].d[0] = ld64((c.r[29].w[0] + 176u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4710u) [[unlikely]] return; }
L_001C4710:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4720u); set32(c.r[6], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_000F(c, 49u, depth + 1u); else { c.pc = 0x0015C560u; return; } if (c.pc != 0x001C4720u) [[unlikely]] return; }
L_001C4720:
    set32(c.r[4], ld32((c.r[17].w[0] + 272u)));
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4744u); c.r[5].d[0] = ld64((c.r[29].w[0] + 168u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4744u) [[unlikely]] return; }
L_001C4744:
    set32(c.r[4], ld32((c.r[17].w[0] + 276u)));
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4768u); c.r[5].d[0] = ld64((c.r[29].w[0] + 160u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4768u) [[unlikely]] return; }
L_001C4768:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4778u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 59u, depth + 1u); else { c.pc = 0x0015C660u; return; } if (c.pc != 0x001C4778u) [[unlikely]] return; }
L_001C4778:
    set32(c.r[4], ld32((c.r[17].w[0] + 280u)));
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C479Cu); c.r[5].d[0] = ld64((c.r[29].w[0] + 152u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C479Cu) [[unlikely]] return; }
L_001C479C:
    set32(c.r[4], ld32((c.r[17].w[0] + 284u)));
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C47C0u); c.r[5].d[0] = ld64((c.r[29].w[0] + 144u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C47C0u) [[unlikely]] return; }
L_001C47C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 288u)));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C47E4u); c.r[5].d[0] = ld64((c.r[29].w[0] + 136u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C47E4u) [[unlikely]] return; }
L_001C47E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 292u)));
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4808u); c.r[5].d[0] = ld64((c.r[29].w[0] + 128u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4808u) [[unlikely]] return; }
L_001C4808:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4818u); set32(c.r[6], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0015C590u; return; } if (c.pc != 0x001C4818u) [[unlikely]] return; }
L_001C4818:
    set32(c.r[4], ld32((c.r[17].w[0] + 296u)));
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C483Cu); c.r[5].d[0] = ld64((c.r[29].w[0] + 120u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C483Cu) [[unlikely]] return; }
L_001C483C:
    set32(c.r[4], ld32((c.r[17].w[0] + 300u)));
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4860u); c.r[5].d[0] = ld64((c.r[29].w[0] + 112u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4860u) [[unlikely]] return; }
L_001C4860:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4870u); set32(c.r[6], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0015C5C0u; return; } if (c.pc != 0x001C4870u) [[unlikely]] return; }
L_001C4870:
    set32(c.r[4], ld32((c.r[17].w[0] + 304u)));
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4894u); c.r[5].d[0] = ld64((c.r[29].w[0] + 104u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4894u) [[unlikely]] return; }
L_001C4894:
    set32(c.r[4], ld32((c.r[17].w[0] + 308u)));
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C48B8u); c.r[5].d[0] = ld64((c.r[29].w[0] + 96u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C48B8u) [[unlikely]] return; }
L_001C48B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C48C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 55u, depth + 1u); else { c.pc = 0x0015C5F0u; return; } if (c.pc != 0x001C48C0u) [[unlikely]] return; }
L_001C48C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 312u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C48E0u); c.r[5].d[0] = ld64((c.r[29].w[0] + 88u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C48E0u) [[unlikely]] return; }
L_001C48E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C48E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 57u, depth + 1u); else { c.pc = 0x0015C610u; return; } if (c.pc != 0x001C48E8u) [[unlikely]] return; }
L_001C48E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 316u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4908u); c.r[5].d[0] = ld64((c.r[29].w[0] + 80u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4908u) [[unlikely]] return; }
L_001C4908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001C4920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4934u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 87u, depth + 1u); else { c.pc = 0x001C4980u; return; } if (c.pc != 0x001C4934u) [[unlikely]] return; }
L_001C4934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C493Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 95u, depth + 1u); else { c.pc = 0x001C4A20u; return; } if (c.pc != 0x001C493Cu) [[unlikely]] return; }
L_001C493C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4944u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 102u, depth + 1u); else { c.pc = 0x001C4AC0u; return; } if (c.pc != 0x001C4944u) [[unlikely]] return; }
L_001C4944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C494Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 111u, depth + 1u); else { c.pc = 0x001C4B80u; return; } if (c.pc != 0x001C494Cu) [[unlikely]] return; }
L_001C494C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4954u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 120u, depth + 1u); else { c.pc = 0x001C4C40u; return; } if (c.pc != 0x001C4954u) [[unlikely]] return; }
L_001C4954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C495Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 133u, depth + 1u); else { c.pc = 0x001C4D50u; return; } if (c.pc != 0x001C495Cu) [[unlikely]] return; }
L_001C495C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4964u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 142u, depth + 1u); else { c.pc = 0x001C4E10u; return; } if (c.pc != 0x001C4964u) [[unlikely]] return; }
L_001C4964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C496Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 151u, depth + 1u); else { c.pc = 0x001C4ED0u; return; } if (c.pc != 0x001C496Cu) [[unlikely]] return; }
L_001C496C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C4980:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[18].w[0] + 256u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C49ACu); set32(c.r[4], c.r[29].w[0] + 72u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C49ACu) [[unlikely]] return; }
L_001C49AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C49B4u); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C49B4u) [[unlikely]] return; }
L_001C49B4:
    set32(c.r[5], ld32((c.r[18].w[0] + 252u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C49CCu); set32(c.r[4], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C49CCu) [[unlikely]] return; }
L_001C49CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C49D4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C49D4u) [[unlikely]] return; }
L_001C49D4:
    set32(c.r[5], ld32((c.r[18].w[0] + 248u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C49ECu); set32(c.r[4], c.r[29].w[0] + 88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C49ECu) [[unlikely]] return; }
L_001C49EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C49F4u); set32(c.r[4], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001C49F4u) [[unlikely]] return; }
L_001C49F4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A04u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 397u, depth + 1u); else { c.pc = 0x00163B70u; return; } if (c.pc != 0x001C4A04u) [[unlikely]] return; }
L_001C4A04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001C4A20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A40u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0024(c, 186u, depth + 1u); else { c.pc = 0x001B1550u; return; } if (c.pc != 0x001C4A40u) [[unlikely]] return; }
L_001C4A40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001C4A90; } }
L_001C4A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A54u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x001C4A54u) [[unlikely]] return; }
L_001C4A54:
    set32(c.r[5], ld32((c.r[19].w[0] + 260u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A6Cu); set32(c.r[4], c.r[29].w[0] + 88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4A6Cu) [[unlikely]] return; }
L_001C4A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A74u); set32(c.r[4], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C4A74u) [[unlikely]] return; }
L_001C4A74:
    c.f[1] = ld32((c.r[28].w[0] - 32688u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 41u, depth + 1u); else { c.pc = 0x0015C410u; return; } if (c.pc != 0x001C4A8Cu) [[unlikely]] return; }
L_001C4A8C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001C4A90:
    c.r[3].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4A4Cu | kUnwind; return; } goto L_001C4A4C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001C4AC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4AE4u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0024(c, 186u, depth + 1u); else { c.pc = 0x001B1550u; return; } if (c.pc != 0x001C4AE4u) [[unlikely]] return; }
L_001C4AE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001C4B4C; } }
L_001C4AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4AF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x001C4AF8u) [[unlikely]] return; }
L_001C4AF8:
    set32(c.r[5], ld32((c.r[19].w[0] + 268u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B10u); set32(c.r[4], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4B10u) [[unlikely]] return; }
L_001C4B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B18u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C4B18u) [[unlikely]] return; }
L_001C4B18:
    set32(c.r[5], ld32((c.r[19].w[0] + 264u)));
    c.f[20] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B30u); set32(c.r[4], c.r[29].w[0] + 104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4B30u) [[unlikely]] return; }
L_001C4B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B38u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C4B38u) [[unlikely]] return; }
L_001C4B38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B48u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_000F(c, 46u, depth + 1u); else { c.pc = 0x0015C520u; return; } if (c.pc != 0x001C4B48u) [[unlikely]] return; }
L_001C4B48:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001C4B4C:
    c.r[3].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4AF0u | kUnwind; return; } goto L_001C4AF0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001C4B80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4BA4u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0024(c, 186u, depth + 1u); else { c.pc = 0x001B1550u; return; } if (c.pc != 0x001C4BA4u) [[unlikely]] return; }
L_001C4BA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001C4C0C; } }
L_001C4BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4BB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x001C4BB8u) [[unlikely]] return; }
L_001C4BB8:
    set32(c.r[5], ld32((c.r[19].w[0] + 276u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4BD0u); set32(c.r[4], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4BD0u) [[unlikely]] return; }
L_001C4BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4BD8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C4BD8u) [[unlikely]] return; }
L_001C4BD8:
    set32(c.r[5], ld32((c.r[19].w[0] + 272u)));
    c.f[20] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4BF0u); set32(c.r[4], c.r[29].w[0] + 104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4BF0u) [[unlikely]] return; }
L_001C4BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4BF8u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C4BF8u) [[unlikely]] return; }
L_001C4BF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4C08u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_000F(c, 48u, depth + 1u); else { c.pc = 0x0015C550u; return; } if (c.pc != 0x001C4C08u) [[unlikely]] return; }
L_001C4C08:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001C4C0C:
    c.r[3].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4BB0u | kUnwind; return; } goto L_001C4BB0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001C4C40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4C6Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0024(c, 186u, depth + 1u); else { c.pc = 0x001B1550u; return; } if (c.pc != 0x001C4C6Cu) [[unlikely]] return; }
L_001C4C6C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001C4D1C; } }
L_001C4C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4C80u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x001C4C80u) [[unlikely]] return; }
L_001C4C80:
    set32(c.r[5], ld32((c.r[19].w[0] + 292u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4C98u); set32(c.r[4], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4C98u) [[unlikely]] return; }
L_001C4C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4CA0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C4CA0u) [[unlikely]] return; }
L_001C4CA0:
    set32(c.r[5], ld32((c.r[19].w[0] + 288u)));
    c.f[22] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4CB8u); set32(c.r[4], c.r[29].w[0] + 104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4CB8u) [[unlikely]] return; }
L_001C4CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4CC0u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C4CC0u) [[unlikely]] return; }
L_001C4CC0:
    set32(c.r[5], ld32((c.r[19].w[0] + 284u)));
    c.f[21] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4CD8u); set32(c.r[4], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4CD8u) [[unlikely]] return; }
L_001C4CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4CE0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C4CE0u) [[unlikely]] return; }
L_001C4CE0:
    set32(c.r[5], ld32((c.r[19].w[0] + 280u)));
    c.f[20] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4CF8u); set32(c.r[4], c.r[29].w[0] + 120u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4CF8u) [[unlikely]] return; }
L_001C4CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D00u); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C4D00u) [[unlikely]] return; }
L_001C4D00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.f[13] = c.f[20];
    c.f[14] = c.f[21];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D18u); c.f[15] = c.f[22];  if (depth < kMaxDepth) unit_000F(c, 58u, depth + 1u); else { c.pc = 0x0015C620u; return; } if (c.pc != 0x001C4D18u) [[unlikely]] return; }
L_001C4D18:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001C4D1C:
    c.r[3].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4C78u | kUnwind; return; } goto L_001C4C78; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001C4D50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D74u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0024(c, 186u, depth + 1u); else { c.pc = 0x001B1550u; return; } if (c.pc != 0x001C4D74u) [[unlikely]] return; }
L_001C4D74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001C4DDC; } }
L_001C4D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D88u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x001C4D88u) [[unlikely]] return; }
L_001C4D88:
    set32(c.r[5], ld32((c.r[19].w[0] + 300u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4DA0u); set32(c.r[4], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4DA0u) [[unlikely]] return; }
L_001C4DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4DA8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C4DA8u) [[unlikely]] return; }
L_001C4DA8:
    set32(c.r[5], ld32((c.r[19].w[0] + 296u)));
    c.f[20] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4DC0u); set32(c.r[4], c.r[29].w[0] + 104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4DC0u) [[unlikely]] return; }
L_001C4DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4DC8u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C4DC8u) [[unlikely]] return; }
L_001C4DC8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4DD8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_000F(c, 50u, depth + 1u); else { c.pc = 0x0015C580u; return; } if (c.pc != 0x001C4DD8u) [[unlikely]] return; }
L_001C4DD8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001C4DDC:
    c.r[3].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4D80u | kUnwind; return; } goto L_001C4D80; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001C4E10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4E34u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0024(c, 186u, depth + 1u); else { c.pc = 0x001B1550u; return; } if (c.pc != 0x001C4E34u) [[unlikely]] return; }
L_001C4E34:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001C4E9C; } }
L_001C4E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4E48u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x001C4E48u) [[unlikely]] return; }
L_001C4E48:
    set32(c.r[5], ld32((c.r[19].w[0] + 308u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4E60u); set32(c.r[4], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4E60u) [[unlikely]] return; }
L_001C4E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4E68u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C4E68u) [[unlikely]] return; }
L_001C4E68:
    set32(c.r[5], ld32((c.r[19].w[0] + 304u)));
    c.f[20] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4E80u); set32(c.r[4], c.r[29].w[0] + 104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4E80u) [[unlikely]] return; }
L_001C4E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4E88u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C4E88u) [[unlikely]] return; }
L_001C4E88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4E98u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_000F(c, 52u, depth + 1u); else { c.pc = 0x0015C5B0u; return; } if (c.pc != 0x001C4E98u) [[unlikely]] return; }
L_001C4E98:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001C4E9C:
    c.r[3].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4E40u | kUnwind; return; } goto L_001C4E40; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001C4ED0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4EF0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0024(c, 186u, depth + 1u); else { c.pc = 0x001B1550u; return; } if (c.pc != 0x001C4EF0u) [[unlikely]] return; }
L_001C4EF0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001C4F5C; } }
L_001C4EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4F04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x001C4F04u) [[unlikely]] return; }
L_001C4F04:
    set32(c.r[5], ld32((c.r[19].w[0] + 312u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4F1Cu); set32(c.r[4], c.r[29].w[0] + 88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4F1Cu) [[unlikely]] return; }
L_001C4F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4F24u); set32(c.r[4], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C4F24u) [[unlikely]] return; }
L_001C4F24:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4F30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 54u, depth + 1u); else { c.pc = 0x0015C5E0u; return; } if (c.pc != 0x001C4F30u) [[unlikely]] return; }
L_001C4F30:
    set32(c.r[5], ld32((c.r[19].w[0] + 316u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4F44u); set32(c.r[4], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C4F44u) [[unlikely]] return; }
L_001C4F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4F4Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001C4F4Cu) [[unlikely]] return; }
L_001C4F4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4F58u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000F(c, 56u, depth + 1u); else { c.pc = 0x0015C600u; return; } if (c.pc != 0x001C4F58u) [[unlikely]] return; }
L_001C4F58:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001C4F5C:
    c.r[3].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4EFCu | kUnwind; return; } goto L_001C4EFC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001C4F90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 124u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 120u);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.f[23] = c.f[12];
    c.f[22] = c.f[13];
    c.f[21] = c.f[14];
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4FD4u); c.f[20] = c.f[15];  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0015C5C0u; return; } if (c.pc != 0x001C4FD4u) [[unlikely]] return; }
L_001C4FD4:
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4FE0u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0011(c, 106u, depth + 1u); else { c.pc = 0x00164C80u; return; } if (c.pc != 0x001C4FE0u) [[unlikely]] return; }
L_001C4FE0:
    c.f[3] = ld32((c.r[29].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[16].w[0]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[23], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[3]);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[22], c.f[2]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5050u); st32((c.r[29].w[0] + 100u), c.f[0]);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x001C5050u) [[unlikely]] return; }
L_001C5050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5058u);  if (depth < kMaxDepth) unit_0024(c, 202u, depth + 1u); else { c.pc = 0x001B16D0u; return; } if (c.pc != 0x001C5058u) [[unlikely]] return; }
L_001C5058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5060u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x001C5060u) [[unlikely]] return; }
L_001C5060:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C506Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001C506Cu) [[unlikely]] return; }
L_001C506C:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C507Cu); set32(c.r[6], 0u + 2048u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x001C507Cu) [[unlikely]] return; }
L_001C507C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5084u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x001C5084u) [[unlikely]] return; }
L_001C5084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C508Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x001C508Cu) [[unlikely]] return; }
L_001C508C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C509Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 335u, depth + 1u); else { c.pc = 0x0015AE50u; return; } if (c.pc != 0x001C509Cu) [[unlikely]] return; }
L_001C509C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C50A4u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x001C50A4u) [[unlikely]] return; }
L_001C50A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C50ACu);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x001C50ACu) [[unlikely]] return; }
L_001C50AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001C50D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001C5228; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001C510C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5104u); set32(c.r[4], c.r[4].w[0] + 12400u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001C5104u) [[unlikely]] return; }
L_001C5104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5114; } }
L_001C510C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5114u); set32(c.r[4], c.r[4].w[0] + 12416u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001C5114u) [[unlikely]] return; }
L_001C5114:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001C5198; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5128u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 256u, depth + 1u); else { c.pc = 0x00172290u; return; } if (c.pc != 0x001C5128u) [[unlikely]] return; }
L_001C5128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C5180; } }
L_001C5130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5138u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 231u, depth + 1u); else { c.pc = 0x00171DF0u; return; } if (c.pc != 0x001C5138u) [[unlikely]] return; }
L_001C5138:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5148u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 230u, depth + 1u); else { c.pc = 0x00171DD0u; return; } if (c.pc != 0x001C5148u) [[unlikely]] return; }
L_001C5148:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[4], c.r[4].w[0] + 12448u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5170u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001C5170u) [[unlikely]] return; }
L_001C5170:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C517Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 232u, depth + 1u); else { c.pc = 0x00171E10u; return; } if (c.pc != 0x001C517Cu) [[unlikely]] return; }
L_001C517C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C5180:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5130u | kUnwind; return; } goto L_001C5130; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5194u); set32(c.r[4], c.r[4].w[0] + 12496u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001C5194u) [[unlikely]] return; }
L_001C5194:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001C5198:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C51A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 252u, depth + 1u); else { c.pc = 0x001721D0u; return; } if (c.pc != 0x001C51A4u) [[unlikely]] return; }
L_001C51A4:
    set32(c.r[5], ld32((c.r[29].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 12512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C51B8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001C51B8u) [[unlikely]] return; }
L_001C51B8:
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 12544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C51CCu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001C51CCu) [[unlikely]] return; }
L_001C51CC:
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 12576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C51E0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001C51E0u) [[unlikely]] return; }
L_001C51E0:
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 12608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C51F4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001C51F4u) [[unlikely]] return; }
L_001C51F4:
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 12640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5208u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001C5208u) [[unlikely]] return; }
L_001C5208:
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 12672u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C521Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001C521Cu) [[unlikely]] return; }
L_001C521C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5228u); set32(c.r[4], c.r[4].w[0] + 12416u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001C5228u) [[unlikely]] return; }
L_001C5228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001C5240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[8], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[3], c.r[3].w[0] + 12528u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53560000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[7].d[0] = c.r[2].d[0] | 17479ull;
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    c.r[3].d[0] = c.r[2].d[0] | 255ull;
    st32((c.r[4].w[0] + 40u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 60u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[3].w[0]);  c.pc = t; return; }
L_001C52D0:
    set32(c.r[6], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31436u)));  goto L_001C52DC; }
L_001C52DC:
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31436u)));  goto L_001C52E8; }
L_001C52E8:
    c.budget -= 2;
    {  goto L_001C52F0; }
L_001C52F0:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[18], ld32((c.r[6].w[0] + 36u)));
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001C55BC; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));  goto L_001C5340; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_001C55C0; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_001C5340:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[28].w[0] - 31436u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 352u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C535Cu); c.r[23].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001C535Cu) [[unlikely]] return; }
L_001C535C:
    set32(c.r[4], ld32((c.r[19].w[0] + 352u)));
    set32(c.r[5], 0u - 2049u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C536Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x001C536Cu) [[unlikely]] return; }
L_001C536C:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 352u)));
    set32(c.r[22], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5380u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x001C5380u) [[unlikely]] return; }
L_001C5380:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5390u); set32(c.r[6], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x001C5390u) [[unlikely]] return; }
L_001C5390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5398u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x001C5398u) [[unlikely]] return; }
L_001C5398:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C53A4u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x001C53A4u) [[unlikely]] return; }
L_001C53A4:
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C53B4u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x001C53B4u) [[unlikely]] return; }
L_001C53B4:
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    st32((c.r[29].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    st32((c.r[29].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 60u));
    st32((c.r[29].w[0] + 300u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_001C5400; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C53ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x001C53ECu) [[unlikely]] return; }
L_001C53EC:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C53FCu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x001C53FCu) [[unlikely]] return; }
L_001C53FC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_001C5400:
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C540Cu); set32(c.r[6], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x001C540Cu) [[unlikely]] return; }
L_001C540C:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C541Cu); st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x001C541Cu) [[unlikely]] return; }
L_001C541C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));  goto L_001C5578; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C542Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x001C542Cu) [[unlikely]] return; }
L_001C542C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5434u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x001C5434u) [[unlikely]] return; }
L_001C5434:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[21], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5444u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001C5444u) [[unlikely]] return; }
L_001C5444:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    st32((c.r[2].w[0] + 40u), c.r[21].w[0]);
    c.f[12] = ld32((c.r[20].w[0] + 68u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5460u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 72u, depth + 1u); else { c.pc = 0x0016D070u; return; } if (c.pc != 0x001C5460u) [[unlikely]] return; }
L_001C5460:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  goto L_001C556C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 352u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5488u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001C5488u) [[unlikely]] return; }
L_001C5488:
    set32(c.r[4], ld32((c.r[19].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5498u); set32(c.r[6], 0u + 512u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x001C5498u) [[unlikely]] return; }
L_001C5498:
    set32(c.r[5], c.r[18].w[0] + 224u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C54A8u); set32(c.r[6], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001C54A8u) [[unlikely]] return; }
L_001C54A8:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C54BCu); st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_000D(c, 285u, depth + 1u); else { c.pc = 0x00156C80u; return; } if (c.pc != 0x001C54BCu) [[unlikely]] return; }
L_001C54BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C54C4u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x001C54C4u) [[unlikely]] return; }
L_001C54C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C54D4u); set32(c.r[6], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x001C54D4u) [[unlikely]] return; }
L_001C54D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C54DCu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x001C54DCu) [[unlikely]] return; }
L_001C54DC:
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C54F4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x001C54F4u) [[unlikely]] return; }
L_001C54F4:
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFC80000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[2].d[0] = c.r[2].d[0] | 25600ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    st32((c.r[29].w[0] + 204u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 196u), c.f[0]);
    st32((c.r[29].w[0] + 220u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 200u), c.f[0]);
    st32((c.r[29].w[0] + 208u), c.f[1]);
    st32((c.r[29].w[0] + 212u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5538u); st32((c.r[29].w[0] + 216u), c.f[1]);  if (depth < kMaxDepth) unit_0013(c, 29u, depth + 1u); else { c.pc = 0x0016C560u; return; } if (c.pc != 0x001C5538u) [[unlikely]] return; }
L_001C5538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5540u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001C5540u) [[unlikely]] return; }
L_001C5540:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 352u)));  if (t) { goto L_001C555C; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5554u); set32(c.r[6], 0u + 512u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x001C5554u) [[unlikely]] return; }
L_001C5554:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5568; } }
L_001C555C:
    set32(c.r[5], 0u - 513u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5568u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x001C5568u) [[unlikely]] return; }
L_001C5568:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_001C556C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5574u);  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x001C5574u) [[unlikely]] return; }
L_001C5574:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_001C5578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5580u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001C5580u) [[unlikely]] return; }
L_001C5580:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5590u); st32((c.r[2].w[0] + 40u), c.r[22].w[0]);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001C5590u) [[unlikely]] return; }
L_001C5590:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 352u)));  if (t) { goto L_001C55AC; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C55A4u); set32(c.r[6], 0u + 2048u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x001C55A4u) [[unlikely]] return; }
L_001C55A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 31436u), c.r[17].w[0]);  if (t) { goto L_001C55BC; } }
L_001C55AC:
    set32(c.r[5], 0u - 2049u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C55B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x001C55B8u) [[unlikely]] return; }
L_001C55B8:
    st32((c.r[28].w[0] - 31436u), c.r[17].w[0]);
    c.budget -= 1;
L_001C55BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_001C55C0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_001C55F0:
    set32(c.r[6], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31436u)));  goto L_001C55FC; }
L_001C55FC:
    c.budget -= 2;
    {  goto L_001C5610; }
L_001C5610:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[18], ld32((c.r[6].w[0] + 36u)));
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001C570C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5644u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x001C5644u) [[unlikely]] return; }
L_001C5644:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5654u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x001C5654u) [[unlikely]] return; }
L_001C5654:
    c.f[20] = ld32((c.r[17].w[0] + 264u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[21] = ld32((c.r[17].w[0] + 224u));  if (t) { goto L_001C5678; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001C5710; }
L_001C5678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5680u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x001C5680u) [[unlikely]] return; }
L_001C5680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C569Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x001C569Cu) [[unlikely]] return; }
L_001C569C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.f[21] ^ fp::kSign;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C56C0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x001C56C0u) [[unlikely]] return; }
L_001C56C0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C56D8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x001C56D8u) [[unlikely]] return; }
L_001C56D8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C56E8u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x001C56E8u) [[unlikely]] return; }
L_001C56E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C56F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x001C56F0u) [[unlikely]] return; }
L_001C56F0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C56FCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x001C56FCu) [[unlikely]] return; }
L_001C56FC:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C570Cu); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x001C570Cu) [[unlikely]] return; }
L_001C570C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001C5710:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001C5730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5748u); set32(c.r[4], 0u + 200u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5748u) [[unlikely]] return; }
L_001C5748:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C5760; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C575Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 276u, depth + 1u); else { c.pc = 0x001CE360u; return; } if (c.pc != 0x001C575Cu) [[unlikely]] return; }
L_001C575C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C5760:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5788u); set32(c.r[4], 0u + 180u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5788u) [[unlikely]] return; }
L_001C5788:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C57A0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C579Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 138u, depth + 1u); else { c.pc = 0x001CD2E0u; return; } if (c.pc != 0x001C579Cu) [[unlikely]] return; }
L_001C579C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C57A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C57B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C57C8u); set32(c.r[4], 0u + 156u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C57C8u) [[unlikely]] return; }
L_001C57C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C57E0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C57DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 32u, depth + 1u); else { c.pc = 0x001D83E0u; return; } if (c.pc != 0x001C57DCu) [[unlikely]] return; }
L_001C57DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C57E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C57F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5808u); set32(c.r[4], 0u + 984u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5808u) [[unlikely]] return; }
L_001C5808:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C5820; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C581Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 283u, depth + 1u); else { c.pc = 0x001CA750u; return; } if (c.pc != 0x001C581Cu) [[unlikely]] return; }
L_001C581C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C5820:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5848u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5848u) [[unlikely]] return; }
L_001C5848:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C5860; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C585Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 442u, depth + 1u); else { c.pc = 0x001D3CE0u; return; } if (c.pc != 0x001C585Cu) [[unlikely]] return; }
L_001C585C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C5860:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5888u); set32(c.r[4], 0u + 156u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5888u) [[unlikely]] return; }
L_001C5888:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C58A0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C589Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 289u, depth + 1u); else { c.pc = 0x001DF990u; return; } if (c.pc != 0x001C589Cu) [[unlikely]] return; }
L_001C589C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C58A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C58B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C58C8u); set32(c.r[4], 0u + 156u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C58C8u) [[unlikely]] return; }
L_001C58C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C58E0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C58DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 203u, depth + 1u); else { c.pc = 0x001E6230u; return; } if (c.pc != 0x001C58DCu) [[unlikely]] return; }
L_001C58DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C58E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C58F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5908u); set32(c.r[4], 0u + 180u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5908u) [[unlikely]] return; }
L_001C5908:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C5920; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C591Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 260u, depth + 1u); else { c.pc = 0x001E6AF0u; return; } if (c.pc != 0x001C591Cu) [[unlikely]] return; }
L_001C591C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C5920:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5948u); set32(c.r[4], 0u + 152u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5948u) [[unlikely]] return; }
L_001C5948:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C5960; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C595Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 321u, depth + 1u); else { c.pc = 0x001E7480u; return; } if (c.pc != 0x001C595Cu) [[unlikely]] return; }
L_001C595C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C5960:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5988u); set32(c.r[4], 0u + 148u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5988u) [[unlikely]] return; }
L_001C5988:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C59A0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C599Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 68u, depth + 1u); else { c.pc = 0x001E8CA0u; return; } if (c.pc != 0x001C599Cu) [[unlikely]] return; }
L_001C599C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C59A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C59B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C59C8u); set32(c.r[4], 0u + 180u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C59C8u) [[unlikely]] return; }
L_001C59C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C59E0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C59DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 124u, depth + 1u); else { c.pc = 0x001E9220u; return; } if (c.pc != 0x001C59DCu) [[unlikely]] return; }
L_001C59DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C59E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C59F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5A08u); set32(c.r[4], 0u + 204u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5A08u) [[unlikely]] return; }
L_001C5A08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C5A20; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5A1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 185u, depth + 1u); else { c.pc = 0x001E9B70u; return; } if (c.pc != 0x001C5A1Cu) [[unlikely]] return; }
L_001C5A1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C5A20:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5A48u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5A48u) [[unlikely]] return; }
L_001C5A48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C5A60; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5A5Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 276u, depth + 1u); else { c.pc = 0x001EA730u; return; } if (c.pc != 0x001C5A5Cu) [[unlikely]] return; }
L_001C5A5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C5A60:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5A88u); set32(c.r[4], 0u + 156u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5A88u) [[unlikely]] return; }
L_001C5A88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C5AA0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5A9Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 343u, depth + 1u); else { c.pc = 0x001EB180u; return; } if (c.pc != 0x001C5A9Cu) [[unlikely]] return; }
L_001C5A9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C5AA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5AB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5AC8u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5AC8u) [[unlikely]] return; }
L_001C5AC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C5AE0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5ADCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 383u, depth + 1u); else { c.pc = 0x001EB7D0u; return; } if (c.pc != 0x001C5ADCu) [[unlikely]] return; }
L_001C5ADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C5AE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5B08u); set32(c.r[4], 0u + 164u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5B08u) [[unlikely]] return; }
L_001C5B08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C5B20; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5B1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 94u, depth + 1u); else { c.pc = 0x001ECAE0u; return; } if (c.pc != 0x001C5B1Cu) [[unlikely]] return; }
L_001C5B1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C5B20:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5B30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5B48u); set32(c.r[4], 0u + 152u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5B48u) [[unlikely]] return; }
L_001C5B48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C5B60; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5B5Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 161u, depth + 1u); else { c.pc = 0x001ED580u; return; } if (c.pc != 0x001C5B5Cu) [[unlikely]] return; }
L_001C5B5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C5B60:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5B88u); set32(c.r[4], 0u + 152u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5B88u) [[unlikely]] return; }
L_001C5B88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C5BA0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5B9Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 205u, depth + 1u); else { c.pc = 0x001EDC00u; return; } if (c.pc != 0x001C5B9Cu) [[unlikely]] return; }
L_001C5B9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C5BA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5BC8u); set32(c.r[4], 0u + 152u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5BC8u) [[unlikely]] return; }
L_001C5BC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C5BE0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5BDCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 241u, depth + 1u); else { c.pc = 0x001D6B80u; return; } if (c.pc != 0x001C5BDCu) [[unlikely]] return; }
L_001C5BDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C5BE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5C08u); set32(c.r[4], 0u + 168u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5C08u) [[unlikely]] return; }
L_001C5C08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C5C20; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5C1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 216u, depth + 1u); else { c.pc = 0x001EDDE0u; return; } if (c.pc != 0x001C5C1Cu) [[unlikely]] return; }
L_001C5C1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C5C20:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5C30:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], 0u + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0980u | kUnwind; return; } [[clang::musttail]] return unit_0024(c, 115u, depth); }
L_001C5C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5C54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001C5C54u) [[unlikely]] return; }
L_001C5C54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x524F0000u);
    set32(c.r[3], c.r[3].w[0] + 12640u);
    c.r[2].d[0] = c.r[2].d[0] | 17229ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30548u)));
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001C5C98; }
    st32((c.r[28].w[0] - 30548u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001C5CC8; } }
L_001C5C98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5CA4u); set32(c.r[5], c.r[5].w[0] + 13148u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001C5CA4u) [[unlikely]] return; }
L_001C5CA4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 9;
L_001C5CC8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5CE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C5D5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12640u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30548u)));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_001C5D1C; }
    st32((c.r[28].w[0] - 30548u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 2;
L_001C5D1C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001C5D3C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5D34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C5D34u) [[unlikely]] return; }
L_001C5D34:
    st32((c.r[17].w[0] + 52u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001C5D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5D44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001C5D44u) [[unlikely]] return; }
L_001C5D44:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001C5D60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5D5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001C5D5Cu) [[unlikely]] return; }
L_001C5D5C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C5D60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C5D80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001C5DD0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5DA8u); st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 149u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x001C5DA8u) [[unlikely]] return; }
L_001C5DA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C5DCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5DB8u);  if (depth < kMaxDepth) unit_002C(c, 149u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x001C5DB8u) [[unlikely]] return; }
L_001C5DB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5DCCu); set32(c.r[6], 0u + 19u);  if (depth < kMaxDepth) unit_002C(c, 140u, depth + 1u); else { c.pc = 0x001D14E0u; return; } if (c.pc != 0x001C5DCCu) [[unlikely]] return; }
L_001C5DCC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001C5DD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C5DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001C5E38; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5E10u); st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 149u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x001C5E10u) [[unlikely]] return; }
L_001C5E10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C5E34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5E20u);  if (depth < kMaxDepth) unit_002C(c, 149u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x001C5E20u) [[unlikely]] return; }
L_001C5E20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5E34u); set32(c.r[6], 0u + 19u);  if (depth < kMaxDepth) unit_002C(c, 143u, depth + 1u); else { c.pc = 0x001D1570u; return; } if (c.pc != 0x001C5E34u) [[unlikely]] return; }
L_001C5E34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001C5E38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C5E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001C5ED0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_001C5EAC; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001C5E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001C5ED4; } }
L_001C5E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5E80u);  if (depth < kMaxDepth) unit_002C(c, 146u, depth + 1u); else { c.pc = 0x001D1600u; return; } if (c.pc != 0x001C5E80u) [[unlikely]] return; }
L_001C5E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5E88u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 149u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x001C5E88u) [[unlikely]] return; }
L_001C5E88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5E9Cu); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_002C(c, 101u, depth + 1u); else { c.pc = 0x001D0F80u; return; } if (c.pc != 0x001C5E9Cu) [[unlikely]] return; }
L_001C5E9C:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
L_001C5EAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 9;
L_001C5ED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C5ED4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5EE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5F00u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5F00u) [[unlikely]] return; }
L_001C5F00:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], 0u + 56u);  goto L_001C5F20; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5F18u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 298u, depth + 1u); else { c.pc = 0x001C5C40u; return; } if (c.pc != 0x001C5F18u) [[unlikely]] return; }
L_001C5F18:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 56u);
    c.budget -= 2;
L_001C5F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5F28u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C5F28u) [[unlikely]] return; }
L_001C5F28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C5FBC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5F3Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001C5F3Cu) [[unlikely]] return; }
L_001C5F3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53430000u);
    set32(c.r[3], c.r[3].w[0] + 12576u);
    c.r[2].d[0] = c.r[2].d[0] | 21325ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5F58u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001C5F58u) [[unlikely]] return; }
L_001C5F58:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001C5FAC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 23600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5F78u); st32((c.r[18].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001C5F78u) [[unlikely]] return; }
L_001C5F78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001C5F9C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 12544u);
    set32(c.r[3], c.r[3].w[0] + 14352u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
L_001C5F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5FA4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 31u, depth + 1u); else { c.pc = 0x001FC410u; return; } if (c.pc != 0x001C5FA4u) [[unlikely]] return; }
L_001C5FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_001C5FBC; } }
L_001C5FAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5FB8u); set32(c.r[5], c.r[5].w[0] + 13170u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001C5FB8u) [[unlikely]] return; }
L_001C5FB8:
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 1;
L_001C5FBC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C5FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001C601C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 12544u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_001C6018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6018u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001C6018u) [[unlikely]] return; }
L_001C6018:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001C601C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C6030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30548u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001C6050; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C604Cu);  if (depth < kMaxDepth) unit_0029(c, 305u, depth + 1u); else { c.pc = 0x001C5D80u; return; } if (c.pc != 0x001C604Cu) [[unlikely]] return; }
L_001C604C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001C6050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C6060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30548u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001C6080; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C607Cu);  if (depth < kMaxDepth) unit_0029(c, 309u, depth + 1u); else { c.pc = 0x001C5DE0u; return; } if (c.pc != 0x001C607Cu) [[unlikely]] return; }
L_001C607C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001C6080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C6090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C6104; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12576u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001C60E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C60CCu);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001C60CCu) [[unlikely]] return; }
L_001C60CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C60E0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C60E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 32u, depth + 1u); else { c.pc = 0x001FC430u; return; } if (c.pc != 0x001C60E0u) [[unlikely]] return; }
L_001C60E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C60E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C60ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001C60ECu) [[unlikely]] return; }
L_001C60EC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001C6108; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6104u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001C6104u) [[unlikely]] return; }
L_001C6104:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C6108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C6120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C613Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001C613Cu) [[unlikely]] return; }
L_001C613C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52590000u);
    set32(c.r[3], c.r[3].w[0] + 12704u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 19533ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6164u); set32(c.r[5], c.r[5].w[0] + 13200u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001C6164u) [[unlikely]] return; }
L_001C6164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C616Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 348u, depth + 1u); else { c.pc = 0x001C62A0u; return; } if (c.pc != 0x001C616Cu) [[unlikely]] return; }
L_001C616C:
    st32((c.r[17].w[0] + 148u), 0u);
    set32(c.r[2], 0u + 255u);
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[4], 0u + 336u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C618Cu); st32((c.r[17].w[0] + 164u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001C618Cu) [[unlikely]] return; }
L_001C618C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 168u), c.r[2].w[0]);  goto L_001C61A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C619Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 393u, depth + 1u); else { c.pc = 0x0020BD00u; return; } if (c.pc != 0x001C619Cu) [[unlikely]] return; }
L_001C619C:
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 1;
L_001C61A0:
    set32(c.r[3], 0u - 8193u);
    set32(c.r[4], ld32((c.r[2].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 160u), 0u);
    st32((c.r[17].w[0] + 176u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C61E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6204u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 346u, depth + 1u); else { c.pc = 0x001C6260u; return; } if (c.pc != 0x001C6204u) [[unlikely]] return; }
L_001C6204:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 168u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6218u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 347u, depth + 1u); else { c.pc = 0x001C6280u; return; } if (c.pc != 0x001C6218u) [[unlikely]] return; }
L_001C6218:
    set32(c.r[4], c.r[19].w[0] << 13);
    set32(c.r[3], c.r[18].w[0] << 11);
    c.r[6].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] << 7);
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.r[6].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 284u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C6260:
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C6274; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 2;
L_001C6274:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6280:
    set32(c.r[2], ld32((c.r[4].w[0] + 156u)));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C6298; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    c.budget -= 2;
L_001C6298:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C62A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 172u), 0u);  c.pc = t; return; }
L_001C62B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C6328; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C62DCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0029(c, 355u, depth + 1u); else { c.pc = 0x001C6340u; return; } if (c.pc != 0x001C62DCu) [[unlikely]] return; }
L_001C62DC:
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 164u)));  goto L_001C62FC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C62F8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C62F8u) [[unlikely]] return; }
L_001C62F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_001C62FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6304u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 273u, depth + 1u); else { c.pc = 0x001CA590u; return; } if (c.pc != 0x001C6304u) [[unlikely]] return; }
L_001C6304:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6310u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001C6310u) [[unlikely]] return; }
L_001C6310:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001C632C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6328u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001C6328u) [[unlikely]] return; }
L_001C6328:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C632C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C6340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6360u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001C6360u) [[unlikely]] return; }
L_001C6360:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C6370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6384u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 355u, depth + 1u); else { c.pc = 0x001C6340u; return; } if (c.pc != 0x001C6384u) [[unlikely]] return; }
L_001C6384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C638Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 348u, depth + 1u); else { c.pc = 0x001C62A0u; return; } if (c.pc != 0x001C638Cu) [[unlikely]] return; }
L_001C638C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6398u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001C6398u) [[unlikely]] return; }
L_001C6398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C63B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C63C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001C63C0u) [[unlikely]] return; }
L_001C63C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C63D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C63E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6414u); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001C6414u) [[unlikely]] return; }
L_001C6414:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C520000u);
    set32(c.r[3], c.r[3].w[0] + 12768u);
    c.r[2].d[0] = c.r[2].d[0] | 18253ull;
    st32((c.r[20].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 76u), 0u);
    st32((c.r[20].w[0] + 80u), 0u);
    st32((c.r[20].w[0] + 84u), 0u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 52u), 0u);
    st32((c.r[20].w[0] + 56u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 60u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 64u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 68u), 0u);
    c.budget -= 16;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] + 72u), 0u);  if (t) { goto L_001C6464; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001C6478; } }
L_001C6464:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
L_001C6478:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001C64B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C6590; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C64DCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0029(c, 374u, depth + 1u); else { c.pc = 0x001C65B0u; return; } if (c.pc != 0x001C64DCu) [[unlikely]] return; }
L_001C64DC:
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 80u);  goto L_001C6510; }
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C650C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C650C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C650Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C650Cu) [[unlikely]] return; }
L_001C650C:
    set32(c.r[2], c.r[17].w[0] + 80u);
    c.budget -= 1;
L_001C6510:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 76u);  goto L_001C6540; }
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C653C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C653C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C653Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C653Cu) [[unlikely]] return; }
L_001C653C:
    set32(c.r[2], c.r[17].w[0] + 76u);
    c.budget -= 1;
L_001C6540:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001C6570; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C656C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C656C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C656Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C656Cu) [[unlikely]] return; }
L_001C656C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C6570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6578u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001C6578u) [[unlikely]] return; }
L_001C6578:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001C6594; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6590u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001C6590u) [[unlikely]] return; }
L_001C6590:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C6594:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C65B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  goto L_001C65E4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C65DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C65DCu) [[unlikely]] return; }
L_001C65DC:
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 2;
L_001C65E4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001C660C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C6608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6604u);  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x001C6604u) [[unlikely]] return; }
L_001C6604:
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 1;
L_001C6608:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001C660C:
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C6638; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30540u)));
    set32(c.r[3], 0u - 8193u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[28].w[0] - 30540u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
L_001C6638:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C6650:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 32u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 10;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[18].w[0] + 68u)));  goto L_001C6F90; }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[6], ld32((c.r[18].w[0] + 64u)));  goto L_001C6BB4; }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 30u);  goto L_001C6BA4; }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 68u)));  goto L_001C6B3C; }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 20u);  goto L_001C69A0; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 68u)));  goto L_001C6938; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 10u);  goto L_001C6884; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30544u)));  goto L_001C6720; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u - 1u);  goto L_001C66E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001C700C; } }
L_001C66DC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001C66E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C66ECu); st32((c.r[18].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0029(c, 374u, depth + 1u); else { c.pc = 0x001C65B0u; return; } if (c.pc != 0x001C66ECu) [[unlikely]] return; }
L_001C66EC:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 33;
    c.r[5].d[0] = c.r[5].d[0] >> 33;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[18].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_001C7008; } }
L_001C6720:
    set32(c.r[6], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6734u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_002B(c, 254u, depth + 1u); else { c.pc = 0x001CE000u; return; } if (c.pc != 0x001C6734u) [[unlikely]] return; }
L_001C6734:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 108u)));  goto L_001C675C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C6758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6758u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C6758u) [[unlikely]] return; }
L_001C6758:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_001C675C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 108u)));  goto L_001C6774; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 4;
L_001C6774:
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30544u)));  goto L_001C67A4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C67A0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C67A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C67A0u) [[unlikely]] return; }
L_001C67A0:
    set32(c.r[5], ld32((c.r[28].w[0] - 30544u)));
    c.budget -= 1;
L_001C67A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C67ACu); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_002B(c, 270u, depth + 1u); else { c.pc = 0x001CE260u; return; } if (c.pc != 0x001C67ACu) [[unlikely]] return; }
L_001C67AC:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 104u)));  goto L_001C67D4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001C67D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C67D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C67D0u) [[unlikely]] return; }
L_001C67D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_001C67D4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_001C67EC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 4;
L_001C67EC:
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 64u)));  goto L_001C681C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001C6818; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6818u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C6818u) [[unlikely]] return; }
L_001C6818:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 1;
L_001C681C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C682C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C682Cu); set32(c.r[4], ld32((c.r[18].w[0] + 56u)));  if (depth < kMaxDepth) unit_0029(c, 456u, depth + 1u); else { c.pc = 0x001C7520u; return; } if (c.pc != 0x001C682Cu) [[unlikely]] return; }
L_001C682C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 27536u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C6880; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_001C6858; }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001C6858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6860u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 426u, depth + 1u); else { c.pc = 0x001C7040u; return; } if (c.pc != 0x001C6860u) [[unlikely]] return; }
L_001C6860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_001C6FD8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6878u); set32(c.r[5], c.r[5].w[0] + 13360u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001C6878u) [[unlikely]] return; }
L_001C6878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C66DCu | kUnwind; return; } goto L_001C66DC; } }
L_001C6880:
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_001C6884:
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30540u)));
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C7008; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 30540u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_001C68BC; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001C68BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C68C4u);  if (depth < kMaxDepth) unit_0029(c, 439u, depth + 1u); else { c.pc = 0x001C71D0u; return; } if (c.pc != 0x001C68C4u) [[unlikely]] return; }
L_001C68C4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C699C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C68D8u); set32(c.r[4], 0u + 360u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C68D8u) [[unlikely]] return; }
L_001C68D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 68u), c.r[4].w[0]);  goto L_001C6928; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = c.r[3].d[0] & 32768ull;  if (t) { goto L_001C68FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 12u);  if (t) { goto L_001C6900; } }
L_001C68FC:
    set32(c.r[7], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001C6900:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_001C6910; }
    set32(c.r[6], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001C6910:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6920u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x001C6920u) [[unlikely]] return; }
L_001C6920:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 68u), c.r[4].w[0]);
    c.budget -= 2;
L_001C6928:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_001C7008; } }
L_001C6938:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C7008; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C6978; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C6978; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_001C6FD8; } }
L_001C6978:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C699C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 68u), 0u);  goto L_001C699C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6998u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C6998u) [[unlikely]] return; }
L_001C6998:
    st32((c.r[18].w[0] + 68u), 0u);
    c.budget -= 1;
L_001C699C:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_001C69A0:
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C69B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 445u, depth + 1u); else { c.pc = 0x001C7290u; return; } if (c.pc != 0x001C69B8u) [[unlikely]] return; }
L_001C69B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C6BA0; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 100u);
    set32(c.r[5], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 44;
    set32(c.r[2], c.r[2].w[0] >> 20);
    c.r[3].d[0] = c.r[3].d[0] >> 44;
    set32(c.r[16], c.r[2].w[0] << 11);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C69ECu); set32(c.r[17], c.r[3].w[0] << 11);  if (depth < kMaxDepth) unit_002B(c, 254u, depth + 1u); else { c.pc = 0x001CE000u; return; } if (c.pc != 0x001C69ECu) [[unlikely]] return; }
L_001C69EC:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 100u)));  goto L_001C6A14; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C6A10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6A10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C6A10u) [[unlikely]] return; }
L_001C6A10:
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_001C6A14:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 100u)));  goto L_001C6A2C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 4;
L_001C6A2C:
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_001C6A5C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C6A58; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6A58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C6A58u) [[unlikely]] return; }
L_001C6A58:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_001C6A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6A64u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_002B(c, 270u, depth + 1u); else { c.pc = 0x001CE260u; return; } if (c.pc != 0x001C6A64u) [[unlikely]] return; }
L_001C6A64:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 96u)));  goto L_001C6A8C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C6A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6A88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C6A88u) [[unlikely]] return; }
L_001C6A88:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 1;
L_001C6A8C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 96u)));  goto L_001C6AA4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 4;
L_001C6AA4:
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 360u);  goto L_001C6AD4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C6AD0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6AD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C6AD0u) [[unlikely]] return; }
L_001C6AD0:
    set32(c.r[4], 0u + 360u);
    c.budget -= 1;
L_001C6AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6ADCu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C6ADCu) [[unlikely]] return; }
L_001C6ADC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 68u), c.r[4].w[0]);  goto L_001C6B2C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = c.r[3].d[0] & 32768ull;  if (t) { goto L_001C6B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 12u);  if (t) { goto L_001C6B04; } }
L_001C6B00:
    set32(c.r[7], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001C6B04:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_001C6B14; }
    set32(c.r[6], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001C6B14:
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6B24u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x001C6B24u) [[unlikely]] return; }
L_001C6B24:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 68u), c.r[4].w[0]);
    c.budget -= 2;
L_001C6B2C:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_001C7008; } }
L_001C6B3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C7008; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C6B7C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C6B7C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_001C6FD8; } }
L_001C6B7C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C6BA0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 68u), 0u);  goto L_001C6BA0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6B9Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C6B9Cu) [[unlikely]] return; }
L_001C6B9C:
    st32((c.r[18].w[0] + 68u), 0u);
    c.budget -= 1;
L_001C6BA0:
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_001C6BA4:
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 4;
L_001C6BB4:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[29].w[0] + 76u);  goto L_001C6E38; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001C6E34; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 56u)));  goto L_001C6BDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C66DCu | kUnwind; return; } goto L_001C66DC; } }
L_001C6BDC:
    c.r[1].d[0] = c.r[2].sd[0] < 3000ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 84u);  goto L_001C6CE0; }
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6BF4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 254u, depth + 1u); else { c.pc = 0x001CE000u; return; } if (c.pc != 0x001C6BF4u) [[unlikely]] return; }
L_001C6BF4:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 92u)));  goto L_001C6C1C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C6C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6C18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C6C18u) [[unlikely]] return; }
L_001C6C18:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 1;
L_001C6C1C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 92u)));  goto L_001C6C34; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 4;
L_001C6C34:
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 88u);  goto L_001C6C64; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C6C60; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6C60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C6C60u) [[unlikely]] return; }
L_001C6C60:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 1;
L_001C6C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6C6Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002B(c, 270u, depth + 1u); else { c.pc = 0x001CE260u; return; } if (c.pc != 0x001C6C6Cu) [[unlikely]] return; }
L_001C6C6C:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 88u)));  goto L_001C6C94; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C6C90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6C90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C6C90u) [[unlikely]] return; }
L_001C6C90:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_001C6C94:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 88u)));  goto L_001C6CAC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
L_001C6CAC:
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 360u);  goto L_001C6DD4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C6DD0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6CD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C6CD8u) [[unlikely]] return; }
L_001C6CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6DD0; } }
L_001C6CE0:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6CECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 254u, depth + 1u); else { c.pc = 0x001CE000u; return; } if (c.pc != 0x001C6CECu) [[unlikely]] return; }
L_001C6CEC:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 84u)));  goto L_001C6D14; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C6D10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6D10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C6D10u) [[unlikely]] return; }
L_001C6D10:
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 1;
L_001C6D14:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  goto L_001C6D2C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 4;
L_001C6D2C:
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_001C6D5C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C6D58; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6D58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C6D58u) [[unlikely]] return; }
L_001C6D58:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_001C6D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6D64u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_002B(c, 270u, depth + 1u); else { c.pc = 0x001CE260u; return; } if (c.pc != 0x001C6D64u) [[unlikely]] return; }
L_001C6D64:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 80u)));  goto L_001C6D8C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C6D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6D88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C6D88u) [[unlikely]] return; }
L_001C6D88:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 1;
L_001C6D8C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 80u)));  goto L_001C6DA4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 4;
L_001C6DA4:
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C6DD0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C6DD0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6DD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C6DD0u) [[unlikely]] return; }
L_001C6DD0:
    set32(c.r[4], 0u + 360u);
    c.budget -= 1;
L_001C6DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6DDCu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C6DDCu) [[unlikely]] return; }
L_001C6DDC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 68u), c.r[4].w[0]);  goto L_001C6F80; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = c.r[3].d[0] & 32768ull;  if (t) { goto L_001C6E00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 12u);  if (t) { goto L_001C6E04; } }
L_001C6E00:
    set32(c.r[7], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001C6E04:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_001C6E14; }
    set32(c.r[6], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001C6E14:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6E24u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x001C6E24u) [[unlikely]] return; }
L_001C6E24:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 68u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6F80; } }
L_001C6E34:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 1;
L_001C6E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6E40u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002B(c, 254u, depth + 1u); else { c.pc = 0x001CE000u; return; } if (c.pc != 0x001C6E40u) [[unlikely]] return; }
L_001C6E40:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 76u)));  goto L_001C6E68; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C6E64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6E64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C6E64u) [[unlikely]] return; }
L_001C6E64:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_001C6E68:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  goto L_001C6E80; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 4;
L_001C6E80:
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 72u);  goto L_001C6EB0; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C6EAC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6EACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C6EACu) [[unlikely]] return; }
L_001C6EAC:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 1;
L_001C6EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6EB8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002B(c, 270u, depth + 1u); else { c.pc = 0x001CE260u; return; } if (c.pc != 0x001C6EB8u) [[unlikely]] return; }
L_001C6EB8:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 72u)));  goto L_001C6EE0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C6EDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6EDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C6EDCu) [[unlikely]] return; }
L_001C6EDC:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_001C6EE0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 72u)));  goto L_001C6EF8; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 4;
L_001C6EF8:
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 360u);  goto L_001C6F28; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C6F24; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6F24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C6F24u) [[unlikely]] return; }
L_001C6F24:
    set32(c.r[4], 0u + 360u);
    c.budget -= 1;
L_001C6F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6F30u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C6F30u) [[unlikely]] return; }
L_001C6F30:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 68u), c.r[4].w[0]);  goto L_001C6F80; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = c.r[3].d[0] & 32768ull;  if (t) { goto L_001C6F54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 12u);  if (t) { goto L_001C6F58; } }
L_001C6F54:
    set32(c.r[7], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001C6F58:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_001C6F68; }
    set32(c.r[6], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001C6F68:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6F78u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x001C6F78u) [[unlikely]] return; }
L_001C6F78:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 68u), c.r[4].w[0]);
    c.budget -= 2;
L_001C6F80:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_001C7008; } }
L_001C6F90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C7008; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C66DCu | kUnwind; return; } goto L_001C66DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C66DCu | kUnwind; return; } goto L_001C66DC; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 72u)));
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_001C6FD8:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 33;
    c.r[5].d[0] = c.r[5].d[0] >> 33;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[18].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 12;
L_001C7008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001C700C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001C7020:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001C7038; }
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 1;
L_001C7038:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C7040:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[5], c.r[5].w[0] + 13376u);
    set32(c.r[6], c.r[6].w[0] + 27536u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7074u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001C7074u) [[unlikely]] return; }
L_001C7074:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_001C7084; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001C7084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C708Cu);  if (depth < kMaxDepth) unit_0024(c, 76u, depth + 1u); else { c.pc = 0x001B0680u; return; } if (c.pc != 0x001C708Cu) [[unlikely]] return; }
L_001C708C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_001C70D4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C70A4u); set32(c.r[5], c.r[5].w[0] + 13382u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001C70A4u) [[unlikely]] return; }
L_001C70A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001C71B0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C70C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C70C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C70C8u) [[unlikely]] return; }
L_001C70C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C71B0; } }
L_001C70D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C70DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 408u, depth + 1u); else { c.pc = 0x001B2F10u; return; } if (c.pc != 0x001C70DCu) [[unlikely]] return; }
L_001C70DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 60u)));  goto L_001C7128; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C70F8u); set32(c.r[5], c.r[5].w[0] + 13399u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001C70F8u) [[unlikely]] return; }
L_001C70F8:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001C71B0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C711C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C711Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C711Cu) [[unlikely]] return; }
L_001C711C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C71B0; } }
L_001C7128:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_001C7134; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001C7134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C713Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 54u, depth + 1u); else { c.pc = 0x001B04D0u; return; } if (c.pc != 0x001C713Cu) [[unlikely]] return; }
L_001C713C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_001C718C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7154u); set32(c.r[5], c.r[5].w[0] + 13421u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001C7154u) [[unlikely]] return; }
L_001C7154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C715Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x001C715Cu) [[unlikely]] return; }
L_001C715C:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001C71B0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C7180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7180u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C7180u) [[unlikely]] return; }
L_001C7180:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C71B0; } }
L_001C718C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001C71B0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C71AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C71ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C71ACu) [[unlikely]] return; }
L_001C71AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001C71B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C71D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C71E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0014EC70u; return; } if (c.pc != 0x001C71E4u) [[unlikely]] return; }
L_001C71E4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001C71F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C7280; } }
L_001C71F8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 44u);
    set32(c.r[5], c.r[5].w[0] + 13437u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C720Cu); st32((c.r[29].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001C720Cu) [[unlikely]] return; }
L_001C720C:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_001C721C; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001C721C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7224u);  if (depth < kMaxDepth) unit_00A5(c, 117u, depth + 1u); else { c.pc = 0x003B5600u; return; } if (c.pc != 0x001C7224u) [[unlikely]] return; }
L_001C7224:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_001C725C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001C7280; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C7250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7250u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C7250u) [[unlikely]] return; }
L_001C7250:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7280; } }
L_001C725C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001C7280; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C727C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C727Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C727Cu) [[unlikely]] return; }
L_001C727C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C7280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C7290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30536u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001C72E4; } }
    set32(c.r[9], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[6], c.r[9].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D470000u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[7], c.r[9].w[0] << 24);
    set32(c.r[3], c.r[9].w[0] >> 8);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | 21076ull;
    c.r[6].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[3], c.r[9].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 15;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[6].d[0] = c.r[5].d[0] + 0ull;  goto L_001C72EC; }
L_001C72E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C7374; } }
L_001C72EC:
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C72F8u); set32(c.r[5], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0029(c, 448u, depth + 1u); else { c.pc = 0x001C7380u; return; } if (c.pc != 0x001C72F8u) [[unlikely]] return; }
L_001C72F8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30536u)));  goto L_001C7308; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C7374; } }
L_001C7308:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] - 1u);  if (t) { goto L_001C7364; } }
L_001C732C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_001C733C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001C733C:
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  goto L_001C7358; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001C7378; } }
L_001C7358:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[7], c.r[4].w[0] - 1u);  goto L_001C7364; }
    set32(c.r[8], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_001C7364:
    c.r[1].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[8].w[0] + c.r[7].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C732Cu | kUnwind; return; } goto L_001C732C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C7374:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001C7378:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C7380:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_001C73DC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001C73DC; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[3].d[0] = c.r[7].sd[0] < 1000ll ? 1ull : 0ull;  goto L_001C73A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C7424; } }
L_001C73A8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001C7424; }
    c.r[1].d[0] = c.r[7].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C73C4; } }
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[3], c.r[6].w[0] << 14);  goto L_001C73D0; }
L_001C73C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7424; } }
L_001C73D0:
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001C7424; } }
L_001C73DC:
    c.budget -= 2;
    if (c.r[7].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_001C7424; }
    c.r[1].d[0] = c.r[7].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C7404; } }
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { goto L_001C7404; } }
    c.r[1].d[0] = c.r[8].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 14);  goto L_001C7410; }
L_001C7404:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7424; } }
L_001C7410:
    set32(c.r[2], c.r[7].w[0] << 7);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[8].d[0] | c.r[3].d[0];
    set32(c.r[2], 0u + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001C7424:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C7430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], 0u + 192u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_001C7444:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C745Cu); st32((c.r[29].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x001C745Cu) [[unlikely]] return; }
L_001C745C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001C7484; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001C7480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7480u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C7480u) [[unlikely]] return; }
L_001C7480:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001C7484:
    c.r[1].d[0] = c.r[16].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C7444u | kUnwind; return; } goto L_001C7444; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C74A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C7504; } }
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001C74F0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C74EC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C74EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C74ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C74ECu) [[unlikely]] return; }
L_001C74EC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001C74F0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001C7508; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7504u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001C7504u) [[unlikely]] return; }
L_001C7504:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C7508:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C7520:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].d[0] = c.r[4].sd[0] < 3000ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001C7634; } }
    c.r[1].d[0] = c.r[4].sd[0] < 5000ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] - 3000u);  goto L_001C7550; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001C7638; } }
    set32(c.r[3], c.r[4].w[0] - 3000u);
    c.budget -= 1;
L_001C7550:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_001C7560; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_001C7560:
    set32(c.r[17], c.r[2].w[0] + 192u);
    set32(c.r[2], c.r[4].w[0] - 3000u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[16].d[0] = c.r[2].d[0] & 31ull;  if (t) { goto L_001C757C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_001C7580; }
    set32(c.r[16], c.r[16].w[0] - 32u);
    c.budget -= 1;
L_001C757C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_001C7580:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C758Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001C758Cu) [[unlikely]] return; }
L_001C758C:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001C75A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_001C75C4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C75A4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001C75C4; }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C75C8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C75C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C75C8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[6], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C75ECu); st32((c.r[29].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x001C75ECu) [[unlikely]] return; }
L_001C75EC:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 84u)));  goto L_001C7614; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001C7610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7610u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C7610u) [[unlikely]] return; }
L_001C7610:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 1;
L_001C7614:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C7634; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001C7634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7634u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C7634u) [[unlikely]] return; }
L_001C7634:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001C7638:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001C7650:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[4].sd[0] < 3000ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001C7670; } }
    c.r[1].d[0] = c.r[4].sd[0] < 5000ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] - 3000u);  goto L_001C7678; }
L_001C7670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C770C; } }
L_001C7678:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[16].d[0] = c.r[2].d[0] & 31ull;  if (t) { goto L_001C768C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], c.r[4].w[0] - 3000u);  goto L_001C7690; }
    set32(c.r[16], c.r[16].w[0] - 32u);
    c.budget -= 1;
L_001C768C:
    set32(c.r[3], c.r[4].w[0] - 3000u);
    c.budget -= 1;
L_001C7690:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_001C76A0; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_001C76A0:
    set32(c.r[6], c.r[2].w[0] + 192u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C76B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001C76B0u) [[unlikely]] return; }
L_001C76B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001C76C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_001C76D8; } }
L_001C76C4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001C76D8; }
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_001C76D8:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_001C7708; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C7708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7708u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C7708u) [[unlikely]] return; }
L_001C7708:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001C770C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C7720:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C774Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001C774Cu) [[unlikely]] return; }
L_001C774C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B4C0000u);
    set32(c.r[3], c.r[3].w[0] + 12832u);
    c.r[2].d[0] = c.r[2].d[0] | 16973ull;
    c.f[0] = 0u;
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[18].w[0] + 60u), c.f[20]);  if (t) { goto L_001C7780; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_001C7780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7788u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 502u, depth + 1u); else { c.pc = 0x001C7D40u; return; } if (c.pc != 0x001C7788u) [[unlikely]] return; }
L_001C7788:
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C779Cu); st32((c.r[18].w[0] + 64u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0029(c, 483u, depth + 1u); else { c.pc = 0x001C7AC0u; return; } if (c.pc != 0x001C779Cu) [[unlikely]] return; }
L_001C779C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C77C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001C784C; }
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C7848; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001C7810; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001C780C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7848; } }
L_001C780C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001C7810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7818u);  if (depth < kMaxDepth) unit_0029(c, 506u, depth + 1u); else { c.pc = 0x001C7DC0u; return; } if (c.pc != 0x001C7818u) [[unlikely]] return; }
L_001C7818:
    c.f[2] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = 0u;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 56u), c.f[0]);  if (t) { goto L_001C7848; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_001C7848:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001C784C:
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_001C79D0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001C796C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001C78F0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001C7894; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001C7890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_001C79BC; } }
L_001C7890:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001C7894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C789Cu);  if (depth < kMaxDepth) unit_0029(c, 506u, depth + 1u); else { c.pc = 0x001C7DC0u; return; } if (c.pc != 0x001C789Cu) [[unlikely]] return; }
L_001C789C:
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C78B0u); st32((c.r[16].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_0029(c, 500u, depth + 1u); else { c.pc = 0x001C7CF0u; return; } if (c.pc != 0x001C78B0u) [[unlikely]] return; }
L_001C78B0:
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C79CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C78C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 502u, depth + 1u); else { c.pc = 0x001C7D40u; return; } if (c.pc != 0x001C78C8u) [[unlikely]] return; }
L_001C78C8:
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001C79CC; } }
L_001C78F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C78F8u);  if (depth < kMaxDepth) unit_0029(c, 506u, depth + 1u); else { c.pc = 0x001C7DC0u; return; } if (c.pc != 0x001C78F8u) [[unlikely]] return; }
L_001C78F8:
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C790Cu); st32((c.r[16].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_0029(c, 500u, depth + 1u); else { c.pc = 0x001C7CF0u; return; } if (c.pc != 0x001C790Cu) [[unlikely]] return; }
L_001C790C:
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001C7924; }
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001C7924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C792Cu);  if (depth < kMaxDepth) unit_0029(c, 498u, depth + 1u); else { c.pc = 0x001C7CB0u; return; } if (c.pc != 0x001C792Cu) [[unlikely]] return; }
L_001C792C:
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C79CC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7948u); st32((c.r[16].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_0029(c, 498u, depth + 1u); else { c.pc = 0x001C7CB0u; return; } if (c.pc != 0x001C7948u) [[unlikely]] return; }
L_001C7948:
    st32((c.r[16].w[0] + 60u), c.f[0]);
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001C79CC; } }
L_001C796C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7974u);  if (depth < kMaxDepth) unit_0029(c, 506u, depth + 1u); else { c.pc = 0x001C7DC0u; return; } if (c.pc != 0x001C7974u) [[unlikely]] return; }
L_001C7974:
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7988u); st32((c.r[16].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_0029(c, 500u, depth + 1u); else { c.pc = 0x001C7CF0u; return; } if (c.pc != 0x001C7988u) [[unlikely]] return; }
L_001C7988:
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C79CC; } }
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[3], 0u + 5u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001C79CC; } }
L_001C79BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_001C79CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001C79D0:
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C79F8; }
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C79F4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_001C79F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C79F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C7A10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30532u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001C7A30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C7AA8; } }
L_001C7A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7A38u);  if (depth < kMaxDepth) unit_0029(c, 497u, depth + 1u); else { c.pc = 0x001C7CA0u; return; } if (c.pc != 0x001C7A38u) [[unlikely]] return; }
L_001C7A38:
    c.f[2] = ld32((c.r[16].w[0] + 64u));
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001C7A7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7A5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 497u, depth + 1u); else { c.pc = 0x001C7CA0u; return; } if (c.pc != 0x001C7A5Cu) [[unlikely]] return; }
L_001C7A5C:
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7AA8; } }
L_001C7A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7A84u);  if (depth < kMaxDepth) unit_0029(c, 497u, depth + 1u); else { c.pc = 0x001C7CA0u; return; } if (c.pc != 0x001C7A84u) [[unlikely]] return; }
L_001C7A84:
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 9;
L_001C7AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C7AC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001C7BD8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 13456u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001C4000u < 16384u) { entry = entries_0029[(t - 0x001C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001C7AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7B04u);  if (depth < kMaxDepth) unit_0029(c, 497u, depth + 1u); else { c.pc = 0x001C7CA0u; return; } if (c.pc != 0x001C7B04u) [[unlikely]] return; }
L_001C7B04:
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001C7B24; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001C7C24; } }
L_001C7B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7B2Cu);  if (depth < kMaxDepth) unit_0029(c, 502u, depth + 1u); else { c.pc = 0x001C7D40u; return; } if (c.pc != 0x001C7B2Cu) [[unlikely]] return; }
L_001C7B2C:
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001C7C24; } }
L_001C7B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7B54u);  if (depth < kMaxDepth) unit_0029(c, 497u, depth + 1u); else { c.pc = 0x001C7CA0u; return; } if (c.pc != 0x001C7B54u) [[unlikely]] return; }
L_001C7B54:
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[16].w[0] + 56u), 0u);  goto L_001C7B74; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001C7C24; } }
L_001C7B74:
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001C7C24; } }
L_001C7B88:
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001C7C24; } }
L_001C7BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7BACu);  if (depth < kMaxDepth) unit_0029(c, 498u, depth + 1u); else { c.pc = 0x001C7CB0u; return; } if (c.pc != 0x001C7BACu) [[unlikely]] return; }
L_001C7BAC:
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001C7C24; } }
L_001C7BC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001C7C24; } }
L_001C7BD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[17], c.r[5].w[0] - 5u);
    set32(c.r[2], c.r[17].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001C7BF8; }
    set32(c.r[17], c.r[3].w[0] - 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001C7BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7C00u);  if (depth < kMaxDepth) unit_0029(c, 497u, depth + 1u); else { c.pc = 0x001C7CA0u; return; } if (c.pc != 0x001C7C00u) [[unlikely]] return; }
L_001C7C00:
    c.f[1] = c.r[17].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 9;
L_001C7C24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C7C40:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C7C64; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_001C7C64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C7C70:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u - 24577u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_001C7C90:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_001C7CA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C7CB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7CC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 497u, depth + 1u); else { c.pc = 0x001C7CA0u; return; } if (c.pc != 0x001C7CC4u) [[unlikely]] return; }
L_001C7CC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C7CF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7D04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 497u, depth + 1u); else { c.pc = 0x001C7CA0u; return; } if (c.pc != 0x001C7D04u) [[unlikely]] return; }
L_001C7D04:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[3].w[0] - 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C7D40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7D58u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x001C7D58u) [[unlikely]] return; }
L_001C7D58:
    c.f[1] = ld32((c.r[28].w[0] - 32696u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_001C7D88; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7D78u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x001C7D78u) [[unlikely]] return; }
L_001C7D78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_001C7DA4; } }
L_001C7D88:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7D94u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x001C7D94u) [[unlikely]] return; }
L_001C7D94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 4;
L_001C7DA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C7DC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001C7DDC; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001C7DF4; } }
L_001C7DDC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_001C7DF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  c.pc = t; return; }
L_001C7E10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C7E58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7E40u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001C7E40u) [[unlikely]] return; }
L_001C7E40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001C7E5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7E58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001C7E58u) [[unlikely]] return; }
L_001C7E58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C7E5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C7E70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7EA8u); set32(c.r[6], 0u + 262u);  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001C7EA8u) [[unlikely]] return; }
L_001C7EA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12896u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7EBCu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 6u, depth + 1u); else { c.pc = 0x001C80B0u; return; } if (c.pc != 0x001C7EBCu) [[unlikely]] return; }
L_001C7EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7EC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 514u, depth + 1u); else { c.pc = 0x001C7F30u; return; } if (c.pc != 0x001C7EC4u) [[unlikely]] return; }
L_001C7EC4:
    st32((c.r[16].w[0] + 160u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 148u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 152u), c.r[19].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[16].w[0] + 156u), c.r[18].w[0]);  if (t) { goto L_001C7EE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001C7EE4; } }
L_001C7EE0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001C7EE4:
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[5].w[0] + 224u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 292u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001C7F30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 160u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7F50u); set32(c.r[4], 0u + 336u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001C7F50u) [[unlikely]] return; }
L_001C7F50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 184u), c.r[2].w[0]);  goto L_001C7F64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7F60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 393u, depth + 1u); else { c.pc = 0x0020BD00u; return; } if (c.pc != 0x001C7F60u) [[unlikely]] return; }
L_001C7F60:
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 1;
L_001C7F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7F6Cu); set32(c.r[4], 0u + 336u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001C7F6Cu) [[unlikely]] return; }
L_001C7F6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 188u), c.r[2].w[0]);  goto L_001C7F80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7F7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 393u, depth + 1u); else { c.pc = 0x0020BD00u; return; } if (c.pc != 0x001C7F7Cu) [[unlikely]] return; }
L_001C7F7C:
    st32((c.r[16].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 1;
L_001C7F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7F88u); set32(c.r[4], 0u + 336u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001C7F88u) [[unlikely]] return; }
L_001C7F88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 192u), c.r[2].w[0]);  goto L_001C7F9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7F98u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 393u, depth + 1u); else { c.pc = 0x0020BD00u; return; } if (c.pc != 0x001C7F98u) [[unlikely]] return; }
L_001C7F98:
    st32((c.r[16].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 1;
L_001C7F9C:
    set32(c.r[5], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7FA8u); set32(c.r[4], ld32((c.r[16].w[0] + 184u)));  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x001C7FA8u) [[unlikely]] return; }
L_001C7FA8:
    set32(c.r[5], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7FB4u); set32(c.r[4], ld32((c.r[16].w[0] + 192u)));  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x001C7FB4u) [[unlikely]] return; }
L_001C7FB4:
    st32((c.r[16].w[0] + 148u), 0u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[16].w[0] + 152u), 0u);
    set32(c.r[3], 0u + 8u);
    st32((c.r[16].w[0] + 156u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[5], 0u + 3u);
    st32((c.r[16].w[0] + 172u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7FE4u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 48u, depth + 1u); else { c.pc = 0x001C8650u; return; } if (c.pc != 0x001C7FE4u) [[unlikely]] return; }
L_001C7FE4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[4], 0u + 352u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 7;
    [[clang::musttail]] return unit_002A(c, 1u, depth);
}

}
