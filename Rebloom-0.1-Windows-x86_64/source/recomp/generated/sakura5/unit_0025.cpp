#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0025[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0,
    0, 7, 0, 8, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17,
    0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0,
    0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 42,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49,
    0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 66,
    0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0,
    0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 0, 0,
    97, 0, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0,
    0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126,
    0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0,
    0, 147, 0, 0, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156,
    0, 0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 165,
    0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0,
    177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0, 192, 0, 0, 193, 0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0,
    0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207,
    0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 215,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0,
    0, 0, 222, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0,
    0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0,
    0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 0, 247,
    0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0,
    0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 265, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 274, 0, 275, 0,
    0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 0, 286, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289,
    0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0,
    0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 344, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0,
    0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0,
    0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0,
    0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0,
    0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0,
    398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 404,
    0, 405, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0,
    419, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0,
    431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0,
    0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0,
    470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0,
    0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0,
    484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0,
    0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0,
    0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 502, 0, 503, 0, 504, 0, 505, 0, 0, 506, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0,
    522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0,
    526, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0,
    0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0,
};

void unit_0025(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001B4000;
    case 2u: goto L_001B4024;
    case 3u: goto L_001B4044;
    case 4u: goto L_001B4054;
    case 5u: goto L_001B4064;
    case 6u: goto L_001B4070;
    case 7u: goto L_001B4084;
    case 8u: goto L_001B408C;
    case 9u: goto L_001B40A0;
    case 10u: goto L_001B40A8;
    case 11u: goto L_001B40BC;
    case 12u: goto L_001B40C4;
    case 13u: goto L_001B40D8;
    case 14u: goto L_001B40E8;
    case 15u: goto L_001B4130;
    case 16u: goto L_001B416C;
    case 17u: goto L_001B417C;
    case 18u: goto L_001B4194;
    case 19u: goto L_001B41B0;
    case 20u: goto L_001B41C0;
    case 21u: goto L_001B41F0;
    case 22u: goto L_001B4210;
    case 23u: goto L_001B4290;
    case 24u: goto L_001B42E0;
    case 25u: goto L_001B42F4;
    case 26u: goto L_001B4308;
    case 27u: goto L_001B4310;
    case 28u: goto L_001B4318;
    case 29u: goto L_001B4360;
    case 30u: goto L_001B4388;
    case 31u: goto L_001B43A0;
    case 32u: goto L_001B43C0;
    case 33u: goto L_001B4410;
    case 34u: goto L_001B4434;
    case 35u: goto L_001B4470;
    case 36u: goto L_001B449C;
    case 37u: goto L_001B44C0;
    case 38u: goto L_001B4530;
    case 39u: goto L_001B4550;
    case 40u: goto L_001B4558;
    case 41u: goto L_001B4560;
    case 42u: goto L_001B457C;
    case 43u: goto L_001B4594;
    case 44u: goto L_001B45AC;
    case 45u: goto L_001B45C0;
    case 46u: goto L_001B45D4;
    case 47u: goto L_001B45EC;
    case 48u: goto L_001B45F4;
    case 49u: goto L_001B45FC;
    case 50u: goto L_001B4618;
    case 51u: goto L_001B4644;
    case 52u: goto L_001B4680;
    case 53u: goto L_001B46AC;
    case 54u: goto L_001B46C8;
    case 55u: goto L_001B46D8;
    case 56u: goto L_001B4710;
    case 57u: goto L_001B471C;
    case 58u: goto L_001B4730;
    case 59u: goto L_001B4740;
    case 60u: goto L_001B476C;
    case 61u: goto L_001B4794;
    case 62u: goto L_001B47B0;
    case 63u: goto L_001B47CC;
    case 64u: goto L_001B47D8;
    case 65u: goto L_001B47E0;
    case 66u: goto L_001B47FC;
    case 67u: goto L_001B4804;
    case 68u: goto L_001B4820;
    case 69u: goto L_001B4870;
    case 70u: goto L_001B488C;
    case 71u: goto L_001B48BC;
    case 72u: goto L_001B48E0;
    case 73u: goto L_001B4910;
    case 74u: goto L_001B4920;
    case 75u: goto L_001B4994;
    case 76u: goto L_001B49AC;
    case 77u: goto L_001B49CC;
    case 78u: goto L_001B49E8;
    case 79u: goto L_001B4A24;
    case 80u: goto L_001B4A34;
    case 81u: goto L_001B4A4C;
    case 82u: goto L_001B4A5C;
    case 83u: goto L_001B4A64;
    case 84u: goto L_001B4A70;
    case 85u: goto L_001B4ABC;
    case 86u: goto L_001B4ACC;
    case 87u: goto L_001B4AF0;
    case 88u: goto L_001B4AF8;
    case 89u: goto L_001B4B0C;
    case 90u: goto L_001B4B28;
    case 91u: goto L_001B4B38;
    case 92u: goto L_001B4B40;
    case 93u: goto L_001B4B48;
    case 94u: goto L_001B4B58;
    case 95u: goto L_001B4B60;
    case 96u: goto L_001B4B6C;
    case 97u: goto L_001B4B80;
    case 98u: goto L_001B4B8C;
    case 99u: goto L_001B4B94;
    case 100u: goto L_001B4BA0;
    case 101u: goto L_001B4BC4;
    case 102u: goto L_001B4BF0;
    case 103u: goto L_001B4C04;
    case 104u: goto L_001B4C14;
    case 105u: goto L_001B4CF8;
    case 106u: goto L_001B4D10;
    case 107u: goto L_001B4D28;
    case 108u: goto L_001B4D38;
    case 109u: goto L_001B4D40;
    case 110u: goto L_001B4D48;
    case 111u: goto L_001B4D5C;
    case 112u: goto L_001B4D6C;
    case 113u: goto L_001B4D98;
    case 114u: goto L_001B4DC4;
    case 115u: goto L_001B4DD8;
    case 116u: goto L_001B4DE8;
    case 117u: goto L_001B4E20;
    case 118u: goto L_001B4E28;
    case 119u: goto L_001B4E64;
    case 120u: goto L_001B4E74;
    case 121u: goto L_001B4E84;
    case 122u: goto L_001B4E94;
    case 123u: goto L_001B4EAC;
    case 124u: goto L_001B4ED0;
    case 125u: goto L_001B4EEC;
    case 126u: goto L_001B4EFC;
    case 127u: goto L_001B4F10;
    case 128u: goto L_001B4F20;
    case 129u: goto L_001B4F28;
    case 130u: goto L_001B4F30;
    case 131u: goto L_001B4F50;
    case 132u: goto L_001B4F70;
    case 133u: goto L_001B4F84;
    case 134u: goto L_001B4F8C;
    case 135u: goto L_001B4F94;
    case 136u: goto L_001B4F9C;
    case 137u: goto L_001B4FA4;
    case 138u: goto L_001B4FAC;
    case 139u: goto L_001B4FBC;
    case 140u: goto L_001B5020;
    case 141u: goto L_001B5034;
    case 142u: goto L_001B503C;
    case 143u: goto L_001B504C;
    case 144u: goto L_001B5054;
    case 145u: goto L_001B5068;
    case 146u: goto L_001B5074;
    case 147u: goto L_001B5084;
    case 148u: goto L_001B5094;
    case 149u: goto L_001B509C;
    case 150u: goto L_001B50A4;
    case 151u: goto L_001B50AC;
    case 152u: goto L_001B50BC;
    case 153u: goto L_001B50CC;
    case 154u: goto L_001B50DC;
    case 155u: goto L_001B50EC;
    case 156u: goto L_001B50FC;
    case 157u: goto L_001B510C;
    case 158u: goto L_001B511C;
    case 159u: goto L_001B5124;
    case 160u: goto L_001B512C;
    case 161u: goto L_001B5134;
    case 162u: goto L_001B5150;
    case 163u: goto L_001B5164;
    case 164u: goto L_001B5170;
    case 165u: goto L_001B517C;
    case 166u: goto L_001B5188;
    case 167u: goto L_001B5190;
    case 168u: goto L_001B51B0;
    case 169u: goto L_001B51C0;
    case 170u: goto L_001B51C8;
    case 171u: goto L_001B51D0;
    case 172u: goto L_001B51D8;
    case 173u: goto L_001B51E0;
    case 174u: goto L_001B51E8;
    case 175u: goto L_001B51F0;
    case 176u: goto L_001B51F8;
    case 177u: goto L_001B5200;
    case 178u: goto L_001B5208;
    case 179u: goto L_001B5210;
    case 180u: goto L_001B5218;
    case 181u: goto L_001B5220;
    case 182u: goto L_001B5228;
    case 183u: goto L_001B5234;
    case 184u: goto L_001B523C;
    case 185u: goto L_001B5244;
    case 186u: goto L_001B5260;
    case 187u: goto L_001B5288;
    case 188u: goto L_001B5290;
    case 189u: goto L_001B52A0;
    case 190u: goto L_001B52B0;
    case 191u: goto L_001B52B8;
    case 192u: goto L_001B52C0;
    case 193u: goto L_001B52CC;
    case 194u: goto L_001B52D4;
    case 195u: goto L_001B52DC;
    case 196u: goto L_001B52EC;
    case 197u: goto L_001B52F8;
    case 198u: goto L_001B5308;
    case 199u: goto L_001B531C;
    case 200u: goto L_001B5324;
    case 201u: goto L_001B5334;
    case 202u: goto L_001B533C;
    case 203u: goto L_001B5344;
    case 204u: goto L_001B5350;
    case 205u: goto L_001B5358;
    case 206u: goto L_001B5360;
    case 207u: goto L_001B53FC;
    case 208u: goto L_001B5410;
    case 209u: goto L_001B541C;
    case 210u: goto L_001B542C;
    case 211u: goto L_001B5450;
    case 212u: goto L_001B5460;
    case 213u: goto L_001B5468;
    case 214u: goto L_001B5470;
    case 215u: goto L_001B547C;
    case 216u: goto L_001B5490;
    case 217u: goto L_001B54C4;
    case 218u: goto L_001B54E0;
    case 219u: goto L_001B54E8;
    case 220u: goto L_001B54F0;
    case 221u: goto L_001B54F8;
    case 222u: goto L_001B5508;
    case 223u: goto L_001B5510;
    case 224u: goto L_001B5524;
    case 225u: goto L_001B5538;
    case 226u: goto L_001B5548;
    case 227u: goto L_001B5568;
    case 228u: goto L_001B5570;
    case 229u: goto L_001B5584;
    case 230u: goto L_001B558C;
    case 231u: goto L_001B55AC;
    case 232u: goto L_001B55B4;
    case 233u: goto L_001B55BC;
    case 234u: goto L_001B55C4;
    case 235u: goto L_001B55D0;
    case 236u: goto L_001B55E4;
    case 237u: goto L_001B55F4;
    case 238u: goto L_001B563C;
    case 239u: goto L_001B565C;
    case 240u: goto L_001B5678;
    case 241u: goto L_001B5698;
    case 242u: goto L_001B56A8;
    case 243u: goto L_001B56C8;
    case 244u: goto L_001B56D4;
    case 245u: goto L_001B56E0;
    case 246u: goto L_001B56E8;
    case 247u: goto L_001B56FC;
    case 248u: goto L_001B5704;
    case 249u: goto L_001B573C;
    case 250u: goto L_001B575C;
    case 251u: goto L_001B5778;
    case 252u: goto L_001B5798;
    case 253u: goto L_001B57A8;
    case 254u: goto L_001B57C8;
    case 255u: goto L_001B57E0;
    case 256u: goto L_001B57F8;
    case 257u: goto L_001B5808;
    case 258u: goto L_001B5860;
    case 259u: goto L_001B5870;
    case 260u: goto L_001B58A8;
    case 261u: goto L_001B58B0;
    case 262u: goto L_001B58CC;
    case 263u: goto L_001B58D8;
    case 264u: goto L_001B58F4;
    case 265u: goto L_001B58F8;
    case 266u: goto L_001B5900;
    case 267u: goto L_001B5934;
    case 268u: goto L_001B5948;
    case 269u: goto L_001B5954;
    case 270u: goto L_001B595C;
    case 271u: goto L_001B5980;
    case 272u: goto L_001B59B0;
    case 273u: goto L_001B59EC;
    case 274u: goto L_001B59F0;
    case 275u: goto L_001B59F8;
    case 276u: goto L_001B5A14;
    case 277u: goto L_001B5A28;
    case 278u: goto L_001B5A38;
    case 279u: goto L_001B5A4C;
    case 280u: goto L_001B5A60;
    case 281u: goto L_001B5A68;
    case 282u: goto L_001B5A90;
    case 283u: goto L_001B5AA8;
    case 284u: goto L_001B5AB0;
    case 285u: goto L_001B5AB8;
    case 286u: goto L_001B5AC8;
    case 287u: goto L_001B5AD4;
    case 288u: goto L_001B5ADC;
    case 289u: goto L_001B5AFC;
    case 290u: goto L_001B5B10;
    case 291u: goto L_001B5B18;
    case 292u: goto L_001B5B38;
    case 293u: goto L_001B5B4C;
    case 294u: goto L_001B5B54;
    case 295u: goto L_001B5B74;
    case 296u: goto L_001B5B88;
    case 297u: goto L_001B5B94;
    case 298u: goto L_001B5BA0;
    case 299u: goto L_001B5BC0;
    case 300u: goto L_001B5BE0;
    case 301u: goto L_001B5C00;
    case 302u: goto L_001B5C40;
    case 303u: goto L_001B5C60;
    case 304u: goto L_001B5C70;
    case 305u: goto L_001B5C90;
    case 306u: goto L_001B5CA0;
    case 307u: goto L_001B5CD0;
    case 308u: goto L_001B5CE4;
    case 309u: goto L_001B5D10;
    case 310u: goto L_001B5D24;
    case 311u: goto L_001B5D50;
    case 312u: goto L_001B5D80;
    case 313u: goto L_001B5D98;
    case 314u: goto L_001B5DB0;
    case 315u: goto L_001B5DC0;
    case 316u: goto L_001B5DD0;
    case 317u: goto L_001B5E74;
    case 318u: goto L_001B5EB8;
    case 319u: goto L_001B5EC0;
    case 320u: goto L_001B5EDC;
    case 321u: goto L_001B5EF0;
    case 322u: goto L_001B5F3C;
    case 323u: goto L_001B5F48;
    case 324u: goto L_001B6054;
    case 325u: goto L_001B6098;
    case 326u: goto L_001B60A0;
    case 327u: goto L_001B60BC;
    case 328u: goto L_001B60D0;
    case 329u: goto L_001B60E0;
    case 330u: goto L_001B60F0;
    case 331u: goto L_001B6110;
    case 332u: goto L_001B6120;
    case 333u: goto L_001B6130;
    case 334u: goto L_001B6140;
    case 335u: goto L_001B614C;
    case 336u: goto L_001B6160;
    case 337u: goto L_001B6170;
    case 338u: goto L_001B6190;
    case 339u: goto L_001B61B0;
    case 340u: goto L_001B61BC;
    case 341u: goto L_001B61C8;
    case 342u: goto L_001B61E0;
    case 343u: goto L_001B61F0;
    case 344u: goto L_001B61F8;
    case 345u: goto L_001B6230;
    case 346u: goto L_001B62C8;
    case 347u: goto L_001B62E0;
    case 348u: goto L_001B631C;
    case 349u: goto L_001B6354;
    case 350u: goto L_001B6370;
    case 351u: goto L_001B63C0;
    case 352u: goto L_001B63EC;
    case 353u: goto L_001B6424;
    case 354u: goto L_001B6440;
    case 355u: goto L_001B6484;
    case 356u: goto L_001B64A0;
    case 357u: goto L_001B64AC;
    case 358u: goto L_001B64B4;
    case 359u: goto L_001B64CC;
    case 360u: goto L_001B64F4;
    case 361u: goto L_001B650C;
    case 362u: goto L_001B6528;
    case 363u: goto L_001B6550;
    case 364u: goto L_001B658C;
    case 365u: goto L_001B65A8;
    case 366u: goto L_001B65B4;
    case 367u: goto L_001B65C8;
    case 368u: goto L_001B65F0;
    case 369u: goto L_001B6620;
    case 370u: goto L_001B6638;
    case 371u: goto L_001B6650;
    case 372u: goto L_001B669C;
    case 373u: goto L_001B66AC;
    case 374u: goto L_001B66C0;
    case 375u: goto L_001B66EC;
    case 376u: goto L_001B6708;
    case 377u: goto L_001B672C;
    case 378u: goto L_001B6760;
    case 379u: goto L_001B67A4;
    case 380u: goto L_001B67C0;
    case 381u: goto L_001B67C8;
    case 382u: goto L_001B67D4;
    case 383u: goto L_001B67DC;
    case 384u: goto L_001B67F4;
    case 385u: goto L_001B681C;
    case 386u: goto L_001B6824;
    case 387u: goto L_001B6838;
    case 388u: goto L_001B6864;
    case 389u: goto L_001B6884;
    case 390u: goto L_001B68B0;
    case 391u: goto L_001B68D0;
    case 392u: goto L_001B68E0;
    case 393u: goto L_001B68F4;
    case 394u: goto L_001B6910;
    case 395u: goto L_001B693C;
    case 396u: goto L_001B6950;
    case 397u: goto L_001B696C;
    case 398u: goto L_001B6980;
    case 399u: goto L_001B6994;
    case 400u: goto L_001B69AC;
    case 401u: goto L_001B69D0;
    case 402u: goto L_001B69E0;
    case 403u: goto L_001B69F4;
    case 404u: goto L_001B69FC;
    case 405u: goto L_001B6A04;
    case 406u: goto L_001B6A0C;
    case 407u: goto L_001B6A20;
    case 408u: goto L_001B6A40;
    case 409u: goto L_001B6A60;
    case 410u: goto L_001B6A78;
    case 411u: goto L_001B6AC0;
    case 412u: goto L_001B6AD8;
    case 413u: goto L_001B6AF0;
    case 414u: goto L_001B6B24;
    case 415u: goto L_001B6B40;
    case 416u: goto L_001B6B54;
    case 417u: goto L_001B6B64;
    case 418u: goto L_001B6B78;
    case 419u: goto L_001B6B80;
    case 420u: goto L_001B6B88;
    case 421u: goto L_001B6BB0;
    case 422u: goto L_001B6BC4;
    case 423u: goto L_001B6BD8;
    case 424u: goto L_001B6BF0;
    case 425u: goto L_001B6C1C;
    case 426u: goto L_001B6C30;
    case 427u: goto L_001B6C48;
    case 428u: goto L_001B6C70;
    case 429u: goto L_001B6C90;
    case 430u: goto L_001B6CEC;
    case 431u: goto L_001B6D00;
    case 432u: goto L_001B6EA0;
    case 433u: goto L_001B6F04;
    case 434u: goto L_001B6F10;
    case 435u: goto L_001B6F28;
    case 436u: goto L_001B6F40;
    case 437u: goto L_001B6F50;
    case 438u: goto L_001B6F78;
    case 439u: goto L_001B6F90;
    case 440u: goto L_001B6FA8;
    case 441u: goto L_001B6FB0;
    case 442u: goto L_001B6FBC;
    case 443u: goto L_001B6FEC;
    case 444u: goto L_001B701C;
    case 445u: goto L_001B7040;
    case 446u: goto L_001B7068;
    case 447u: goto L_001B7070;
    case 448u: goto L_001B70A4;
    case 449u: goto L_001B70C0;
    case 450u: goto L_001B70EC;
    case 451u: goto L_001B71E4;
    case 452u: goto L_001B7220;
    case 453u: goto L_001B7230;
    case 454u: goto L_001B7274;
    case 455u: goto L_001B72E0;
    case 456u: goto L_001B7314;
    case 457u: goto L_001B731C;
    case 458u: goto L_001B7350;
    case 459u: goto L_001B7388;
    case 460u: goto L_001B73A4;
    case 461u: goto L_001B73B8;
    case 462u: goto L_001B7440;
    case 463u: goto L_001B7480;
    case 464u: goto L_001B74C4;
    case 465u: goto L_001B7564;
    case 466u: goto L_001B7590;
    case 467u: goto L_001B75A4;
    case 468u: goto L_001B75C0;
    case 469u: goto L_001B75E4;
    case 470u: goto L_001B7600;
    case 471u: goto L_001B7720;
    case 472u: goto L_001B772C;
    case 473u: goto L_001B7770;
    case 474u: goto L_001B77B0;
    case 475u: goto L_001B77C4;
    case 476u: goto L_001B7800;
    case 477u: goto L_001B7840;
    case 478u: goto L_001B786C;
    case 479u: goto L_001B7890;
    case 480u: goto L_001B78C0;
    case 481u: goto L_001B7920;
    case 482u: goto L_001B7950;
    case 483u: goto L_001B7968;
    case 484u: goto L_001B7980;
    case 485u: goto L_001B799C;
    case 486u: goto L_001B79C0;
    case 487u: goto L_001B79F0;
    case 488u: goto L_001B7A50;
    case 489u: goto L_001B7A80;
    case 490u: goto L_001B7A98;
    case 491u: goto L_001B7AB0;
    case 492u: goto L_001B7ACC;
    case 493u: goto L_001B7AF0;
    case 494u: goto L_001B7B08;
    case 495u: goto L_001B7B1C;
    case 496u: goto L_001B7B30;
    case 497u: goto L_001B7B50;
    case 498u: goto L_001B7B70;
    case 499u: goto L_001B7B84;
    case 500u: goto L_001B7BB0;
    case 501u: goto L_001B7BC4;
    case 502u: goto L_001B7BD0;
    case 503u: goto L_001B7BD8;
    case 504u: goto L_001B7BE0;
    case 505u: goto L_001B7BE8;
    case 506u: goto L_001B7BF4;
    case 507u: goto L_001B7C40;
    case 508u: goto L_001B7C84;
    case 509u: goto L_001B7C90;
    case 510u: goto L_001B7CAC;
    case 511u: goto L_001B7CC4;
    case 512u: goto L_001B7CE0;
    case 513u: goto L_001B7D88;
    case 514u: goto L_001B7DA8;
    case 515u: goto L_001B7DB8;
    case 516u: goto L_001B7DC8;
    case 517u: goto L_001B7DFC;
    case 518u: goto L_001B7E30;
    case 519u: goto L_001B7E40;
    case 520u: goto L_001B7E58;
    case 521u: goto L_001B7E6C;
    case 522u: goto L_001B7E80;
    case 523u: goto L_001B7EB4;
    case 524u: goto L_001B7EC0;
    case 525u: goto L_001B7EE0;
    case 526u: goto L_001B7F00;
    case 527u: goto L_001B7F10;
    case 528u: goto L_001B7F20;
    case 529u: goto L_001B7F40;
    case 530u: goto L_001B7F60;
    case 531u: goto L_001B7F70;
    case 532u: goto L_001B7F90;
    case 533u: goto L_001B7FA0;
    case 534u: goto L_001B7FB0;
    case 535u: goto L_001B7FC0;
    case 536u: goto L_001B7FF0;
    default: bad_entry(c, 0x001B4000u); return;
    }
