#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0043[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 6, 0, 7, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0,
    36, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 45, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 54, 0, 55, 0, 56, 0, 57, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66,
    0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0,
    0, 0, 91, 0, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0,
    0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0,
    104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0,
    111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 0, 118,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 124, 0,
    0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170,
    0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183,
    0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 202, 0, 203,
    0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0,
    0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 220, 0, 221, 0, 0, 222, 0, 0, 0, 0,
    0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 229, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 242, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0,
    256, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0,
    0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0,
    0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284,
    0, 0, 0, 285, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0,
    292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 315, 0, 0, 0, 316, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0,
    0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332,
    0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 336, 0,
    0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 341, 0,
    0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0,
    362, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 371, 0, 0, 372, 0,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0,
    0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0,
    385, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 393, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0,
    0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409,
    0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 416, 0, 417, 0, 0, 0, 0, 0,
    418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0,
    0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0,
    429, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435,
    0, 0, 0, 0, 436, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0,
    0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0,
    0, 446, 0, 447, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0,
    0, 0, 453, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 0, 460,
    0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0,
    0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 476, 0, 0, 477, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 481, 0, 0, 0,
    482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 491, 492, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 496, 0,
    497, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0,
    0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0,
    0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 514, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 519, 0,
    0, 0, 0, 520, 0, 521, 0, 0, 522, 0, 523, 0, 524, 0, 525, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0,
    0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 539, 0,
    540, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 546, 0, 547, 0,
    0, 0, 0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 551, 0, 552, 0, 553, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0,
    556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0,
    0, 0, 0, 0, 0, 0, 563, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 0, 573, 0,
    574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0043(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0022C000;
    case 2u: goto L_0022C01C;
    case 3u: goto L_0022C020;
    case 4u: goto L_0022C060;
    case 5u: goto L_0022C080;
    case 6u: goto L_0022C088;
    case 7u: goto L_0022C090;
    case 8u: goto L_0022C09C;
    case 9u: goto L_0022C0A4;
    case 10u: goto L_0022C0B4;
    case 11u: goto L_0022C0BC;
    case 12u: goto L_0022C0D0;
    case 13u: goto L_0022C0F0;
    case 14u: goto L_0022C100;
    case 15u: goto L_0022C110;
    case 16u: goto L_0022C118;
    case 17u: goto L_0022C128;
    case 18u: goto L_0022C14C;
    case 19u: goto L_0022C170;
    case 20u: goto L_0022C188;
    case 21u: goto L_0022C1A8;
    case 22u: goto L_0022C1B8;
    case 23u: goto L_0022C1C0;
    case 24u: goto L_0022C1D0;
    case 25u: goto L_0022C1EC;
    case 26u: goto L_0022C200;
    case 27u: goto L_0022C218;
    case 28u: goto L_0022C224;
    case 29u: goto L_0022C234;
    case 30u: goto L_0022C244;
    case 31u: goto L_0022C24C;
    case 32u: goto L_0022C25C;
    case 33u: goto L_0022C268;
    case 34u: goto L_0022C270;
    case 35u: goto L_0022C278;
    case 36u: goto L_0022C280;
    case 37u: goto L_0022C28C;
    case 38u: goto L_0022C2A4;
    case 39u: goto L_0022C2AC;
    case 40u: goto L_0022C2B4;
    case 41u: goto L_0022C2C0;
    case 42u: goto L_0022C2C8;
    case 43u: goto L_0022C2D8;
    case 44u: goto L_0022C2E4;
    case 45u: goto L_0022C2F4;
    case 46u: goto L_0022C338;
    case 47u: goto L_0022C34C;
    case 48u: goto L_0022C358;
    case 49u: goto L_0022C360;
    case 50u: goto L_0022C374;
    case 51u: goto L_0022C3BC;
    case 52u: goto L_0022C3C4;
    case 53u: goto L_0022C400;
    case 54u: goto L_0022C408;
    case 55u: goto L_0022C410;
    case 56u: goto L_0022C418;
    case 57u: goto L_0022C420;
    case 58u: goto L_0022C424;
    case 59u: goto L_0022C450;
    case 60u: goto L_0022C4B4;
    case 61u: goto L_0022C4DC;
    case 62u: goto L_0022C4F0;
    case 63u: goto L_0022C510;
    case 64u: goto L_0022C560;
    case 65u: goto L_0022C56C;
    case 66u: goto L_0022C57C;
    case 67u: goto L_0022C584;
    case 68u: goto L_0022C5A0;
    case 69u: goto L_0022C5A8;
    case 70u: goto L_0022C5BC;
    case 71u: goto L_0022C5D0;
    case 72u: goto L_0022C600;
    case 73u: goto L_0022C610;
    case 74u: goto L_0022C620;
    case 75u: goto L_0022C630;
    case 76u: goto L_0022C654;
    case 77u: goto L_0022C660;
    case 78u: goto L_0022C680;
    case 79u: goto L_0022C698;
    case 80u: goto L_0022C6A4;
    case 81u: goto L_0022C6C0;
    case 82u: goto L_0022C6E4;
    case 83u: goto L_0022C708;
    case 84u: goto L_0022C71C;
    case 85u: goto L_0022C728;
    case 86u: goto L_0022C730;
    case 87u: goto L_0022C73C;
    case 88u: goto L_0022C75C;
    case 89u: goto L_0022C768;
    case 90u: goto L_0022C778;
    case 91u: goto L_0022C788;
    case 92u: goto L_0022C798;
    case 93u: goto L_0022C7A4;
    case 94u: goto L_0022C7B0;
    case 95u: goto L_0022C7C0;
    case 96u: goto L_0022C7F8;
    case 97u: goto L_0022C804;
    case 98u: goto L_0022C818;
    case 99u: goto L_0022C830;
    case 100u: goto L_0022C840;
    case 101u: goto L_0022C850;
    case 102u: goto L_0022C860;
    case 103u: goto L_0022C870;
    case 104u: goto L_0022C880;
    case 105u: goto L_0022C890;
    case 106u: goto L_0022C8F8;
    case 107u: goto L_0022C920;
    case 108u: goto L_0022C934;
    case 109u: goto L_0022C960;
    case 110u: goto L_0022C970;
    case 111u: goto L_0022C980;
    case 112u: goto L_0022C990;
    case 113u: goto L_0022C9B4;
    case 114u: goto L_0022C9C8;
    case 115u: goto L_0022C9D8;
    case 116u: goto L_0022C9E4;
    case 117u: goto L_0022C9EC;
    case 118u: goto L_0022C9FC;
    case 119u: goto L_0022CA10;
    case 120u: goto L_0022CA30;
    case 121u: goto L_0022CA54;
    case 122u: goto L_0022CA64;
    case 123u: goto L_0022CA70;
    case 124u: goto L_0022CA78;
    case 125u: goto L_0022CA88;
    case 126u: goto L_0022CA9C;
    case 127u: goto L_0022CAC0;
    case 128u: goto L_0022CAD4;
    case 129u: goto L_0022CAE0;
    case 130u: goto L_0022CAF0;
    case 131u: goto L_0022CB0C;
    case 132u: goto L_0022CB18;
    case 133u: goto L_0022CB24;
    case 134u: goto L_0022CB4C;
    case 135u: goto L_0022CB5C;
    case 136u: goto L_0022CB74;
    case 137u: goto L_0022CB84;
    case 138u: goto L_0022CB9C;
    case 139u: goto L_0022CBB0;
    case 140u: goto L_0022CBBC;
    case 141u: goto L_0022CBD4;
    case 142u: goto L_0022CBE4;
    case 143u: goto L_0022CBF4;
    case 144u: goto L_0022CC10;
    case 145u: goto L_0022CC38;
    case 146u: goto L_0022CC50;
    case 147u: goto L_0022CC68;
    case 148u: goto L_0022CCA4;
    case 149u: goto L_0022CCC8;
    case 150u: goto L_0022CCE8;
    case 151u: goto L_0022CD14;
    case 152u: goto L_0022CD38;
    case 153u: goto L_0022CD58;
    case 154u: goto L_0022CD8C;
    case 155u: goto L_0022CDA0;
    case 156u: goto L_0022CDB4;
    case 157u: goto L_0022CDC8;
    case 158u: goto L_0022CDEC;
    case 159u: goto L_0022CE00;
    case 160u: goto L_0022CE14;
    case 161u: goto L_0022CE28;
    case 162u: goto L_0022CE44;
    case 163u: goto L_0022CE54;
    case 164u: goto L_0022CE94;
    case 165u: goto L_0022CEA4;
    case 166u: goto L_0022CEBC;
    case 167u: goto L_0022CED4;
    case 168u: goto L_0022CF18;
    case 169u: goto L_0022CF30;
    case 170u: goto L_0022CF7C;
    case 171u: goto L_0022CF84;
    case 172u: goto L_0022CF8C;
    case 173u: goto L_0022CF94;
    case 174u: goto L_0022CFA8;
    case 175u: goto L_0022CFC8;
    case 176u: goto L_0022CFE8;
    case 177u: goto L_0022D008;
    case 178u: goto L_0022D028;
    case 179u: goto L_0022D038;
    case 180u: goto L_0022D048;
    case 181u: goto L_0022D050;
    case 182u: goto L_0022D060;
    case 183u: goto L_0022D07C;
    case 184u: goto L_0022D09C;
    case 185u: goto L_0022D0AC;
    case 186u: goto L_0022D0B8;
    case 187u: goto L_0022D0C0;
    case 188u: goto L_0022D0CC;
    case 189u: goto L_0022D0D8;
    case 190u: goto L_0022D0E4;
    case 191u: goto L_0022D0F8;
    case 192u: goto L_0022D114;
    case 193u: goto L_0022D120;
    case 194u: goto L_0022D180;
    case 195u: goto L_0022D194;
    case 196u: goto L_0022D1BC;
    case 197u: goto L_0022D1EC;
    case 198u: goto L_0022D200;
    case 199u: goto L_0022D22C;
    case 200u: goto L_0022D25C;
    case 201u: goto L_0022D26C;
    case 202u: goto L_0022D274;
    case 203u: goto L_0022D27C;
    case 204u: goto L_0022D288;
    case 205u: goto L_0022D298;
    case 206u: goto L_0022D2B8;
    case 207u: goto L_0022D2CC;
    case 208u: goto L_0022D328;
    case 209u: goto L_0022D334;
    case 210u: goto L_0022D340;
    case 211u: goto L_0022D354;
    case 212u: goto L_0022D364;
    case 213u: goto L_0022D378;
    case 214u: goto L_0022D388;
    case 215u: goto L_0022D394;
    case 216u: goto L_0022D3A0;
    case 217u: goto L_0022D3AC;
    case 218u: goto L_0022D3C0;
    case 219u: goto L_0022D3C8;
    case 220u: goto L_0022D3D8;
    case 221u: goto L_0022D3E0;
    case 222u: goto L_0022D3EC;
    case 223u: goto L_0022D404;
    case 224u: goto L_0022D414;
    case 225u: goto L_0022D434;
    case 226u: goto L_0022D448;
    case 227u: goto L_0022D45C;
    case 228u: goto L_0022D470;
    case 229u: goto L_0022D484;
    case 230u: goto L_0022D494;
    case 231u: goto L_0022D49C;
    case 232u: goto L_0022D4A4;
    case 233u: goto L_0022D4B0;
    case 234u: goto L_0022D560;
    case 235u: goto L_0022D588;
    case 236u: goto L_0022D594;
    case 237u: goto L_0022D5A0;
    case 238u: goto L_0022D5B4;
    case 239u: goto L_0022D5C8;
    case 240u: goto L_0022D5D8;
    case 241u: goto L_0022D5EC;
    case 242u: goto L_0022D5F4;
    case 243u: goto L_0022D600;
    case 244u: goto L_0022D620;
    case 245u: goto L_0022D648;
    case 246u: goto L_0022D68C;
    case 247u: goto L_0022D6AC;
    case 248u: goto L_0022D6BC;
    case 249u: goto L_0022D6DC;
    case 250u: goto L_0022D6F0;
    case 251u: goto L_0022D740;
    case 252u: goto L_0022D74C;
    case 253u: goto L_0022D754;
    case 254u: goto L_0022D760;
    case 255u: goto L_0022D770;
    case 256u: goto L_0022D780;
    case 257u: goto L_0022D794;
    case 258u: goto L_0022D7A0;
    case 259u: goto L_0022D7C0;
    case 260u: goto L_0022D7E4;
    case 261u: goto L_0022D7F4;
    case 262u: goto L_0022D804;
    case 263u: goto L_0022D81C;
    case 264u: goto L_0022D834;
    case 265u: goto L_0022D844;
    case 266u: goto L_0022D854;
    case 267u: goto L_0022D864;
    case 268u: goto L_0022D874;
    case 269u: goto L_0022D88C;
    case 270u: goto L_0022D89C;
    case 271u: goto L_0022D8AC;
    case 272u: goto L_0022D8BC;
    case 273u: goto L_0022D8CC;
    case 274u: goto L_0022D8D4;
    case 275u: goto L_0022D8E4;
    case 276u: goto L_0022D8F4;
    case 277u: goto L_0022D904;
    case 278u: goto L_0022D914;
    case 279u: goto L_0022D924;
    case 280u: goto L_0022D93C;
    case 281u: goto L_0022D94C;
    case 282u: goto L_0022D95C;
    case 283u: goto L_0022D96C;
    case 284u: goto L_0022D97C;
    case 285u: goto L_0022D98C;
    case 286u: goto L_0022D994;
    case 287u: goto L_0022D9A4;
    case 288u: goto L_0022D9B4;
    case 289u: goto L_0022D9C4;
    case 290u: goto L_0022D9D4;
    case 291u: goto L_0022D9EC;
    case 292u: goto L_0022DA00;
    case 293u: goto L_0022DA10;
    case 294u: goto L_0022DA20;
    case 295u: goto L_0022DA30;
    case 296u: goto L_0022DA40;
    case 297u: goto L_0022DA50;
    case 298u: goto L_0022DA68;
    case 299u: goto L_0022DA7C;
    case 300u: goto L_0022DAB0;
    case 301u: goto L_0022DAD4;
    case 302u: goto L_0022DBB8;
    case 303u: goto L_0022DBD0;
    case 304u: goto L_0022DBD8;
    case 305u: goto L_0022DBF4;
    case 306u: goto L_0022DC10;
    case 307u: goto L_0022DC2C;
    case 308u: goto L_0022DC40;
    case 309u: goto L_0022DC60;
    case 310u: goto L_0022DC90;
    case 311u: goto L_0022DCD8;
    case 312u: goto L_0022DD0C;
    case 313u: goto L_0022DE34;
    case 314u: goto L_0022DED8;
    case 315u: goto L_0022DEDC;
    case 316u: goto L_0022DEEC;
    case 317u: goto L_0022E008;
    case 318u: goto L_0022E10C;
    case 319u: goto L_0022E1A8;
    case 320u: goto L_0022E244;
    case 321u: goto L_0022E308;
    case 322u: goto L_0022E340;
    case 323u: goto L_0022E360;
    case 324u: goto L_0022E374;
    case 325u: goto L_0022E3A0;
    case 326u: goto L_0022E3F8;
    case 327u: goto L_0022E40C;
    case 328u: goto L_0022E414;
    case 329u: goto L_0022E444;
    case 330u: goto L_0022E44C;
    case 331u: goto L_0022E460;
    case 332u: goto L_0022E47C;
    case 333u: goto L_0022E490;
    case 334u: goto L_0022E4D8;
    case 335u: goto L_0022E4E4;
    case 336u: goto L_0022E4F8;
    case 337u: goto L_0022E504;
    case 338u: goto L_0022E54C;
    case 339u: goto L_0022E558;
    case 340u: goto L_0022E56C;
    case 341u: goto L_0022E578;
    case 342u: goto L_0022E58C;
    case 343u: goto L_0022E59C;
    case 344u: goto L_0022E5B0;
    case 345u: goto L_0022E5C4;
    case 346u: goto L_0022E5E0;
    case 347u: goto L_0022E600;
    case 348u: goto L_0022E614;
    case 349u: goto L_0022E630;
    case 350u: goto L_0022E64C;
    case 351u: goto L_0022E660;
    case 352u: goto L_0022E6A8;
    case 353u: goto L_0022E6B4;
    case 354u: goto L_0022E6C8;
    case 355u: goto L_0022E6D4;
    case 356u: goto L_0022E71C;
    case 357u: goto L_0022E728;
    case 358u: goto L_0022E73C;
    case 359u: goto L_0022E748;
    case 360u: goto L_0022E75C;
    case 361u: goto L_0022E76C;
    case 362u: goto L_0022E780;
    case 363u: goto L_0022E790;
    case 364u: goto L_0022E79C;
    case 365u: goto L_0022E7C0;
    case 366u: goto L_0022E7E0;
    case 367u: goto L_0022E810;
    case 368u: goto L_0022E824;
    case 369u: goto L_0022E850;
    case 370u: goto L_0022E85C;
    case 371u: goto L_0022E86C;
    case 372u: goto L_0022E878;
    case 373u: goto L_0022E890;
    case 374u: goto L_0022E8BC;
    case 375u: goto L_0022E8C8;
    case 376u: goto L_0022E8F8;
    case 377u: goto L_0022E968;
    case 378u: goto L_0022E988;
    case 379u: goto L_0022E9A4;
    case 380u: goto L_0022E9B4;
    case 381u: goto L_0022E9D0;
    case 382u: goto L_0022EA54;
    case 383u: goto L_0022EA68;
    case 384u: goto L_0022EA74;
    case 385u: goto L_0022EA80;
    case 386u: goto L_0022EA98;
    case 387u: goto L_0022EAA4;
    case 388u: goto L_0022EAB4;
    case 389u: goto L_0022EAE0;
    case 390u: goto L_0022EB04;
    case 391u: goto L_0022EB20;
    case 392u: goto L_0022EB4C;
    case 393u: goto L_0022EB94;
    case 394u: goto L_0022EB98;
    case 395u: goto L_0022EBC4;
    case 396u: goto L_0022EC04;
    case 397u: goto L_0022EC34;
    case 398u: goto L_0022EC68;
    case 399u: goto L_0022ECA0;
    case 400u: goto L_0022ECF0;
    case 401u: goto L_0022ED10;
    case 402u: goto L_0022ED30;
    case 403u: goto L_0022ED3C;
    case 404u: goto L_0022ED5C;
    case 405u: goto L_0022ED84;
    case 406u: goto L_0022ED90;
    case 407u: goto L_0022EDB8;
    case 408u: goto L_0022EDE0;
    case 409u: goto L_0022EDFC;
    case 410u: goto L_0022EE14;
    case 411u: goto L_0022EE34;
    case 412u: goto L_0022EE4C;
    case 413u: goto L_0022EE70;
    case 414u: goto L_0022EEC4;
    case 415u: goto L_0022EED8;
    case 416u: goto L_0022EEE0;
    case 417u: goto L_0022EEE8;
    case 418u: goto L_0022EF00;
    case 419u: goto L_0022EF2C;
    case 420u: goto L_0022EF4C;
    case 421u: goto L_0022EF54;
    case 422u: goto L_0022EF64;
    case 423u: goto L_0022EF84;
    case 424u: goto L_0022EF98;
    case 425u: goto L_0022EFA8;
    case 426u: goto L_0022EFB0;
    case 427u: goto L_0022EFC4;
    case 428u: goto L_0022EFE8;
    case 429u: goto L_0022F000;
    case 430u: goto L_0022F00C;
    case 431u: goto L_0022F024;
    case 432u: goto L_0022F044;
    case 433u: goto L_0022F054;
    case 434u: goto L_0022F074;
    case 435u: goto L_0022F07C;
    case 436u: goto L_0022F090;
    case 437u: goto L_0022F098;
    case 438u: goto L_0022F0A4;
    case 439u: goto L_0022F0B4;
    case 440u: goto L_0022F0E4;
    case 441u: goto L_0022F0F4;
    case 442u: goto L_0022F114;
    case 443u: goto L_0022F12C;
    case 444u: goto L_0022F158;
    case 445u: goto L_0022F178;
    case 446u: goto L_0022F184;
    case 447u: goto L_0022F18C;
    case 448u: goto L_0022F19C;
    case 449u: goto L_0022F1A4;
    case 450u: goto L_0022F1B8;
    case 451u: goto L_0022F1E4;
    case 452u: goto L_0022F1F0;
    case 453u: goto L_0022F208;
    case 454u: goto L_0022F218;
    case 455u: goto L_0022F224;
    case 456u: goto L_0022F238;
    case 457u: goto L_0022F254;
    case 458u: goto L_0022F260;
    case 459u: goto L_0022F26C;
    case 460u: goto L_0022F27C;
    case 461u: goto L_0022F28C;
    case 462u: goto L_0022F29C;
    case 463u: goto L_0022F2B8;
    case 464u: goto L_0022F2C4;
    case 465u: goto L_0022F2D0;
    case 466u: goto L_0022F334;
    case 467u: goto L_0022F344;
    case 468u: goto L_0022F364;
    case 469u: goto L_0022F374;
    case 470u: goto L_0022F39C;
    case 471u: goto L_0022F3D0;
    case 472u: goto L_0022F3F8;
    case 473u: goto L_0022F404;
    case 474u: goto L_0022F414;
    case 475u: goto L_0022F420;
    case 476u: goto L_0022F430;
    case 477u: goto L_0022F43C;
    case 478u: goto L_0022F444;
    case 479u: goto L_0022F458;
    case 480u: goto L_0022F468;
    case 481u: goto L_0022F470;
    case 482u: goto L_0022F480;
    case 483u: goto L_0022F4C0;
    case 484u: goto L_0022F4E0;
    case 485u: goto L_0022F4F0;
    case 486u: goto L_0022F540;
    case 487u: goto L_0022F550;
    case 488u: goto L_0022F590;
    case 489u: goto L_0022F5A0;
    case 490u: goto L_0022F5DC;
    case 491u: goto L_0022F5F0;
    case 492u: goto L_0022F5F4;
    case 493u: goto L_0022F620;
    case 494u: goto L_0022F668;
    case 495u: goto L_0022F670;
    case 496u: goto L_0022F678;
    case 497u: goto L_0022F680;
    case 498u: goto L_0022F688;
    case 499u: goto L_0022F690;
    case 500u: goto L_0022F6C4;
    case 501u: goto L_0022F8E4;
    case 502u: goto L_0022F8F8;
    case 503u: goto L_0022F904;
    case 504u: goto L_0022F92C;
    case 505u: goto L_0022F954;
    case 506u: goto L_0022F990;
    case 507u: goto L_0022F9B4;
    case 508u: goto L_0022F9F8;
    case 509u: goto L_0022FA40;
    case 510u: goto L_0022FA64;
    case 511u: goto L_0022FA6C;
    case 512u: goto L_0022FA90;
    case 513u: goto L_0022FAA8;
    case 514u: goto L_0022FAB0;
    case 515u: goto L_0022FAB8;
    case 516u: goto L_0022FACC;
    case 517u: goto L_0022FAE0;
    case 518u: goto L_0022FAE8;
    case 519u: goto L_0022FAF8;
    case 520u: goto L_0022FB0C;
    case 521u: goto L_0022FB14;
    case 522u: goto L_0022FB20;
    case 523u: goto L_0022FB28;
    case 524u: goto L_0022FB30;
    case 525u: goto L_0022FB38;
    case 526u: goto L_0022FB48;
    case 527u: goto L_0022FB50;
    case 528u: goto L_0022FB7C;
    case 529u: goto L_0022FBB0;
    case 530u: goto L_0022FBC4;
    case 531u: goto L_0022FBCC;
    case 532u: goto L_0022FBE0;
    case 533u: goto L_0022FBEC;
    case 534u: goto L_0022FC0C;
    case 535u: goto L_0022FC40;
    case 536u: goto L_0022FC48;
    case 537u: goto L_0022FC5C;
    case 538u: goto L_0022FC70;
    case 539u: goto L_0022FC78;
    case 540u: goto L_0022FC80;
    case 541u: goto L_0022FC94;
    case 542u: goto L_0022FCAC;
    case 543u: goto L_0022FCC0;
    case 544u: goto L_0022FCD4;
    case 545u: goto L_0022FCDC;
    case 546u: goto L_0022FCF0;
    case 547u: goto L_0022FCF8;
    case 548u: goto L_0022FD0C;
    case 549u: goto L_0022FD24;
    case 550u: goto L_0022FD30;
    case 551u: goto L_0022FD38;
    case 552u: goto L_0022FD40;
    case 553u: goto L_0022FD48;
    case 554u: goto L_0022FD50;
    case 555u: goto L_0022FD6C;
    case 556u: goto L_0022FD80;
    case 557u: goto L_0022FDB0;
    case 558u: goto L_0022FDC0;
    case 559u: goto L_0022FDCC;
    case 560u: goto L_0022FDD4;
    case 561u: goto L_0022FDEC;
    case 562u: goto L_0022FDF8;
    case 563u: goto L_0022FE18;
    case 564u: goto L_0022FE20;
    case 565u: goto L_0022FE28;
    case 566u: goto L_0022FE48;
    case 567u: goto L_0022FE50;
    case 568u: goto L_0022FE58;
    case 569u: goto L_0022FE64;
    case 570u: goto L_0022FEA0;
    case 571u: goto L_0022FEDC;
    case 572u: goto L_0022FEE8;
    case 573u: goto L_0022FEF8;
    case 574u: goto L_0022FF00;
    case 575u: goto L_0022FF08;
    case 576u: goto L_0022FF10;
    case 577u: goto L_0022FF18;
    case 578u: goto L_0022FF20;
    case 579u: goto L_0022FF9C;
    case 580u: goto L_0022FFB0;
    default: bad_entry(c, 0x0022C000u); return;
    }
L_0022C000:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 120u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 112u), c.f[2]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C01Cu); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0022C01Cu) [[unlikely]] return; }
L_0022C01C:
    c.f[13] = ld32((c.r[17].w[0] + 188u));
    c.budget -= 1;
L_0022C020:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_0022C078; }
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022C074; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    c.f[12] = ld32((c.r[17].w[0] + 180u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C060u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_000E(c, 186u, depth + 1u); else { c.pc = 0x00159460u; return; } if (c.pc != 0x0022C060u) [[unlikely]] return; }
L_0022C060:
    c.f[1] = ld32((c.r[17].w[0] + 188u));
    c.f[0] = ld32((c.r[28].w[0] - 32668u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 188u), c.f[0]);  if (t) { goto L_0022C080; } }
L_0022C074:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_0022C078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C080u);  if (depth < kMaxDepth) unit_000E(c, 190u, depth + 1u); else { c.pc = 0x00159530u; return; } if (c.pc != 0x0022C080u) [[unlikely]] return; }
L_0022C080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C088u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x0022C088u) [[unlikely]] return; }
L_0022C088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C090u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 215u, depth + 1u); else { c.pc = 0x00161D70u; return; } if (c.pc != 0x0022C090u) [[unlikely]] return; }
L_0022C090:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C09Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 373u, depth + 1u); else { c.pc = 0x0022E890u; return; } if (c.pc != 0x0022C09Cu) [[unlikely]] return; }
L_0022C09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0022C0A4u) [[unlikely]] return; }
L_0022C0A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0B4u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x0022C0B4u) [[unlikely]] return; }
L_0022C0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0022C0BCu) [[unlikely]] return; }
L_0022C0BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[3], 0u + 131u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0D0u); st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0022C0D0u) [[unlikely]] return; }
L_0022C0D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[21]);
    st32((c.r[2].w[0] + 8u), c.f[22]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0F0u); st32((c.r[2].w[0] + 12u), c.f[23]);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022C0F0u) [[unlikely]] return; }
L_0022C0F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_0022C168; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C100u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0022C100u) [[unlikely]] return; }
L_0022C100:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C110u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x0022C110u) [[unlikely]] return; }
L_0022C110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C118u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0022C118u) [[unlikely]] return; }
L_0022C118:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C128u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x0022C128u) [[unlikely]] return; }
L_0022C128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[20] = ld32((c.r[2].w[0] + 7664u));
    c.f[21] = ld32((c.r[3].w[0] + 7668u));
    c.f[23] = ld32((c.r[17].w[0] + 220u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[22] = ld32((c.r[2].w[0] + 7672u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C14Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0022C14Cu) [[unlikely]] return; }
L_0022C14C:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[21]);
    st32((c.r[2].w[0] + 8u), c.f[22]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[23]);  if (t) { goto L_0022C20C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_0022C168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C170u);  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x0022C170u) [[unlikely]] return; }
L_0022C170:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_0022C210; }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C188u); set32(c.r[5], c.r[17].w[0] + 224u);  if (depth < kMaxDepth) unit_0045(c, 94u, depth + 1u); else { c.pc = 0x002357B0u; return; } if (c.pc != 0x0022C188u) [[unlikely]] return; }
L_0022C188:
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022C20C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C1A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0022C1A8u) [[unlikely]] return; }
L_0022C1A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C1B8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x0022C1B8u) [[unlikely]] return; }
L_0022C1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C1C0u); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x0022C1C0u) [[unlikely]] return; }
L_0022C1C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_0022C1E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C1D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0022C1D0u) [[unlikely]] return; }
L_0022C1D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_0022C20C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_0022C1E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C1ECu);  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x0022C1ECu) [[unlikely]] return; }
L_0022C1EC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0022C20C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C200u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0022C200u) [[unlikely]] return; }
L_0022C200:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 3;
L_0022C20C:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_0022C210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C218u);  if (depth < kMaxDepth) unit_000E(c, 213u, depth + 1u); else { c.pc = 0x00159910u; return; } if (c.pc != 0x0022C218u) [[unlikely]] return; }
L_0022C218:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C224u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022C224u) [[unlikely]] return; }
L_0022C224:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022C260; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C234u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0022C234u) [[unlikely]] return; }
L_0022C234:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C244u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x0022C244u) [[unlikely]] return; }
L_0022C244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C24Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0022C24Cu) [[unlikely]] return; }
L_0022C24C:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C25Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x0022C25Cu) [[unlikely]] return; }
L_0022C25C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022C260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C268u);  if (depth < kMaxDepth) unit_0010(c, 221u, depth + 1u); else { c.pc = 0x00161E10u; return; } if (c.pc != 0x0022C268u) [[unlikely]] return; }
L_0022C268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C270u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x0022C270u) [[unlikely]] return; }
L_0022C270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C278u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0022C278u) [[unlikely]] return; }
L_0022C278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C280u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x0022C280u) [[unlikely]] return; }
L_0022C280:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C28Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 26u, depth + 1u); else { c.pc = 0x00234280u; return; } if (c.pc != 0x0022C28Cu) [[unlikely]] return; }
L_0022C28C:
    set32(c.r[4], ld32((c.r[2].w[0] + 436u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022C420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C2A4u);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x0022C2A4u) [[unlikely]] return; }