L_001B4000:
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4024u); st32((c.r[16].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_000B(c, 109u, depth + 1u); else { c.pc = 0x0014ECC0u; return; } if (c.pc != 0x001B4024u) [[unlikely]] return; }
L_001B4024:
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4044u); st32((c.r[16].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_000B(c, 100u, depth + 1u); else { c.pc = 0x0014EC30u; return; } if (c.pc != 0x001B4044u) [[unlikely]] return; }
L_001B4044:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_001B40DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4054u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B4054u) [[unlikely]] return; }
L_001B4054:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 128u), c.r[2].w[0]);  goto L_001B4068; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4064u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 345u, depth + 1u); else { c.pc = 0x001B2790u; return; } if (c.pc != 0x001B4064u) [[unlikely]] return; }
L_001B4064:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 1;
L_001B4068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4070u);  if (depth < kMaxDepth) unit_0024(c, 344u, depth + 1u); else { c.pc = 0x001B2780u; return; } if (c.pc != 0x001B4070u) [[unlikely]] return; }
L_001B4070:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4084u); set32(c.r[6], c.r[6].w[0] + 7976u);  if (depth < kMaxDepth) unit_0024(c, 355u, depth + 1u); else { c.pc = 0x001B28C0u; return; } if (c.pc != 0x001B4084u) [[unlikely]] return; }
L_001B4084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B408Cu);  if (depth < kMaxDepth) unit_0024(c, 418u, depth + 1u); else { c.pc = 0x001B3040u; return; } if (c.pc != 0x001B408Cu) [[unlikely]] return; }
L_001B408C:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B40A0u); set32(c.r[6], c.r[6].w[0] + 7992u);  if (depth < kMaxDepth) unit_0024(c, 355u, depth + 1u); else { c.pc = 0x001B28C0u; return; } if (c.pc != 0x001B40A0u) [[unlikely]] return; }
L_001B40A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B40A8u);  if (depth < kMaxDepth) unit_0024(c, 390u, depth + 1u); else { c.pc = 0x001B2CE0u; return; } if (c.pc != 0x001B40A8u) [[unlikely]] return; }
L_001B40A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B40BCu); set32(c.r[6], c.r[6].w[0] + 8008u);  if (depth < kMaxDepth) unit_0024(c, 355u, depth + 1u); else { c.pc = 0x001B28C0u; return; } if (c.pc != 0x001B40BCu) [[unlikely]] return; }
L_001B40BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B40C4u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x001B40C4u) [[unlikely]] return; }
L_001B40C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B40D8u); set32(c.r[6], c.r[6].w[0] + 8024u);  if (depth < kMaxDepth) unit_0024(c, 355u, depth + 1u); else { c.pc = 0x001B28C0u; return; } if (c.pc != 0x001B40D8u) [[unlikely]] return; }
L_001B40D8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001B40DC:
    st32((c.r[28].w[0] - 30680u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B40E8u); st32((c.r[28].w[0] - 31876u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 129u, depth + 1u); else { c.pc = 0x001B0C00u; return; } if (c.pc != 0x001B40E8u) [[unlikely]] return; }
L_001B40E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001B40F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), 0u);  if (t) { goto L_001B40FC; } }
L_001B40F8:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_001B40FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B4E0000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] | 18259ull;
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B4130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B4194; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10736u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001B4174; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B416Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 347u, depth + 1u); else { c.pc = 0x001B27C0u; return; } if (c.pc != 0x001B416Cu) [[unlikely]] return; }
L_001B416C:
    st32((c.r[17].w[0] + 128u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001B4174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B417Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001B417Cu) [[unlikely]] return; }
L_001B417C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001B4198; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4194u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001B4194u) [[unlikely]] return; }
L_001B4194:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B4198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B41B0:
    set32(c.r[7], ld32((c.r[4].w[0] + 60u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_001B41D0; } }
L_001B41C0:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[7], c.r[7].w[0] + 28u);  goto L_001B41D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001B41DC; } }
L_001B41D0:
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[4].w[0] + 68u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B41C0u | kUnwind; return; } goto L_001B41C0; }
L_001B41DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B41F0:
    set32(c.r[10], ld32((c.r[4].w[0] + 60u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_001B425C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001B425C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_001B4224; } }
L_001B4210:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[10], c.r[10].w[0] + 28u);  goto L_001B4220; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_001B4230; } }
L_001B4220:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_001B4224:
    set32(c.r[4], ld32((c.r[10].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4210u | kUnwind; return; } goto L_001B4210; } }
L_001B4230:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001B425C; } }
    set32(c.r[4], 0u + 23u);
    mmi::div(c, 0, c.r[9].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[9].w[0], c.r[4].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_001B427C; } }
L_001B425C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001B426C; } }
    set32(c.r[3], 0u - 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_001B426C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001B427C; } }
    set32(c.r[3], 0u - 1u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_001B427C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4290:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] - c.r[5].w[0]);  if (t) { goto L_001B42CC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B42D0; }
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_001B42D0; } }
L_001B42CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B42D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B42E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B42F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0025(c, 23u, depth + 1u); else { c.pc = 0x001B4290u; return; } if (c.pc != 0x001B42F4u) [[unlikely]] return; }
L_001B42F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001B43A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4308u);  if (depth < kMaxDepth) unit_0011(c, 107u, depth + 1u); else { c.pc = 0x00164CA0u; return; } if (c.pc != 0x001B4308u) [[unlikely]] return; }
L_001B4308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4310u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0011(c, 104u, depth + 1u); else { c.pc = 0x00164C60u; return; } if (c.pc != 0x001B4310u) [[unlikely]] return; }
L_001B4310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001B438C; } }
L_001B4318:
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_001B4398; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], ld32((c.r[3].w[0] + 4u)));  goto L_001B4368; }
    set32(c.r[3], c.r[17].w[0] + 7u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[4], 0u + 60u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8048u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4360u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001B4360u) [[unlikely]] return; }
L_001B4360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_001B438C; } }
L_001B4368:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 60u);
    set32(c.r[6], c.r[6].w[0] + 8080u);
    set32(c.r[3], c.r[17].w[0] + 7u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4388u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001B4388u) [[unlikely]] return; }
L_001B4388:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001B438C:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(23ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4318u | kUnwind; return; } goto L_001B4318; }
L_001B4398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B43A0u);  if (depth < kMaxDepth) unit_0011(c, 113u, depth + 1u); else { c.pc = 0x00164D10u; return; } if (c.pc != 0x001B43A0u) [[unlikely]] return; }
L_001B43A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001B43A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B43C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_001B43FC; }
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], 0u + 23u);
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B43FC; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B43FC; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001B43FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B4454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4434u); set32(c.r[17], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_0025(c, 32u, depth + 1u); else { c.pc = 0x001B43C0u; return; } if (c.pc != 0x001B4434u) [[unlikely]] return; }
L_001B4434:
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 112u)));  goto L_001B444C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), 0u);  if (t) { goto L_001B4454; } }
L_001B444C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 2;
L_001B4454:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B4470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B44AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001B44A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B449Cu);  if (depth < kMaxDepth) unit_0025(c, 32u, depth + 1u); else { c.pc = 0x001B43C0u; return; } if (c.pc != 0x001B449Cu) [[unlikely]] return; }
L_001B449C:
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_001B44AC; } }
L_001B44A8:
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 1;
L_001B44AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B44C0:
    set32(c.r[6], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  if (t) { goto L_001B4518; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], 0u - 1u);  goto L_001B451C; }
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4518; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_001B451C; } }
L_001B4518:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001B451C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4530:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 30632u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4550u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 107u, depth + 1u); else { c.pc = 0x00164CA0u; return; } if (c.pc != 0x001B4550u) [[unlikely]] return; }
L_001B4550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4558u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0011(c, 104u, depth + 1u); else { c.pc = 0x00164C60u; return; } if (c.pc != 0x001B4558u) [[unlikely]] return; }
L_001B4558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4560u);  if (depth < kMaxDepth) unit_0025(c, 329u, depth + 1u); else { c.pc = 0x001B60E0u; return; } if (c.pc != 0x001B4560u) [[unlikely]] return; }
L_001B4560:
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[4], 0u + 36u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 8152u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B457Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001B457Cu) [[unlikely]] return; }
L_001B457C:
    set32(c.r[7], ld32((c.r[18].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 36u);
    set32(c.r[5], 0u + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4594u); set32(c.r[6], c.r[6].w[0] + 8152u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001B4594u) [[unlikely]] return; }
L_001B4594:
    set32(c.r[7], ld32((c.r[28].w[0] - 31872u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[5], 0u + 60u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B45ACu); set32(c.r[6], c.r[6].w[0] + 8152u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001B45ACu) [[unlikely]] return; }
L_001B45AC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[5], 0u + 72u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B45C0u); set32(c.r[6], c.r[6].w[0] + 8160u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001B45C0u) [[unlikely]] return; }
L_001B45C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 600u);
    set32(c.r[5], 0u + 72u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B45D4u); set32(c.r[6], c.r[6].w[0] + 8168u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001B45D4u) [[unlikely]] return; }
L_001B45D4:
    set32(c.r[7], ld32((c.r[28].w[0] - 31872u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[5], 0u + 372u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B45ECu); set32(c.r[6], c.r[6].w[0] + 8152u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001B45ECu) [[unlikely]] return; }
L_001B45EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B45F4u);  if (depth < kMaxDepth) unit_0024(c, 132u, depth + 1u); else { c.pc = 0x001B0C30u; return; } if (c.pc != 0x001B45F4u) [[unlikely]] return; }
L_001B45F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B45FCu); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 133u, depth + 1u); else { c.pc = 0x001B0C40u; return; } if (c.pc != 0x001B45FCu) [[unlikely]] return; }
L_001B45FC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 276u);
    set32(c.r[5], 0u + 384u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4618u); set32(c.r[6], c.r[6].w[0] + 8176u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001B4618u) [[unlikely]] return; }
L_001B4618:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));  goto L_001B4650; }
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 116u), c.r[2].w[0]);  if (t) { goto L_001B464C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4644u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 35u, depth + 1u); else { c.pc = 0x001B4470u; return; } if (c.pc != 0x001B4644u) [[unlikely]] return; }
L_001B4644:
    set32(c.r[2], 0u + 22u);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 2;
L_001B464C:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    c.budget -= 1;
L_001B4650:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 96u));  goto L_001B4688; }
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4680u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 33u, depth + 1u); else { c.pc = 0x001B4410u; return; } if (c.pc != 0x001B4680u) [[unlikely]] return; }
L_001B4680:
    st32((c.r[17].w[0] + 116u), 0u);
    c.budget -= 1;
L_001B4684:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 96u));
    c.budget -= 1;
L_001B4688:
    c.r[2].d[0] = c.r[3].d[0] & 272ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 116u)));  goto L_001B4774; }
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));  goto L_001B46E8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 1;
L_001B46AC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001B46D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B46C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 33u, depth + 1u); else { c.pc = 0x001B4410u; return; } if (c.pc != 0x001B46C8u) [[unlikely]] return; }
L_001B46C8:
    st32((c.r[17].w[0] + 116u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001B46D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B46D8u);  if (depth < kMaxDepth) unit_0025(c, 37u, depth + 1u); else { c.pc = 0x001B44C0u; return; } if (c.pc != 0x001B46D8u) [[unlikely]] return; }
L_001B46D8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B46ACu | kUnwind; return; } goto L_001B46AC; }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    c.budget -= 1;
L_001B46E8:
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 116u)));  goto L_001B4750; }
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 116u), c.r[2].w[0]);  if (t) { goto L_001B4718; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4710u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 35u, depth + 1u); else { c.pc = 0x001B4470u; return; } if (c.pc != 0x001B4710u) [[unlikely]] return; }
L_001B4710:
    set32(c.r[2], 0u + 22u);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 2;
L_001B4718:
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 1;
L_001B471C:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 116u), c.r[2].w[0]);  if (t) { goto L_001B4738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4730u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 35u, depth + 1u); else { c.pc = 0x001B4470u; return; } if (c.pc != 0x001B4730u) [[unlikely]] return; }
L_001B4730:
    set32(c.r[2], 0u + 22u);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 2;
L_001B4738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4740u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 37u, depth + 1u); else { c.pc = 0x001B44C0u; return; } if (c.pc != 0x001B4740u) [[unlikely]] return; }
L_001B4740:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B471Cu | kUnwind; return; } goto L_001B471C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 1;
L_001B4750:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B476Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 33u, depth + 1u); else { c.pc = 0x001B4410u; return; } if (c.pc != 0x001B476Cu) [[unlikely]] return; }
L_001B476C:
    st32((c.r[17].w[0] + 116u), 0u);
    c.budget -= 1;
L_001B4770:
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 1;
L_001B4774:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 48u);
    set32(c.r[6], c.r[6].w[0] + 8192u);
    set32(c.r[3], c.r[2].w[0] + 7u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4794u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001B4794u) [[unlikely]] return; }
L_001B4794:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] & 1028ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));  goto L_001B47B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B47B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 35u, depth + 1u); else { c.pc = 0x001B4470u; return; } if (c.pc != 0x001B47B0u) [[unlikely]] return; }
L_001B47B0:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    c.budget -= 1;
L_001B47B4:
    c.r[2].d[0] = c.r[2].d[0] & 2056ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 112u)));  goto L_001B47D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B47CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 33u, depth + 1u); else { c.pc = 0x001B4410u; return; } if (c.pc != 0x001B47CCu) [[unlikely]] return; }
L_001B47CC:
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_001B47D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B47D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 24u, depth + 1u); else { c.pc = 0x001B42E0u; return; } if (c.pc != 0x001B47D8u) [[unlikely]] return; }
L_001B47D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B47E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 32u, depth + 1u); else { c.pc = 0x001B43C0u; return; } if (c.pc != 0x001B47E0u) [[unlikely]] return; }
L_001B47E0:
    set32(c.r[7], ld32((c.r[17].w[0] + 112u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], c.r[2].w[0] - 1u);
    set32(c.r[4], 0u + 552u);
    set32(c.r[5], 0u + 360u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B47FCu); set32(c.r[6], c.r[6].w[0] + 8200u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001B47FCu) [[unlikely]] return; }
L_001B47FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4804u);  if (depth < kMaxDepth) unit_0011(c, 113u, depth + 1u); else { c.pc = 0x00164D10u; return; } if (c.pc != 0x001B4804u) [[unlikely]] return; }
L_001B4804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B4820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B48CC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B48D0; }
    set32(c.r[3], ld32((c.r[28].w[0] - 31884u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B4868; } }
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_001B48CC; } }
L_001B4868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4870u);  if (depth < kMaxDepth) unit_0025(c, 329u, depth + 1u); else { c.pc = 0x001B60E0u; return; } if (c.pc != 0x001B4870u) [[unlikely]] return; }
L_001B4870:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 31884u)));
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 31876u), c.r[3].w[0]);  if (t) { goto L_001B489C; } }
L_001B488C:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], c.r[4].w[0] + 28u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 4;
L_001B489C:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B488Cu | kUnwind; return; } goto L_001B488C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B48BCu); set32(c.r[7], c.r[16].w[0] + 116u);  if (depth < kMaxDepth) unit_0025(c, 21u, depth + 1u); else { c.pc = 0x001B41F0u; return; } if (c.pc != 0x001B48BCu) [[unlikely]] return; }
L_001B48BC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_001B48D0; } }
L_001B48CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B48D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B48E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4900; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4900; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_001B4900:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4910:
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 13ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_001B4920:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B494C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001B4F34; }
L_001B494C:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4F30; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001B4F30; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], ld32((c.r[28].w[0] - 30632u)));  if (t) { goto L_001B4F30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 8304u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001B4000u < 16384u) { entry = entries_0025[(t - 0x001B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001B4994:
    set32(c.r[4], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld64((c.r[16].w[0] + 80u));  goto L_001B49F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B49ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 38u, depth + 1u); else { c.pc = 0x001B4530u; return; } if (c.pc != 0x001B49ACu) [[unlikely]] return; }
L_001B49AC:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B49F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B49CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 37u, depth + 1u); else { c.pc = 0x001B44C0u; return; } if (c.pc != 0x001B49CCu) [[unlikely]] return; }
L_001B49CC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_001B49F4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B49E8u); st32((c.r[17].w[0] + 68u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0024(c, 608u, depth + 1u); else { c.pc = 0x001B3F60u; return; } if (c.pc != 0x001B49E8u) [[unlikely]] return; }
L_001B49E8:
    st32((c.r[28].w[0] - 31876u), c.r[18].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 3;
L_001B49F4:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 80u));
    c.budget -= 1;
L_001B49F8:
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4F30; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[17].w[0] + 120u), c.r[3].w[0]);  if (t) { goto L_001B4F30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 120u), 0u);  if (t) { goto L_001B4F30; } }
L_001B4A24:
    st32((c.r[17].w[0] + 72u), c.r[5].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30680u), c.r[3].w[0]);  if (t) { goto L_001B4F30; } }
L_001B4A34:
    set32(c.r[3], ld32((c.r[28].w[0] - 30680u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B4F30; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4A4Cu); st32((c.r[17].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 100u, depth + 1u); else { c.pc = 0x0014EC30u; return; } if (c.pc != 0x001B4A4Cu) [[unlikely]] return; }
L_001B4A4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4A5Cu); set32(c.r[4], ld32((c.r[17].w[0] + 128u)));  if (depth < kMaxDepth) unit_0024(c, 358u, depth + 1u); else { c.pc = 0x001B2960u; return; } if (c.pc != 0x001B4A5Cu) [[unlikely]] return; }
L_001B4A5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4F30; } }
L_001B4A64:
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4A70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 19u, depth + 1u); else { c.pc = 0x001B41B0u; return; } if (c.pc != 0x001B4A70u) [[unlikely]] return; }
L_001B4A70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_001B4A90; }
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 80u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_001B4F30; } }
L_001B4A90:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 1u);  goto L_001B4AC4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_001B4AB4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_001B4AD0; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4ABCu);  if (depth < kMaxDepth) unit_0024(c, 309u, depth + 1u); else { c.pc = 0x001B2350u; return; } if (c.pc != 0x001B4ABCu) [[unlikely]] return; }
L_001B4ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4ACC; } }
L_001B4AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4ACCu);  if (depth < kMaxDepth) unit_0024(c, 309u, depth + 1u); else { c.pc = 0x001B2350u; return; } if (c.pc != 0x001B4ACCu) [[unlikely]] return; }
L_001B4ACC:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_001B4AD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B4AE8; } }
    st32((c.r[17].w[0] + 124u), 0u);
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_001B4F30; } }
L_001B4AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4AF0u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x001B5C70u; return; } if (c.pc != 0x001B4AF0u) [[unlikely]] return; }
L_001B4AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4AF8u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001B4AF8u) [[unlikely]] return; }
L_001B4AF8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 124u), c.r[4].w[0]);  goto L_001B4B14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4B0Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 465u, depth + 1u); else { c.pc = 0x001B3250u; return; } if (c.pc != 0x001B4B0Cu) [[unlikely]] return; }
L_001B4B0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 124u), c.r[4].w[0]);
    c.budget -= 2;
L_001B4B14:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B4F30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4B28u); set32(c.r[4], c.r[4].w[0] + 8208u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B4B28u) [[unlikely]] return; }
L_001B4B28:
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4B38u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 497u, depth + 1u); else { c.pc = 0x001B3630u; return; } if (c.pc != 0x001B4B38u) [[unlikely]] return; }
L_001B4B38:
    set32(c.r[2], 0u + 4u);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 2;
L_001B4B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4B48u); set32(c.r[4], ld32((c.r[17].w[0] + 124u)));  if (depth < kMaxDepth) unit_0024(c, 503u, depth + 1u); else { c.pc = 0x001B3710u; return; } if (c.pc != 0x001B4B48u) [[unlikely]] return; }
L_001B4B48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4F30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001B4B64; } }
L_001B4B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4B60u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 192u, depth + 1u); else { c.pc = 0x001B15E0u; return; } if (c.pc != 0x001B4B60u) [[unlikely]] return; }
L_001B4B60:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001B4B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4B6Cu);  if (depth < kMaxDepth) unit_0024(c, 186u, depth + 1u); else { c.pc = 0x001B1550u; return; } if (c.pc != 0x001B4B6Cu) [[unlikely]] return; }
L_001B4B6C:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4B58u | kUnwind; return; } goto L_001B4B58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4B80u);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x001B4B80u) [[unlikely]] return; }
L_001B4B80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4B8Cu); set32(c.r[4], c.r[4].w[0] + 8256u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B4B8Cu) [[unlikely]] return; }
L_001B4B8C:
    set32(c.r[2], 0u + 5u);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 2;
L_001B4B94:
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4BA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 19u, depth + 1u); else { c.pc = 0x001B41B0u; return; } if (c.pc != 0x001B4BA0u) [[unlikely]] return; }
L_001B4BA0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  goto L_001B4BBC; }
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 80u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_001B4F30; } }
L_001B4BBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4BC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B4BC4u) [[unlikely]] return; }
L_001B4BC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_001B4BDC; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_001B4F30; } }
L_001B4BDC:
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], 0u + 6u);
    st32((c.r[17].w[0] + 92u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_001B4F30; } }
L_001B4BF0:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  goto L_001B4D4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4C04u);  if (depth < kMaxDepth) unit_0025(c, 305u, depth + 1u); else { c.pc = 0x001B5C90u; return; } if (c.pc != 0x001B4C04u) [[unlikely]] return; }
L_001B4C04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 108u)));  goto L_001B4C1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4C14u); st32((c.r[17].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_000B(c, 109u, depth + 1u); else { c.pc = 0x0014ECC0u; return; } if (c.pc != 0x001B4C14u) [[unlikely]] return; }
L_001B4C14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_001B4D14; } }
L_001B4C1C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 108u)));  goto L_001B4D18; }
    c.r[4].d[0] = ld64((c.r[16].w[0] + 72u));
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4D08; } }
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4D08; } }
    c.r[3].d[0] = c.r[4].d[0] & 1024ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4D08; } }
    c.r[3].d[0] = c.r[4].d[0] & 2048ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4D08; } }
    set32(c.r[3], 0u + 256u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4D08; } }
    set32(c.r[3], 0u + 512u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4D08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_001B4CB4; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B4CCC; } }
L_001B4CB4:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_001B4CCC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 104u), c.f[1]);  if (t) { goto L_001B4D14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4CF8u);  if (depth < kMaxDepth) unit_000B(c, 109u, depth + 1u); else { c.pc = 0x0014ECC0u; return; } if (c.pc != 0x001B4CF8u) [[unlikely]] return; }
L_001B4CF8:
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_001B4D14; } }
L_001B4D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4D10u);  if (depth < kMaxDepth) unit_000B(c, 109u, depth + 1u); else { c.pc = 0x0014ECC0u; return; } if (c.pc != 0x001B4D10u) [[unlikely]] return; }
L_001B4D10:
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 1;
L_001B4D14:
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 1;
L_001B4D18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4D48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4D28u);  if (depth < kMaxDepth) unit_0025(c, 303u, depth + 1u); else { c.pc = 0x001B5C60u; return; } if (c.pc != 0x001B4D28u) [[unlikely]] return; }
L_001B4D28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4D48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4D38u);  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0014EC20u; return; } if (c.pc != 0x001B4D38u) [[unlikely]] return; }
L_001B4D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4D40u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 608u, depth + 1u); else { c.pc = 0x001B3F60u; return; } if (c.pc != 0x001B4D40u) [[unlikely]] return; }
L_001B4D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4D48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 72u, depth + 1u); else { c.pc = 0x001B48E0u; return; } if (c.pc != 0x001B4D48u) [[unlikely]] return; }
L_001B4D48:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_001B4D4C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4D5Cu);  if (depth < kMaxDepth) unit_0025(c, 303u, depth + 1u); else { c.pc = 0x001B5C60u; return; } if (c.pc != 0x001B4D5Cu) [[unlikely]] return; }
L_001B4D5C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 88u)));  goto L_001B4D74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4D6Cu); st32((c.r[17].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_000B(c, 109u, depth + 1u); else { c.pc = 0x0014ECC0u; return; } if (c.pc != 0x001B4D6Cu) [[unlikely]] return; }
L_001B4D6C:
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 2;
L_001B4D74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[4].d[0] = c.r[3].d[0] | 32768ull;
    set32(c.r[3], 0u + 7u);
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[6].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 100u), 0u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_001B4F30; } }
L_001B4D98:
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B4F30; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4DC4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B4DC4u) [[unlikely]] return; }
L_001B4DC4:
    st32((c.r[17].w[0] + 88u), 0u);
    set32(c.r[3], 0u + 8u);
    st32((c.r[17].w[0] + 100u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_001B4F30; } }
L_001B4DD8:
    set32(c.r[5], ld32((c.r[17].w[0] + 92u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4DE8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 171u, depth + 1u); else { c.pc = 0x001A61F0u; return; } if (c.pc != 0x001B4DE8u) [[unlikely]] return; }
L_001B4DE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4F30; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 96u), 0u);  goto L_001B4E18; }
    set32(c.r[2], 0u + 5u);
    st32((c.r[3].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 124u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
L_001B4E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4E20u); set32(c.r[4], ld32((c.r[28].w[0] - 31876u)));  if (depth < kMaxDepth) unit_0024(c, 610u, depth + 1u); else { c.pc = 0x001B3F80u; return; } if (c.pc != 0x001B4E20u) [[unlikely]] return; }
L_001B4E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4E28u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 613u, depth + 1u); else { c.pc = 0x001B3FB0u; return; } if (c.pc != 0x001B4E28u) [[unlikely]] return; }
L_001B4E28:
    set32(c.r[4], ld32((c.r[28].w[0] - 31884u)));
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 68u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 31876u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 7;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001B4E58; }
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 80u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_001B4F30; } }
L_001B4E58:
    set32(c.r[6], c.r[17].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4E64u); set32(c.r[7], c.r[17].w[0] + 116u);  if (depth < kMaxDepth) unit_0025(c, 21u, depth + 1u); else { c.pc = 0x001B41F0u; return; } if (c.pc != 0x001B4E64u) [[unlikely]] return; }
L_001B4E64:
    set32(c.r[3], 0u + 9u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_001B4F30; } }