L_0022C2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C2ACu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x0022C2ACu) [[unlikely]] return; }
L_0022C2AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C2B4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x0022C2B4u) [[unlikely]] return; }
L_0022C2B4:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C2C0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0022C2C0u) [[unlikely]] return; }
L_0022C2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C2C8u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0022C2C8u) [[unlikely]] return; }
L_0022C2C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C2D8u); set32(c.r[6], c.r[17].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0022C2D8u) [[unlikely]] return; }
L_0022C2D8:
    set32(c.r[18], ld32((c.r[17].w[0] + 272u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C2E4u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0022C2E4u) [[unlikely]] return; }
L_0022C2E4:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C2F4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0022C2F4u) [[unlikely]] return; }
L_0022C2F4:
    c.f[13] = ld32((c.r[17].w[0] + 188u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_0022C344; }
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022C340; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    c.f[12] = ld32((c.r[17].w[0] + 180u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C338u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_000E(c, 186u, depth + 1u); else { c.pc = 0x00159460u; return; } if (c.pc != 0x0022C338u) [[unlikely]] return; }
L_0022C338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0022C350; } }
L_0022C340:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_0022C344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C34Cu);  if (depth < kMaxDepth) unit_000E(c, 190u, depth + 1u); else { c.pc = 0x00159530u; return; } if (c.pc != 0x0022C34Cu) [[unlikely]] return; }
L_0022C34C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022C350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C358u);  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x0022C358u) [[unlikely]] return; }
L_0022C358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C360u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0022C360u) [[unlikely]] return; }
L_0022C360:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[3], 0u + 128u);
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C374u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0022C374u) [[unlikely]] return; }
L_0022C374:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[4].w[0] + 7792u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[2] = ld32((c.r[3].w[0] + 7796u));
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[4].w[0] + 7800u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 96u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 7804u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[28].w[0] - 32332u));
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 108u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C3BCu); st32((c.r[29].w[0] + 100u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0022C3BCu) [[unlikely]] return; }
L_0022C3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C3C4u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0022C3C4u) [[unlikely]] return; }
L_0022C3C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 7760u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 7768u));
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 7772u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 84u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 88u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C400u); st32((c.r[29].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x0022C400u) [[unlikely]] return; }
L_0022C400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C408u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_000E(c, 213u, depth + 1u); else { c.pc = 0x00159910u; return; } if (c.pc != 0x0022C408u) [[unlikely]] return; }
L_0022C408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C410u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x0022C410u) [[unlikely]] return; }
L_0022C410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C418u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0022C418u) [[unlikely]] return; }
L_0022C418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C420u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x0022C420u) [[unlikely]] return; }
L_0022C420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0022C424:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0022C450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0022C474; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 168u), c.r[3].w[0]);  if (t) { goto L_0022C48C; } }
L_0022C474:
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    set32(c.r[7], c.r[7].w[0] << (c.r[5].w[0] & 31u));
    c.r[7].d[0] = ~(c.r[7].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 6;
L_0022C48C:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 10u);  goto L_0022C4C0; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0022C4BC; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], 0u + 10u);
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C4B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0022C4B4u) [[unlikely]] return; }
L_0022C4B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0022C4E0; } }
L_0022C4BC:
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_0022C4C0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0022C4DC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0022C4DC; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C4DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0022C4DCu) [[unlikely]] return; }
L_0022C4DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0022C4E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022C4F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];  c.pc = t; return; }
L_0022C510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 116u)));
    st32((c.r[4].w[0] + 120u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 140u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022C5BC; } }
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0022C5C0; }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_0022C564; }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C560u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0022C560u) [[unlikely]] return; }
L_0022C560:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_0022C564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C56Cu);  if (depth < kMaxDepth) unit_0045(c, 88u, depth + 1u); else { c.pc = 0x002356E0u; return; } if (c.pc != 0x0022C56Cu) [[unlikely]] return; }
L_0022C56C:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C57Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 26u, depth + 1u); else { c.pc = 0x00248310u; return; } if (c.pc != 0x0022C57Cu) [[unlikely]] return; }
L_0022C57C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C584u); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_0044(c, 500u, depth + 1u); else { c.pc = 0x00233960u; return; } if (c.pc != 0x0022C584u) [[unlikely]] return; }
L_0022C584:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0022C5BC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[5], 0u + 23u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C5A0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x0022C5A0u) [[unlikely]] return; }
L_0022C5A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C5A8u); set32(c.r[4], 0u + 4115u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0022C5A8u) [[unlikely]] return; }
L_0022C5A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022C5BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C5BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 292u, depth + 1u); else { c.pc = 0x00252E90u; return; } if (c.pc != 0x0022C5BCu) [[unlikely]] return; }
L_0022C5BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0022C5C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022C5D0:
    set32(c.r[5], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0022C5F8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 120u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0022C5F8; } }
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 2;
L_0022C5F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022C600:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 116u)));  c.pc = t; return; }
L_0022C610:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 112u), c.r[3].w[0]);  c.pc = t; return; }
L_0022C620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 124u)));  c.pc = t; return; }
L_0022C630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), c.f[12]);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.f[13]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C654u); st32((c.r[29].w[0] + 24u), c.f[14]);  if (depth < kMaxDepth) unit_0043(c, 77u, depth + 1u); else { c.pc = 0x0022C660u; return; } if (c.pc != 0x0022C654u) [[unlikely]] return; }
L_0022C654:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022C660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C680u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 94u, depth + 1u); else { c.pc = 0x002357B0u; return; } if (c.pc != 0x0022C680u) [[unlikely]] return; }
L_0022C680:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[4], c.r[17].w[0] + 224u);  goto L_0022C690; }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[4], c.r[17].w[0] + 224u);
    c.budget -= 2;
L_0022C690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C698u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0022C698u) [[unlikely]] return; }
L_0022C698:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C6A4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 23u, depth + 1u); else { c.pc = 0x002482F0u; return; } if (c.pc != 0x0022C6A4u) [[unlikely]] return; }
L_0022C6A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022C6C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[5].sd[0] < 100ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022C6F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C6E4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 448u, depth + 1u); else { c.pc = 0x0024FF40u; return; } if (c.pc != 0x0022C6E4u) [[unlikely]] return; }
L_0022C6E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022C700; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0022C81C; } }
L_0022C6F8:
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0022C700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C708u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022C708u) [[unlikely]] return; }
L_0022C708:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 116u)));  goto L_0022C744; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C71Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 7u, depth + 1u); else { c.pc = 0x002504C0u; return; } if (c.pc != 0x0022C71Cu) [[unlikely]] return; }
L_0022C71C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C728u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 77u, depth + 1u); else { c.pc = 0x0022C660u; return; } if (c.pc != 0x0022C728u) [[unlikely]] return; }
L_0022C728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C730u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 9u, depth + 1u); else { c.pc = 0x00250520u; return; } if (c.pc != 0x0022C730u) [[unlikely]] return; }
L_0022C730:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C73Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 101u, depth + 1u); else { c.pc = 0x0022C850u; return; } if (c.pc != 0x0022C73Cu) [[unlikely]] return; }
L_0022C73C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C818; } }
L_0022C744:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022C770; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C75Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004C(c, 7u, depth + 1u); else { c.pc = 0x002504C0u; return; } if (c.pc != 0x0022C75Cu) [[unlikely]] return; }
L_0022C75C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C768u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 77u, depth + 1u); else { c.pc = 0x0022C660u; return; } if (c.pc != 0x0022C768u) [[unlikely]] return; }
L_0022C768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C818; } }
L_0022C770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C778u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004C(c, 7u, depth + 1u); else { c.pc = 0x002504C0u; return; } if (c.pc != 0x0022C778u) [[unlikely]] return; }
L_0022C778:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C788u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0022C788u) [[unlikely]] return; }
L_0022C788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C798u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0022C798u) [[unlikely]] return; }
L_0022C798:
    c.f[1] = ld32((c.r[28].w[0] - 32688u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C7A4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x0022C7A4u) [[unlikely]] return; }
L_0022C7A4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C7B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 101u, depth + 1u); else { c.pc = 0x0022C850u; return; } if (c.pc != 0x0022C7B0u) [[unlikely]] return; }
L_0022C7B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C7C0u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0045(c, 129u, depth + 1u); else { c.pc = 0x00235BB0u; return; } if (c.pc != 0x0022C7C0u) [[unlikely]] return; }
L_0022C7C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022C7F0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022C810; }
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022C80C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022C7F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C7F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004C(c, 7u, depth + 1u); else { c.pc = 0x002504C0u; return; } if (c.pc != 0x0022C7F8u) [[unlikely]] return; }
L_0022C7F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C804u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 77u, depth + 1u); else { c.pc = 0x0022C660u; return; } if (c.pc != 0x0022C804u) [[unlikely]] return; }
L_0022C804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C818; } }
L_0022C80C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022C810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C818u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0043(c, 77u, depth + 1u); else { c.pc = 0x0022C660u; return; } if (c.pc != 0x0022C818u) [[unlikely]] return; }
L_0022C818:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0022C81C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0022C830:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[5], c.r[2].w[0] + 224u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018EA30u | kUnwind; return; } [[clang::musttail]] return unit_001B(c, 149u, depth); }
L_0022C840:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 224u);  c.pc = t; return; }
L_0022C850:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 272u), c.r[5].w[0]);  c.pc = t; return; }
L_0022C860:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 272u)));  c.pc = t; return; }
L_0022C870:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 96u)));  c.pc = t; return; }
L_0022C880:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 112u), c.r[3].w[0]);  c.pc = t; return; }
L_0022C890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022C8BC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 128u)));  goto L_0022C8C0; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022C8BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_0022C8C0:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0022C908; }
    st32((c.r[16].w[0] + 148u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 208u));
    st32((c.r[16].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 212u));
    st32((c.r[16].w[0] + 184u), c.f[0]);
    st32((c.r[16].w[0] + 128u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 208u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C8F8u); set32(c.r[4], ld32((c.r[2].w[0] + 68u)));  if (depth < kMaxDepth) unit_0011(c, 291u, depth + 1u); else { c.pc = 0x00166830u; return; } if (c.pc != 0x0022C8F8u) [[unlikely]] return; }
L_0022C8F8:
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32668u));
    st32((c.r[16].w[0] + 188u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_0022C908:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022C920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C934u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 105u, depth + 1u); else { c.pc = 0x0022C890u; return; } if (c.pc != 0x0022C934u) [[unlikely]] return; }
L_0022C934:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 148u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 204u), 0u);
    st32((c.r[16].w[0] + 208u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022C960:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 128u)));  c.pc = t; return; }
L_0022C970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 156u), c.r[5].w[0]);  c.pc = t; return; }
L_0022C980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 216u));  c.pc = t; return; }
L_0022C990:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C9B4u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022C9B4u) [[unlikely]] return; }
L_0022C9B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0022CA14; }
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C9C8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0045(c, 10u, depth + 1u); else { c.pc = 0x00234100u; return; } if (c.pc != 0x0022C9C8u) [[unlikely]] return; }
L_0022C9C8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C9D8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0022C9D8u) [[unlikely]] return; }
L_0022C9D8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C9E4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0022C9E4u) [[unlikely]] return; }
L_0022C9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C9ECu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_004C(c, 15u, depth + 1u); else { c.pc = 0x002505E0u; return; } if (c.pc != 0x0022C9ECu) [[unlikely]] return; }
L_0022C9EC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0022CA04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C9FCu); set32(c.r[4], 0u + 3640u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x0022C9FCu) [[unlikely]] return; }
L_0022C9FC:
    set32(c.r[2], c.r[2].w[0] - 1820u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0022CA04:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CA10u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 101u, depth + 1u); else { c.pc = 0x0022C850u; return; } if (c.pc != 0x0022CA10u) [[unlikely]] return; }
L_0022CA10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0022CA14:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022CA30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CA54u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0022CA54u) [[unlikely]] return; }
L_0022CA54:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CA64u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0022CA64u) [[unlikely]] return; }
L_0022CA64:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CA70u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0022CA70u) [[unlikely]] return; }
L_0022CA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CA78u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_004C(c, 15u, depth + 1u); else { c.pc = 0x002505E0u; return; } if (c.pc != 0x0022CA78u) [[unlikely]] return; }
L_0022CA78:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0022CA90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CA88u); set32(c.r[4], 0u + 3640u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x0022CA88u) [[unlikely]] return; }
L_0022CA88:
    set32(c.r[2], c.r[2].w[0] - 1820u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0022CA90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CA9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 101u, depth + 1u); else { c.pc = 0x0022C850u; return; } if (c.pc != 0x0022CA9Cu) [[unlikely]] return; }
L_0022CA9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022CAC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CAD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 81u, depth + 1u); else { c.pc = 0x0022C6C0u; return; } if (c.pc != 0x0022CAD4u) [[unlikely]] return; }
L_0022CAD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CAE0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 107u, depth + 1u); else { c.pc = 0x0022C920u; return; } if (c.pc != 0x0022CAE0u) [[unlikely]] return; }
L_0022CAE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022CAF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CB0Cu); set32(c.r[4], 0u + 4115u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0022CB0Cu) [[unlikely]] return; }
L_0022CB0C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CB18u); set32(c.r[4], 0u + 4099u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0022CB18u) [[unlikely]] return; }
L_0022CB18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CB24u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 334u, depth + 1u); else { c.pc = 0x002533A0u; return; } if (c.pc != 0x0022CB24u) [[unlikely]] return; }
L_0022CB24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022CB68; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0022CB44; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022CB64; } }
L_0022CB44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CB4Cu);  if (depth < kMaxDepth) unit_00BD(c, 363u, depth + 1u); else { c.pc = 0x004172F0u; return; } if (c.pc != 0x0022CB4Cu) [[unlikely]] return; }
L_0022CB4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022CB64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CB5Cu); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 275u, depth + 1u); else { c.pc = 0x00237160u; return; } if (c.pc != 0x0022CB5Cu) [[unlikely]] return; }
L_0022CB5C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022CB7C; }
L_0022CB64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022CB68:
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CB74u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0022CB74u) [[unlikely]] return; }
L_0022CB74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0022CBB4; } }
L_0022CB7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CB84u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022CB84u) [[unlikely]] return; }
L_0022CB84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022CBA4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CB9Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0022CB9Cu) [[unlikely]] return; }
L_0022CB9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022CBB0; } }
L_0022CBA4:
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CBB0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0022CBB0u) [[unlikely]] return; }
L_0022CBB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022CBB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CBBCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022CBBCu) [[unlikely]] return; }
L_0022CBBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_0022CBCC; }
    st32((c.r[16].w[0] + 156u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 2;
L_0022CBCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CBD4u);  if (depth < kMaxDepth) unit_0045(c, 75u, depth + 1u); else { c.pc = 0x00235560u; return; } if (c.pc != 0x0022CBD4u) [[unlikely]] return; }
L_0022CBD4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 5u);  goto L_0022CC00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CBE4u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 76u, depth + 1u); else { c.pc = 0x00235590u; return; } if (c.pc != 0x0022CBE4u) [[unlikely]] return; }
L_0022CBE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022CBFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CBF4u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 77u, depth + 1u); else { c.pc = 0x002355C0u; return; } if (c.pc != 0x0022CBF4u) [[unlikely]] return; }
L_0022CBF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022CC08; }
L_0022CBFC:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0022CC00:
    st32((c.r[16].w[0] + 160u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0022CC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC10u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022CC10u) [[unlikely]] return; }
L_0022CC10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0022CC3C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[16].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_0022CC38; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0022CC38u) [[unlikely]] return; }
L_0022CC38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0022CC3C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022CC50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC68u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022CC68u) [[unlikely]] return; }
L_0022CC68:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  goto L_0022CC84; }
    c.f[1] = ld32((c.r[16].w[0] + 192u));
    c.f[0] = ld32((c.r[16].w[0] + 208u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 208u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 5;
L_0022CC84:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  goto L_0022CCF4; }
    c.f[1] = ld32((c.r[16].w[0] + 208u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CCA4u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0022CCA4u) [[unlikely]] return; }
L_0022CCA4:
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], 0u + 20038u);  goto L_0022CCDC; }
    c.f[1] = ld32((c.r[16].w[0] + 208u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CCC8u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0022CCC8u) [[unlikely]] return; }
L_0022CCC8:
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022CCF0; } }
    set32(c.r[4], 0u + 20038u);
    c.budget -= 1;
L_0022CCDC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CCE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0022CCE8u) [[unlikely]] return; }
L_0022CCE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 124u)));  if (t) { goto L_0022CD5C; } }
L_0022CCF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_0022CCF4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022CD58; } }
    c.f[1] = ld32((c.r[16].w[0] + 208u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CD14u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0022CD14u) [[unlikely]] return; }
L_0022CD14:
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], 0u + 20039u);  goto L_0022CD4C; }
    c.f[1] = ld32((c.r[16].w[0] + 208u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CD38u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0022CD38u) [[unlikely]] return; }
L_0022CD38:
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022CD58; } }
    set32(c.r[4], 0u + 20039u);
    c.budget -= 1;
L_0022CD4C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CD58u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0022CD58u) [[unlikely]] return; }
L_0022CD58:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 1;
L_0022CD5C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 128u)));  goto L_0022CEC0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022CDD0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CD8Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0022CD8Cu) [[unlikely]] return; }
L_0022CD8C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CDA0u); c.r[6].d[0] = c.r[2].d[0] | 33860ull;  if (depth < kMaxDepth) unit_001B(c, 239u, depth + 1u); else { c.pc = 0x0018FCE0u; return; } if (c.pc != 0x0022CDA0u) [[unlikely]] return; }
L_0022CDA0:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CDB4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0022CDB4u) [[unlikely]] return; }
L_0022CDB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CDC8u); c.r[6].d[0] = c.r[2].d[0] | 33860ull;  if (depth < kMaxDepth) unit_001B(c, 239u, depth + 1u); else { c.pc = 0x0018FCE0u; return; } if (c.pc != 0x0022CDC8u) [[unlikely]] return; }
L_0022CDC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 128u)));  if (t) { goto L_0022CE2C; } }
L_0022CDD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0022CE28; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CDECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0022CDECu) [[unlikely]] return; }
L_0022CDEC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CE00u); c.r[6].d[0] = c.r[2].d[0] | 34588ull;  if (depth < kMaxDepth) unit_001B(c, 239u, depth + 1u); else { c.pc = 0x0018FCE0u; return; } if (c.pc != 0x0022CE00u) [[unlikely]] return; }
L_0022CE00:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CE14u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0022CE14u) [[unlikely]] return; }
L_0022CE14:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CE28u); c.r[6].d[0] = c.r[2].d[0] | 34588ull;  if (depth < kMaxDepth) unit_001B(c, 239u, depth + 1u); else { c.pc = 0x0018FCE0u; return; } if (c.pc != 0x0022CE28u) [[unlikely]] return; }
L_0022CE28:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_0022CE2C:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022CEB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CE44u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0044(c, 500u, depth + 1u); else { c.pc = 0x00233960u; return; } if (c.pc != 0x0022CE44u) [[unlikely]] return; }
L_0022CE44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022CEB0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_0022CE54:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], 0u + 30u);  goto L_0022CE60; }
    set32(c.r[4], 0u + 50u);
    c.budget -= 1;
L_0022CE60:
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022CE8C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022CEBC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022CE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CE94u);  if (depth < kMaxDepth) unit_0043(c, 389u, depth + 1u); else { c.pc = 0x0022EAE0u; return; } if (c.pc != 0x0022CE94u) [[unlikely]] return; }
L_0022CE94:
    set32(c.r[4], 0u + 9098u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CEA4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0022CEA4u) [[unlikely]] return; }
L_0022CEA4:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 136u), 0u);  if (t) { goto L_0022CEBC; } }
L_0022CEB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022CEB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CEBCu);  if (depth < kMaxDepth) unit_0043(c, 389u, depth + 1u); else { c.pc = 0x0022EAE0u; return; } if (c.pc != 0x0022CEBCu) [[unlikely]] return; }
L_0022CEBC:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_0022CEC0:
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 212u));  goto L_0022CEF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 212u));  if (t) { goto L_0022CEE0; } }
L_0022CED4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 208u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    c.budget -= 3;
L_0022CEE0:
    c.f[0] = ld32((c.r[16].w[0] + 208u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[16].w[0] + 208u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022CED4u | kUnwind; return; } goto L_0022CED4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0022CF1C; } }
L_0022CEF8:
    c.f[0] = ld32((c.r[16].w[0] + 208u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022CF18; } }
    st32((c.r[16].w[0] + 208u), c.f[1]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CF18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 105u, depth + 1u); else { c.pc = 0x0022C890u; return; } if (c.pc != 0x0022CF18u) [[unlikely]] return; }
L_0022CF18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0022CF1C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022CF30:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022D600; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 30992u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0022C000u < 16384u) { entry = entries_0043[(t - 0x0022C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022CF7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CF84u);  if (depth < kMaxDepth) unit_0043(c, 365u, depth + 1u); else { c.pc = 0x0022E7C0u; return; } if (c.pc != 0x0022CF84u) [[unlikely]] return; }
L_0022CF84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0022D604; } }
L_0022CF8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CF94u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022CF94u) [[unlikely]] return; }
L_0022CF94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 172u), 0u);  goto L_0022CFB4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CFA8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022CFA8u) [[unlikely]] return; }
L_0022CFA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 172u));  goto L_0022CFBC; }
    st32((c.r[17].w[0] + 172u), 0u);
    c.budget -= 1;
L_0022CFB4:
    st32((c.r[17].w[0] + 176u), 0u);
    c.f[1] = ld32((c.r[17].w[0] + 172u));
    c.budget -= 2;
L_0022CFBC:
    c.f[0] = ld32((c.r[17].w[0] + 196u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CFC8u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0022CFC8u) [[unlikely]] return; }
L_0022CFC8:
    c.f[1] = ld32((c.r[28].w[0] - 32328u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022CFFC; }
    c.f[1] = ld32((c.r[17].w[0] + 176u));
    c.f[0] = ld32((c.r[17].w[0] + 200u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CFE8u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0022CFE8u) [[unlikely]] return; }
L_0022CFE8:
    c.f[1] = ld32((c.r[28].w[0] - 32328u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = ld32((c.r[17].w[0] + 172u));  goto L_0022D01C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022CFFC:
    set32(c.r[5], c.r[17].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D008u); set32(c.r[6], c.r[17].w[0] + 256u);  if (depth < kMaxDepth) unit_0043(c, 250u, depth + 1u); else { c.pc = 0x0022D6F0u; return; } if (c.pc != 0x0022D008u) [[unlikely]] return; }
L_0022D008:
    c.f[0] = ld32((c.r[17].w[0] + 172u));
    st32((c.r[17].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 176u));
    st32((c.r[17].w[0] + 200u), c.f[0]);
    c.f[12] = ld32((c.r[17].w[0] + 172u));
    c.budget -= 5;
L_0022D01C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D028u); set32(c.r[5], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0022D028u) [[unlikely]] return; }
L_0022D028:
    c.f[12] = ld32((c.r[17].w[0] + 176u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D038u); set32(c.r[5], c.r[17].w[0] + 256u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0022D038u) [[unlikely]] return; }
L_0022D038:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D048u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0022D048u) [[unlikely]] return; }
L_0022D048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D050u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x0022D050u) [[unlikely]] return; }
L_0022D050:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D060u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0022D060u) [[unlikely]] return; }
L_0022D060:
    c.f[0] = ld32((c.r[28].w[0] - 32324u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[28].w[0] - 32668u));  goto L_0022D084; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D07Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 322u, depth + 1u); else { c.pc = 0x0022E340u; return; } if (c.pc != 0x0022D07Cu) [[unlikely]] return; }
L_0022D07C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0022D0B0; } }
L_0022D084:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022D0A4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D09Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 346u, depth + 1u); else { c.pc = 0x0022E5E0u; return; } if (c.pc != 0x0022D09Cu) [[unlikely]] return; }
L_0022D09C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D0AC; } }
L_0022D0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D0ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 365u, depth + 1u); else { c.pc = 0x0022E7C0u; return; } if (c.pc != 0x0022D0ACu) [[unlikely]] return; }
L_0022D0AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022D0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D0B8u);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x0022D0B8u) [[unlikely]] return; }
L_0022D0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 216u), c.f[0]);  if (t) { goto L_0022D600; } }
L_0022D0C0:
    set32(c.r[5], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D0CCu); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x002341B0u; return; } if (c.pc != 0x0022D0CCu) [[unlikely]] return; }
L_0022D0CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D0D8u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0043(c, 99u, depth + 1u); else { c.pc = 0x0022C830u; return; } if (c.pc != 0x0022D0D8u) [[unlikely]] return; }
L_0022D0D8:
    set32(c.r[4], c.r[17].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D0E4u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x0022D0E4u) [[unlikely]] return; }
L_0022D0E4:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D0F8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 310u, depth + 1u); else { c.pc = 0x0022DC90u; return; } if (c.pc != 0x0022D0F8u) [[unlikely]] return; }
L_0022D0F8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022D118; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D114u); set32(c.r[6], c.r[17].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0022D114u) [[unlikely]] return; }
L_0022D114:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022D118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D120u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0022D120u) [[unlikely]] return; }
L_0022D120:
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);  goto L_0022D20C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022D208; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);  goto L_0022D19C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);  goto L_0022D158; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D600; } }
L_0022D158:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022D18C; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0022D188; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D180u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 365u, depth + 1u); else { c.pc = 0x0022E7C0u; return; } if (c.pc != 0x0022D180u) [[unlikely]] return; }
L_0022D180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D600; } }
L_0022D188:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022D18C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D194u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 322u, depth + 1u); else { c.pc = 0x0022E340u; return; } if (c.pc != 0x0022D194u) [[unlikely]] return; }
L_0022D194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D600; } }
L_0022D19C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);  goto L_0022D1C4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D1BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 322u, depth + 1u); else { c.pc = 0x0022E340u; return; } if (c.pc != 0x0022D1BCu) [[unlikely]] return; }
L_0022D1BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D600; } }
L_0022D1C4:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022D1F8; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0022D1F4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D1ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 365u, depth + 1u); else { c.pc = 0x0022E7C0u; return; } if (c.pc != 0x0022D1ECu) [[unlikely]] return; }
L_0022D1EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D600; } }
L_0022D1F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022D1F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D200u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 346u, depth + 1u); else { c.pc = 0x0022E5E0u; return; } if (c.pc != 0x0022D200u) [[unlikely]] return; }
L_0022D200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D600; } }
L_0022D208:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.budget -= 1;
L_0022D20C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  goto L_0022D234; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D22Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 322u, depth + 1u); else { c.pc = 0x0022E340u; return; } if (c.pc != 0x0022D22Cu) [[unlikely]] return; }
L_0022D22C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D600; } }
L_0022D234:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022D254; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022D264; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022D254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D25Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 346u, depth + 1u); else { c.pc = 0x0022E5E0u; return; } if (c.pc != 0x0022D25Cu) [[unlikely]] return; }
L_0022D25C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D600; } }
L_0022D264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D26Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 365u, depth + 1u); else { c.pc = 0x0022E7C0u; return; } if (c.pc != 0x0022D26Cu) [[unlikely]] return; }
L_0022D26C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D600; } }
L_0022D274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D27Cu); set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  if (depth < kMaxDepth) unit_004A(c, 37u, depth + 1u); else { c.pc = 0x002487E0u; return; } if (c.pc != 0x0022D27Cu) [[unlikely]] return; }
L_0022D27C:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D288u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 88u, depth + 1u); else { c.pc = 0x002356E0u; return; } if (c.pc != 0x0022D288u) [[unlikely]] return; }
L_0022D288:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D298u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x0022D298u) [[unlikely]] return; }
L_0022D298:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  goto L_0022D2C4; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0022D2C0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D2B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 365u, depth + 1u); else { c.pc = 0x0022E7C0u; return; } if (c.pc != 0x0022D2B8u) [[unlikely]] return; }
L_0022D2B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D600; } }
L_0022D2C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_0022D2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D2CCu);  if (depth < kMaxDepth) unit_004A(c, 40u, depth + 1u); else { c.pc = 0x00248820u; return; } if (c.pc != 0x0022D2CCu) [[unlikely]] return; }
L_0022D2CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_0022D380; }
    set32(c.r[3], 0u + 100u);
    set32(c.r[2], 0u + 5u);
    mmi::div(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022D370; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0022D36C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43040000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC37A0000u);
    set32(c.r[6], c.r[17].w[0] + 224u);
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 148u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D328u); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0022D328u) [[unlikely]] return; }
L_0022D328:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D334u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0022D334u) [[unlikely]] return; }
L_0022D334:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D340u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022D340u) [[unlikely]] return; }
L_0022D340:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022D35C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D354u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 322u, depth + 1u); else { c.pc = 0x0022E340u; return; } if (c.pc != 0x0022D354u) [[unlikely]] return; }
L_0022D354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D600; } }
L_0022D35C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D364u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 346u, depth + 1u); else { c.pc = 0x0022E5E0u; return; } if (c.pc != 0x0022D364u) [[unlikely]] return; }
L_0022D364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D600; } }
L_0022D36C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022D370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D378u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 365u, depth + 1u); else { c.pc = 0x0022E7C0u; return; } if (c.pc != 0x0022D378u) [[unlikely]] return; }
L_0022D378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D600; } }
L_0022D380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D388u);  if (depth < kMaxDepth) unit_0045(c, 88u, depth + 1u); else { c.pc = 0x002356E0u; return; } if (c.pc != 0x0022D388u) [[unlikely]] return; }
L_0022D388:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D394u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 7u, depth + 1u); else { c.pc = 0x00248130u; return; } if (c.pc != 0x0022D394u) [[unlikely]] return; }
L_0022D394:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D3A0u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_004A(c, 24u, depth + 1u); else { c.pc = 0x00248300u; return; } if (c.pc != 0x0022D3A0u) [[unlikely]] return; }
L_0022D3A0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D3ACu); set32(c.r[5], c.r[17].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0022D3ACu) [[unlikely]] return; }
L_0022D3AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D3C0u); st32((c.r[29].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0022D3C0u) [[unlikely]] return; }
L_0022D3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D3C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x0022D3C8u) [[unlikely]] return; }
L_0022D3C8:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D3D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0022D3D8u) [[unlikely]] return; }
L_0022D3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D3E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 244u, depth + 1u); else { c.pc = 0x0022D620u; return; } if (c.pc != 0x0022D3E0u) [[unlikely]] return; }
L_0022D3E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D3ECu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022D3ECu) [[unlikely]] return; }
L_0022D3EC:
    c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  goto L_0022D40C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D404u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022D404u) [[unlikely]] return; }
L_0022D404:
    c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 2;
L_0022D40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D414u);  if (depth < kMaxDepth) unit_004A(c, 41u, depth + 1u); else { c.pc = 0x00248830u; return; } if (c.pc != 0x0022D414u) [[unlikely]] return; }
L_0022D414:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022D454; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D434u); set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  if (depth < kMaxDepth) unit_004A(c, 39u, depth + 1u); else { c.pc = 0x00248810u; return; } if (c.pc != 0x0022D434u) [[unlikely]] return; }
L_0022D434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022D450; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D448u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 346u, depth + 1u); else { c.pc = 0x0022E5E0u; return; } if (c.pc != 0x0022D448u) [[unlikely]] return; }
L_0022D448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D600; } }
L_0022D450:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022D454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D45Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022D45Cu) [[unlikely]] return; }
L_0022D45C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022D47C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D470u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022D470u) [[unlikely]] return; }
L_0022D470:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022D48C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022D47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D484u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 322u, depth + 1u); else { c.pc = 0x0022E340u; return; } if (c.pc != 0x0022D484u) [[unlikely]] return; }
L_0022D484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D600; } }
L_0022D48C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D494u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 346u, depth + 1u); else { c.pc = 0x0022E5E0u; return; } if (c.pc != 0x0022D494u) [[unlikely]] return; }
L_0022D494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D600; } }
L_0022D49C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D4A4u); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 88u, depth + 1u); else { c.pc = 0x002356E0u; return; } if (c.pc != 0x0022D4A4u) [[unlikely]] return; }
L_0022D4A4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D4B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 244u, depth + 1u); else { c.pc = 0x0022D620u; return; } if (c.pc != 0x0022D4B0u) [[unlikely]] return; }
L_0022D4B0:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 4u);  goto L_0022D4E0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43060000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1300000u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[18], 0u + 605u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_0022D554; } }
L_0022D4E0:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_0022D544; }
    c.f[1] = ld32((c.r[17].w[0] + 232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[18], 0u + 505u);  if (t) { goto L_0022D524; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC32A0000u);
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_0022D554; } }
L_0022D524:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43040000u);
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC37A0000u);
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_0022D554; } }
L_0022D544:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0022D600; } }
L_0022D554:
    set32(c.r[4], c.r[17].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D560u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x0022D560u) [[unlikely]] return; }