L_001B4E74:
    set32(c.r[5], ld32((c.r[17].w[0] + 92u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4E84u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 171u, depth + 1u); else { c.pc = 0x001A61F0u; return; } if (c.pc != 0x001B4E84u) [[unlikely]] return; }
L_001B4E84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4E94u);  if (depth < kMaxDepth) unit_0013(c, 314u, depth + 1u); else { c.pc = 0x0016F520u; return; } if (c.pc != 0x001B4E94u) [[unlikely]] return; }
L_001B4E94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4F30; } }
    st32((c.r[17].w[0] + 92u), 0u);
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_001B4F30; } }
L_001B4EAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B4EC8; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_001B4F30; } }
L_001B4EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4ED0u);  if (depth < kMaxDepth) unit_0024(c, 129u, depth + 1u); else { c.pc = 0x001B0C00u; return; } if (c.pc != 0x001B4ED0u) [[unlikely]] return; }
L_001B4ED0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001B4EE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), 0u);  if (t) { goto L_001B4EE4; } }
L_001B4EE0:
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_001B4EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4EECu);  if (depth < kMaxDepth) unit_000B(c, 100u, depth + 1u); else { c.pc = 0x0014EC30u; return; } if (c.pc != 0x001B4EECu) [[unlikely]] return; }
L_001B4EEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 108u)));  goto L_001B4F00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4EFCu); set32(c.r[4], ld32((c.r[17].w[0] + 128u)));  if (depth < kMaxDepth) unit_0024(c, 368u, depth + 1u); else { c.pc = 0x001B2A60u; return; } if (c.pc != 0x001B4EFCu) [[unlikely]] return; }
L_001B4EFC:
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 1;
L_001B4F00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F10u); st32((c.r[17].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_000B(c, 109u, depth + 1u); else { c.pc = 0x0014ECC0u; return; } if (c.pc != 0x001B4F10u) [[unlikely]] return; }
L_001B4F10:
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_001B4F30; } }
L_001B4F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F28u);  if (depth < kMaxDepth) unit_0025(c, 300u, depth + 1u); else { c.pc = 0x001B5BE0u; return; } if (c.pc != 0x001B4F28u) [[unlikely]] return; }
L_001B4F28:
    set32(c.r[3], 0u + 12u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 2;
L_001B4F30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001B4F34:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B4F50:
    set32(c.r[2], ld32((c.r[28].w[0] - 30680u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B4F64; }
    st32((c.r[28].w[0] - 30680u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001B4F64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 333u, depth + 1u); else { c.pc = 0x001B6130u; return; } if (c.pc != 0x001B4F84u) [[unlikely]] return; }
L_001B4F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F8Cu);  if (depth < kMaxDepth) unit_0025(c, 211u, depth + 1u); else { c.pc = 0x001B5450u; return; } if (c.pc != 0x001B4F8Cu) [[unlikely]] return; }
L_001B4F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F94u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0024(c, 134u, depth + 1u); else { c.pc = 0x001B0C50u; return; } if (c.pc != 0x001B4F94u) [[unlikely]] return; }
L_001B4F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F9Cu); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0025(c, 186u, depth + 1u); else { c.pc = 0x001B5260u; return; } if (c.pc != 0x001B4F9Cu) [[unlikely]] return; }
L_001B4F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4FA4u);  if (depth < kMaxDepth) unit_0025(c, 330u, depth + 1u); else { c.pc = 0x001B60F0u; return; } if (c.pc != 0x001B4FA4u) [[unlikely]] return; }
L_001B4FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4FACu);  if (depth < kMaxDepth) unit_0024(c, 298u, depth + 1u); else { c.pc = 0x001B22B0u; return; } if (c.pc != 0x001B4FACu) [[unlikely]] return; }
L_001B4FAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 27072u);
    set32(c.r[4], c.r[28].w[0] - 30632u);
    c.budget -= 4;
L_001B4FBC:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001B4FD4; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B4FEC; } }
L_001B4FD4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001B4FEC:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 44u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4FBCu | kUnwind; return; } goto L_001B4FBC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B5020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5034u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 329u, depth + 1u); else { c.pc = 0x001B60E0u; return; } if (c.pc != 0x001B5034u) [[unlikely]] return; }
L_001B5034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B503Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0024(c, 331u, depth + 1u); else { c.pc = 0x001B2600u; return; } if (c.pc != 0x001B503Cu) [[unlikely]] return; }
L_001B503C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B519C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B504Cu);  if (depth < kMaxDepth) unit_0008(c, 173u, depth + 1u); else { c.pc = 0x001420D0u; return; } if (c.pc != 0x001B504Cu) [[unlikely]] return; }
L_001B504C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5054u); set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0024(c, 128u, depth + 1u); else { c.pc = 0x001B0BF0u; return; } if (c.pc != 0x001B5054u) [[unlikely]] return; }
L_001B5054:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001B506C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5068u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 130u, depth + 1u); else { c.pc = 0x001B0C10u; return; } if (c.pc != 0x001B5068u) [[unlikely]] return; }
L_001B5068:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B506C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5074u);  if (depth < kMaxDepth) unit_0025(c, 216u, depth + 1u); else { c.pc = 0x001B5490u; return; } if (c.pc != 0x001B5074u) [[unlikely]] return; }
L_001B5074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5084u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 102u, depth + 1u); else { c.pc = 0x00170E50u; return; } if (c.pc != 0x001B5084u) [[unlikely]] return; }
L_001B5084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5094u);  if (depth < kMaxDepth) unit_0024(c, 110u, depth + 1u); else { c.pc = 0x001B0920u; return; } if (c.pc != 0x001B5094u) [[unlikely]] return; }
L_001B5094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B509Cu);  if (depth < kMaxDepth) unit_0024(c, 344u, depth + 1u); else { c.pc = 0x001B2780u; return; } if (c.pc != 0x001B509Cu) [[unlikely]] return; }
L_001B509C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B50A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 205u, depth + 1u); else { c.pc = 0x00171A10u; return; } if (c.pc != 0x001B50A4u) [[unlikely]] return; }
L_001B50A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B50ACu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0024(c, 134u, depth + 1u); else { c.pc = 0x001B0C50u; return; } if (c.pc != 0x001B50ACu) [[unlikely]] return; }
L_001B50AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B50BCu); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0024(c, 411u, depth + 1u); else { c.pc = 0x001B2F50u; return; } if (c.pc != 0x001B50BCu) [[unlikely]] return; }
L_001B50BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B50CCu); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0024(c, 383u, depth + 1u); else { c.pc = 0x001B2BF0u; return; } if (c.pc != 0x001B50CCu) [[unlikely]] return; }
L_001B50CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B50DCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 401u, depth + 1u); else { c.pc = 0x001B2E20u; return; } if (c.pc != 0x001B50DCu) [[unlikely]] return; }
L_001B50DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B50ECu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 391u, depth + 1u); else { c.pc = 0x001B2CF0u; return; } if (c.pc != 0x001B50ECu) [[unlikely]] return; }
L_001B50EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B50FCu); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0025(c, 186u, depth + 1u); else { c.pc = 0x001B5260u; return; } if (c.pc != 0x001B50FCu) [[unlikely]] return; }
L_001B50FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B510Cu);  if (depth < kMaxDepth) unit_0025(c, 402u, depth + 1u); else { c.pc = 0x001B69E0u; return; } if (c.pc != 0x001B510Cu) [[unlikely]] return; }
L_001B510C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B511Cu);  if (depth < kMaxDepth) unit_0025(c, 299u, depth + 1u); else { c.pc = 0x001B5BC0u; return; } if (c.pc != 0x001B511Cu) [[unlikely]] return; }
L_001B511C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5124u);  if (depth < kMaxDepth) unit_0025(c, 330u, depth + 1u); else { c.pc = 0x001B60F0u; return; } if (c.pc != 0x001B5124u) [[unlikely]] return; }
L_001B5124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B512Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 276u, depth + 1u); else { c.pc = 0x001B20F0u; return; } if (c.pc != 0x001B512Cu) [[unlikely]] return; }
L_001B512C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5134u);  if (depth < kMaxDepth) unit_0015(c, 169u, depth + 1u); else { c.pc = 0x00175650u; return; } if (c.pc != 0x001B5134u) [[unlikely]] return; }
L_001B5134:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], 0u + 128u);
    set32(c.r[3], c.r[3].w[0] + 27408u);
    set32(c.r[4], c.r[29].w[0] + 40u);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5150u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0015(c, 170u, depth + 1u); else { c.pc = 0x00175660u; return; } if (c.pc != 0x001B5150u) [[unlikely]] return; }
L_001B5150:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 7u);  goto L_001B5168; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5164u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 403u, depth + 1u); else { c.pc = 0x00173D60u; return; } if (c.pc != 0x001B5164u) [[unlikely]] return; }
L_001B5164:
    set32(c.r[4], 0u + 7u);
    c.budget -= 1;
L_001B5168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5170u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001B5170u) [[unlikely]] return; }
L_001B5170:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B517Cu); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x001B517Cu) [[unlikely]] return; }
L_001B517C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5188u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 390u, depth + 1u); else { c.pc = 0x001B68B0u; return; } if (c.pc != 0x001B5188u) [[unlikely]] return; }
L_001B5188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5190u);  if (depth < kMaxDepth) unit_0024(c, 35u, depth + 1u); else { c.pc = 0x001B02E0u; return; } if (c.pc != 0x001B5190u) [[unlikely]] return; }
L_001B5190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B519C; } }
L_001B5198:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B519C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B51B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B51C0u);  if (depth < kMaxDepth) unit_0014(c, 416u, depth + 1u); else { c.pc = 0x00173F20u; return; } if (c.pc != 0x001B51C0u) [[unlikely]] return; }
L_001B51C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B51C8u);  if (depth < kMaxDepth) unit_0025(c, 394u, depth + 1u); else { c.pc = 0x001B6910u; return; } if (c.pc != 0x001B51C8u) [[unlikely]] return; }
L_001B51C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B51D0u);  if (depth < kMaxDepth) unit_0015(c, 183u, depth + 1u); else { c.pc = 0x00175820u; return; } if (c.pc != 0x001B51D0u) [[unlikely]] return; }
L_001B51D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B51D8u);  if (depth < kMaxDepth) unit_0024(c, 299u, depth + 1u); else { c.pc = 0x001B22C0u; return; } if (c.pc != 0x001B51D8u) [[unlikely]] return; }
L_001B51D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B51E0u);  if (depth < kMaxDepth) unit_0025(c, 333u, depth + 1u); else { c.pc = 0x001B6130u; return; } if (c.pc != 0x001B51E0u) [[unlikely]] return; }
L_001B51E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B51E8u);  if (depth < kMaxDepth) unit_0025(c, 411u, depth + 1u); else { c.pc = 0x001B6AC0u; return; } if (c.pc != 0x001B51E8u) [[unlikely]] return; }
L_001B51E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B51F0u);  if (depth < kMaxDepth) unit_0025(c, 211u, depth + 1u); else { c.pc = 0x001B5450u; return; } if (c.pc != 0x001B51F0u) [[unlikely]] return; }
L_001B51F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B51F8u);  if (depth < kMaxDepth) unit_0024(c, 416u, depth + 1u); else { c.pc = 0x001B3000u; return; } if (c.pc != 0x001B51F8u) [[unlikely]] return; }
L_001B51F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5200u);  if (depth < kMaxDepth) unit_0024(c, 398u, depth + 1u); else { c.pc = 0x001B2DD0u; return; } if (c.pc != 0x001B5200u) [[unlikely]] return; }
L_001B5200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5208u);  if (depth < kMaxDepth) unit_0024(c, 406u, depth + 1u); else { c.pc = 0x001B2ED0u; return; } if (c.pc != 0x001B5208u) [[unlikely]] return; }
L_001B5208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5210u);  if (depth < kMaxDepth) unit_0024(c, 388u, depth + 1u); else { c.pc = 0x001B2CA0u; return; } if (c.pc != 0x001B5210u) [[unlikely]] return; }
L_001B5210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5218u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 205u, depth + 1u); else { c.pc = 0x00171A10u; return; } if (c.pc != 0x001B5218u) [[unlikely]] return; }
L_001B5218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5220u);  if (depth < kMaxDepth) unit_0014(c, 110u, depth + 1u); else { c.pc = 0x00170EF0u; return; } if (c.pc != 0x001B5220u) [[unlikely]] return; }
L_001B5220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5228u);  if (depth < kMaxDepth) unit_0025(c, 258u, depth + 1u); else { c.pc = 0x001B5860u; return; } if (c.pc != 0x001B5228u) [[unlikely]] return; }
L_001B5228:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5234u); set32(c.r[4], c.r[4].w[0] + 8368u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B5234u) [[unlikely]] return; }
L_001B5234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B523Cu);  if (depth < kMaxDepth) unit_0008(c, 172u, depth + 1u); else { c.pc = 0x001420C0u; return; } if (c.pc != 0x001B523Cu) [[unlikely]] return; }
L_001B523C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5244u);  if (depth < kMaxDepth) unit_0024(c, 338u, depth + 1u); else { c.pc = 0x001B26D0u; return; } if (c.pc != 0x001B5244u) [[unlikely]] return; }
L_001B5244:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B5260:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[16], c.r[16].w[0] + 27072u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5288u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 148u, depth + 1u); else { c.pc = 0x001B0F80u; return; } if (c.pc != 0x001B5288u) [[unlikely]] return; }
L_001B5288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5290u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 142u, depth + 1u); else { c.pc = 0x001B0EF0u; return; } if (c.pc != 0x001B5290u) [[unlikely]] return; }
L_001B5290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 27160u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B52A0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 298u, depth + 1u); else { c.pc = 0x00162ED0u; return; } if (c.pc != 0x001B52A0u) [[unlikely]] return; }
L_001B52A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001B5424; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B52B0u);  if (depth < kMaxDepth) unit_0015(c, 202u, depth + 1u); else { c.pc = 0x00175D20u; return; } if (c.pc != 0x001B52B0u) [[unlikely]] return; }
L_001B52B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B52B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 14u, depth + 1u); else { c.pc = 0x00184430u; return; } if (c.pc != 0x001B52B8u) [[unlikely]] return; }
L_001B52B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B52C0u);  if (depth < kMaxDepth) unit_0015(c, 202u, depth + 1u); else { c.pc = 0x00175D20u; return; } if (c.pc != 0x001B52C0u) [[unlikely]] return; }
L_001B52C0:
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B52CCu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (depth < kMaxDepth) unit_0019(c, 13u, depth + 1u); else { c.pc = 0x00184420u; return; } if (c.pc != 0x001B52CCu) [[unlikely]] return; }
L_001B52CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B52D4u);  if (depth < kMaxDepth) unit_0015(c, 202u, depth + 1u); else { c.pc = 0x00175D20u; return; } if (c.pc != 0x001B52D4u) [[unlikely]] return; }
L_001B52D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B52DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 16u, depth + 1u); else { c.pc = 0x00184500u; return; } if (c.pc != 0x001B52DCu) [[unlikely]] return; }
L_001B52DC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001B5300; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B52ECu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0014(c, 203u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x001B52ECu) [[unlikely]] return; }
L_001B52EC:
    set32(c.r[4], 0u + 234u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B52F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 204u, depth + 1u); else { c.pc = 0x00171A00u; return; } if (c.pc != 0x001B52F8u) [[unlikely]] return; }
L_001B52F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 88u)));  if (t) { goto L_001B530C; } }
L_001B5300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5308u);  if (depth < kMaxDepth) unit_0014(c, 203u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x001B5308u) [[unlikely]] return; }
L_001B5308:
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_001B530C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B531Cu); set32(c.r[4], c.r[4].w[0] + 8400u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B531Cu) [[unlikely]] return; }
L_001B531C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5324u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 60u, depth + 1u); else { c.pc = 0x001609F0u; return; } if (c.pc != 0x001B5324u) [[unlikely]] return; }
L_001B5324:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5334u); set32(c.r[4], c.r[4].w[0] + 8448u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B5334u) [[unlikely]] return; }
L_001B5334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B533Cu);  if (depth < kMaxDepth) unit_0024(c, 170u, depth + 1u); else { c.pc = 0x001B13D0u; return; } if (c.pc != 0x001B533Cu) [[unlikely]] return; }
L_001B533C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5344u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 156u, depth + 1u); else { c.pc = 0x0016DC40u; return; } if (c.pc != 0x001B5344u) [[unlikely]] return; }
L_001B5344:
    set32(c.r[4], 0u + 17u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5350u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0013(c, 173u, depth + 1u); else { c.pc = 0x0016DEB0u; return; } if (c.pc != 0x001B5350u) [[unlikely]] return; }