L_0022D560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_0022D5E0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D588u); set32(c.r[6], c.r[17].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0022D588u) [[unlikely]] return; }
L_0022D588:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D594u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0022D594u) [[unlikely]] return; }
L_0022D594:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D5A0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022D5A0u) [[unlikely]] return; }
L_0022D5A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022D5C0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D5B4u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022D5B4u) [[unlikely]] return; }
L_0022D5B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022D5D0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022D5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D5C8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 322u, depth + 1u); else { c.pc = 0x0022E340u; return; } if (c.pc != 0x0022D5C8u) [[unlikely]] return; }
L_0022D5C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D600; } }
L_0022D5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D5D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 346u, depth + 1u); else { c.pc = 0x0022E5E0u; return; } if (c.pc != 0x0022D5D8u) [[unlikely]] return; }
L_0022D5D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D600; } }
L_0022D5E0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D5ECu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0045(c, 296u, depth + 1u); else { c.pc = 0x002373F0u; return; } if (c.pc != 0x0022D5ECu) [[unlikely]] return; }
L_0022D5EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D5F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 71u, depth + 1u); else { c.pc = 0x0022C5D0u; return; } if (c.pc != 0x0022D5F4u) [[unlikely]] return; }
L_0022D5F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D600u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 365u, depth + 1u); else { c.pc = 0x0022E7C0u; return; } if (c.pc != 0x0022D600u) [[unlikely]] return; }
L_0022D600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0022D604:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0022D620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 204u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022D66C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D648u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022D648u) [[unlikely]] return; }
L_0022D648:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0022D6E0; }
    c.f[1] = ld32((c.r[16].w[0] + 204u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 204u), c.f[0]);  if (t) { goto L_0022D6DC; } }
L_0022D66C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30632u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 72u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 8u);  goto L_0022D6B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D68Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022D68Cu) [[unlikely]] return; }
L_0022D68C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022D6A0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 204u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_0022D6A0:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D6ACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0022D6ACu) [[unlikely]] return; }
L_0022D6AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022D6DC; } }
L_0022D6B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D6BCu);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022D6BCu) [[unlikely]] return; }
L_0022D6BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022D6D0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    st32((c.r[16].w[0] + 204u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_0022D6D0:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D6DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0022D6DCu) [[unlikely]] return; }
L_0022D6DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0022D6E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022D6F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 7680u));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 7684u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 7688u));
    st32((c.r[29].w[0] + 52u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 7692u));
    st32((c.r[29].w[0] + 56u), c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D740u); st32((c.r[29].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x0022D740u) [[unlikely]] return; }
L_0022D740:
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D74Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000D(c, 328u, depth + 1u); else { c.pc = 0x00157250u; return; } if (c.pc != 0x0022D74Cu) [[unlikely]] return; }
L_0022D74C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D754u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x0022D754u) [[unlikely]] return; }
L_0022D754:
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D760u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000D(c, 330u, depth + 1u); else { c.pc = 0x001572B0u; return; } if (c.pc != 0x0022D760u) [[unlikely]] return; }
L_0022D760:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D770u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0022D770u) [[unlikely]] return; }
L_0022D770:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D780u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0022D780u) [[unlikely]] return; }
L_0022D780:
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D794u); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0022D794u) [[unlikely]] return; }
L_0022D794:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D7A0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0022D7A0u) [[unlikely]] return; }
L_0022D7A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0022D7C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D7E4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0022D7E4u) [[unlikely]] return; }
L_0022D7E4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D7F4u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0022D7F4u) [[unlikely]] return; }
L_0022D7F4:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D804u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0045(c, 96u, depth + 1u); else { c.pc = 0x002357E0u; return; } if (c.pc != 0x0022D804u) [[unlikely]] return; }
L_0022D804:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_0022D82C; }
    set32(c.r[4], c.r[18].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D81Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0022D81Cu) [[unlikely]] return; }
L_0022D81C:
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 228u), c.f[0]);  if (t) { goto L_0022DA94; } }
L_0022D82C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D834u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0022D834u) [[unlikely]] return; }
L_0022D834:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 5000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D844u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0022D844u) [[unlikely]] return; }
L_0022D844:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D854u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x0022D854u) [[unlikely]] return; }
L_0022D854:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D864u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0022D864u) [[unlikely]] return; }
L_0022D864:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D874u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0045(c, 96u, depth + 1u); else { c.pc = 0x002357E0u; return; } if (c.pc != 0x0022D874u) [[unlikely]] return; }
L_0022D874:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_0022D884; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 500u);  if (t) { goto L_0022DA84; } }
L_0022D884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D88Cu);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0022D88Cu) [[unlikely]] return; }
L_0022D88C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u - 5000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D89Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0022D89Cu) [[unlikely]] return; }
L_0022D89C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D8ACu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x0022D8ACu) [[unlikely]] return; }
L_0022D8AC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D8BCu); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0022D8BCu) [[unlikely]] return; }
L_0022D8BC:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D8CCu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0045(c, 96u, depth + 1u); else { c.pc = 0x002357E0u; return; } if (c.pc != 0x0022D8CCu) [[unlikely]] return; }
L_0022D8CC:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_0022D8DC; }
L_0022D8D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 500u);  if (t) { goto L_0022DA84; } }
L_0022D8DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D8E4u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0022D8E4u) [[unlikely]] return; }
L_0022D8E4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 10000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D8F4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0022D8F4u) [[unlikely]] return; }
L_0022D8F4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D904u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x0022D904u) [[unlikely]] return; }
L_0022D904:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D914u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0022D914u) [[unlikely]] return; }
L_0022D914:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D924u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0045(c, 96u, depth + 1u); else { c.pc = 0x002357E0u; return; } if (c.pc != 0x0022D924u) [[unlikely]] return; }
L_0022D924:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_0022D934; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 5500u);  if (t) { goto L_0022DA84; } }
L_0022D934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D93Cu);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0022D93Cu) [[unlikely]] return; }
L_0022D93C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u - 10000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D94Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0022D94Cu) [[unlikely]] return; }
L_0022D94C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D95Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x0022D95Cu) [[unlikely]] return; }
L_0022D95C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D96Cu); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0022D96Cu) [[unlikely]] return; }
L_0022D96C:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D97Cu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0045(c, 96u, depth + 1u); else { c.pc = 0x002357E0u; return; } if (c.pc != 0x0022D97Cu) [[unlikely]] return; }
L_0022D97C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[16], 0u + 10500u);  goto L_0022DA84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 5500u);  if (t) { goto L_0022DA84; } }
L_0022D98C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D994u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0022D994u) [[unlikely]] return; }
L_0022D994:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D9A4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0022D9A4u) [[unlikely]] return; }
L_0022D9A4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D9B4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x0022D9B4u) [[unlikely]] return; }
L_0022D9B4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D9C4u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0022D9C4u) [[unlikely]] return; }
L_0022D9C4:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D9D4u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0045(c, 96u, depth + 1u); else { c.pc = 0x002357E0u; return; } if (c.pc != 0x0022D9D4u) [[unlikely]] return; }
L_0022D9D4:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_0022DA08; }
    set32(c.r[4], c.r[18].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D9ECu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0022D9ECu) [[unlikely]] return; }
L_0022D9EC:
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DA00u); st32((c.r[18].w[0] + 228u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0022DA00u) [[unlikely]] return; }
L_0022DA00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022DA94; } }
L_0022DA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DA10u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0022DA10u) [[unlikely]] return; }
L_0022DA10:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u - c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DA20u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0022DA20u) [[unlikely]] return; }
L_0022DA20:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DA30u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x0022DA30u) [[unlikely]] return; }
L_0022DA30:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DA40u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0022DA40u) [[unlikely]] return; }
L_0022DA40:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DA50u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0045(c, 96u, depth + 1u); else { c.pc = 0x002357E0u; return; } if (c.pc != 0x0022DA50u) [[unlikely]] return; }
L_0022DA50:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[16], c.r[16].w[0] + 500u);  goto L_0022DA84; }
    set32(c.r[4], c.r[18].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DA68u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0022DA68u) [[unlikely]] return; }
L_0022DA68:
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DA7Cu); st32((c.r[18].w[0] + 228u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0022DA7Cu) [[unlikely]] return; }
L_0022DA7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022DA94; } }
L_0022DA84:
    c.r[2].d[0] = c.r[16].sd[0] < 15000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D98Cu | kUnwind; return; } goto L_0022D98C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022DA94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0022DAB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[28].w[0] - 30632u)));
    st32((c.r[4].w[0] + 172u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DAD4u); st32((c.r[4].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0043(c, 244u, depth + 1u); else { c.pc = 0x0022D620u; return; } if (c.pc != 0x0022DAD4u) [[unlikely]] return; }
L_0022DAD4:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 72u));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 72u));  goto L_0022DAF4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 172u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 72u));
    c.budget -= 3;
L_0022DAF4:
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 72u));  goto L_0022DB10; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[17].w[0] + 172u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 72u));
    c.budget -= 3;
L_0022DB10:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 72u));  goto L_0022DB2C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 176u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 72u));
    c.budget -= 3;
L_0022DB2C:
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 180u));  goto L_0022DB48; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[17].w[0] + 176u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 180u));
    c.budget -= 3;
L_0022DB48:
    set32(c.r[3], 0u + 1u);
    c.f[0] = ld32((c.r[17].w[0] + 172u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 172u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 140u));
    c.f[0] = ld32((c.r[17].w[0] + 176u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 176u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 11;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0022DC30; }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 80u));  goto L_0022DBDC; }
    c.r[4].d[0] = ld64((c.r[16].w[0] + 72u));
    c.r[3].d[0] = c.r[4].d[0] & 1024ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022DBD8; } }
    c.r[3].d[0] = c.r[4].d[0] & 2048ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022DBD8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DBB8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0045(c, 141u, depth + 1u); else { c.pc = 0x00235DF0u; return; } if (c.pc != 0x0022DBB8u) [[unlikely]] return; }
L_0022DBB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022DBD8; } }
    set32(c.r[4], 0u + 15u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DBD0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0022DBD0u) [[unlikely]] return; }
L_0022DBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DBD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 389u, depth + 1u); else { c.pc = 0x0022EAE0u; return; } if (c.pc != 0x0022DBD8u) [[unlikely]] return; }
L_0022DBD8:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 80u));
    c.budget -= 1;
L_0022DBDC:
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 80u));  goto L_0022DBF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DBF4u); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 241u, depth + 1u); else { c.pc = 0x00236CF0u; return; } if (c.pc != 0x0022DBF4u) [[unlikely]] return; }
L_0022DBF4:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 80u));
    c.budget -= 1;
L_0022DBF8:
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 80u));  goto L_0022DC14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DC10u); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 251u, depth + 1u); else { c.pc = 0x00236E40u; return; } if (c.pc != 0x0022DC10u) [[unlikely]] return; }
L_0022DC10:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 80u));
    c.budget -= 1;
L_0022DC14:
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022DC2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DC2Cu); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 261u, depth + 1u); else { c.pc = 0x00236F90u; return; } if (c.pc != 0x0022DC2Cu) [[unlikely]] return; }
L_0022DC2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0022DC30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022DC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 156u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DC60u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0022DC60u) [[unlikely]] return; }
L_0022DC60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 152u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022DC90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 224u));
    c.f[0] = ld32((c.r[4].w[0] + 232u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DCD8u); c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 88u, depth + 1u); else { c.pc = 0x002356E0u; return; } if (c.pc != 0x0022DCD8u) [[unlikely]] return; }
L_0022DCD8:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.f[3] = ld32((c.r[17].w[0]));  goto L_0022E114; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.f[12] = c.f[21];  goto L_0022DEE4; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.f[12] = c.f[21];  goto L_0022DD04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0022E314; } }
L_0022DD04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DD0Cu);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0022DD0Cu) [[unlikely]] return; }
L_0022DD0C:
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[17].w[0] + 8u));  goto L_0022DD24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0022E314; } }
L_0022DD24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[5] = ld32((c.r[18].w[0] + 232u));  goto L_0022DD50; }
    c.f[5] = ld32((c.r[18].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022DD74; } }
    c.f[5] = ld32((c.r[18].w[0] + 232u));
    c.budget -= 1;
L_0022DD50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022E310; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022E310; } }
L_0022DD74:
    c.f[1] = fp::ee::div(c.fcr31, c.f[21], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42140000u);
    c.f[0] = ld32((c.r[18].w[0] + 224u));
    c.f[4] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.facc = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[5]);
    c.f[2] = c.r[2].w[0];
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[5]));
    c.budget -= 16;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0xC3020000u);  goto L_0022DE40; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43520000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022DE3C; } }
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022DE3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F60000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x43540000u);  goto L_0022DE10; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 88u), c.f[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_0022DE24; } }
L_0022DE10:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 88u), c.f[3]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 5;
L_0022DE24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DE34u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0022DE34u) [[unlikely]] return; }
L_0022DE34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022E314; } }
L_0022DE3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3020000u);
    c.budget -= 1;
L_0022DE40:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022E310; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022E310; } }
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022E310; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2860000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0xC3040000u);  goto L_0022DEB4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_0022DECC; } }
L_0022DEB4:
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 6;
L_0022DECC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DEDCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0022DEDCu) [[unlikely]] return; }
    goto L_0022DEDC;
L_0022DED8:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_0022DEDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022E314; } }
L_0022DEE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DEECu);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0022DEECu) [[unlikely]] return; }
L_0022DEEC:
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[17].w[0]));  goto L_0022DF04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0022E314; } }
L_0022DF04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1C80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[5] = ld32((c.r[18].w[0] + 224u));  goto L_0022DF30; }
    c.f[5] = ld32((c.r[18].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022DF54; } }
    c.f[5] = ld32((c.r[18].w[0] + 224u));
    c.budget -= 1;
L_0022DF30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1C80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  goto L_0022E014; }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022E010; } }
L_0022DF54:
    c.f[4] = fp::ee::div(c.fcr31, c.f[20], c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1C80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[1] = ld32((c.r[18].w[0] + 232u));
    c.f[3] = 0u;
    c.f[2] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.facc = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[5]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022E310; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022E310; } }
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42180000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x42820000u);  goto L_0022DFE4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_0022DFF8; } }
L_0022DFE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[3]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 5;
L_0022DFF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E008u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0022E008u) [[unlikely]] return; }
L_0022E008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022E314; } }
L_0022E010:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.budget -= 1;
L_0022E014:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  goto L_0022E038; }
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022E058; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.budget -= 1;
L_0022E038:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022E310; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022E310; } }
L_0022E058:
    c.f[4] = fp::ee::div(c.fcr31, c.f[20], c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[1] = ld32((c.r[18].w[0] + 232u));
    c.f[3] = 0u;
    c.f[2] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.facc = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[5]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022E310; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022E310; } }
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42180000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x42820000u);  goto L_0022E0E8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_0022E0FC; } }
L_0022E0E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[3]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 5;
L_0022E0FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E10Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0022E10Cu) [[unlikely]] return; }
L_0022E10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022E314; } }
L_0022E114:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42960000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[18].w[0] + 224u));  goto L_0022E1B4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BA0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022E1B0; } }
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022E1B0; } }
    c.f[1] = ld32((c.r[18].w[0] + 224u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022E1B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[6], c.r[18].w[0] + 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E1A8u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0022E1A8u) [[unlikely]] return; }
L_0022E1A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022E314; } }
L_0022E1B0:
    c.f[2] = ld32((c.r[18].w[0] + 224u));
    c.budget -= 1;
L_0022E1B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42960000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);  goto L_0022E250; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BA0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022E24C; } }
    c.f[1] = ld32((c.r[18].w[0] + 232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022E24C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022E24C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B60000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[6], c.r[18].w[0] + 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E244u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0022E244u) [[unlikely]] return; }
L_0022E244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022E314; } }
L_0022E24C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.budget -= 1;
L_0022E250:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022E310; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022E310; } }
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[18].w[0] + 232u));  goto L_0022E2AC; }
    c.f[1] = ld32((c.r[18].w[0] + 232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0xC1C80000u);  goto L_0022E2E0; }
    c.f[1] = ld32((c.r[18].w[0] + 232u));
    c.budget -= 1;
L_0022E2AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022E310; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022E310; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1C80000u);
    c.budget -= 1;
L_0022E2E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[6], c.r[18].w[0] + 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E308u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0022E308u) [[unlikely]] return; }
L_0022E308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022E314; } }
L_0022E310:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022E314:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0022E340:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E360u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022E360u) [[unlikely]] return; }
L_0022E360:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 156u), 0u);  goto L_0022E37C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E374u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 346u, depth + 1u); else { c.pc = 0x0022E5E0u; return; } if (c.pc != 0x0022E374u) [[unlikely]] return; }
L_0022E374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0022E5C8; } }
L_0022E37C:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);  goto L_0022E3B0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 124u)));  goto L_0022E3BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E3A0u); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 13u, depth + 1u); else { c.pc = 0x00234150u; return; } if (c.pc != 0x0022E3A0u) [[unlikely]] return; }
L_0022E3A0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0022E3B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.budget -= 1;
L_0022E3B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 216u), c.r[2].w[0]);  if (t) { goto L_0022E3F0; } }
L_0022E3B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 1;
L_0022E3BC:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[3].w[0] - 6u);  goto L_0022E3D4; }
    c.f[0] = ld32((c.r[28].w[0] - 32320u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 216u), c.f[0]);  if (t) { goto L_0022E3F0; } }