L_001B5350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5358u); c.f[12] = ld32((c.r[28].w[0] - 32664u));  if (depth < kMaxDepth) unit_0013(c, 172u, depth + 1u); else { c.pc = 0x0016DEA0u; return; } if (c.pc != 0x001B5358u) [[unlikely]] return; }
L_001B5358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5360u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 174u, depth + 1u); else { c.pc = 0x0016DED0u; return; } if (c.pc != 0x001B5360u) [[unlikely]] return; }
L_001B5360:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 4u));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001B5378; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B5390; } }
L_001B5378:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_001B5390:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001B53C0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B53DC; } }
L_001B53C0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_001B53DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B53FCu);  if (depth < kMaxDepth) unit_0011(c, 105u, depth + 1u); else { c.pc = 0x00164C70u; return; } if (c.pc != 0x001B53FCu) [[unlikely]] return; }
L_001B53FC:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5410u); set32(c.r[4], c.r[4].w[0] + 8496u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B5410u) [[unlikely]] return; }
L_001B5410:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B541Cu); set32(c.r[4], c.r[4].w[0] + 8544u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B541Cu) [[unlikely]] return; }
L_001B541C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B5430; } }
L_001B5424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B542Cu); set32(c.r[4], c.r[4].w[0] + 8592u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B542Cu) [[unlikely]] return; }
L_001B542C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B5430:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001B5450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5460u);  if (depth < kMaxDepth) unit_0013(c, 162u, depth + 1u); else { c.pc = 0x0016DD20u; return; } if (c.pc != 0x001B5460u) [[unlikely]] return; }
L_001B5460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5468u);  if (depth < kMaxDepth) unit_0024(c, 177u, depth + 1u); else { c.pc = 0x001B1480u; return; } if (c.pc != 0x001B5468u) [[unlikely]] return; }
L_001B5468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5470u);  if (depth < kMaxDepth) unit_0010(c, 378u, depth + 1u); else { c.pc = 0x001639D0u; return; } if (c.pc != 0x001B5470u) [[unlikely]] return; }
L_001B5470:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B547Cu); set32(c.r[4], c.r[4].w[0] + 8640u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B547Cu) [[unlikely]] return; }
L_001B547C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B5490:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30672u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[29].w[0] + 351u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001B5838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B54C4u);  if (depth < kMaxDepth) unit_0025(c, 329u, depth + 1u); else { c.pc = 0x001B60E0u; return; } if (c.pc != 0x001B54C4u) [[unlikely]] return; }
L_001B54C4:
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_001B5500; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B54E0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 27u, depth + 1u); else { c.pc = 0x00128520u; return; } if (c.pc != 0x001B54E0u) [[unlikely]] return; }
L_001B54E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B54E8u);  if (depth < kMaxDepth) unit_0003(c, 126u, depth + 1u); else { c.pc = 0x0012D210u; return; } if (c.pc != 0x001B54E8u) [[unlikely]] return; }
L_001B54E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B54F0u);  if (depth < kMaxDepth) unit_0003(c, 151u, depth + 1u); else { c.pc = 0x0012D8F0u; return; } if (c.pc != 0x001B54F0u) [[unlikely]] return; }
L_001B54F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B54F8u);  if (depth < kMaxDepth) unit_0002(c, 223u, depth + 1u); else { c.pc = 0x0012A080u; return; } if (c.pc != 0x001B54F8u) [[unlikely]] return; }
L_001B54F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 32u)));  if (t) { goto L_001B55F8; } }
L_001B5500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5508u);  if (depth < kMaxDepth) unit_0002(c, 27u, depth + 1u); else { c.pc = 0x00128520u; return; } if (c.pc != 0x001B5508u) [[unlikely]] return; }
L_001B5508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5510u);  if (depth < kMaxDepth) unit_0003(c, 126u, depth + 1u); else { c.pc = 0x0012D210u; return; } if (c.pc != 0x001B5510u) [[unlikely]] return; }
L_001B5510:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001B55C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5524u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 153u, depth + 1u); else { c.pc = 0x001212A0u; return; } if (c.pc != 0x001B5524u) [[unlikely]] return; }
L_001B5524:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 2u);  goto L_001B5540; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5538u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 255u, depth + 1u); else { c.pc = 0x00121F68u; return; } if (c.pc != 0x001B5538u) [[unlikely]] return; }
L_001B5538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[20].w[0] + 80u)));  if (t) { goto L_001B554C; } }
L_001B5540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5548u);  if (depth < kMaxDepth) unit_0000(c, 255u, depth + 1u); else { c.pc = 0x00121F68u; return; } if (c.pc != 0x001B5548u) [[unlikely]] return; }
L_001B5548:
    set32(c.r[7], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 1;
L_001B554C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[6], c.r[6].w[0] + 8672u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5568u); set32(c.r[8], c.r[8].w[0] + 8680u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B5568u) [[unlikely]] return; }
L_001B5568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5570u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0003(c, 230u, depth + 1u); else { c.pc = 0x0012E690u; return; } if (c.pc != 0x001B5570u) [[unlikely]] return; }
L_001B5570:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5568u | kUnwind; return; } goto L_001B5568; } }
L_001B5584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B558Cu);  if (depth < kMaxDepth) unit_0003(c, 225u, depth + 1u); else { c.pc = 0x0012E640u; return; } if (c.pc != 0x001B558Cu) [[unlikely]] return; }
L_001B558C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5584u | kUnwind; return; } goto L_001B5584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B55ACu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 27u, depth + 1u); else { c.pc = 0x00128520u; return; } if (c.pc != 0x001B55ACu) [[unlikely]] return; }
L_001B55AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B55B4u);  if (depth < kMaxDepth) unit_0003(c, 126u, depth + 1u); else { c.pc = 0x0012D210u; return; } if (c.pc != 0x001B55B4u) [[unlikely]] return; }
L_001B55B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B55BCu);  if (depth < kMaxDepth) unit_0003(c, 151u, depth + 1u); else { c.pc = 0x0012D8F0u; return; } if (c.pc != 0x001B55BCu) [[unlikely]] return; }
L_001B55BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B55C4u);  if (depth < kMaxDepth) unit_0002(c, 223u, depth + 1u); else { c.pc = 0x0012A080u; return; } if (c.pc != 0x001B55C4u) [[unlikely]] return; }
L_001B55C4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B55C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B55D0u);  if (depth < kMaxDepth) unit_0000(c, 153u, depth + 1u); else { c.pc = 0x001212A0u; return; } if (c.pc != 0x001B55D0u) [[unlikely]] return; }
L_001B55D0:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 2u);  goto L_001B55EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B55E4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 255u, depth + 1u); else { c.pc = 0x00121F68u; return; } if (c.pc != 0x001B55E4u) [[unlikely]] return; }
L_001B55E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B55F4; } }
L_001B55EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B55F4u);  if (depth < kMaxDepth) unit_0000(c, 255u, depth + 1u); else { c.pc = 0x00121F68u; return; } if (c.pc != 0x001B55F4u) [[unlikely]] return; }
L_001B55F4:
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 1;
L_001B55F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_001B580C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 56u)));  goto L_001B5664; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[7], ld32((c.r[20].w[0] + 76u)));  goto L_001B5644; }
    set32(c.r[2], 0u + 2u);
    set32(c.r[7], ld32((c.r[20].w[0] + 80u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 255u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B563Cu); set32(c.r[6], c.r[6].w[0] + 8672u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B563Cu) [[unlikely]] return; }
L_001B563C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_001B56CC; } }
L_001B5644:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 255u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B565Cu); set32(c.r[6], c.r[6].w[0] + 8696u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B565Cu) [[unlikely]] return; }
L_001B565C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B56C8; } }
L_001B5664:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B56A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5678u);  if (depth < kMaxDepth) unit_0024(c, 464u, depth + 1u); else { c.pc = 0x001B3240u; return; } if (c.pc != 0x001B5678u) [[unlikely]] return; }
L_001B5678:
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[9], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], 0u + 255u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5698u); set32(c.r[6], c.r[6].w[0] + 8704u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B5698u) [[unlikely]] return; }
L_001B5698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B56C8; } }
L_001B56A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B56A8u);  if (depth < kMaxDepth) unit_0024(c, 464u, depth + 1u); else { c.pc = 0x001B3240u; return; } if (c.pc != 0x001B56A8u) [[unlikely]] return; }
L_001B56A8:
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[9], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], 0u + 255u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B56C8u); set32(c.r[6], c.r[6].w[0] + 8752u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B56C8u) [[unlikely]] return; }
L_001B56C8:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_001B56CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B56D4u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001B56D4u) [[unlikely]] return; }
L_001B56D4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B56E0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0025(c, 272u, depth + 1u); else { c.pc = 0x001B59B0u; return; } if (c.pc != 0x001B56E0u) [[unlikely]] return; }
L_001B56E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B56E8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001B56E8u) [[unlikely]] return; }
L_001B56E8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x494F0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B56FCu); c.r[4].d[0] = c.r[2].d[0] | 20557ull;  if (depth < kMaxDepth) unit_0025(c, 259u, depth + 1u); else { c.pc = 0x001B5870u; return; } if (c.pc != 0x001B56FCu) [[unlikely]] return; }
L_001B56FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B5834; } }
L_001B5704:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 56u)));  goto L_001B5764; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[7], ld32((c.r[20].w[0] + 76u)));  goto L_001B5744; }
    set32(c.r[2], 0u + 2u);
    set32(c.r[7], ld32((c.r[20].w[0] + 80u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 255u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B573Cu); set32(c.r[6], c.r[6].w[0] + 8672u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B573Cu) [[unlikely]] return; }
L_001B573C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_001B57CC; } }
L_001B5744:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 255u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B575Cu); set32(c.r[6], c.r[6].w[0] + 8696u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B575Cu) [[unlikely]] return; }
L_001B575C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B57C8; } }
L_001B5764:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B57A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5778u);  if (depth < kMaxDepth) unit_0024(c, 464u, depth + 1u); else { c.pc = 0x001B3240u; return; } if (c.pc != 0x001B5778u) [[unlikely]] return; }
L_001B5778:
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], ld32((c.r[20].w[0] + 60u)));
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 255u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5798u); set32(c.r[6], c.r[6].w[0] + 8704u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B5798u) [[unlikely]] return; }
L_001B5798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B57C8; } }
L_001B57A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B57A8u);  if (depth < kMaxDepth) unit_0024(c, 464u, depth + 1u); else { c.pc = 0x001B3240u; return; } if (c.pc != 0x001B57A8u) [[unlikely]] return; }
L_001B57A8:
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], ld32((c.r[20].w[0] + 60u)));
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 255u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B57C8u); set32(c.r[6], c.r[6].w[0] + 8752u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B57C8u) [[unlikely]] return; }
L_001B57C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_001B57CC:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B57E0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0003(c, 192u, depth + 1u); else { c.pc = 0x0012E160u; return; } if (c.pc != 0x001B57E0u) [[unlikely]] return; }
L_001B57E0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001B5800; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B57F8u); set32(c.r[4], c.r[4].w[0] + 8800u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B57F8u) [[unlikely]] return; }
L_001B57F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B583C; } }
L_001B5800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5808u);  if (depth < kMaxDepth) unit_0025(c, 282u, depth + 1u); else { c.pc = 0x001B5A90u; return; } if (c.pc != 0x001B5808u) [[unlikely]] return; }
L_001B5808:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001B580C:
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5704u | kUnwind; return; } goto L_001B5704; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B5834:
    st32((c.r[28].w[0] - 30672u), c.r[2].w[0]);
    c.budget -= 1;
L_001B5838:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B583C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_001B5860:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5870:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001B5970; } }
L_001B58A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B58B0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x001B58B0u) [[unlikely]] return; }
L_001B58B0:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_001B5960; }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[22], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B58CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 130u, depth + 1u); else { c.pc = 0x0012D298u; return; } if (c.pc != 0x001B58CCu) [[unlikely]] return; }
L_001B58CC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B58D8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 147u, depth + 1u); else { c.pc = 0x001251E0u; return; } if (c.pc != 0x001B58D8u) [[unlikely]] return; }
L_001B58D8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0] + 128u), c.r[22].w[0]);
    st32((c.r[29].w[0] + 136u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B58F4u); st32((c.r[29].w[0] + 140u), 0u);  if (depth < kMaxDepth) unit_0001(c, 161u, depth + 1u); else { c.pc = 0x00125320u; return; } if (c.pc != 0x001B58F4u) [[unlikely]] return; }
L_001B58F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B58F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5900u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 159u, depth + 1u); else { c.pc = 0x00125300u; return; } if (c.pc != 0x001B5900u) [[unlikely]] return; }
L_001B5900:
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B58F8u | kUnwind; return; } goto L_001B58F8; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5934u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 180u, depth + 1u); else { c.pc = 0x0012DEF8u; return; } if (c.pc != 0x001B5934u) [[unlikely]] return; }
L_001B5934:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001B594C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5948u); set32(c.r[4], c.r[4].w[0] + 8832u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B5948u) [[unlikely]] return; }
L_001B5948:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001B594C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5954u);  if (depth < kMaxDepth) unit_0003(c, 134u, depth + 1u); else { c.pc = 0x0012D400u; return; } if (c.pc != 0x001B5954u) [[unlikely]] return; }
L_001B5954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B595Cu);  if (depth < kMaxDepth) unit_0025(c, 282u, depth + 1u); else { c.pc = 0x001B5A90u; return; } if (c.pc != 0x001B595Cu) [[unlikely]] return; }
L_001B595C:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_001B5960:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_001B5970:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x454F0000u);
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5980u); c.r[4].d[0] = c.r[2].d[0] | 17987ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x001B5980u) [[unlikely]] return; }
L_001B5980:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B58A8u | kUnwind; return; } goto L_001B58A8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001B59B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001B5A68; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001B59E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001B5A6C; } }
L_001B59E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B59ECu);  if (depth < kMaxDepth) unit_008F(c, 6u, depth + 1u); else { c.pc = 0x0035C0B0u; return; } if (c.pc != 0x001B59ECu) [[unlikely]] return; }
L_001B59EC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001B59F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B59F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 247u, depth + 1u); else { c.pc = 0x0012A2E8u; return; } if (c.pc != 0x001B59F8u) [[unlikely]] return; }
L_001B59F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] < 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B59F0u | kUnwind; return; } goto L_001B59F0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A14u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 279u, depth + 1u); else { c.pc = 0x0012A6F0u; return; } if (c.pc != 0x001B5A14u) [[unlikely]] return; }
L_001B5A14:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 279u, depth + 1u); else { c.pc = 0x0012A6F0u; return; } if (c.pc != 0x001B5A28u) [[unlikely]] return; }
L_001B5A28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A38u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 295u, depth + 1u); else { c.pc = 0x0012A930u; return; } if (c.pc != 0x001B5A38u) [[unlikely]] return; }
L_001B5A38:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001B5A58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 267u, depth + 1u); else { c.pc = 0x0012A578u; return; } if (c.pc != 0x001B5A4Cu) [[unlikely]] return; }
L_001B5A4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B59ECu | kUnwind; return; } goto L_001B59EC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B5A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A60u);  if (depth < kMaxDepth) unit_0002(c, 267u, depth + 1u); else { c.pc = 0x0012A578u; return; } if (c.pc != 0x001B5A60u) [[unlikely]] return; }
L_001B5A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A68u);  if (depth < kMaxDepth) unit_008F(c, 7u, depth + 1u); else { c.pc = 0x0035C0C8u; return; } if (c.pc != 0x001B5A68u) [[unlikely]] return; }
L_001B5A68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001B5A6C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B5A90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5AA8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0003(c, 136u, depth + 1u); else { c.pc = 0x0012D510u; return; } if (c.pc != 0x001B5AA8u) [[unlikely]] return; }
L_001B5AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5AB0u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 140u, depth + 1u); else { c.pc = 0x0012D5F0u; return; } if (c.pc != 0x001B5AB0u) [[unlikely]] return; }
L_001B5AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5AB8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 138u, depth + 1u); else { c.pc = 0x0012D580u; return; } if (c.pc != 0x001B5AB8u) [[unlikely]] return; }
L_001B5AB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5AC8u); set32(c.r[4], c.r[4].w[0] + 8872u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B5AC8u) [[unlikely]] return; }
L_001B5AC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5AD4u); set32(c.r[4], c.r[4].w[0] + 8880u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B5AD4u) [[unlikely]] return; }
L_001B5AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5ADCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x001B5ADCu) [[unlikely]] return; }
L_001B5ADC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49800000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5AFCu);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001B5AFCu) [[unlikely]] return; }
L_001B5AFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B10u); set32(c.r[4], c.r[4].w[0] + 8928u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B5B10u) [[unlikely]] return; }
L_001B5B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x001B5B18u) [[unlikely]] return; }
L_001B5B18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49800000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B38u);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001B5B38u) [[unlikely]] return; }
L_001B5B38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B4Cu); set32(c.r[4], c.r[4].w[0] + 8960u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B5B4Cu) [[unlikely]] return; }
L_001B5B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x001B5B54u) [[unlikely]] return; }
L_001B5B54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49800000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B74u);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001B5B74u) [[unlikely]] return; }
L_001B5B74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B88u); set32(c.r[4], c.r[4].w[0] + 8992u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B5B88u) [[unlikely]] return; }
L_001B5B88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B94u); set32(c.r[4], c.r[4].w[0] + 9024u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B5B94u) [[unlikely]] return; }
L_001B5B94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5BA0u); set32(c.r[4], c.r[4].w[0] + 8872u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B5BA0u) [[unlikely]] return; }
L_001B5BA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B5BC0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 30668u), 0u);
    st32((c.r[28].w[0] - 30664u), 0u);
    st32((c.r[28].w[0] - 31868u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30660u), 0u);  c.pc = t; return; }
L_001B5BE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30664u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B5BF4; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 30668u), c.r[3].w[0]);
    c.budget -= 2;
L_001B5BF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5C00:
    set32(c.r[3], ld32((c.r[28].w[0] - 30660u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] << 32;  goto L_001B5C20; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 30660u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 5;
L_001B5C20:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B5C38; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 30664u), 0u);
    st32((c.r[28].w[0] - 31868u), c.r[3].w[0]);
    c.budget -= 3;
L_001B5C38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5C40:
    set32(c.r[3], ld32((c.r[28].w[0] - 30660u)));
    st32((c.r[28].w[0] - 31868u), 0u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30660u), c.r[3].w[0]);  c.pc = t; return; }
L_001B5C60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 31868u)));  c.pc = t; return; }
L_001B5C70:
    set32(c.r[4], ld32((c.r[28].w[0] - 30660u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 30664u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 31868u), 0u);
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30660u), c.r[3].w[0]);  c.pc = t; return; }
L_001B5C90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30664u)));  c.pc = t; return; }
L_001B5CA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30668u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B5CC4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31868u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B5CC4; } }
L_001B5CC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B5CC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5CE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 153u, depth + 1u); else { c.pc = 0x001A5D90u; return; } if (c.pc != 0x001B5CE4u) [[unlikely]] return; }
L_001B5CE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 10800u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B5D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5D24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 156u, depth + 1u); else { c.pc = 0x001A5E90u; return; } if (c.pc != 0x001B5D24u) [[unlikely]] return; }
L_001B5D24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 10800u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B5D50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B5D98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5D80u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0021(c, 159u, depth + 1u); else { c.pc = 0x001A5F90u; return; } if (c.pc != 0x001B5D80u) [[unlikely]] return; }
L_001B5D80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001B5D9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5D98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001B5D98u) [[unlikely]] return; }
L_001B5D98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B5D9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B5DB0:
    c.budget -= 2;
    { set32(c.r[5], c.r[31].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2710u | kUnwind; return; } [[clang::musttail]] return unit_0024(c, 340u, depth); }
L_001B5DC0:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2760u | kUnwind; return; } [[clang::musttail]] return unit_0024(c, 343u, depth); }
L_001B5DD0:
    set32(c.r[29], c.r[29].w[0] - 624u);
    set32(c.r[2], 0u + 40u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 41u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 576u), c.r[6].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 584u), c.r[7].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st64((c.r[29].w[0] + 592u), c.r[8].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0] + 600u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 608u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 616u), c.r[11].d[0]);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 543u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 47u);
    set32(c.r[7], ld32((c.r[4].w[0])));
    st8((c.r[29].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[7].d[0] & c.r[6].d[0];
    st8((c.r[29].w[0] + 38u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[4].w[0] << 24);
    c.r[2].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[7].d[0] & 65280ull;
    set32(c.r[3], c.r[3].w[0] >> 8);
    set32(c.r[5], c.r[4].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[29].w[0] + 39u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], c.r[3].w[0] >> 24);
    st8((c.r[29].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] >> 16);
    st8((c.r[29].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] >> 8);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5E74u); st8((c.r[29].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001B5E74u) [[unlikely]] return; }
L_001B5E74:
    set32(c.r[4], 0u + 2u);
    c.r[3].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 8u);  goto L_001B5E8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B5E94; } }
L_001B5E8C:
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    c.budget -= 2;
L_001B5E94:
    set32(c.r[3], c.r[29].w[0] + 624u);
    c.r[6].d[0] = c.r[16].d[0] << 32;
    set32(c.r[7], c.r[3].w[0] - c.r[4].w[0]);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[3].w[0] + 32u);
    set32(c.r[3], 0u + 510u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5EB8u); set32(c.r[5], c.r[3].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 326u, depth + 1u); else { c.pc = 0x0014BE60u; return; } if (c.pc != 0x001B5EB8u) [[unlikely]] return; }
L_001B5EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5EC0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001B5EC0u) [[unlikely]] return; }
L_001B5EC0:
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 33u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5EDCu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0024(c, 115u, depth + 1u); else { c.pc = 0x001B0980u; return; } if (c.pc != 0x001B5EDCu) [[unlikely]] return; }
L_001B5EDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 624u);  c.pc = t; return; }
L_001B5EF0:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 592u), c.r[6].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 600u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 608u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 616u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 624u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 632u), c.r[11].d[0]);
    st8((c.r[29].w[0] + 559u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[31].w[0] - 8u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 511u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5F3Cu); set32(c.r[6], c.r[6].w[0] + 9064u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B5F3Cu) [[unlikely]] return; }
L_001B5F3C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5F48u); st8((c.r[29].w[0] + 559u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001B5F48u) [[unlikely]] return; }
L_001B5F48:
    set32(c.r[5], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], 0u + 40u);
    st8((c.r[5].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[11], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[7], 0u + 41u);
    set32(c.r[6], 0u + 47u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[9].d[0] = c.r[11].d[0] & 255ull;
    c.r[8].d[0] = c.r[11].d[0] & 65280ull;
    set32(c.r[9], c.r[9].w[0] << 24);
    set32(c.r[8], c.r[8].w[0] << 8);
    c.r[10].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[8].d[0] = c.r[11].d[0] & c.r[3].d[0];
    set32(c.r[9], c.r[8].w[0] >> 8);
    c.r[8].d[0] = c.r[11].d[0] & c.r[2].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    set32(c.r[8], c.r[8].w[0] >> 24);
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    set32(c.r[8], c.r[8].w[0] >> 24);
    st8((c.r[5].w[0] + 49u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[11], ld32((c.r[16].w[0])));
    c.r[9].d[0] = c.r[11].d[0] & 255ull;
    c.r[8].d[0] = c.r[11].d[0] & 65280ull;
    set32(c.r[9], c.r[9].w[0] << 24);
    set32(c.r[8], c.r[8].w[0] << 8);
    c.r[10].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[8].d[0] = c.r[11].d[0] & c.r[3].d[0];
    set32(c.r[9], c.r[8].w[0] >> 8);
    c.r[8].d[0] = c.r[11].d[0] & c.r[2].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    set32(c.r[8], c.r[8].w[0] >> 24);
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    set32(c.r[8], c.r[8].w[0] >> 16);
    st8((c.r[5].w[0] + 50u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[11], ld32((c.r[16].w[0])));
    c.r[9].d[0] = c.r[11].d[0] & 255ull;
    c.r[8].d[0] = c.r[11].d[0] & 65280ull;
    set32(c.r[9], c.r[9].w[0] << 24);
    set32(c.r[8], c.r[8].w[0] << 8);
    c.r[10].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[8].d[0] = c.r[11].d[0] & c.r[3].d[0];
    set32(c.r[9], c.r[8].w[0] >> 8);
    c.r[8].d[0] = c.r[11].d[0] & c.r[2].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    set32(c.r[8], c.r[8].w[0] >> 24);
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    set32(c.r[8], c.r[8].w[0] >> 8);
    st8((c.r[5].w[0] + 51u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[8], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[9].d[0] = c.r[8].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[8].d[0] = c.r[8].d[0] & 65280ull;
    set32(c.r[9], c.r[9].w[0] << 24);
    set32(c.r[8], c.r[8].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[5].w[0] + 53u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 54u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 67;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6054u); st8((c.r[5].w[0] + 55u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001B6054u) [[unlikely]] return; }
L_001B6054:
    set32(c.r[4], 0u + 2u);
    c.r[3].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 8u);  goto L_001B606C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B6074; } }
L_001B606C:
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    c.budget -= 2;
L_001B6074:
    set32(c.r[3], c.r[29].w[0] + 640u);
    c.r[6].d[0] = c.r[17].d[0] << 32;
    set32(c.r[7], c.r[3].w[0] - c.r[4].w[0]);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[3].w[0] + 48u);
    set32(c.r[3], 0u + 511u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6098u); set32(c.r[5], c.r[3].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 326u, depth + 1u); else { c.pc = 0x0014BE60u; return; } if (c.pc != 0x001B6098u) [[unlikely]] return; }
L_001B6098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B60A0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001B60A0u) [[unlikely]] return; }
L_001B60A0:
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 49u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B60BCu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0024(c, 115u, depth + 1u); else { c.pc = 0x001B0980u; return; } if (c.pc != 0x001B60BCu) [[unlikely]] return; }
L_001B60BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_001B60D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30656u), c.r[4].w[0]);  c.pc = t; return; }
L_001B60E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30656u)));  c.pc = t; return; }
L_001B60F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 24944u);
    st32((c.r[28].w[0] - 30648u), 0u);
    st32((c.r[28].w[0] - 30644u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6110u); st32((c.r[28].w[0] - 30640u), 0u);  if (depth < kMaxDepth) unit_0011(c, 349u, depth + 1u); else { c.pc = 0x001670A0u; return; } if (c.pc != 0x001B6110u) [[unlikely]] return; }
L_001B6110:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[28].w[0] - 30652u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6120u); set32(c.r[4], c.r[4].w[0] + 9072u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B6120u) [[unlikely]] return; }
L_001B6120:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B6130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6140u); set32(c.r[4], ld32((c.r[28].w[0] - 30652u)));  if (depth < kMaxDepth) unit_0011(c, 353u, depth + 1u); else { c.pc = 0x00167100u; return; } if (c.pc != 0x001B6140u) [[unlikely]] return; }
L_001B6140:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B614Cu); set32(c.r[4], c.r[4].w[0] + 9120u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B614Cu) [[unlikely]] return; }
L_001B614C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B6160:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30648u)));  c.pc = t; return; }
L_001B6170:
    set32(c.r[4], ld32((c.r[28].w[0] - 30648u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30640u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 30648u), c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30640u), c.r[3].w[0]);  c.pc = t; return; }
L_001B6190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B61B0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 147u, depth + 1u); else { c.pc = 0x001251E0u; return; } if (c.pc != 0x001B61B0u) [[unlikely]] return; }
L_001B61B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B61BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 368u, depth + 1u); else { c.pc = 0x00123790u; return; } if (c.pc != 0x001B61BCu) [[unlikely]] return; }
L_001B61BC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B61C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 378u, depth + 1u); else { c.pc = 0x00123888u; return; } if (c.pc != 0x001B61C8u) [[unlikely]] return; }
L_001B61C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B61E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
L_001B61F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B61F8u);  if (depth < kMaxDepth) unit_0024(c, 308u, depth + 1u); else { c.pc = 0x001B2340u; return; } if (c.pc != 0x001B61F8u) [[unlikely]] return; }
L_001B61F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30640u)));
    c.r[3].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B61F0u | kUnwind; return; } goto L_001B61F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30644u)));
    st32((c.r[28].w[0] - 30640u), 0u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 30644u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B6230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[6].d[0] = c.r[2].d[0] | 16706ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54410000u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 10928u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 16967ull;
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 21;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001B628C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[5].w[0]);  if (t) { goto L_001B6294; } }
L_001B628C:
    set32(c.r[5], ld32((c.r[28].w[0] - 30636u)));
    st32((c.r[16].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 2;
L_001B6294:
    st32((c.r[16].w[0] + 24u), 0u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001B62C0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001B62CC; } }
L_001B62C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B62C8u);  if (depth < kMaxDepth) unit_0025(c, 374u, depth + 1u); else { c.pc = 0x001B66C0u; return; } if (c.pc != 0x001B62C8u) [[unlikely]] return; }
L_001B62C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B62CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B62E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B6354; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10928u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B631C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B631Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 378u, depth + 1u); else { c.pc = 0x001B6760u; return; } if (c.pc != 0x001B631Cu) [[unlikely]] return; }
L_001B631C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_001B6340; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_001B6340:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001B6358; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6354u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001B6354u) [[unlikely]] return; }
L_001B6354:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B6358:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B6370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[3], c.r[3].w[0] + 10904u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), 0u);  c.pc = t; return; }
L_001B63C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B6424; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10904u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B63ECu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 363u, depth + 1u); else { c.pc = 0x001B6550u; return; } if (c.pc != 0x001B63ECu) [[unlikely]] return; }
L_001B63EC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_001B6410; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_001B6410:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001B6428; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6424u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001B6424u) [[unlikely]] return; }
L_001B6424:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B6428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B6440:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 28u), c.r[20].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B6498; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6484u); set32(c.r[4], c.r[4].w[0] + 9168u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B6484u) [[unlikely]] return; }
L_001B6484:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001B6528; } }
L_001B6498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B64A0u);  if (depth < kMaxDepth) unit_0015(c, 167u, depth + 1u); else { c.pc = 0x00175620u; return; } if (c.pc != 0x001B64A0u) [[unlikely]] return; }
L_001B64A0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B64ACu); set32(c.r[4], 0u + 120u);  if (depth < kMaxDepth) unit_0015(c, 168u, depth + 1u); else { c.pc = 0x00175630u; return; } if (c.pc != 0x001B64ACu) [[unlikely]] return; }
L_001B64AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B64B4u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B64B4u) [[unlikely]] return; }
L_001B64B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B64E8; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B64CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00174DD0u; return; } if (c.pc != 0x001B64CCu) [[unlikely]] return; }
L_001B64CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54420000u);
    set32(c.r[3], c.r[3].w[0] + 10864u);
    c.r[2].d[0] = c.r[2].d[0] | 21831ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 184u), 0u);
    c.budget -= 7;
L_001B64E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B64F4u); st32((c.r[16].w[0] + 24u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0015(c, 168u, depth + 1u); else { c.pc = 0x00175630u; return; } if (c.pc != 0x001B64F4u) [[unlikely]] return; }
L_001B64F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001B6520; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B650Cu); set32(c.r[4], c.r[4].w[0] + 9168u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B650Cu) [[unlikely]] return; }
L_001B650C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001B6528; } }
L_001B6520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6528u);  if (depth < kMaxDepth) unit_0015(c, 157u, depth + 1u); else { c.pc = 0x00175500u; return; } if (c.pc != 0x001B6528u) [[unlikely]] return; }
L_001B6528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B6550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B65AC; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_001B6584; }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st16((c.r[3].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
L_001B6584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B658Cu);  if (depth < kMaxDepth) unit_0015(c, 149u, depth + 1u); else { c.pc = 0x00175440u; return; } if (c.pc != 0x001B658Cu) [[unlikely]] return; }
L_001B658C:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 24u), 0u);  goto L_001B65AC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B65A8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B65A8u) [[unlikely]] return; }
L_001B65A8:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_001B65AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001B65CC; } }
L_001B65B4:
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B65C8u); st16((c.r[3].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001B65C8u) [[unlikely]] return; }
L_001B65C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B65CC:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B65B4u | kUnwind; return; } goto L_001B65B4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B65F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B6638; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10864u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6620u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0015(c, 100u, depth + 1u); else { c.pc = 0x00174E70u; return; } if (c.pc != 0x001B6620u) [[unlikely]] return; }
L_001B6620:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001B663C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6638u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001B6638u) [[unlikely]] return; }
L_001B6638:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B663C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B6650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001B66B0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 184u);  if (t) { goto L_001B66A0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_001B66A4; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B669Cu); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001B669Cu) [[unlikely]] return; }
L_001B669C:
    st32((c.r[17].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 1;
L_001B66A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_001B66A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B66ACu);  if (depth < kMaxDepth) unit_0015(c, 146u, depth + 1u); else { c.pc = 0x00175410u; return; } if (c.pc != 0x001B66ACu) [[unlikely]] return; }
L_001B66AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001B66B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B66C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B670C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B66ECu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B66ECu) [[unlikely]] return; }
L_001B66EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001B6740; } }
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001B6744; } }
L_001B6708:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B670C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6708u | kUnwind; return; } goto L_001B6708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B672Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B672Cu) [[unlikely]] return; }
L_001B672C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001B6740; } }
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 3;
L_001B6740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001B6744:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B6760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B682C; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[17].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  goto L_001B6830; }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st16((c.r[3].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B67A4u); set32(c.r[4], ld32((c.r[18].w[0] + 24u)));  if (depth < kMaxDepth) unit_0015(c, 149u, depth + 1u); else { c.pc = 0x00175440u; return; } if (c.pc != 0x001B67A4u) [[unlikely]] return; }
L_001B67A4:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B67C0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B67C0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B67C0u) [[unlikely]] return; }
L_001B67C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B67C8u);  if (depth < kMaxDepth) unit_0015(c, 167u, depth + 1u); else { c.pc = 0x00175620u; return; } if (c.pc != 0x001B67C8u) [[unlikely]] return; }
L_001B67C8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B67D4u); set32(c.r[4], 0u + 120u);  if (depth < kMaxDepth) unit_0015(c, 168u, depth + 1u); else { c.pc = 0x00175630u; return; } if (c.pc != 0x001B67D4u) [[unlikely]] return; }
L_001B67D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B67DCu); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B67DCu) [[unlikely]] return; }
L_001B67DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B6810; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B67F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00174DD0u; return; } if (c.pc != 0x001B67F4u) [[unlikely]] return; }
L_001B67F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54420000u);
    set32(c.r[3], c.r[3].w[0] + 10864u);
    c.r[2].d[0] = c.r[2].d[0] | 21831ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    c.budget -= 7;