L_0022E3D4:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_0022E3EC; }
    c.f[0] = ld32((c.r[28].w[0] - 32316u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 216u), c.f[0]);  if (t) { goto L_0022E3F0; } }
L_0022E3EC:
    st32((c.r[17].w[0] + 216u), c.r[2].w[0]);
    c.budget -= 1;
L_0022E3F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E3F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 72u, depth + 1u); else { c.pc = 0x0022C600u; return; } if (c.pc != 0x0022E3F8u) [[unlikely]] return; }
L_0022E3F8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.f[12] = ld32((c.r[17].w[0] + 216u));  goto L_0022E454; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E40Cu); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 7u, depth + 1u); else { c.pc = 0x00234080u; return; } if (c.pc != 0x0022E40Cu) [[unlikely]] return; }
L_0022E40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E414u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 111u, depth + 1u); else { c.pc = 0x0022C980u; return; } if (c.pc != 0x0022E414u) [[unlikely]] return; }
L_0022E414:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022E450; } }
    c.f[1] = ld32((c.r[17].w[0] + 216u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022E450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E444u); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 7u, depth + 1u); else { c.pc = 0x00234080u; return; } if (c.pc != 0x0022E444u) [[unlikely]] return; }
L_0022E444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E44Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 111u, depth + 1u); else { c.pc = 0x0022C980u; return; } if (c.pc != 0x0022E44Cu) [[unlikely]] return; }
L_0022E44C:
    st32((c.r[17].w[0] + 216u), c.f[0]);
    c.budget -= 1;
L_0022E450:
    c.f[12] = ld32((c.r[17].w[0] + 216u));
    c.budget -= 1;
L_0022E454:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E460u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0022E460u) [[unlikely]] return; }
L_0022E460:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_0022E594; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E47Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 259u, depth + 1u); else { c.pc = 0x0022D7C0u; return; } if (c.pc != 0x0022E47Cu) [[unlikely]] return; }
L_0022E47C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);  goto L_0022E498; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E490u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0043(c, 105u, depth + 1u); else { c.pc = 0x0022C890u; return; } if (c.pc != 0x0022E490u) [[unlikely]] return; }
L_0022E490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E5C4; } }
L_0022E498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 7696u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[2].w[0] + 7700u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 7708u));
    set32(c.r[2], ld32((c.r[2].w[0] + 7704u)));
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E4D8u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0022E4D8u) [[unlikely]] return; }
L_0022E4D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E4E4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0043(c, 259u, depth + 1u); else { c.pc = 0x0022D7C0u; return; } if (c.pc != 0x0022E4E4u) [[unlikely]] return; }
L_0022E4E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);  goto L_0022E50C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E4F8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0022E4F8u) [[unlikely]] return; }
L_0022E4F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E504u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0043(c, 105u, depth + 1u); else { c.pc = 0x0022C890u; return; } if (c.pc != 0x0022E504u) [[unlikely]] return; }
L_0022E504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E5C4; } }
L_0022E50C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 7716u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[2].w[0] + 7720u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 7724u));
    set32(c.r[2], ld32((c.r[2].w[0] + 7712u)));
    st32((c.r[29].w[0] + 52u), c.f[2]);
    st32((c.r[29].w[0] + 56u), c.f[1]);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E54Cu); st32((c.r[29].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0022E54Cu) [[unlikely]] return; }
L_0022E54C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E558u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0043(c, 259u, depth + 1u); else { c.pc = 0x0022D7C0u; return; } if (c.pc != 0x0022E558u) [[unlikely]] return; }
L_0022E558:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022E580; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E56Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0022E56Cu) [[unlikely]] return; }
L_0022E56C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E578u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0043(c, 105u, depth + 1u); else { c.pc = 0x0022C890u; return; } if (c.pc != 0x0022E578u) [[unlikely]] return; }
L_0022E578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E5C4; } }
L_0022E580:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E58Cu); st32((c.r[17].w[0] + 216u), 0u);  if (depth < kMaxDepth) unit_0043(c, 105u, depth + 1u); else { c.pc = 0x0022C890u; return; } if (c.pc != 0x0022E58Cu) [[unlikely]] return; }
L_0022E58C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E5C4; } }
L_0022E594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E59Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 259u, depth + 1u); else { c.pc = 0x0022D7C0u; return; } if (c.pc != 0x0022E59Cu) [[unlikely]] return; }
L_0022E59C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022E5B8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E5B0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0043(c, 105u, depth + 1u); else { c.pc = 0x0022C890u; return; } if (c.pc != 0x0022E5B0u) [[unlikely]] return; }
L_0022E5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E5C4; } }
L_0022E5B8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E5C4u); st32((c.r[17].w[0] + 216u), 0u);  if (depth < kMaxDepth) unit_0043(c, 105u, depth + 1u); else { c.pc = 0x0022C890u; return; } if (c.pc != 0x0022E5C4u) [[unlikely]] return; }
L_0022E5C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0022E5C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022E5E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E600u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022E600u) [[unlikely]] return; }
L_0022E600:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_0022E61C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E614u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 322u, depth + 1u); else { c.pc = 0x0022E340u; return; } if (c.pc != 0x0022E614u) [[unlikely]] return; }
L_0022E614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0022E7A4; } }
L_0022E61C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E630u); st32((c.r[17].w[0] + 156u), 0u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0022E630u) [[unlikely]] return; }
L_0022E630:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022E764; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E64Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 259u, depth + 1u); else { c.pc = 0x0022D7C0u; return; } if (c.pc != 0x0022E64Cu) [[unlikely]] return; }
L_0022E64C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);  goto L_0022E668; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E660u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 105u, depth + 1u); else { c.pc = 0x0022C890u; return; } if (c.pc != 0x0022E660u) [[unlikely]] return; }
L_0022E660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0022E794; } }
L_0022E668:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 7728u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[2].w[0] + 7732u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 7740u));
    set32(c.r[2], ld32((c.r[2].w[0] + 7736u)));
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E6A8u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0022E6A8u) [[unlikely]] return; }
L_0022E6A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E6B4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0043(c, 259u, depth + 1u); else { c.pc = 0x0022D7C0u; return; } if (c.pc != 0x0022E6B4u) [[unlikely]] return; }
L_0022E6B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);  goto L_0022E6DC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E6C8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0022E6C8u) [[unlikely]] return; }
L_0022E6C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E6D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 105u, depth + 1u); else { c.pc = 0x0022C890u; return; } if (c.pc != 0x0022E6D4u) [[unlikely]] return; }
L_0022E6D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E790; } }
L_0022E6DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 7748u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[2].w[0] + 7752u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 7756u));
    set32(c.r[2], ld32((c.r[2].w[0] + 7744u)));
    st32((c.r[29].w[0] + 52u), c.f[2]);
    st32((c.r[29].w[0] + 56u), c.f[1]);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E71Cu); st32((c.r[29].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0022E71Cu) [[unlikely]] return; }
L_0022E71C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E728u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0043(c, 259u, depth + 1u); else { c.pc = 0x0022D7C0u; return; } if (c.pc != 0x0022E728u) [[unlikely]] return; }
L_0022E728:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022E750; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E73Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0022E73Cu) [[unlikely]] return; }
L_0022E73C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E748u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 105u, depth + 1u); else { c.pc = 0x0022C890u; return; } if (c.pc != 0x0022E748u) [[unlikely]] return; }
L_0022E748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E790; } }
L_0022E750:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E75Cu); st32((c.r[17].w[0] + 216u), 0u);  if (depth < kMaxDepth) unit_0043(c, 105u, depth + 1u); else { c.pc = 0x0022C890u; return; } if (c.pc != 0x0022E75Cu) [[unlikely]] return; }
L_0022E75C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E790; } }
L_0022E764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E76Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 259u, depth + 1u); else { c.pc = 0x0022D7C0u; return; } if (c.pc != 0x0022E76Cu) [[unlikely]] return; }
L_0022E76C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022E788; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E780u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 105u, depth + 1u); else { c.pc = 0x0022C890u; return; } if (c.pc != 0x0022E780u) [[unlikely]] return; }
L_0022E780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E790; } }
L_0022E788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E790u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 105u, depth + 1u); else { c.pc = 0x0022C890u; return; } if (c.pc != 0x0022E790u) [[unlikely]] return; }
L_0022E790:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022E794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E79Cu);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x0022E79Cu) [[unlikely]] return; }
L_0022E79C:
    st32((c.r[17].w[0] + 216u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_0022E7A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022E7C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 216u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 216u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E7E0u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0022E7E0u) [[unlikely]] return; }
L_0022E7E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0022E87C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022E864; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E810u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022E810u) [[unlikely]] return; }
L_0022E810:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022E854; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E824u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022E824u) [[unlikely]] return; }
L_0022E824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022E850; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[16].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_0022E850; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E850u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 96u, depth + 1u); else { c.pc = 0x002357E0u; return; } if (c.pc != 0x0022E850u) [[unlikely]] return; }
L_0022E850:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022E854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E85Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 105u, depth + 1u); else { c.pc = 0x0022C890u; return; } if (c.pc != 0x0022E85Cu) [[unlikely]] return; }
L_0022E85C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E878; } }
L_0022E864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E86Cu);  if (depth < kMaxDepth) unit_0043(c, 308u, depth + 1u); else { c.pc = 0x0022DC40u; return; } if (c.pc != 0x0022E86Cu) [[unlikely]] return; }
L_0022E86C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E878u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0043(c, 105u, depth + 1u); else { c.pc = 0x0022C890u; return; } if (c.pc != 0x0022E878u) [[unlikely]] return; }
L_0022E878:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0022E87C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022E890:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E8BCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 88u, depth + 1u); else { c.pc = 0x002356E0u; return; } if (c.pc != 0x0022E8BCu) [[unlikely]] return; }
L_0022E8BC:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E8C8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x0022E8C8u) [[unlikely]] return; }
L_0022E8C8:
    set32(c.r[4], c.r[2].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31888u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], 0u + 6u);
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
L_0022E8F8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022E8F8u | kUnwind; return; } goto L_0022E8F8; } }
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[29].w[0] + 144u), c.f[1]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[29].w[0] + 156u), c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    c.f[2] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 156u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 184u));
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[29].w[0] + 152u), c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E968u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x0022E968u) [[unlikely]] return; }
L_0022E968:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.f[0] = ld32((c.r[29].w[0] + 196u));  goto L_0022EA2C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[5], c.r[18].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E988u); set32(c.r[7], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00234360u; return; } if (c.pc != 0x0022E988u) [[unlikely]] return; }
L_0022E988:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.f[20] = ld32((c.r[28].w[0] - 32596u));  goto L_0022E9F8; }
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E9A4u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0022E9A4u) [[unlikely]] return; }
L_0022E9A4:
    c.f[0] = ld32((c.r[18].w[0] + 228u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E9B4u); set32(c.r[4], ld32((c.r[18].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 88u, depth + 1u); else { c.pc = 0x002356E0u; return; } if (c.pc != 0x0022E9B4u) [[unlikely]] return; }
L_0022E9B4:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[18].w[0] + 224u);  goto L_0022E9C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[28].w[0] - 32652u));  if (t) { goto L_0022E9F8; } }
L_0022E9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E9D0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x0022E9D0u) [[unlikely]] return; }
L_0022E9D0:
    c.f[2] = ld32((c.r[29].w[0] + 220u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[28].w[0] - 32336u));
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.budget -= 10;
L_0022E9F8:
    c.f[0] = ld32((c.r[28].w[0] - 32596u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0022EA10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_0022EA48; } }
L_0022EA10:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022EA4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_0022EA48; } }
L_0022EA2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.budget -= 7;
L_0022EA48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022EA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EA54u);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0022EA54u) [[unlikely]] return; }
L_0022EA54:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    st32((c.r[2].w[0] + 68u), c.f[20]);
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EA68u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 432u, depth + 1u); else { c.pc = 0x0015B980u; return; } if (c.pc != 0x0022EA68u) [[unlikely]] return; }
L_0022EA68:
    set32(c.r[19], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EA74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 171u, depth + 1u); else { c.pc = 0x00161880u; return; } if (c.pc != 0x0022EA74u) [[unlikely]] return; }
L_0022EA74:
    set32(c.r[4], ld32((c.r[17].w[0] + 448u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EA80u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 473u, depth + 1u); else { c.pc = 0x0015BFD0u; return; } if (c.pc != 0x0022EA80u) [[unlikely]] return; }
L_0022EA80:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0022EAB8; }
    set32(c.r[4], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EA98u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 428u, depth + 1u); else { c.pc = 0x0015B7F0u; return; } if (c.pc != 0x0022EA98u) [[unlikely]] return; }
L_0022EA98:
    set32(c.r[16], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EAA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 171u, depth + 1u); else { c.pc = 0x00161880u; return; } if (c.pc != 0x0022EAA4u) [[unlikely]] return; }
L_0022EAA4:
    set32(c.r[4], ld32((c.r[17].w[0] + 448u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EAB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 474u, depth + 1u); else { c.pc = 0x0015BFE0u; return; } if (c.pc != 0x0022EAB4u) [[unlikely]] return; }
L_0022EAB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0022EAB8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0022EAE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 132u), 0u);  goto L_0022EB08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EB04u);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x001B81D0u; return; } if (c.pc != 0x0022EB04u) [[unlikely]] return; }
L_0022EB04:
    st32((c.r[16].w[0] + 132u), 0u);
    c.budget -= 1;
L_0022EB08:
    st32((c.r[16].w[0] + 136u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022EB20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EB4Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0022EB4Cu) [[unlikely]] return; }
L_0022EB4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x504D0000u);
    set32(c.r[3], c.r[3].w[0] + 19120u);
    c.r[2].d[0] = c.r[2].d[0] | 19777ull;
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 5u);
    st32((c.r[19].w[0] + 52u), c.r[18].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[19].w[0] + 56u), c.r[17].w[0]);
    set32(c.r[6], 0u + 1u);
    st32((c.r[19].w[0] + 108u), 0u);
    st32((c.r[19].w[0] + 112u), 0u);
    st32((c.r[19].w[0] + 448u), 0u);
    st32((c.r[19].w[0] + 444u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EB94u); st32((c.r[19].w[0] + 456u), 0u);  if (depth < kMaxDepth) unit_0043(c, 482u, depth + 1u); else { c.pc = 0x0022F480u; return; } if (c.pc != 0x0022EB94u) [[unlikely]] return; }
L_0022EB94:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022EB98:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 76u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 60u), 0u);
    st32((c.r[3].w[0] + 92u), 0u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 420u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022EB98u | kUnwind; return; } goto L_0022EB98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EBC4u); set32(c.r[4], ld32((c.r[19].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x0022EBC4u) [[unlikely]] return; }
L_0022EBC4:
    set32(c.r[4], c.r[2].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 30016u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[19].w[0] + 440u), c.r[2].w[0]);  if (t) { goto L_0022EC1C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EC04u); set32(c.r[5], c.r[5].w[0] - 29184u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0022EC04u) [[unlikely]] return; }
L_0022EC04:
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[19].w[0] + 448u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
L_0022EC1C:
    st32((c.r[19].w[0] + 436u), c.r[16].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 452u), 0u);
    st32((c.r[19].w[0] + 476u), 0u);
    st32((c.r[19].w[0] + 460u), 0u);
    st32((c.r[19].w[0] + 464u), 0u);
    c.budget -= 6;
L_0022EC34:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 468u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022EC34u | kUnwind; return; } goto L_0022EC34; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_0022EC84; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EC68u); set32(c.r[5], c.r[5].w[0] - 29161u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0022EC68u) [[unlikely]] return; }
L_0022EC68:
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[19].w[0] + 448u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
L_0022EC84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022ECA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022EE4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 19120u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 476u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 460u)));  goto L_0022ECF8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ECF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022ECF0u) [[unlikely]] return; }
L_0022ECF0:
    st32((c.r[18].w[0] + 476u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 460u)));
    c.budget -= 2;