L_001B6810:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B681Cu); st32((c.r[18].w[0] + 24u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0015(c, 168u, depth + 1u); else { c.pc = 0x00175630u; return; } if (c.pc != 0x001B681Cu) [[unlikely]] return; }
L_001B681C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6824u); set32(c.r[4], ld32((c.r[18].w[0] + 24u)));  if (depth < kMaxDepth) unit_0015(c, 157u, depth + 1u); else { c.pc = 0x00175500u; return; } if (c.pc != 0x001B6824u) [[unlikely]] return; }
L_001B6824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001B689C; } }
L_001B682C:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_001B6830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001B6890; } }
L_001B6838:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[17].d[0]) { c.r[16].d[0] = c.r[4].d[0] + 0ull;  goto L_001B688C; }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_001B686C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6864u); st16((c.r[3].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001B6864u) [[unlikely]] return; }
L_001B6864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_001B6890; } }
L_001B686C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6884u); st16((c.r[3].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001B6884u) [[unlikely]] return; }
L_001B6884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_001B6890; } }
L_001B688C:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_001B6890:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6838u | kUnwind; return; } goto L_001B6838; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001B689C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B68B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B68D0u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B68D0u) [[unlikely]] return; }
L_001B68D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001B68E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B68E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 350u, depth + 1u); else { c.pc = 0x001B6370u; return; } if (c.pc != 0x001B68E0u) [[unlikely]] return; }
L_001B68E0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B68E4:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[28].w[0] - 30636u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B68F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 354u, depth + 1u); else { c.pc = 0x001B6440u; return; } if (c.pc != 0x001B68F4u) [[unlikely]] return; }
L_001B68F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B6910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30636u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B6944; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 30636u), 0u);  goto L_001B6940; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B693Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B693Cu) [[unlikely]] return; }
L_001B693C:
    st32((c.r[28].w[0] - 30636u), 0u);
    c.budget -= 1;
L_001B6940:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B6944:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B6950:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30636u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B6970; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B696Cu);  if (depth < kMaxDepth) unit_0025(c, 371u, depth + 1u); else { c.pc = 0x001B6650u; return; } if (c.pc != 0x001B696Cu) [[unlikely]] return; }
L_001B696C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B6970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B6980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 5;
L_001B6994:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001B69C8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B69ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B69ACu) [[unlikely]] return; }
L_001B69AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
L_001B69C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B69D0u);  if (depth < kMaxDepth) unit_0015(c, 145u, depth + 1u); else { c.pc = 0x00175400u; return; } if (c.pc != 0x001B69D0u) [[unlikely]] return; }
L_001B69D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 184u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6994u | kUnwind; return; } goto L_001B6994; } }
    c.budget -= 2;
L_001B69E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B69F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0016(c, 139u, depth + 1u); else { c.pc = 0x00179C10u; return; } if (c.pc != 0x001B69F4u) [[unlikely]] return; }
L_001B69F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001B6A44; } }
L_001B69FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6A04u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0016(c, 149u, depth + 1u); else { c.pc = 0x00179D00u; return; } if (c.pc != 0x001B6A04u) [[unlikely]] return; }
L_001B6A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6A0Cu); set32(c.r[4], 0u + 872u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B6A0Cu) [[unlikely]] return; }
L_001B6A0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] << 2);  goto L_001B6A24; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6A20u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 421u, depth + 1u); else { c.pc = 0x001B6BB0u; return; } if (c.pc != 0x001B6A20u) [[unlikely]] return; }
L_001B6A20:
    set32(c.r[4], c.r[16].w[0] << 2);
    c.budget -= 1;
L_001B6A24:
    set32(c.r[3], c.r[28].w[0] - 30632u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_001B6A58; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6A40u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0016(c, 247u, depth + 1u); else { c.pc = 0x0017B610u; return; } if (c.pc != 0x001B6A40u) [[unlikely]] return; }
L_001B6A40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001B6A44:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B69FCu | kUnwind; return; } goto L_001B69FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B6AA8; } }
L_001B6A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001B6A80; } }
L_001B6A60:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_001B6A7C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6A78u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B6A78u) [[unlikely]] return; }
L_001B6A78:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_001B6A7C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001B6A80:
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B6AA8; }
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[28].w[0] - 30632u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6A60u | kUnwind; return; } goto L_001B6A60; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B6AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B6AC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001B6AF8; } }
L_001B6AD8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_001B6AF4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6AF0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B6AF0u) [[unlikely]] return; }
L_001B6AF0:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_001B6AF4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001B6AF8:
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B6B1C; } }
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[28].w[0] - 30632u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6AD8u | kUnwind; return; } goto L_001B6AD8; } }
L_001B6B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6B24u);  if (depth < kMaxDepth) unit_0016(c, 143u, depth + 1u); else { c.pc = 0x00179C70u; return; } if (c.pc != 0x001B6B24u) [[unlikely]] return; }
L_001B6B24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B6B40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[28].w[0] - 30624u)));  if (t) { goto L_001B6B68; } }
L_001B6B54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 868u)));  goto L_001B6B68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6B64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 452u, depth + 1u); else { c.pc = 0x001B7220u; return; } if (c.pc != 0x001B6B64u) [[unlikely]] return; }
L_001B6B64:
    set32(c.r[16], ld32((c.r[16].w[0] + 868u)));
    c.budget -= 1;
L_001B6B68:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 764u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6B54u | kUnwind; return; } goto L_001B6B54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6B78u);  if (depth < kMaxDepth) unit_0016(c, 146u, depth + 1u); else { c.pc = 0x00179CC0u; return; } if (c.pc != 0x001B6B78u) [[unlikely]] return; }
L_001B6B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[28].w[0] - 30624u)));  if (t) { goto L_001B6B8C; } }
L_001B6B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6B88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 455u, depth + 1u); else { c.pc = 0x001B72E0u; return; } if (c.pc != 0x001B6B88u) [[unlikely]] return; }
L_001B6B88:
    set32(c.r[16], ld32((c.r[16].w[0] + 868u)));
    c.budget -= 1;
L_001B6B8C:
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6B80u | kUnwind; return; } goto L_001B6B80; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B6BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6BC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 220u, depth + 1u); else { c.pc = 0x0017AE50u; return; } if (c.pc != 0x001B6BC4u) [[unlikely]] return; }
L_001B6BC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10944u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6BD8u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 429u, depth + 1u); else { c.pc = 0x001B6C90u; return; } if (c.pc != 0x001B6BD8u) [[unlikely]] return; }
L_001B6BD8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B6BF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6C1Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0016(c, 220u, depth + 1u); else { c.pc = 0x0017AE50u; return; } if (c.pc != 0x001B6C1Cu) [[unlikely]] return; }
L_001B6C1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10944u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6C30u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 429u, depth + 1u); else { c.pc = 0x001B6C90u; return; } if (c.pc != 0x001B6C30u) [[unlikely]] return; }
L_001B6C30:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001B6C74; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6C48u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0025(c, 437u, depth + 1u); else { c.pc = 0x001B6F50u; return; } if (c.pc != 0x001B6C48u) [[unlikely]] return; }
L_001B6C48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001B6C5C; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B6C74; } }
L_001B6C5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6C70u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 436u, depth + 1u); else { c.pc = 0x001B6F40u; return; } if (c.pc != 0x001B6C70u) [[unlikely]] return; }
L_001B6C70:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B6C74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B6C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 760u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 764u), 0u);
    st32((c.r[4].w[0] + 768u), 0u);
    st32((c.r[4].w[0] + 772u), 0u);
    st32((c.r[4].w[0] + 776u), 0u);
    st32((c.r[4].w[0] + 780u), 0u);
    st32((c.r[4].w[0] + 784u), 0u);
    st32((c.r[4].w[0] + 788u), 0u);
    st32((c.r[4].w[0] + 792u), 0u);
    st32((c.r[4].w[0] + 796u), 0u);
    st64((c.r[4].w[0] + 808u), 0ull);
    st32((c.r[4].w[0] + 864u), 0u);
    st32((c.r[4].w[0] + 868u), 0u);
    st32((c.r[4].w[0] + 848u), 0u);
    st32((c.r[4].w[0] + 860u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6CECu); set32(c.r[4], c.r[16].w[0] + 816u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001B6CECu) [[unlikely]] return; }
L_001B6CEC:
    set32(c.r[4], ld32((c.r[28].w[0] - 30624u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 868u)));  goto L_001B6D08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30624u), c.r[16].w[0]);  if (t) { goto L_001B6D24; } }
L_001B6D00:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 868u)));
    c.budget -= 2;
L_001B6D08:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6D00u | kUnwind; return; } goto L_001B6D00; } }
    st32((c.r[16].w[0] + 864u), c.r[4].w[0]);
    st32((c.r[4].w[0] + 868u), c.r[16].w[0]);
    c.budget -= 2;
L_001B6D24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[3], c.r[3].w[0] + 9200u);
    st32((c.r[16].w[0] + 752u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 8;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_001B6D54; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B6D6C; } }
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.budget -= 1;
L_001B6D54:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001B6D6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 9344u)));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 9350u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st16((c.r[16].w[0] + 152u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 9346u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[10].d[0] = ld64((c.r[4].w[0] + 9352u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[25].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 9374u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st16((c.r[16].w[0] + 154u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 9348u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[24].d[0] = ld64((c.r[4].w[0] + 9376u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st16((c.r[16].w[0] + 156u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[9].d[0] = ld64((c.r[3].w[0] + 9360u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st16((c.r[16].w[0] + 158u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[16].w[0] + 160u), c.r[10].d[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[16].w[0] + 168u), c.r[9].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 9368u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 9370u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[15].d[0] = ld64((c.r[3].w[0] + 9384u));
    st16((c.r[16].w[0] + 112u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[16].w[0] + 114u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 9372u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0] + 9392u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] + 9394u)));
    st16((c.r[16].w[0] + 116u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 118u), static_cast<std::uint16_t>(c.r[25].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[16].w[0] + 120u), c.r[24].d[0]);
    st64((c.r[16].w[0] + 128u), c.r[15].d[0]);
    st16((c.r[16].w[0] + 232u), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 9396u)));
    st16((c.r[16].w[0] + 234u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 9398u)));
    st16((c.r[16].w[0] + 236u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[10].d[0] = ld64((c.r[10].w[0] + 9400u));
    st16((c.r[16].w[0] + 238u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[9].d[0] = ld64((c.r[9].w[0] + 9408u));
    st64((c.r[16].w[0] + 240u), c.r[10].d[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 9416u)));
    st64((c.r[16].w[0] + 248u), c.r[9].d[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 9418u)));
    st16((c.r[16].w[0] + 192u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 9420u)));
    st16((c.r[16].w[0] + 194u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 9422u)));
    st16((c.r[16].w[0] + 196u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[4].d[0] = ld64((c.r[4].w[0] + 9424u));
    st16((c.r[16].w[0] + 198u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 9432u));
    st64((c.r[16].w[0] + 200u), c.r[4].d[0]);
    st64((c.r[16].w[0] + 208u), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 77;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B6EA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B6F28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10944u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 864u)));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 868u)));  goto L_001B6EE0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 868u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30624u), c.r[2].w[0]);  if (t) { goto L_001B6EE4; } }
L_001B6EE0:
    st32((c.r[3].w[0] + 868u), c.r[2].w[0]);
    c.budget -= 1;
L_001B6EE4:
    set32(c.r[3], ld32((c.r[17].w[0] + 868u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001B6EFC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 864u)));
    st32((c.r[3].w[0] + 864u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_001B6EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6F04u);  if (depth < kMaxDepth) unit_0025(c, 436u, depth + 1u); else { c.pc = 0x001B6F40u; return; } if (c.pc != 0x001B6F04u) [[unlikely]] return; }
L_001B6F04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6F10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 228u, depth + 1u); else { c.pc = 0x0017B080u; return; } if (c.pc != 0x001B6F10u) [[unlikely]] return; }
L_001B6F10:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001B6F2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6F28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001B6F28u) [[unlikely]] return; }
L_001B6F28:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B6F2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B6F40:
    c.budget -= 2;
    {  goto L_001B7040; }
L_001B6F50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6F78u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0025(c, 445u, depth + 1u); else { c.pc = 0x001B7040u; return; } if (c.pc != 0x001B6F78u) [[unlikely]] return; }
L_001B6F78:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[18].w[0] + 848u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 852u), c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6F90u); st32((c.r[18].w[0] + 856u), c.f[20]);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001B6F90u) [[unlikely]] return; }
L_001B6F90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 860u), c.r[2].w[0]);  if (t) { goto L_001B7004; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6FA8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001B6FA8u) [[unlikely]] return; }
L_001B6FA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001B6FF0; } }
L_001B6FB0:
    set32(c.r[16], c.r[17].w[0] << 3);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6FBCu); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001B6FBCu) [[unlikely]] return; }
L_001B6FBC:
    set32(c.r[3], ld32((c.r[18].w[0] + 860u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 860u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_001B7008; }
    set32(c.r[2], ld32((c.r[18].w[0] + 852u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6FECu); set32(c.r[6], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001B6FECu) [[unlikely]] return; }
L_001B6FEC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001B6FF0:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 852u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6FB0u | kUnwind; return; } goto L_001B6FB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B7020; } }
L_001B7004:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_001B7008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B701Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 445u, depth + 1u); else { c.pc = 0x001B7040u; return; } if (c.pc != 0x001B701Cu) [[unlikely]] return; }
L_001B701C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B7020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B7040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 848u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 860u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B70A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001B7074; } }
L_001B7068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7070u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001B7070u) [[unlikely]] return; }
L_001B7070:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001B7074:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 860u)));  goto L_001B709C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 860u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B7068u | kUnwind; return; } goto L_001B7068; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 860u)));
    c.budget -= 1;
L_001B709C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B70A4u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001B70A4u) [[unlikely]] return; }
L_001B70A4:
    st32((c.r[17].w[0] + 860u), 0u);
    c.budget -= 1;
L_001B70A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B70C0:
    set32(c.r[7], ld32((c.r[4].w[0] + 784u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001B713C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 780u)));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 72u));
    set32(c.r[6], c.r[5].w[0] - 48u);
    c.r[5].d[0] = ld64((c.r[5].w[0] - 40u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001B713C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_001B7114; } }
L_001B70EC:
    set32(c.r[5], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 136u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001B713C; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001B7114:
    c.r[3].d[0] = c.r[8].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B70ECu | kUnwind; return; } goto L_001B70EC; }
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_001B7210; } }
L_001B713C:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 784u)));  goto L_001B7198; }
    set32(c.r[5], ld32((c.r[4].w[0] + 776u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 780u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 776u)));  goto L_001B7170; }
    set32(c.r[6], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 772u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 768u)));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001B7194; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 776u)));
    c.budget -= 1;
L_001B7170:
    set32(c.r[5], c.r[3].w[0] + 48u);
    st32((c.r[4].w[0] + 776u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 772u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 780u)));  goto L_001B71A4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 768u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 776u), c.r[3].w[0]);  if (t) { goto L_001B71A0; } }
L_001B7194:
    set32(c.r[3], ld32((c.r[4].w[0] + 784u)));
    c.budget -= 1;
L_001B7198:
    set32(c.r[3], c.r[3].w[0] + 48u);
    st32((c.r[4].w[0] + 784u), c.r[3].w[0]);
    c.budget -= 2;
L_001B71A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 780u)));
    c.budget -= 1;
L_001B71A4:
    set32(c.r[5], c.r[3].w[0] + 48u);
    st32((c.r[4].w[0] + 780u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 772u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 780u)));  goto L_001B71CC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 768u)));
    set32(c.r[3], c.r[3].w[0] + 48u);
    st32((c.r[4].w[0] + 780u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 780u)));
    c.budget -= 4;
L_001B71CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0] - 48u), c.r[3].w[0]);
    set32(c.r[7], c.r[5].w[0] - 48u);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 72u));
    st64((c.r[5].w[0] - 40u), c.r[3].d[0]);
    c.budget -= 6;
L_001B71E4:
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 136u)));
    c.r[3].d[0] = c.r[8].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[5].w[0] + 16u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B71E4u | kUnwind; return; } goto L_001B71E4; } }
L_001B7210:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7220:
    c.f[2] = 0u;
    set32(c.r[3], ld32((c.r[4].w[0] + 792u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[4].w[0] + 788u)));  if (t) { goto L_001B7248; } }
L_001B7230:
    c.f[0] = ld32((c.r[4].w[0] + 796u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[1].d[0] = c.r[3].d[0] < c.r[7].d[0] ? 1ull : 0ull;  goto L_001B7258; }
    set32(c.r[7], c.r[7].w[0] + 48u);
    c.budget -= 1;
L_001B7248:
    c.r[2].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[7].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B7230u | kUnwind; return; } goto L_001B7230; }
    c.r[1].d[0] = c.r[3].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001B7258:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { st32((c.r[4].w[0] + 764u), 0u);  goto L_001B72CC; }
    c.r[3].d[0] = ld64((c.r[4].w[0] + 808u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[7].w[0] + 8u));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[4].w[0] + 808u), c.r[2].d[0]);
    c.budget -= 5;