L_0022ECF8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 464u)));  goto L_0022ED18; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ED10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022ED10u) [[unlikely]] return; }
L_0022ED10:
    st32((c.r[18].w[0] + 460u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 464u)));
    c.budget -= 2;
L_0022ED18:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0022ED38; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ED30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022ED30u) [[unlikely]] return; }
L_0022ED30:
    st32((c.r[18].w[0] + 464u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0022ED38:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0022ED3C:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 468u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 468u);  if (t) { goto L_0022ED60; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ED5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022ED5Cu) [[unlikely]] return; }
L_0022ED5C:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_0022ED60:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022ED3Cu | kUnwind; return; } goto L_0022ED3C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0022ED8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ED84u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 445u, depth + 1u); else { c.pc = 0x0023B150u; return; } if (c.pc != 0x0022ED84u) [[unlikely]] return; }
L_0022ED84:
    st32((c.r[18].w[0] + 108u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0022ED8C:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0022ED90:
    set32(c.r[20], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[20].w[0] + 92u);  if (t) { goto L_0022EDBC; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_0022EDBC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EDB8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022EDB8u) [[unlikely]] return; }
L_0022EDB8:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_0022EDBC:
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[20].w[0] + 60u);  if (t) { goto L_0022EDE4; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_0022EDE4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EDE0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022EDE0u) [[unlikely]] return; }
L_0022EDE0:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_0022EDE4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022ED90u | kUnwind; return; } goto L_0022ED90; }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_0022EDFC:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 76u);  if (t) { goto L_0022EE18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EE14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x0022EE14u) [[unlikely]] return; }
L_0022EE14:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_0022EE18:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022EDFCu | kUnwind; return; } goto L_0022EDFC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EE34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0022EE34u) [[unlikely]] return; }
L_0022EE34:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0022EE50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EE4Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0022EE4Cu) [[unlikely]] return; }
L_0022EE4C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0022EE50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0022EE70:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 448u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022EEC4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 29312u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0022C000u < 16384u) { entry = entries_0043[(t - 0x0022C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022EEC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0022F3A4; } }
L_0022EED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0022EF14; } }
L_0022EEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EEE8u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x0022EEE8u) [[unlikely]] return; }
L_0022EEE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  goto L_0022EF04; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EF00u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 96u, depth + 1u); else { c.pc = 0x003C12F0u; return; } if (c.pc != 0x0022EF00u) [[unlikely]] return; }
L_0022EF00:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0022EF04:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_0022F38C; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0022EF14:
    set32(c.r[2], ld32((c.r[16].w[0] + 440u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022EEE0u | kUnwind; return; } goto L_0022EEE0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 448u), c.r[2].w[0]);
    c.budget -= 2;
L_0022EF2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0022F38C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 440u)));
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + 1u);  if (t) { goto L_0022EFD0; } }
L_0022EF4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EF54u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0022EF54u) [[unlikely]] return; }
L_0022EF54:
    set32(c.r[19], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EF64u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0022EF64u) [[unlikely]] return; }
L_0022EF64:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[19], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[22], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EF84u); set32(c.r[17], c.r[22].w[0] + 76u);  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x0022EF84u) [[unlikely]] return; }
L_0022EF84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0022F38C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EF98u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0022EF98u) [[unlikely]] return; }
L_0022EF98:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EFA8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0022EFA8u) [[unlikely]] return; }
L_0022EFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EFB0u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x0022EFB0u) [[unlikely]] return; }
L_0022EFB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[22].w[0] + 60u), c.r[2].w[0]);  goto L_0022EFC8; }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EFC4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x0022EFC4u) [[unlikely]] return; }
L_0022EFC4:
    st32((c.r[22].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_0022EFC8:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0022EFD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 440u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022EF4Cu | kUnwind; return; } goto L_0022EF4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EFE8u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0022EFE8u) [[unlikely]] return; }
L_0022EFE8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 108u), c.r[17].w[0]);  goto L_0022F014; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F000u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0022F000u) [[unlikely]] return; }
L_0022F000:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F00Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 438u, depth + 1u); else { c.pc = 0x0023B0D0u; return; } if (c.pc != 0x0022F00Cu) [[unlikely]] return; }
L_0022F00C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 108u), c.r[17].w[0]);
    c.budget -= 2;
L_0022F014:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0022F38C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0022F058; } }
L_0022F024:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[2].w[0] + 60u);
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022F38C; } }
    set32(c.r[5], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F044u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0022F044u) [[unlikely]] return; }
L_0022F044:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F054u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x0022F054u) [[unlikely]] return; }
L_0022F054:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0022F058:
    set32(c.r[2], ld32((c.r[16].w[0] + 440u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F024u | kUnwind; return; } goto L_0022F024; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F074u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 83u, depth + 1u); else { c.pc = 0x00230E30u; return; } if (c.pc != 0x0022F074u) [[unlikely]] return; }
L_0022F074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F07Cu); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 16u, depth + 1u); else { c.pc = 0x00234180u; return; } if (c.pc != 0x0022F07Cu) [[unlikely]] return; }
L_0022F07C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_0022F38C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F090u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0043(c, 493u, depth + 1u); else { c.pc = 0x0022F620u; return; } if (c.pc != 0x0022F090u) [[unlikely]] return; }
L_0022F090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F098u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 83u, depth + 1u); else { c.pc = 0x00235670u; return; } if (c.pc != 0x0022F098u) [[unlikely]] return; }
L_0022F098:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 448u), c.r[3].w[0]);  if (t) { goto L_0022F3A4; } }
L_0022F0A4:
    set32(c.r[5], ld32((c.r[16].w[0] + 440u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (t) { goto L_0022F0D0; } }
L_0022F0B4:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_0022F3A8; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0022F0D0:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F0B4u | kUnwind; return; } goto L_0022F0B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F0E4u); set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  if (depth < kMaxDepth) unit_0046(c, 458u, depth + 1u); else { c.pc = 0x0023B270u; return; } if (c.pc != 0x0022F0E4u) [[unlikely]] return; }
L_0022F0E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022F3A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0022F138; } }
L_0022F0F4:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F114u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 178u, depth + 1u); else { c.pc = 0x003C20D0u; return; } if (c.pc != 0x0022F114u) [[unlikely]] return; }
L_0022F114:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0022F138; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F12Cu); set32(c.r[5], c.r[5].w[0] - 29129u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0022F12Cu) [[unlikely]] return; }
L_0022F12C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 448u), c.r[3].w[0]);  if (t) { goto L_0022F3A4; } }
L_0022F138:
    set32(c.r[2], ld32((c.r[16].w[0] + 440u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F0F4u | kUnwind; return; } goto L_0022F0F4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F158u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 482u, depth + 1u); else { c.pc = 0x0022F480u; return; } if (c.pc != 0x0022F158u) [[unlikely]] return; }
L_0022F158:
    set32(c.r[4], ld32((c.r[16].w[0] + 436u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 5u);  goto L_0022F17C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F178u); set32(c.r[5], c.r[5].w[0] + 3520u);  if (depth < kMaxDepth) unit_00A8(c, 231u, depth + 1u); else { c.pc = 0x003C2BA0u; return; } if (c.pc != 0x0022F178u) [[unlikely]] return; }
L_0022F178:
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_0022F17C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 448u), c.r[3].w[0]);  if (t) { goto L_0022F3A4; } }
L_0022F184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F18Cu); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0044(c, 498u, depth + 1u); else { c.pc = 0x00233940u; return; } if (c.pc != 0x0022F18Cu) [[unlikely]] return; }
L_0022F18C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022F3A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F19Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 64u, depth + 1u); else { c.pc = 0x00230850u; return; } if (c.pc != 0x0022F19Cu) [[unlikely]] return; }
L_0022F19C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F1A4u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 7u, depth + 1u); else { c.pc = 0x00234080u; return; } if (c.pc != 0x0022F1A4u) [[unlikely]] return; }
L_0022F1A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 6u);  goto L_0022F1E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F1B8u);  if (depth < kMaxDepth) unit_0043(c, 74u, depth + 1u); else { c.pc = 0x0022C620u; return; } if (c.pc != 0x0022F1B8u) [[unlikely]] return; }
L_0022F1B8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0022F1E4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 436u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  goto L_0022F1DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022F1E4; } }
L_0022F1DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F1E4u);  if (depth < kMaxDepth) unit_0046(c, 461u, depth + 1u); else { c.pc = 0x0023B340u; return; } if (c.pc != 0x0022F1E4u) [[unlikely]] return; }
L_0022F1E4:
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_0022F1E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 448u), c.r[3].w[0]);  if (t) { goto L_0022F3A4; } }
L_0022F1F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 436u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 1u);  goto L_0022F210; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F208u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x0022F208u) [[unlikely]] return; }
L_0022F208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0022F21C; } }
L_0022F210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F218u);  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x0022F218u) [[unlikely]] return; }
L_0022F218:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022F21C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 440u)));  if (t) { goto L_0022F240; } }
L_0022F224:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F238u); set32(c.r[4], ld32((c.r[3].w[0] + 92u)));  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x0022F238u) [[unlikely]] return; }
L_0022F238:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 440u)));
    c.budget -= 2;
L_0022F240:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F224u | kUnwind; return; } goto L_0022F224; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F254u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 130u, depth + 1u); else { c.pc = 0x00231360u; return; } if (c.pc != 0x0022F254u) [[unlikely]] return; }
L_0022F254:
    set32(c.r[17], ld32((c.r[28].w[0] - 30632u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F260u); set32(c.r[4], 0u + 4099u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0022F260u) [[unlikely]] return; }
L_0022F260:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F26Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x0022F26Cu) [[unlikely]] return; }
L_0022F26C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u - 1u);  goto L_0022F2A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F27Cu); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 76u, depth + 1u); else { c.pc = 0x00235590u; return; } if (c.pc != 0x0022F27Cu) [[unlikely]] return; }
L_0022F27C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022F2A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F28Cu); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 75u, depth + 1u); else { c.pc = 0x00235560u; return; } if (c.pc != 0x0022F28Cu) [[unlikely]] return; }
L_0022F28C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022F2A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F29Cu); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 77u, depth + 1u); else { c.pc = 0x002355C0u; return; } if (c.pc != 0x0022F29Cu) [[unlikely]] return; }
L_0022F29C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_0022F2B0; }
L_0022F2A4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0022F2A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 444u), c.r[2].w[0]);  if (t) { goto L_0022F32C; } }
L_0022F2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F2B8u);  if (depth < kMaxDepth) unit_0045(c, 198u, depth + 1u); else { c.pc = 0x002366F0u; return; } if (c.pc != 0x0022F2B8u) [[unlikely]] return; }
L_0022F2B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F2C4u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 87u, depth + 1u); else { c.pc = 0x002356C0u; return; } if (c.pc != 0x0022F2C4u) [[unlikely]] return; }
L_0022F2C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F2D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 506u, depth + 1u); else { c.pc = 0x0022F990u; return; } if (c.pc != 0x0022F2D0u) [[unlikely]] return; }
L_0022F2D0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[16].w[0] + 444u), c.r[2].w[0]);  if (t) { goto L_0022F32C; } }
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 120u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 444u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 120u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0022F330; }
    c.r[3].d[0] = ld64((c.r[17].w[0] + 72u));
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u - 1u);  goto L_0022F328; }
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022F32C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0022F328:
    st32((c.r[16].w[0] + 444u), c.r[2].w[0]);
    c.budget -= 1;
L_0022F32C:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022F330:
    set32(c.r[2], c.r[18].w[0] << 4);
    c.budget -= 1;
L_0022F334:
    set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F344u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00234190u; return; } if (c.pc != 0x0022F344u) [[unlikely]] return; }
L_0022F344:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0022F378; }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0022F36C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F364u);  if (depth < kMaxDepth) unit_003B(c, 279u, depth + 1u); else { c.pc = 0x0020EF90u; return; } if (c.pc != 0x0022F364u) [[unlikely]] return; }
L_0022F364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022F374; } }
L_0022F36C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F374u);  if (depth < kMaxDepth) unit_003B(c, 278u, depth + 1u); else { c.pc = 0x0020EF80u; return; } if (c.pc != 0x0022F374u) [[unlikely]] return; }
L_0022F374:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0022F378:
    c.r[3].d[0] = c.r[18].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F334u | kUnwind; return; } goto L_0022F334; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022F3A4; } }
L_0022F38C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F39Cu); set32(c.r[5], c.r[5].w[0] - 29093u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0022F39Cu) [[unlikely]] return; }
L_0022F39C:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 2;
L_0022F3A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0022F3A8:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0022F3D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 448u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0022F474; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F3F8u);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x0022F3F8u) [[unlikely]] return; }
L_0022F3F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F404u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0043(c, 483u, depth + 1u); else { c.pc = 0x0022F4C0u; return; } if (c.pc != 0x0022F404u) [[unlikely]] return; }
L_0022F404:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022F418; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F414u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 509u, depth + 1u); else { c.pc = 0x0022FA40u; return; } if (c.pc != 0x0022F414u) [[unlikely]] return; }
L_0022F414:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022F418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F420u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0043(c, 483u, depth + 1u); else { c.pc = 0x0022F4C0u; return; } if (c.pc != 0x0022F420u) [[unlikely]] return; }
L_0022F420:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_0022F434; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F430u); set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  if (depth < kMaxDepth) unit_0046(c, 449u, depth + 1u); else { c.pc = 0x0023B1E0u; return; } if (c.pc != 0x0022F430u) [[unlikely]] return; }
L_0022F430:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_0022F434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F43Cu);  if (depth < kMaxDepth) unit_0045(c, 7u, depth + 1u); else { c.pc = 0x00234080u; return; } if (c.pc != 0x0022F43Cu) [[unlikely]] return; }
L_0022F43C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F444u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 72u, depth + 1u); else { c.pc = 0x0022C600u; return; } if (c.pc != 0x0022F444u) [[unlikely]] return; }
L_0022F444:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022F460; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F458u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 570u, depth + 1u); else { c.pc = 0x0022FEA0u; return; } if (c.pc != 0x0022F458u) [[unlikely]] return; }
L_0022F458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022F468; } }
L_0022F460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F468u);  if (depth < kMaxDepth) unit_0043(c, 491u, depth + 1u); else { c.pc = 0x0022F5F0u; return; } if (c.pc != 0x0022F468u) [[unlikely]] return; }
L_0022F468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F470u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x0022F470u) [[unlikely]] return; }
L_0022F470:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0022F474:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022F480:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], 0u + 1u);  goto L_0022F4A0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 456u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 456u), c.r[3].w[0]);  if (t) { goto L_0022F4B4; } }
L_0022F4A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 456u)));
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 456u), c.r[3].w[0]);
    c.budget -= 5;
L_0022F4B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022F4C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 456u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];  c.pc = t; return; }
L_0022F4E0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 108u)));  [[clang::musttail]] return unit_0046(c, 459u, depth); }
L_0022F4F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 440u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0022F544; }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[9], c.r[5].w[0] + 92u);  if (t) { goto L_0022F540; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[8].d[0]; set32(c.r[4], c.r[5].w[0] + 420u);  if (t) { goto L_0022F540; } }
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[9].w[0])));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F540u); c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0022F540u) [[unlikely]] return; }
L_0022F540:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0022F544:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022F550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 440u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0022F594; }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 92u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022F590; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F590u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022F590u) [[unlikely]] return; }
L_0022F590:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0022F594:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022F5A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 440u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0022F5E0; }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 92u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022F5DC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F5DCu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022F5DCu) [[unlikely]] return; }
L_0022F5DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0022F5E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022F5F0:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022F5F4:
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[5].w[0] + 124u), 0u);
    c.r[3].d[0] = c.r[6].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0] + 128u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F5F4u | kUnwind; return; } goto L_0022F5F4; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 444u), c.r[3].w[0]);  c.pc = t; return; }
L_0022F620:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 436u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022F698; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 29280u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0022C000u < 16384u) { entry = entries_0043[(t - 0x0022C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022F668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0022F69C; } }
L_0022F670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 5u);  if (t) { goto L_0022F69C; } }
L_0022F678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 10u);  if (t) { goto L_0022F69C; } }
L_0022F680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 14u);  if (t) { goto L_0022F69C; } }
L_0022F688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 19u);  if (t) { goto L_0022F69C; } }
L_0022F690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 25u);  if (t) { goto L_0022F69C; } }
L_0022F698:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022F69C:
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { c.r[16].d[0] = 0ull + 0ull;  goto L_0022F8D8; }
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 1372u)));
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_0022F6B8; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 1120u)));
    c.budget -= 1;
L_0022F6B8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022F8D8; } }
L_0022F6C4:
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 20u);
    st32((c.r[4].w[0] + 128u), 0u);
    set32(c.r[2], c.r[4].w[0] + 116u);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == c.r[5].d[0]; st32((c.r[4].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_0022F81C; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[2].w[0])));  goto L_0022F804; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_0022F800; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_0022F800; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[2].w[0])));  goto L_0022F7D4; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_0022F7D0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[2].w[0])));  goto L_0022F7A4; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_0022F7A0; } }
    set32(c.r[3], 0u + 99u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[2].w[0])));  goto L_0022F760; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_0022F75C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0022F75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0022F8D8; } }
L_0022F75C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0022F760:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 9u);  goto L_0022F778; }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0022F8D4; } }
L_0022F778:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 13u);  goto L_0022F78C; }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0022F8D4; } }
L_0022F78C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022F8D4; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0022F8D4; } }
L_0022F7A0:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0022F7A4:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 13u);  goto L_0022F7BC; }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0022F8D4; } }
L_0022F7BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022F8D4; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0022F8D4; } }
L_0022F7D0:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0022F7D4:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 18u);  goto L_0022F7EC; }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0022F8D4; } }
L_0022F7EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022F8D4; } }
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0022F8D4; } }
L_0022F800:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0022F804:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022F8D4; } }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0022F8D4; } }
L_0022F81C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022F838; } }
    set32(c.r[3], 0u + 34u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0022F8D4; } }
L_0022F838:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[3], 0u + 21u);  goto L_0022F84C; }
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0022F8D4; } }
L_0022F84C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 22u);  goto L_0022F860; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0022F8D4; } }
L_0022F860:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 24u);  goto L_0022F874; }
    set32(c.r[3], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0022F8D4; } }
L_0022F874:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 25u);  goto L_0022F888; }
    set32(c.r[3], 0u + 38u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0022F8D4; } }
L_0022F888:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 26u);  goto L_0022F89C; }
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0022F8D4; } }
L_0022F89C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 27u);  goto L_0022F8B0; }
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0022F8D4; } }
L_0022F8B0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 28u);  goto L_0022F8C4; }
    set32(c.r[3], 0u + 41u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0022F8D4; } }
L_0022F8C4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022F8D4; } }
    set32(c.r[3], 0u + 42u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0022F8D4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0022F8D8:
    set32(c.r[4], ld32((c.r[19].w[0] + 436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F8E4u);  if (depth < kMaxDepth) unit_004C(c, 14u, depth + 1u); else { c.pc = 0x002505C0u; return; } if (c.pc != 0x0022F8E4u) [[unlikely]] return; }
L_0022F8E4:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F6C4u | kUnwind; return; } goto L_0022F6C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F8F8u); set32(c.r[4], ld32((c.r[19].w[0] + 436u)));  if (depth < kMaxDepth) unit_004C(c, 14u, depth + 1u); else { c.pc = 0x002505C0u; return; } if (c.pc != 0x0022F8F8u) [[unlikely]] return; }
L_0022F8F8:
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_0022F914; } }
L_0022F904:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 120u), c.r[4].w[0]);
    c.budget -= 4;
L_0022F914:
    c.r[3].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F904u | kUnwind; return; } goto L_0022F904; }
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
L_0022F92C:
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] + 44u);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 120u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F92Cu | kUnwind; return; } goto L_0022F92C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022F954:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 124u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 128u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F954u | kUnwind; return; } goto L_0022F954; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022F990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 900ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 100u);  goto L_0022F9DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F9B4u); set32(c.r[4], ld32((c.r[4].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 27u, depth + 1u); else { c.pc = 0x002342D0u; return; } if (c.pc != 0x0022F9B4u) [[unlikely]] return; }
L_0022F9B4:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 9u);  if (t) { goto L_0022FA24; } }
L_0022F9DC:
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[3].sd[0] < 90ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022FA0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F9F8u); set32(c.r[4], ld32((c.r[4].w[0] + 436u)));  if (depth < kMaxDepth) unit_004C(c, 14u, depth + 1u); else { c.pc = 0x002505C0u; return; } if (c.pc != 0x0022F9F8u) [[unlikely]] return; }
L_0022F9F8:
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0022FA24; } }
L_0022FA0C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0022FA24; }
    set32(c.r[2], 0u + 50u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[3].w[0] - 1u);  goto L_0022FA24; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0022FA24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022FA40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FA64u); set32(c.r[4], ld32((c.r[4].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x0022FA64u) [[unlikely]] return; }
L_0022FA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FA6Cu);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x0022FA6Cu) [[unlikely]] return; }
L_0022FA6C:
    set32(c.r[3], ld32((c.r[18].w[0] + 436u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 1u);  goto L_0022FAA0; }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 1u);  goto L_0022FAD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FA90u); set32(c.r[4], ld32((c.r[18].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x0022FA90u) [[unlikely]] return; }
L_0022FA90:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0022FAD4; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0022FAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FAA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 196u, depth + 1u); else { c.pc = 0x001B1640u; return; } if (c.pc != 0x0022FAA8u) [[unlikely]] return; }
L_0022FAA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FAB0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x0022FAB0u) [[unlikely]] return; }
L_0022FAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FAB8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x0022FAB8u) [[unlikely]] return; }
L_0022FAB8:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FACCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 316u, depth + 1u); else { c.pc = 0x00237730u; return; } if (c.pc != 0x0022FACCu) [[unlikely]] return; }
L_0022FACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022FAF0; } }
L_0022FAD4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0022FAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FAE0u);  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x0022FAE0u) [[unlikely]] return; }
L_0022FAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FAE8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x0022FAE8u) [[unlikely]] return; }
L_0022FAE8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0022FAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FAF8u);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0022FAF8u) [[unlikely]] return; }
L_0022FAF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[3], 0u + 129u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FB0Cu); st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x0022FB0Cu) [[unlikely]] return; }
L_0022FB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FB14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 215u, depth + 1u); else { c.pc = 0x00161D70u; return; } if (c.pc != 0x0022FB14u) [[unlikely]] return; }
L_0022FB14:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FB20u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 57u, depth + 1u); else { c.pc = 0x002305A0u; return; } if (c.pc != 0x0022FB20u) [[unlikely]] return; }
L_0022FB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FB28u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0022FB28u) [[unlikely]] return; }
L_0022FB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FB30u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0022FB30u) [[unlikely]] return; }
L_0022FB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FB38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0022FB38u) [[unlikely]] return; }
L_0022FB38:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FB48u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 316u, depth + 1u); else { c.pc = 0x00237730u; return; } if (c.pc != 0x0022FB48u) [[unlikely]] return; }
L_0022FB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FB50u); set32(c.r[4], ld32((c.r[18].w[0] + 92u)));  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x0022FB50u) [[unlikely]] return; }
L_0022FB50:
    set32(c.r[2], ld32((c.r[18].w[0] + 436u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022FD14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 29248u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0022C000u < 16384u) { entry = entries_0043[(t - 0x0022C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022FB7C:
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 100u)));  goto L_0022FBB4; }
    c.f[0] = ld32((c.r[28].w[0] - 32308u));
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 176u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 204u), c.f[0]);
    st32((c.r[4].w[0] + 192u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 196u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 200u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FBB0u); set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x0022FBB0u) [[unlikely]] return; }
L_0022FBB0:
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 1;
L_0022FBB4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  goto L_0022FD28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FBC4u);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x0022FBC4u) [[unlikely]] return; }
L_0022FBC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022FD24; } }
L_0022FBCC:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 52u)));  goto L_0022FBE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FBE0u);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x0022FBE0u) [[unlikely]] return; }
L_0022FBE0:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 1;
L_0022FBE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FBECu);  if (depth < kMaxDepth) unit_0045(c, 294u, depth + 1u); else { c.pc = 0x002373C0u; return; } if (c.pc != 0x0022FBECu) [[unlikely]] return; }
L_0022FBEC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0022FD24; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  goto L_0022FC10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC0Cu);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x0022FC0Cu) [[unlikely]] return; }
L_0022FC0C:
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_0022FC10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022FD24; } }
    c.f[0] = ld32((c.r[28].w[0] - 32308u));
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 176u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 204u), c.f[0]);
    st32((c.r[4].w[0] + 192u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 196u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 200u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC40u); set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x0022FC40u) [[unlikely]] return; }
L_0022FC40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022FD24; } }
L_0022FC48:
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 100u)));  goto L_0022FC60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC5Cu);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x0022FC5Cu) [[unlikely]] return; }
L_0022FC5C:
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 1;
L_0022FC60:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022FD24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC70u);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x0022FC70u) [[unlikely]] return; }
L_0022FC70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022FD24; } }
L_0022FC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC80u); set32(c.r[4], ld32((c.r[18].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x0022FC80u) [[unlikely]] return; }
L_0022FC80:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  goto L_0022FCB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC94u); set32(c.r[4], ld32((c.r[18].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 294u, depth + 1u); else { c.pc = 0x002373C0u; return; } if (c.pc != 0x0022FC94u) [[unlikely]] return; }
L_0022FC94:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 100u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FCACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 485u, depth + 1u); else { c.pc = 0x0022F4F0u; return; } if (c.pc != 0x0022FCACu) [[unlikely]] return; }
L_0022FCAC:
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_0022FCB0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 100u)));  goto L_0022FCC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FCC0u);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x0022FCC0u) [[unlikely]] return; }
L_0022FCC0:
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 1;
L_0022FCC4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022FD24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FCD4u);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x0022FCD4u) [[unlikely]] return; }
L_0022FCD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022FD24; } }
L_0022FCDC:
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022FD24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FCF0u);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x0022FCF0u) [[unlikely]] return; }
L_0022FCF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022FD24; } }
L_0022FCF8:
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022FD24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD0Cu);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x0022FD0Cu) [[unlikely]] return; }
L_0022FD0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022FD24; } }
L_0022FD14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD24u); set32(c.r[5], c.r[5].w[0] - 29052u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0022FD24u) [[unlikely]] return; }
L_0022FD24:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_0022FD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD30u);  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0022FD30u) [[unlikely]] return; }
L_0022FD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 221u, depth + 1u); else { c.pc = 0x00161E10u; return; } if (c.pc != 0x0022FD38u) [[unlikely]] return; }
L_0022FD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x0022FD40u) [[unlikely]] return; }
L_0022FD40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x0022FD48u) [[unlikely]] return; }
L_0022FD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0022FD50u) [[unlikely]] return; }
L_0022FD50:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[3], 0u + 130u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD6Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 503u, depth + 1u); else { c.pc = 0x00233990u; return; } if (c.pc != 0x0022FD6Cu) [[unlikely]] return; }
L_0022FD6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 476u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022FE40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0022FE2C; } }
L_0022FD80:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], c.r[16].w[0] << 7);  goto L_0022FD94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (t) { goto L_0022FDC4; } }
L_0022FD94:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 588u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 476u)));  goto L_0022FDB8; }
    set32(c.r[5], ld32((c.r[18].w[0] + 472u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FDB0u); set32(c.r[4], ld32((c.r[18].w[0] + 476u)));  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x0022FDB0u) [[unlikely]] return; }
L_0022FDB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022FDC0; } }
L_0022FDB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FDC0u); set32(c.r[5], ld32((c.r[18].w[0] + 468u)));  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x0022FDC0u) [[unlikely]] return; }
L_0022FDC0:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_0022FDC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FDCCu);  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0022FDCCu) [[unlikely]] return; }
L_0022FDCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FDD4u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0022FDD4u) [[unlikely]] return; }
L_0022FDD4:
    set32(c.r[3], c.r[16].w[0] << 7);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], c.r[18].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FDECu); set32(c.r[6], c.r[19].w[0] + 512u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0022FDECu) [[unlikely]] return; }
L_0022FDEC:
    set32(c.r[4], ld32((c.r[18].w[0] + 476u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FDF8u); set32(c.r[19], c.r[19].w[0] + 580u);  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x0022FDF8u) [[unlikely]] return; }
L_0022FDF8:
    c.f[1] = ld32((c.r[19].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = ld32((c.r[19].w[0]));  goto L_0022FE10; }
    st32((c.r[19].w[0]), 0u);
    c.f[12] = ld32((c.r[19].w[0]));
    c.budget -= 2;
L_0022FE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE18u); set32(c.r[4], ld32((c.r[18].w[0] + 476u)));  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x0022FE18u) [[unlikely]] return; }
L_0022FE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE20u); set32(c.r[4], ld32((c.r[18].w[0] + 476u)));  if (depth < kMaxDepth) unit_000E(c, 213u, depth + 1u); else { c.pc = 0x00159910u; return; } if (c.pc != 0x0022FE20u) [[unlikely]] return; }
L_0022FE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE28u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0022FE28u) [[unlikely]] return; }
L_0022FE28:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0022FE2C:
    set32(c.r[2], ld32((c.r[18].w[0] + 452u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 436u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022FD80u | kUnwind; return; } goto L_0022FD80; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022FE40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE48u);  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x0022FE48u) [[unlikely]] return; }
L_0022FE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE50u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x0022FE50u) [[unlikely]] return; }
L_0022FE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0022FE68; } }
L_0022FE58:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE64u); set32(c.r[4], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x0022FE64u) [[unlikely]] return; }
L_0022FE64:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0022FE68:
    set32(c.r[3], ld32((c.r[18].w[0] + 440u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022FE58u | kUnwind; return; } goto L_0022FE58; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022FEA0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FEDCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x0022FEDCu) [[unlikely]] return; }
L_0022FEDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FEE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0022FEE8u) [[unlikely]] return; }
L_0022FEE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FEF8u); set32(c.r[6], 0u + 2048u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x0022FEF8u) [[unlikely]] return; }
L_0022FEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF00u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x0022FF00u) [[unlikely]] return; }
L_0022FF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF08u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0022FF08u) [[unlikely]] return; }
L_0022FF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF10u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x0022FF10u) [[unlikely]] return; }
L_0022FF10:
    set32(c.r[22], ld32((c.r[2].w[0] + 40u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0022FF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF20u); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00235550u; return; } if (c.pc != 0x0022FF20u) [[unlikely]] return; }
L_0022FF20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  [[clang::musttail]] return unit_0044(c, 2u, depth); }
    set32(c.r[2], ld32((c.r[17].w[0] + 444u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[3], c.r[16].w[0] << 4);  goto L_0022FFBC; }
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0022FFB8; } }
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022FFB8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    c.r[1].d[0] = c.r[2].sd[0] < 150ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 124u);  if (t) { goto L_0022FF6C; } }
    set32(c.r[2], 0u + 120u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0022FF6C:
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + 30u);
    st32((c.r[4].w[0] + 124u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022FFA4; }
    set32(c.r[2], 0u + 255u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 7u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF9Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 482u, depth + 1u); else { c.pc = 0x0022F480u; return; } if (c.pc != 0x0022FF9Cu) [[unlikely]] return; }
L_0022FF9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] << 4);  if (t) { [[clang::musttail]] return unit_0044(c, 7u, depth); } }
L_0022FFA4:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FFB0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 482u, depth + 1u); else { c.pc = 0x0022F480u; return; } if (c.pc != 0x0022FFB0u) [[unlikely]] return; }
L_0022FFB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0044(c, 6u, depth); } }
L_0022FFB8:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.budget -= 1;
L_0022FFBC:
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 124u)));
    set32(c.r[3], c.r[3].w[0] - 30u);
    st32((c.r[5].w[0] + 124u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 120u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[5].w[0] + 124u);  if (t) { goto L_0022FFE8; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { c.r[1].d[0] = c.r[2].sd[0] < 121ll ? 1ull : 0ull;  goto L_0022FFF0; }
L_0022FFE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { [[clang::musttail]] return unit_0044(c, 6u, depth); } }
L_0022FFF0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0044(c, 6u, depth); } }
    set32(c.r[2], 0u + 120u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_0044(c, 6u, depth); } }
    [[clang::musttail]] return unit_0044(c, 2u, depth);
}

}