L_001B7274:
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[3].w[0] + 816u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B7274u | kUnwind; return; } goto L_001B7274; } }
    c.f[1] = ld32((c.r[4].w[0] + 796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 796u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 800u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B72D0; }
    st32((c.r[4].w[0] + 764u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B72D0; } }
L_001B72CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B72D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B72E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B7338; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 760u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st64((c.r[16].w[0] + 808u), 0ull);  goto L_001B7318; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7314u);  if (depth < kMaxDepth) unit_0025(c, 449u, depth + 1u); else { c.pc = 0x001B70C0u; return; } if (c.pc != 0x001B7314u) [[unlikely]] return; }
L_001B7314:
    st64((c.r[16].w[0] + 808u), 0ull);
    c.budget -= 1;
L_001B7318:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B731C:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[3].w[0] + 816u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B731Cu | kUnwind; return; } goto L_001B731C; } }
L_001B7338:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B7350:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 848u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B755C; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B7388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[16], c.r[20].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 9440u);
    set32(c.r[17], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B73A4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 251u, depth + 1u); else { c.pc = 0x0017B710u; return; } if (c.pc != 0x001B73A4u) [[unlikely]] return; }
L_001B73A4:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[22].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B73B8u); c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);  if (depth < kMaxDepth) unit_0016(c, 251u, depth + 1u); else { c.pc = 0x0017B710u; return; } if (c.pc != 0x001B73B8u) [[unlikely]] return; }
L_001B73B8:
    c.f[0] = c.r[22].w[0];
    set32(c.r[4], ld32((c.r[21].w[0] + 860u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[23].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[22].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[19], 0u + 1u);
    set32(c.r[16], c.r[4].w[0] + c.r[16].w[0]);
    st32((c.r[29].w[0] + 156u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 152u), 0u);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = c.r[23].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = 0u;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 148u), c.f[0]);  if (t) { goto L_001B74A8; } }
    c.r[2].d[0] = c.r[23].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B74A8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B74A8; } }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B74A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001B7498; } }
L_001B7440:
    set32(c.r[3], c.r[18].w[0] << 4);
    c.f[1] = 0u;
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_001B7478; }
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B7474; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001B74A8; } }
L_001B7474:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_001B7478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7480u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x001B7480u) [[unlikely]] return; }
L_001B7480:
    c.f[1] = ld32((c.r[21].w[0] + 856u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001B7498; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001B74A8; } }
L_001B7498:
    set32(c.r[2], ld32((c.r[21].w[0] + 852u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B7440u | kUnwind; return; } goto L_001B7440; }
L_001B74A8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 852u)));  goto L_001B74BC; }
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[22].w[0]));
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[23].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0] + 852u)));
    c.budget -= 3;
L_001B74BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] - 1u);  if (t) { goto L_001B74FC; } }
L_001B74C4:
    set32(c.r[4], c.r[6].w[0] - 1u);
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 14;
L_001B74FC:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B74C4u | kUnwind; return; } goto L_001B74C4; }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    st16((c.r[4].w[0] + 816u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[3].w[0] + 816u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B7388u | kUnwind; return; } goto L_001B7388; } }
L_001B755C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7564u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 230u, depth + 1u); else { c.pc = 0x0017B140u; return; } if (c.pc != 0x001B7564u) [[unlikely]] return; }
L_001B7564:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001B7590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B75A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 250u, depth + 1u); else { c.pc = 0x0017B6E0u; return; } if (c.pc != 0x001B75A4u) [[unlikely]] return; }
L_001B75A4:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 808u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B75C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[5].w[0] << 1);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 816u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B75E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B75E4u);  if (depth < kMaxDepth) unit_0016(c, 251u, depth + 1u); else { c.pc = 0x0017B710u; return; } if (c.pc != 0x001B75E4u) [[unlikely]] return; }
L_001B75E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B7600:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 9456u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.f[0] = 0u;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull | 65535ull;  goto L_001B76A4; }
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_001B7660; }
    c.r[2].d[0] = ld64((c.r[4].w[0] + 72u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B765C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 2;
L_001B765C:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_001B7660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B7718; } }
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B7718; } }
    c.r[2].d[0] = ld64((c.r[4].w[0] + 72u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B7718; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_001B7718; } }
L_001B76A4:
    c.r[3].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_001B76D8; }
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 144u));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 8;
L_001B76D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B7718; } }
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B7718; } }
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 144u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 8;
L_001B7718:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7720:
    c.r[9].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 1u);  if (t) { goto L_001B7750; } }
L_001B772C:
    c.r[7].d[0] = c.r[10].d[0] & 255ull;
    c.r[4].d[0] = ld8((c.r[8].w[0] - 1u));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_001B7750:
    c.r[3].d[0] = c.r[10].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[8], c.r[5].w[0] + c.r[10].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B772Cu | kUnwind; return; } goto L_001B772C; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 3u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 3152u);  if (t) { goto L_001B7794; } }
L_001B7770:
    set32(c.r[9], c.r[5].w[0] + c.r[10].w[0]);
    c.r[3].d[0] = ld8((c.r[9].w[0]));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_001B7794:
    c.r[3].d[0] = c.r[10].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { mmi::divu(c, 0, c.r[10].w[0], c.r[8].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B7770u | kUnwind; return; } goto L_001B7770; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B77B0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 3u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] - 2384u);  if (t) { goto L_001B77E8; } }
L_001B77C4:
    set32(c.r[10], c.r[5].w[0] + c.r[11].w[0]);
    c.r[3].d[0] = ld8((c.r[10].w[0]));
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] << 8);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_001B77E8:
    c.r[3].d[0] = c.r[11].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { mmi::divu(c, 0, c.r[11].w[0], c.r[9].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B77C4u | kUnwind; return; } goto L_001B77C4; }
    set32(c.r[9], c.r[6].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_001B7824; } }
L_001B7800:
    c.r[6].d[0] = c.r[9].d[0] & 255ull;
    c.r[4].d[0] = ld8((c.r[7].w[0] - 1u));
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_001B7824:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[7], c.r[5].w[0] + c.r[9].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B7800u | kUnwind; return; } goto L_001B7800; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[12], c.r[13].w[0] + 12u);  if (t) { goto L_001B787C; } }
    set32(c.r[3], ld32((c.r[13].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[13].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B786Cu); set32(c.r[5], c.r[13].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0025(c, 474u, depth + 1u); else { c.pc = 0x001B77B0u; return; } if (c.pc != 0x001B786Cu) [[unlikely]] return; }
L_001B786C:
    c.r[4].d[0] = ld16((c.r[12].w[0]));
    set32(c.r[3], 0u - 513u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[13].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001B787C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B7890:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B78C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 345u, depth + 1u); else { c.pc = 0x001B6230u; return; } if (c.pc != 0x001B78C0u) [[unlikely]] return; }
L_001B78C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43450000u);
    set32(c.r[3], c.r[3].w[0] + 10992u);
    c.r[4].d[0] = c.r[2].d[0] | 20039ull;
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[19].w[0] + 44u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[19].w[0] + 36u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 40u), c.r[16].w[0]);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B7920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B7968; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10992u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7950u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 347u, depth + 1u); else { c.pc = 0x001B62E0u; return; } if (c.pc != 0x001B7950u) [[unlikely]] return; }
L_001B7950:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001B796C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7968u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001B7968u) [[unlikely]] return; }
L_001B7968:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B796C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B7980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[11].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[11].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B799Cu); c.r[4].d[0] = ld8((c.r[4].w[0] + 44u));  if (depth < kMaxDepth) unit_0025(c, 471u, depth + 1u); else { c.pc = 0x001B7720u; return; } if (c.pc != 0x001B799Cu) [[unlikely]] return; }
L_001B799C:
    set32(c.r[3], ld32((c.r[11].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[11].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B79C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B79F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 345u, depth + 1u); else { c.pc = 0x001B6230u; return; } if (c.pc != 0x001B79F0u) [[unlikely]] return; }
L_001B79F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43440000u);
    set32(c.r[3], c.r[3].w[0] + 10976u);
    c.r[4].d[0] = c.r[2].d[0] | 20039ull;
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[19].w[0] + 44u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[19].w[0] + 36u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 40u), c.r[16].w[0]);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B7A50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B7A98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10976u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7A80u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 347u, depth + 1u); else { c.pc = 0x001B62E0u; return; } if (c.pc != 0x001B7A80u) [[unlikely]] return; }
L_001B7A80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001B7A9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7A98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001B7A98u) [[unlikely]] return; }
L_001B7A98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B7A9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B7AB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[12].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[12].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7ACCu); c.r[4].d[0] = ld8((c.r[4].w[0] + 44u));  if (depth < kMaxDepth) unit_0025(c, 474u, depth + 1u); else { c.pc = 0x001B77B0u; return; } if (c.pc != 0x001B7ACCu) [[unlikely]] return; }
L_001B7ACC:
    set32(c.r[3], ld32((c.r[12].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[12].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B7AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7B08u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001B7B08u) [[unlikely]] return; }
L_001B7B08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001B7B20; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7B1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 498u, depth + 1u); else { c.pc = 0x001B7B70u; return; } if (c.pc != 0x001B7B1Cu) [[unlikely]] return; }
L_001B7B1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001B7B20:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B7B30:
    set32(c.r[4], ld32((c.r[28].w[0] - 30620u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B7B44; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 2;
L_001B7B44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7B50:
    set32(c.r[3], ld32((c.r[28].w[0] - 30620u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B7B60; } }
    st32((c.r[3].w[0] + 60u), 0u);
    c.budget -= 1;
L_001B7B60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7B84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001B7B84u) [[unlikely]] return; }
L_001B7B84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], 0u + 60u);
    set32(c.r[3], c.r[3].w[0] + 11008u);
    set32(c.r[4], 0u + 872u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7BB0u); st32((c.r[16].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B7BB0u) [[unlikely]] return; }
L_001B7BB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  goto L_001B7BC8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7BC4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 421u, depth + 1u); else { c.pc = 0x001B6BB0u; return; } if (c.pc != 0x001B7BC4u) [[unlikely]] return; }
L_001B7BC4:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_001B7BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7BD0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 79u, depth + 1u); else { c.pc = 0x00169920u; return; } if (c.pc != 0x001B7BD0u) [[unlikely]] return; }
L_001B7BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7BD8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 93u, depth + 1u); else { c.pc = 0x00169AD0u; return; } if (c.pc != 0x001B7BD8u) [[unlikely]] return; }
L_001B7BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7BE0u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0012(c, 94u, depth + 1u); else { c.pc = 0x00169B00u; return; } if (c.pc != 0x001B7BE0u) [[unlikely]] return; }
L_001B7BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7BE8u); set32(c.r[4], 0u - 1u);  if (depth < kMaxDepth) unit_0012(c, 95u, depth + 1u); else { c.pc = 0x00169B30u; return; } if (c.pc != 0x001B7BE8u) [[unlikely]] return; }
L_001B7BE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7BF4u); c.r[4].d[0] = c.r[2].d[0] | 8224ull;  if (depth < kMaxDepth) unit_0012(c, 96u, depth + 1u); else { c.pc = 0x00169B60u; return; } if (c.pc != 0x001B7BF4u) [[unlikely]] return; }
L_001B7BF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[2].d[0] | 20039ull;
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 30620u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B7C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B7CC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 11008u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 72u), 0u);  goto L_001B7C88; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7C84u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B7C84u) [[unlikely]] return; }
L_001B7C84:
    st32((c.r[17].w[0] + 72u), 0u);
    c.budget -= 1;
L_001B7C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7C90u);  if (depth < kMaxDepth) unit_0012(c, 84u, depth + 1u); else { c.pc = 0x001699B0u; return; } if (c.pc != 0x001B7C90u) [[unlikely]] return; }
L_001B7C90:
    set32(c.r[2], ld32((c.r[28].w[0] - 30620u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001B7CA4; }
    st32((c.r[28].w[0] - 30620u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001B7CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7CACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001B7CACu) [[unlikely]] return; }
L_001B7CAC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001B7CC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7CC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001B7CC4u) [[unlikely]] return; }
L_001B7CC4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B7CC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B7CE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B7D3C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 60u)));  goto L_001B7D2C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_001B7D18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001B7E18; } }
L_001B7D18:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_001B7E14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[4].w[0]);  if (t) { goto L_001B7E14; } }
L_001B7D2C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B7E14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[5].w[0]);  if (t) { goto L_001B7E14; } }
L_001B7D3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u + 2048u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = ld64((c.r[4].w[0] + 80u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 64u)));  goto L_001B7D78; }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_001B7D70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), 0u);  if (t) { goto L_001B7D74; } }
L_001B7D70:
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 1;
L_001B7D74:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 1;
L_001B7D78:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  goto L_001B7D8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7D88u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 87u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001B7D88u) [[unlikely]] return; }
L_001B7D88:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_001B7D8C:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  goto L_001B7DCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7DA8u);  if (depth < kMaxDepth) unit_0024(c, 131u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x001B7DA8u) [[unlikely]] return; }
L_001B7DA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 1u);  goto L_001B7DC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7DB8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 130u, depth + 1u); else { c.pc = 0x001B0C10u; return; } if (c.pc != 0x001B7DB8u) [[unlikely]] return; }
L_001B7DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7DC8; } }
L_001B7DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7DC8u);  if (depth < kMaxDepth) unit_0024(c, 130u, depth + 1u); else { c.pc = 0x001B0C10u; return; } if (c.pc != 0x001B7DC8u) [[unlikely]] return; }
L_001B7DC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_001B7DCC:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 72u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 68u), 0u);  goto L_001B7E00; }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(61ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[16].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_001B7E00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7DFCu);  if (depth < kMaxDepth) unit_0024(c, 575u, depth + 1u); else { c.pc = 0x001B3C30u; return; } if (c.pc != 0x001B7DFCu) [[unlikely]] return; }
L_001B7DFC:
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 1;
L_001B7E00:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B7E14; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_001B7E14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001B7E18:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B7E30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7E58u); set32(c.r[4], 0u + 224u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001B7E58u) [[unlikely]] return; }
L_001B7E58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 30616u), c.r[2].w[0]);  goto L_001B7E70; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7E6Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 30u, depth + 1u); else { c.pc = 0x001B8220u; return; } if (c.pc != 0x001B7E6Cu) [[unlikely]] return; }
L_001B7E6C:
    st32((c.r[28].w[0] - 30616u), c.r[2].w[0]);
    c.budget -= 1;
L_001B7E70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B7E80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 128u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], 0u + 7u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 28u), 0u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7EB4u); st32((c.r[29].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_000D(c, 8u, depth + 1u); else { c.pc = 0x001540B0u; return; } if (c.pc != 0x001B7EB4u) [[unlikely]] return; }
L_001B7EB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B7EC0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));
    c.budget -= 6;
    { c.r[6].d[0] = c.r[2].d[0] + 0ull;  [[clang::musttail]] return unit_0026(c, 190u, depth); }
L_001B7EE0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));
    c.budget -= 6;
    { c.r[6].d[0] = c.r[2].d[0] + 0ull;  [[clang::musttail]] return unit_0026(c, 197u, depth); }
L_001B7F00:
    set32(c.r[2], ld32((c.r[28].w[0] - 30616u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_001B7F10:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  [[clang::musttail]] return unit_0026(c, 198u, depth); }
L_001B7F20:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 8;
    { c.r[7].d[0] = c.r[2].d[0] + 0ull;  [[clang::musttail]] return unit_0026(c, 199u, depth); }
L_001B7F40:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));
    c.budget -= 6;
    { c.r[6].d[0] = c.r[2].d[0] + 0ull;  [[clang::musttail]] return unit_0026(c, 210u, depth); }
L_001B7F60:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  [[clang::musttail]] return unit_0026(c, 217u, depth); }
L_001B7F70:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));
    c.budget -= 5;
    { c.r[5].d[0] = c.r[2].d[0] + 0ull;  [[clang::musttail]] return unit_0026(c, 220u, depth); }
L_001B7F90:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  [[clang::musttail]] return unit_0026(c, 224u, depth); }
L_001B7FA0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  [[clang::musttail]] return unit_0026(c, 227u, depth); }
L_001B7FB0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  [[clang::musttail]] return unit_0026(c, 230u, depth); }
L_001B7FC0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B7FE4; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001B7FE0; } }
    st32((c.r[28].w[0] - 30608u), c.r[5].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30612u), c.r[4].w[0]);  if (t) { goto L_001B7FE4; } }
L_001B7FE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B7FE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7FF0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));
    c.budget -= 4;
    [[clang::musttail]] return unit_0026(c, 1u, depth);
}

}
