#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0024[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0,
    20, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0,
    27, 0, 28, 0, 29, 0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38,
    0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0,
    0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0,
    0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0,
    63, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 83, 0, 0,
    0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 89, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0,
    0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0,
    0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 214, 0,
    0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0,
    0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237,
    0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 280,
    0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284,
    0, 285, 0, 0, 286, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 301, 0, 302, 0, 303, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0,
    311, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0,
    0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0,
    0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0,
    0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0,
    0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356,
    0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 371, 0, 372, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0,
    0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399,
    0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 405,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407,
    0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0,
    0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0,
    0, 0, 0, 0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 0, 433, 0, 434, 0,
    0, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 442, 0, 443, 0, 0, 444, 0, 0, 0, 0, 445, 0, 446, 0, 0, 0, 447,
    0, 448, 0, 449, 0, 0, 0, 450, 0, 451, 0, 452, 0, 0, 0, 0, 0, 453, 0, 454, 0, 455, 0, 0, 456, 0, 457, 0, 458, 0, 459, 0,
    0, 0, 0, 0, 0, 460, 0, 461, 0, 462, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468,
    0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0,
    0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0,
    0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 489, 0, 0, 0, 0,
    0, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0,
    0, 495, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0,
    0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0,
    513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 516, 0, 517, 0, 0, 0, 518, 0, 519, 0, 0, 0, 520, 0, 521, 0, 522, 0,
    0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 525, 0, 526, 0, 527, 0, 528, 0, 529, 0, 0, 0, 530, 0, 0, 531,
    0, 532, 0, 533, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 540, 0, 541,
    0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 548, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 551, 0, 552, 0,
    0, 0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 0, 0, 556, 0, 557, 0, 0, 0, 558, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0,
    561, 0, 0, 0, 562, 0, 563, 0, 564, 0, 565, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 567, 0, 568, 0, 569, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0,
    585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 589, 0, 0, 0, 590, 0, 591, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 594, 0, 595, 0, 0, 0, 596, 0,
    0, 0, 597, 0, 598, 0, 599, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 603, 0,
    604, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0,
    610, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0024(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001B0000;
    case 2u: goto L_001B0030;
    case 3u: goto L_001B0060;
    case 4u: goto L_001B007C;
    case 5u: goto L_001B009C;
    case 6u: goto L_001B00B4;
    case 7u: goto L_001B00D4;
    case 8u: goto L_001B00F0;
    case 9u: goto L_001B010C;
    case 10u: goto L_001B0128;
    case 11u: goto L_001B0144;
    case 12u: goto L_001B0158;
    case 13u: goto L_001B0168;
    case 14u: goto L_001B0170;
    case 15u: goto L_001B01A0;
    case 16u: goto L_001B01B0;
    case 17u: goto L_001B01C4;
    case 18u: goto L_001B01DC;
    case 19u: goto L_001B01EC;
    case 20u: goto L_001B0200;
    case 21u: goto L_001B020C;
    case 22u: goto L_001B0220;
    case 23u: goto L_001B0230;
    case 24u: goto L_001B0260;
    case 25u: goto L_001B0268;
    case 26u: goto L_001B0278;
    case 27u: goto L_001B0280;
    case 28u: goto L_001B0288;
    case 29u: goto L_001B0290;
    case 30u: goto L_001B029C;
    case 31u: goto L_001B02A4;
    case 32u: goto L_001B02AC;
    case 33u: goto L_001B02B4;
    case 34u: goto L_001B02BC;
    case 35u: goto L_001B02E0;
    case 36u: goto L_001B0300;
    case 37u: goto L_001B0314;
    case 38u: goto L_001B037C;
    case 39u: goto L_001B038C;
    case 40u: goto L_001B03B8;
    case 41u: goto L_001B03E8;
    case 42u: goto L_001B0400;
    case 43u: goto L_001B0428;
    case 44u: goto L_001B0430;
    case 45u: goto L_001B0444;
    case 46u: goto L_001B0454;
    case 47u: goto L_001B0460;
    case 48u: goto L_001B046C;
    case 49u: goto L_001B0478;
    case 50u: goto L_001B0484;
    case 51u: goto L_001B0490;
    case 52u: goto L_001B04A0;
    case 53u: goto L_001B04C0;
    case 54u: goto L_001B04D0;
    case 55u: goto L_001B04F4;
    case 56u: goto L_001B0504;
    case 57u: goto L_001B0510;
    case 58u: goto L_001B0528;
    case 59u: goto L_001B0538;
    case 60u: goto L_001B054C;
    case 61u: goto L_001B0560;
    case 62u: goto L_001B0574;
    case 63u: goto L_001B0580;
    case 64u: goto L_001B0588;
    case 65u: goto L_001B0598;
    case 66u: goto L_001B05B0;
    case 67u: goto L_001B05BC;
    case 68u: goto L_001B05D8;
    case 69u: goto L_001B05EC;
    case 70u: goto L_001B0604;
    case 71u: goto L_001B061C;
    case 72u: goto L_001B062C;
    case 73u: goto L_001B0648;
    case 74u: goto L_001B0658;
    case 75u: goto L_001B0660;
    case 76u: goto L_001B0680;
    case 77u: goto L_001B069C;
    case 78u: goto L_001B06AC;
    case 79u: goto L_001B06B8;
    case 80u: goto L_001B06D0;
    case 81u: goto L_001B06E0;
    case 82u: goto L_001B06EC;
    case 83u: goto L_001B06F4;
    case 84u: goto L_001B0704;
    case 85u: goto L_001B071C;
    case 86u: goto L_001B0728;
    case 87u: goto L_001B0744;
    case 88u: goto L_001B0758;
    case 89u: goto L_001B0764;
    case 90u: goto L_001B076C;
    case 91u: goto L_001B0790;
    case 92u: goto L_001B07BC;
    case 93u: goto L_001B07CC;
    case 94u: goto L_001B07D8;
    case 95u: goto L_001B07F0;
    case 96u: goto L_001B0804;
    case 97u: goto L_001B0818;
    case 98u: goto L_001B0820;
    case 99u: goto L_001B0828;
    case 100u: goto L_001B0838;
    case 101u: goto L_001B0850;
    case 102u: goto L_001B085C;
    case 103u: goto L_001B0878;
    case 104u: goto L_001B0898;
    case 105u: goto L_001B08AC;
    case 106u: goto L_001B08C8;
    case 107u: goto L_001B08D8;
    case 108u: goto L_001B08E0;
    case 109u: goto L_001B0910;
    case 110u: goto L_001B0920;
    case 111u: goto L_001B0944;
    case 112u: goto L_001B094C;
    case 113u: goto L_001B0958;
    case 114u: goto L_001B0970;
    case 115u: goto L_001B0980;
    case 116u: goto L_001B09EC;
    case 117u: goto L_001B0A04;
    case 118u: goto L_001B0A20;
    case 119u: goto L_001B0A80;
    case 120u: goto L_001B0A90;
    case 121u: goto L_001B0AF0;
    case 122u: goto L_001B0B00;
    case 123u: goto L_001B0B80;
    case 124u: goto L_001B0B8C;
    case 125u: goto L_001B0BA8;
    case 126u: goto L_001B0BB0;
    case 127u: goto L_001B0BCC;
    case 128u: goto L_001B0BF0;
    case 129u: goto L_001B0C00;
    case 130u: goto L_001B0C10;
    case 131u: goto L_001B0C20;
    case 132u: goto L_001B0C30;
    case 133u: goto L_001B0C40;
    case 134u: goto L_001B0C50;
    case 135u: goto L_001B0C6C;
    case 136u: goto L_001B0C74;
    case 137u: goto L_001B0C90;
    case 138u: goto L_001B0C98;
    case 139u: goto L_001B0CC8;
    case 140u: goto L_001B0CD8;
    case 141u: goto L_001B0D00;
    case 142u: goto L_001B0EF0;
    case 143u: goto L_001B0F0C;
    case 144u: goto L_001B0F18;
    case 145u: goto L_001B0F38;
    case 146u: goto L_001B0F48;
    case 147u: goto L_001B0F70;
    case 148u: goto L_001B0F80;
    case 149u: goto L_001B1020;
    case 150u: goto L_001B1040;
    case 151u: goto L_001B105C;
    case 152u: goto L_001B1090;
    case 153u: goto L_001B10AC;
    case 154u: goto L_001B10E0;
    case 155u: goto L_001B1100;
    case 156u: goto L_001B1144;
    case 157u: goto L_001B1160;
    case 158u: goto L_001B1190;
    case 159u: goto L_001B11A0;
    case 160u: goto L_001B11D4;
    case 161u: goto L_001B11E4;
    case 162u: goto L_001B1210;
    case 163u: goto L_001B1330;
    case 164u: goto L_001B1348;
    case 165u: goto L_001B1350;
    case 166u: goto L_001B135C;
    case 167u: goto L_001B1368;
    case 168u: goto L_001B1378;
    case 169u: goto L_001B13A4;
    case 170u: goto L_001B13D0;
    case 171u: goto L_001B13E8;
    case 172u: goto L_001B1400;
    case 173u: goto L_001B1410;
    case 174u: goto L_001B1434;
    case 175u: goto L_001B144C;
    case 176u: goto L_001B1460;
    case 177u: goto L_001B1480;
    case 178u: goto L_001B149C;
    case 179u: goto L_001B14B0;
    case 180u: goto L_001B14D0;
    case 181u: goto L_001B14E0;
    case 182u: goto L_001B1500;
    case 183u: goto L_001B1510;
    case 184u: goto L_001B152C;
    case 185u: goto L_001B1538;
    case 186u: goto L_001B1550;
    case 187u: goto L_001B156C;
    case 188u: goto L_001B1580;
    case 189u: goto L_001B159C;
    case 190u: goto L_001B15B0;
    case 191u: goto L_001B15CC;
    case 192u: goto L_001B15E0;
    case 193u: goto L_001B1604;
    case 194u: goto L_001B1610;
    case 195u: goto L_001B1630;
    case 196u: goto L_001B1640;
    case 197u: goto L_001B1664;
    case 198u: goto L_001B1670;
    case 199u: goto L_001B1690;
    case 200u: goto L_001B16A0;
    case 201u: goto L_001B16BC;
    case 202u: goto L_001B16D0;
    case 203u: goto L_001B16EC;
    case 204u: goto L_001B1700;
    case 205u: goto L_001B171C;
    case 206u: goto L_001B1730;
    case 207u: goto L_001B174C;
    case 208u: goto L_001B1760;
    case 209u: goto L_001B177C;
    case 210u: goto L_001B1790;
    case 211u: goto L_001B1848;
    case 212u: goto L_001B185C;
    case 213u: goto L_001B1868;
    case 214u: goto L_001B1878;
    case 215u: goto L_001B1884;
    case 216u: goto L_001B18A0;
    case 217u: goto L_001B18AC;
    case 218u: goto L_001B18BC;
    case 219u: goto L_001B1900;
    case 220u: goto L_001B1910;
    case 221u: goto L_001B1920;
    case 222u: goto L_001B1930;
    case 223u: goto L_001B193C;
    case 224u: goto L_001B1A10;
    case 225u: goto L_001B1A20;
    case 226u: goto L_001B1AC4;
    case 227u: goto L_001B1AD4;
    case 228u: goto L_001B1AE4;
    case 229u: goto L_001B1AF4;
    case 230u: goto L_001B1B14;
    case 231u: goto L_001B1B3C;
    case 232u: goto L_001B1B48;
    case 233u: goto L_001B1B54;
    case 234u: goto L_001B1B74;
    case 235u: goto L_001B1BA0;
    case 236u: goto L_001B1BDC;
    case 237u: goto L_001B1BFC;
    case 238u: goto L_001B1C1C;
    case 239u: goto L_001B1C3C;
    case 240u: goto L_001B1C50;
    case 241u: goto L_001B1CA4;
    case 242u: goto L_001B1CB8;
    case 243u: goto L_001B1CC8;
    case 244u: goto L_001B1CF0;
    case 245u: goto L_001B1D1C;
    case 246u: goto L_001B1D30;
    case 247u: goto L_001B1D3C;
    case 248u: goto L_001B1D60;
    case 249u: goto L_001B1D84;
    case 250u: goto L_001B1D90;
    case 251u: goto L_001B1DA8;
    case 252u: goto L_001B1DC0;
    case 253u: goto L_001B1DE4;
    case 254u: goto L_001B1DF8;
    case 255u: goto L_001B1E18;
    case 256u: goto L_001B1E30;
    case 257u: goto L_001B1E50;
    case 258u: goto L_001B1EA0;
    case 259u: goto L_001B1EB0;
    case 260u: goto L_001B1F00;
    case 261u: goto L_001B1F20;
    case 262u: goto L_001B1F44;
    case 263u: goto L_001B1F80;
    case 264u: goto L_001B1FA0;
    case 265u: goto L_001B1FC0;
    case 266u: goto L_001B1FD0;
    case 267u: goto L_001B1FF0;
    case 268u: goto L_001B2010;
    case 269u: goto L_001B2030;
    case 270u: goto L_001B2050;
    case 271u: goto L_001B2078;
    case 272u: goto L_001B2090;
    case 273u: goto L_001B20B8;
    case 274u: goto L_001B20D0;
    case 275u: goto L_001B20E0;
    case 276u: goto L_001B20F0;
    case 277u: goto L_001B2120;
    case 278u: goto L_001B2160;
    case 279u: goto L_001B2174;
    case 280u: goto L_001B217C;
    case 281u: goto L_001B2194;
    case 282u: goto L_001B21C0;
    case 283u: goto L_001B21F0;
    case 284u: goto L_001B21FC;
    case 285u: goto L_001B2204;
    case 286u: goto L_001B2210;
    case 287u: goto L_001B2218;
    case 288u: goto L_001B2220;
    case 289u: goto L_001B2228;
    case 290u: goto L_001B223C;
    case 291u: goto L_001B2244;
    case 292u: goto L_001B224C;
    case 293u: goto L_001B2254;
    case 294u: goto L_001B225C;
    case 295u: goto L_001B2264;
    case 296u: goto L_001B226C;
    case 297u: goto L_001B2288;
    case 298u: goto L_001B22B0;
    case 299u: goto L_001B22C0;
    case 300u: goto L_001B22D0;
    case 301u: goto L_001B22D8;
    case 302u: goto L_001B22E0;
    case 303u: goto L_001B22E8;
    case 304u: goto L_001B2300;
    case 305u: goto L_001B2310;
    case 306u: goto L_001B2320;
    case 307u: goto L_001B2328;
    case 308u: goto L_001B2340;
    case 309u: goto L_001B2350;
    case 310u: goto L_001B2378;
    case 311u: goto L_001B2380;
    case 312u: goto L_001B2388;
    case 313u: goto L_001B2390;
    case 314u: goto L_001B23AC;
    case 315u: goto L_001B23D0;
    case 316u: goto L_001B23E0;
    case 317u: goto L_001B2428;
    case 318u: goto L_001B2440;
    case 319u: goto L_001B246C;
    case 320u: goto L_001B2484;
    case 321u: goto L_001B24B4;
    case 322u: goto L_001B24D4;
    case 323u: goto L_001B24E8;
    case 324u: goto L_001B2504;
    case 325u: goto L_001B251C;
    case 326u: goto L_001B2550;
    case 327u: goto L_001B2564;
    case 328u: goto L_001B2574;
    case 329u: goto L_001B2590;
    case 330u: goto L_001B25F0;
    case 331u: goto L_001B2600;
    case 332u: goto L_001B2628;
    case 333u: goto L_001B2638;
    case 334u: goto L_001B264C;
    case 335u: goto L_001B2658;
    case 336u: goto L_001B266C;
    case 337u: goto L_001B26AC;
    case 338u: goto L_001B26D0;
    case 339u: goto L_001B26F4;
    case 340u: goto L_001B2710;
    case 341u: goto L_001B2734;
    case 342u: goto L_001B274C;
    case 343u: goto L_001B2760;
    case 344u: goto L_001B2780;
    case 345u: goto L_001B2790;
    case 346u: goto L_001B27A8;
    case 347u: goto L_001B27C0;
    case 348u: goto L_001B27F8;
    case 349u: goto L_001B2804;
    case 350u: goto L_001B2814;
    case 351u: goto L_001B2838;
    case 352u: goto L_001B2860;
    case 353u: goto L_001B2884;
    case 354u: goto L_001B2894;
    case 355u: goto L_001B28C0;
    case 356u: goto L_001B28FC;
    case 357u: goto L_001B2918;
    case 358u: goto L_001B2960;
    case 359u: goto L_001B2990;
    case 360u: goto L_001B299C;
    case 361u: goto L_001B29B4;
    case 362u: goto L_001B29C0;
    case 363u: goto L_001B29C8;
    case 364u: goto L_001B29D4;
    case 365u: goto L_001B29E8;
    case 366u: goto L_001B29F8;
    case 367u: goto L_001B2A28;
    case 368u: goto L_001B2A60;
    case 369u: goto L_001B2A94;
    case 370u: goto L_001B2AA0;
    case 371u: goto L_001B2AB0;
    case 372u: goto L_001B2AB8;
    case 373u: goto L_001B2AC0;
    case 374u: goto L_001B2AD8;
    case 375u: goto L_001B2AF0;
    case 376u: goto L_001B2B28;
    case 377u: goto L_001B2B38;
    case 378u: goto L_001B2B50;
    case 379u: goto L_001B2B5C;
    case 380u: goto L_001B2B70;
    case 381u: goto L_001B2B94;
    case 382u: goto L_001B2BB8;
    case 383u: goto L_001B2BF0;
    case 384u: goto L_001B2C18;
    case 385u: goto L_001B2C2C;
    case 386u: goto L_001B2C38;
    case 387u: goto L_001B2C4C;
    case 388u: goto L_001B2CA0;
    case 389u: goto L_001B2CCC;
    case 390u: goto L_001B2CE0;
    case 391u: goto L_001B2CF0;
    case 392u: goto L_001B2D0C;
    case 393u: goto L_001B2D1C;
    case 394u: goto L_001B2D38;
    case 395u: goto L_001B2D4C;
    case 396u: goto L_001B2D58;
    case 397u: goto L_001B2D6C;
    case 398u: goto L_001B2DD0;
    case 399u: goto L_001B2DFC;
    case 400u: goto L_001B2E10;
    case 401u: goto L_001B2E20;
    case 402u: goto L_001B2E48;
    case 403u: goto L_001B2E5C;
    case 404u: goto L_001B2E68;
    case 405u: goto L_001B2E7C;
    case 406u: goto L_001B2ED0;
    case 407u: goto L_001B2EFC;
    case 408u: goto L_001B2F10;
    case 409u: goto L_001B2F30;
    case 410u: goto L_001B2F40;
    case 411u: goto L_001B2F50;
    case 412u: goto L_001B2F78;
    case 413u: goto L_001B2F8C;
    case 414u: goto L_001B2F98;
    case 415u: goto L_001B2FAC;
    case 416u: goto L_001B3000;
    case 417u: goto L_001B302C;
    case 418u: goto L_001B3040;
    case 419u: goto L_001B3050;
    case 420u: goto L_001B306C;
    case 421u: goto L_001B3090;
    case 422u: goto L_001B3098;
    case 423u: goto L_001B30A0;
    case 424u: goto L_001B30A8;
    case 425u: goto L_001B30B0;
    case 426u: goto L_001B30B8;
    case 427u: goto L_001B30C0;
    case 428u: goto L_001B30C8;
    case 429u: goto L_001B30D0;
    case 430u: goto L_001B30D8;
    case 431u: goto L_001B30E0;
    case 432u: goto L_001B30E8;
    case 433u: goto L_001B30F0;
    case 434u: goto L_001B30F8;
    case 435u: goto L_001B3108;
    case 436u: goto L_001B3110;
    case 437u: goto L_001B3118;
    case 438u: goto L_001B3120;
    case 439u: goto L_001B3128;
    case 440u: goto L_001B3130;
    case 441u: goto L_001B3138;
    case 442u: goto L_001B313C;
    case 443u: goto L_001B3144;
    case 444u: goto L_001B3150;
    case 445u: goto L_001B3164;
    case 446u: goto L_001B316C;
    case 447u: goto L_001B317C;
    case 448u: goto L_001B3184;
    case 449u: goto L_001B318C;
    case 450u: goto L_001B319C;
    case 451u: goto L_001B31A4;
    case 452u: goto L_001B31AC;
    case 453u: goto L_001B31C4;
    case 454u: goto L_001B31CC;
    case 455u: goto L_001B31D4;
    case 456u: goto L_001B31E0;
    case 457u: goto L_001B31E8;
    case 458u: goto L_001B31F0;
    case 459u: goto L_001B31F8;
    case 460u: goto L_001B3214;
    case 461u: goto L_001B321C;
    case 462u: goto L_001B3224;
    case 463u: goto L_001B3230;
    case 464u: goto L_001B3240;
    case 465u: goto L_001B3250;
    case 466u: goto L_001B3264;
    case 467u: goto L_001B32D0;
    case 468u: goto L_001B32FC;
    case 469u: goto L_001B3308;
    case 470u: goto L_001B3320;
    case 471u: goto L_001B3340;
    case 472u: goto L_001B3350;
    case 473u: goto L_001B33C4;
    case 474u: goto L_001B33CC;
    case 475u: goto L_001B33D4;
    case 476u: goto L_001B33F8;
    case 477u: goto L_001B3408;
    case 478u: goto L_001B3428;
    case 479u: goto L_001B345C;
    case 480u: goto L_001B3470;
    case 481u: goto L_001B34A0;
    case 482u: goto L_001B34AC;
    case 483u: goto L_001B34D0;
    case 484u: goto L_001B34E4;
    case 485u: goto L_001B3508;
    case 486u: goto L_001B352C;
    case 487u: goto L_001B3554;
    case 488u: goto L_001B3564;
    case 489u: goto L_001B356C;
    case 490u: goto L_001B358C;
    case 491u: goto L_001B35A0;
    case 492u: goto L_001B35D0;
    case 493u: goto L_001B35E8;
    case 494u: goto L_001B35F4;
    case 495u: goto L_001B3604;
    case 496u: goto L_001B360C;
    case 497u: goto L_001B3630;
    case 498u: goto L_001B3670;
    case 499u: goto L_001B36A4;
    case 500u: goto L_001B36BC;
    case 501u: goto L_001B36CC;
    case 502u: goto L_001B36E4;
    case 503u: goto L_001B3710;
    case 504u: goto L_001B3720;
    case 505u: goto L_001B373C;
    case 506u: goto L_001B3750;
    case 507u: goto L_001B3774;
    case 508u: goto L_001B3784;
    case 509u: goto L_001B3794;
    case 510u: goto L_001B37A8;
    case 511u: goto L_001B37C4;
    case 512u: goto L_001B37EC;
    case 513u: goto L_001B3800;
    case 514u: goto L_001B3820;
    case 515u: goto L_001B3830;
    case 516u: goto L_001B3838;
    case 517u: goto L_001B3840;
    case 518u: goto L_001B3850;
    case 519u: goto L_001B3858;
    case 520u: goto L_001B3868;
    case 521u: goto L_001B3870;
    case 522u: goto L_001B3878;
    case 523u: goto L_001B3890;
    case 524u: goto L_001B38B8;
    case 525u: goto L_001B38C0;
    case 526u: goto L_001B38C8;
    case 527u: goto L_001B38D0;
    case 528u: goto L_001B38D8;
    case 529u: goto L_001B38E0;
    case 530u: goto L_001B38F0;
    case 531u: goto L_001B38FC;
    case 532u: goto L_001B3904;
    case 533u: goto L_001B390C;
    case 534u: goto L_001B3920;
    case 535u: goto L_001B3928;
    case 536u: goto L_001B3938;
    case 537u: goto L_001B3944;
    case 538u: goto L_001B3958;
    case 539u: goto L_001B396C;
    case 540u: goto L_001B3974;
    case 541u: goto L_001B397C;
    case 542u: goto L_001B398C;
    case 543u: goto L_001B39A0;
    case 544u: goto L_001B39B4;
    case 545u: goto L_001B39C0;
    case 546u: goto L_001B39D4;
    case 547u: goto L_001B39E8;
    case 548u: goto L_001B39F4;
    case 549u: goto L_001B3A54;
    case 550u: goto L_001B3A64;
    case 551u: goto L_001B3A70;
    case 552u: goto L_001B3A78;
    case 553u: goto L_001B3A8C;
    case 554u: goto L_001B3A98;
    case 555u: goto L_001B3AA4;
    case 556u: goto L_001B3AB4;
    case 557u: goto L_001B3ABC;
    case 558u: goto L_001B3ACC;
    case 559u: goto L_001B3AD4;
    case 560u: goto L_001B3ADC;
    case 561u: goto L_001B3B00;
    case 562u: goto L_001B3B10;
    case 563u: goto L_001B3B18;
    case 564u: goto L_001B3B20;
    case 565u: goto L_001B3B28;
    case 566u: goto L_001B3B30;
    case 567u: goto L_001B3B8C;
    case 568u: goto L_001B3B94;
    case 569u: goto L_001B3B9C;
    case 570u: goto L_001B3BA4;
    case 571u: goto L_001B3BC0;
    case 572u: goto L_001B3BE4;
    case 573u: goto L_001B3C0C;
    case 574u: goto L_001B3C1C;
    case 575u: goto L_001B3C30;
    case 576u: goto L_001B3C40;
    case 577u: goto L_001B3C64;
    case 578u: goto L_001B3CB0;
    case 579u: goto L_001B3CD0;
    case 580u: goto L_001B3D14;
    case 581u: goto L_001B3D34;
    case 582u: goto L_001B3D44;
    case 583u: goto L_001B3D50;
    case 584u: goto L_001B3D68;
    case 585u: goto L_001B3D80;
    case 586u: goto L_001B3DB8;
    case 587u: goto L_001B3DC0;
    case 588u: goto L_001B3DD4;
    case 589u: goto L_001B3E04;
    case 590u: goto L_001B3E14;
    case 591u: goto L_001B3E1C;
    case 592u: goto L_001B3E28;
    case 593u: goto L_001B3E58;
    case 594u: goto L_001B3E60;
    case 595u: goto L_001B3E68;
    case 596u: goto L_001B3E78;
    case 597u: goto L_001B3E88;
    case 598u: goto L_001B3E90;
    case 599u: goto L_001B3E98;
    case 600u: goto L_001B3EB0;
    case 601u: goto L_001B3EE0;
    case 602u: goto L_001B3EF0;
    case 603u: goto L_001B3EF8;
    case 604u: goto L_001B3F00;
    case 605u: goto L_001B3F20;
    case 606u: goto L_001B3F30;
    case 607u: goto L_001B3F4C;
    case 608u: goto L_001B3F60;
    case 609u: goto L_001B3F70;
    case 610u: goto L_001B3F80;
    case 611u: goto L_001B3F90;
    case 612u: goto L_001B3FA0;
    case 613u: goto L_001B3FB0;
    case 614u: goto L_001B3FC0;
    case 615u: goto L_001B3FDC;
    default: bad_entry(c, 0x001B0000u); return;
    }
L_001B0000:
    st8((c.r[21].w[0] + 42u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 43u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 44u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 45u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 46u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 47u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 49u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 50u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 51u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 52u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 53u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
L_001B0030:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_001B0060:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B007Cu); st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0011(c, 98u, depth + 1u); else { c.pc = 0x00164C00u; return; } if (c.pc != 0x001B007Cu) [[unlikely]] return; }
L_001B007C:
    set32(c.r[18], ld32((c.r[28].w[0] - 30800u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001B0094; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001B013C; } }
L_001B0094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B009Cu);  if (depth < kMaxDepth) unit_0024(c, 400u, depth + 1u); else { c.pc = 0x001B2E10u; return; } if (c.pc != 0x001B009Cu) [[unlikely]] return; }
L_001B009C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001B00CC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B00B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x001B00B4u) [[unlikely]] return; }
L_001B00B4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001B00C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001B0138; } }
L_001B00C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B00CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B00D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x001B00D4u) [[unlikely]] return; }
L_001B00D4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001B00E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_001B0138; } }
L_001B00E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B00F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 408u, depth + 1u); else { c.pc = 0x001B2F10u; return; } if (c.pc != 0x001B00F0u) [[unlikely]] return; }
L_001B00F0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001B0104; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_001B0138; } }
L_001B0104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B010Cu);  if (depth < kMaxDepth) unit_0013(c, 318u, depth + 1u); else { c.pc = 0x0016F580u; return; } if (c.pc != 0x001B010Cu) [[unlikely]] return; }
L_001B010C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001B0120; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 4u);  if (t) { goto L_001B0138; } }
L_001B0120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0128u);  if (depth < kMaxDepth) unit_0010(c, 64u, depth + 1u); else { c.pc = 0x00160A80u; return; } if (c.pc != 0x001B0128u) [[unlikely]] return; }
L_001B0128:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001B0230; } }
    set32(c.r[17], 0u + 5u);
    c.budget -= 1;
L_001B0138:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001B013C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0144u);  if (depth < kMaxDepth) unit_0011(c, 99u, depth + 1u); else { c.pc = 0x00164C10u; return; } if (c.pc != 0x001B0144u) [[unlikely]] return; }
L_001B0144:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001B0160; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0158u); set32(c.r[4], c.r[4].w[0] + 4752u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B0158u) [[unlikely]] return; }
L_001B0158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0230; } }
L_001B0160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0168u);  if (depth < kMaxDepth) unit_0023(c, 308u, depth + 1u); else { c.pc = 0x001AFB00u; return; } if (c.pc != 0x001B0168u) [[unlikely]] return; }
L_001B0168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0170u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 309u, depth + 1u); else { c.pc = 0x001AFB20u; return; } if (c.pc != 0x001B0170u) [[unlikely]] return; }
L_001B0170:
    set32(c.r[2], ld32((c.r[28].w[0] - 30804u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 63u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[7].d[0] = ld8((c.r[28].w[0] - 30778u));
    c.r[8].d[0] = ld8((c.r[28].w[0] - 30779u));
    c.r[9].d[0] = ld8((c.r[28].w[0] - 30781u));
    c.r[10].d[0] = ld8((c.r[28].w[0] - 30782u));
    c.r[11].d[0] = ld8((c.r[28].w[0] - 30783u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B01A0u); set32(c.r[6], c.r[6].w[0] + 4784u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B01A0u) [[unlikely]] return; }
L_001B01A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30804u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B01B0u); st32((c.r[28].w[0] - 30804u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0014ECD0u; return; } if (c.pc != 0x001B01B0u) [[unlikely]] return; }
L_001B01B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_001B0214; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B01C4u); set32(c.r[5], 0u + 1538u);  if (depth < kMaxDepth) unit_0023(c, 300u, depth + 1u); else { c.pc = 0x001AFA00u; return; } if (c.pc != 0x001B01C4u) [[unlikely]] return; }
L_001B01C4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].sd[0] >= 0) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_001B01E0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B01DCu); set32(c.r[4], c.r[4].w[0] + 4832u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B01DCu) [[unlikely]] return; }
L_001B01DC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B01E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B01ECu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 303u, depth + 1u); else { c.pc = 0x001AFA60u; return; } if (c.pc != 0x001B01ECu) [[unlikely]] return; }
L_001B01EC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001B0204; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0200u); set32(c.r[4], c.r[4].w[0] + 4864u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B0200u) [[unlikely]] return; }
L_001B0200:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001B0204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B020Cu);  if (depth < kMaxDepth) unit_0023(c, 301u, depth + 1u); else { c.pc = 0x001AFA20u; return; } if (c.pc != 0x001B020Cu) [[unlikely]] return; }
L_001B020C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0220; } }
L_001B0214:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0220u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 91u, depth + 1u); else { c.pc = 0x001B0790u; return; } if (c.pc != 0x001B0220u) [[unlikely]] return; }
L_001B0220:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0230u); set32(c.r[4], c.r[4].w[0] + 4896u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B0230u) [[unlikely]] return; }
L_001B0230:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_001B02C0; }
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B02BC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 4912u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001B0000u < 16384u) { entry = entries_0024[(t - 0x001B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001B0260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0268u);  if (depth < kMaxDepth) unit_0024(c, 400u, depth + 1u); else { c.pc = 0x001B2E10u; return; } if (c.pc != 0x001B0268u) [[unlikely]] return; }
L_001B0268:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0278u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x001B0278u) [[unlikely]] return; }
L_001B0278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B02BC; } }
L_001B0280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0288u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x001B0288u) [[unlikely]] return; }
L_001B0288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B02BC; } }
L_001B0290:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B029Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x001B029Cu) [[unlikely]] return; }
L_001B029C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B02BC; } }
L_001B02A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B02ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 321u, depth + 1u); else { c.pc = 0x0016F5D0u; return; } if (c.pc != 0x001B02ACu) [[unlikely]] return; }
L_001B02AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B02BC; } }
L_001B02B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B02BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 68u, depth + 1u); else { c.pc = 0x00160AF0u; return; } if (c.pc != 0x001B02BCu) [[unlikely]] return; }
L_001B02BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001B02C0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001B02E0:
    set32(c.r[3], 0u + 3u);
    st32((c.r[28].w[0] - 30808u), 0u);
    st32((c.r[28].w[0] - 30804u), 0u);
    st32((c.r[28].w[0] - 30796u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30800u), 0u);  c.pc = t; return; }
L_001B0300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0314u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 129u, depth + 1u); else { c.pc = 0x001B0C00u; return; } if (c.pc != 0x001B0314u) [[unlikely]] return; }
L_001B0314:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001B03EC; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30628u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001B03CC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30808u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001B0394; } }
    c.r[3].d[0] = ld64((c.r[5].w[0] + 72u));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B0394; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30796u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[2].d[0] << 32;  goto L_001B0368; }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[28].w[0] - 30796u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
L_001B0368:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001B0384; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B037Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 42u, depth + 1u); else { c.pc = 0x001B0400u; return; } if (c.pc != 0x001B037Cu) [[unlikely]] return; }
L_001B037C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B03CC; } }
L_001B0384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B038Cu);  if (depth < kMaxDepth) unit_0024(c, 42u, depth + 1u); else { c.pc = 0x001B0400u; return; } if (c.pc != 0x001B038Cu) [[unlikely]] return; }
L_001B038C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001B03CC; } }
L_001B0394:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 3u);  goto L_001B03C8; }
    c.r[3].d[0] = ld64((c.r[5].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B03C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B03B8u);  if (depth < kMaxDepth) unit_0024(c, 52u, depth + 1u); else { c.pc = 0x001B04A0u; return; } if (c.pc != 0x001B03B8u) [[unlikely]] return; }
L_001B03B8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30796u), c.r[3].w[0]);  if (t) { goto L_001B03CC; } }
L_001B03C4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_001B03C8:
    st32((c.r[28].w[0] - 30796u), c.r[3].w[0]);
    c.budget -= 1;
L_001B03CC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001B03E0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30808u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B03E8; } }
L_001B03E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B03E8u);  if (depth < kMaxDepth) unit_0024(c, 3u, depth + 1u); else { c.pc = 0x001B0060u; return; } if (c.pc != 0x001B03E8u) [[unlikely]] return; }
L_001B03E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001B03EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B0400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30808u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B0498; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[28].w[0] - 30808u), c.r[4].w[0]);  if (t) { goto L_001B0428; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0428u); set32(c.r[4], c.r[4].w[0] + 4944u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B0428u) [[unlikely]] return; }
L_001B0428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0430u); set32(c.r[4], c.r[28].w[0] - 30792u);  if (depth < kMaxDepth) unit_0000(c, 265u, depth + 1u); else { c.pc = 0x00122060u; return; } if (c.pc != 0x001B0430u) [[unlikely]] return; }
L_001B0430:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[28].w[0] - 30791u));  goto L_001B044C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0444u); set32(c.r[4], c.r[4].w[0] + 4992u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B0444u) [[unlikely]] return; }
L_001B0444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0494; } }
L_001B044C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0454u);  if (depth < kMaxDepth) unit_0023(c, 307u, depth + 1u); else { c.pc = 0x001AFAE0u; return; } if (c.pc != 0x001B0454u) [[unlikely]] return; }
L_001B0454:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30790u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0460u); st8((c.r[28].w[0] - 30783u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0023(c, 307u, depth + 1u); else { c.pc = 0x001AFAE0u; return; } if (c.pc != 0x001B0460u) [[unlikely]] return; }
L_001B0460:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30789u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B046Cu); st8((c.r[28].w[0] - 30782u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0023(c, 307u, depth + 1u); else { c.pc = 0x001AFAE0u; return; } if (c.pc != 0x001B046Cu) [[unlikely]] return; }
L_001B046C:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30787u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0478u); st8((c.r[28].w[0] - 30781u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0023(c, 307u, depth + 1u); else { c.pc = 0x001AFAE0u; return; } if (c.pc != 0x001B0478u) [[unlikely]] return; }
L_001B0478:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30786u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0484u); st8((c.r[28].w[0] - 30779u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0023(c, 307u, depth + 1u); else { c.pc = 0x001AFAE0u; return; } if (c.pc != 0x001B0484u) [[unlikely]] return; }
L_001B0484:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30785u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0490u); st8((c.r[28].w[0] - 30778u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0023(c, 307u, depth + 1u); else { c.pc = 0x001AFAE0u; return; } if (c.pc != 0x001B0490u) [[unlikely]] return; }
L_001B0490:
    st8((c.r[28].w[0] - 30777u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001B0494:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B0498:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B04A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30808u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B04C8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B04C0u); set32(c.r[4], c.r[4].w[0] + 5008u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B04C0u) [[unlikely]] return; }
L_001B04C0:
    st32((c.r[28].w[0] - 30808u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_001B04C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B04D0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B04F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0014ECD0u; return; } if (c.pc != 0x001B04F4u) [[unlikely]] return; }
L_001B04F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st8((c.r[29].w[0] + 591u), static_cast<std::uint8_t>(0u));  goto L_001B0590; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0504u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 6u, depth + 1u); else { c.pc = 0x0035C0B0u; return; } if (c.pc != 0x001B0504u) [[unlikely]] return; }
L_001B0504:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0510u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 300u, depth + 1u); else { c.pc = 0x001AFA00u; return; } if (c.pc != 0x001B0510u) [[unlikely]] return; }
L_001B0510:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] >= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001B0530; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0528u); set32(c.r[4], c.r[4].w[0] + 5040u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B0528u) [[unlikely]] return; }
L_001B0528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0580; } }
L_001B0530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0538u);  if (depth < kMaxDepth) unit_0023(c, 304u, depth + 1u); else { c.pc = 0x001AFA80u; return; } if (c.pc != 0x001B0538u) [[unlikely]] return; }
L_001B0538:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_001B0554; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B054Cu); set32(c.r[4], c.r[4].w[0] + 5072u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B054Cu) [[unlikely]] return; }
L_001B054C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B0578; } }
L_001B0554:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0560u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 302u, depth + 1u); else { c.pc = 0x001AFA40u; return; } if (c.pc != 0x001B0560u) [[unlikely]] return; }
L_001B0560:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[16], 0u + 1u);  goto L_001B0574; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0574u); set32(c.r[4], c.r[4].w[0] + 5104u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B0574u) [[unlikely]] return; }
L_001B0574:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B0578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0580u);  if (depth < kMaxDepth) unit_0023(c, 301u, depth + 1u); else { c.pc = 0x001AFA20u; return; } if (c.pc != 0x001B0580u) [[unlikely]] return; }
L_001B0580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0588u);  if (depth < kMaxDepth) unit_008F(c, 7u, depth + 1u); else { c.pc = 0x0035C0C8u; return; } if (c.pc != 0x001B0588u) [[unlikely]] return; }
L_001B0588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B0664; } }
L_001B0590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0598u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_008F(c, 6u, depth + 1u); else { c.pc = 0x0035C0B0u; return; } if (c.pc != 0x001B0598u) [[unlikely]] return; }
L_001B0598:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 511u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B05B0u); set32(c.r[6], c.r[6].w[0] + 5136u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B05B0u) [[unlikely]] return; }
L_001B05B0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B05BCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 247u, depth + 1u); else { c.pc = 0x0012A2E8u; return; } if (c.pc != 0x001B05BCu) [[unlikely]] return; }
L_001B05BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001B05E0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B05D8u); set32(c.r[4], c.r[4].w[0] + 5152u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B05D8u) [[unlikely]] return; }
L_001B05D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001B0658; } }
L_001B05E0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B05ECu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 279u, depth + 1u); else { c.pc = 0x0012A6F0u; return; } if (c.pc != 0x001B05ECu) [[unlikely]] return; }
L_001B05EC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B060C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0604u); set32(c.r[4], c.r[4].w[0] + 5200u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B0604u) [[unlikely]] return; }
L_001B0604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001B064C; } }
L_001B060C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B061Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 279u, depth + 1u); else { c.pc = 0x0012A6F0u; return; } if (c.pc != 0x001B061Cu) [[unlikely]] return; }
L_001B061C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B062Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 295u, depth + 1u); else { c.pc = 0x0012A930u; return; } if (c.pc != 0x001B062Cu) [[unlikely]] return; }
L_001B062C:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001B0650; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0648u); set32(c.r[4], c.r[4].w[0] + 5264u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B0648u) [[unlikely]] return; }
L_001B0648:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B064C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B0650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0658u);  if (depth < kMaxDepth) unit_0002(c, 267u, depth + 1u); else { c.pc = 0x0012A578u; return; } if (c.pc != 0x001B0658u) [[unlikely]] return; }
L_001B0658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0660u);  if (depth < kMaxDepth) unit_008F(c, 7u, depth + 1u); else { c.pc = 0x0035C0C8u; return; } if (c.pc != 0x001B0660u) [[unlikely]] return; }
L_001B0660:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001B0664:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_001B0680:
    set32(c.r[29], c.r[29].w[0] - 576u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B069Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0014ECD0u; return; } if (c.pc != 0x001B069Cu) [[unlikely]] return; }
L_001B069C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st8((c.r[29].w[0] + 575u), static_cast<std::uint8_t>(0u));  goto L_001B06FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B06ACu); set32(c.r[16], 0u - 1u);  if (depth < kMaxDepth) unit_008F(c, 6u, depth + 1u); else { c.pc = 0x0035C0B0u; return; } if (c.pc != 0x001B06ACu) [[unlikely]] return; }
L_001B06AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B06B8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 300u, depth + 1u); else { c.pc = 0x001AFA00u; return; } if (c.pc != 0x001B06B8u) [[unlikely]] return; }
L_001B06B8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] >= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001B06D8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B06D0u); set32(c.r[4], c.r[4].w[0] + 5040u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B06D0u) [[unlikely]] return; }
L_001B06D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B06EC; } }
L_001B06D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B06E0u);  if (depth < kMaxDepth) unit_0023(c, 304u, depth + 1u); else { c.pc = 0x001AFA80u; return; } if (c.pc != 0x001B06E0u) [[unlikely]] return; }
L_001B06E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B06ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 301u, depth + 1u); else { c.pc = 0x001AFA20u; return; } if (c.pc != 0x001B06ECu) [[unlikely]] return; }
L_001B06EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B06F4u);  if (depth < kMaxDepth) unit_008F(c, 7u, depth + 1u); else { c.pc = 0x0035C0C8u; return; } if (c.pc != 0x001B06F4u) [[unlikely]] return; }
L_001B06F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B0770; } }
L_001B06FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0704u); set32(c.r[17], 0u - 1u);  if (depth < kMaxDepth) unit_008F(c, 6u, depth + 1u); else { c.pc = 0x0035C0B0u; return; } if (c.pc != 0x001B0704u) [[unlikely]] return; }
L_001B0704:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 511u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B071Cu); set32(c.r[6], c.r[6].w[0] + 5136u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B071Cu) [[unlikely]] return; }
L_001B071C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0728u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 247u, depth + 1u); else { c.pc = 0x0012A2E8u; return; } if (c.pc != 0x001B0728u) [[unlikely]] return; }
L_001B0728:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001B074C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0744u); set32(c.r[4], c.r[4].w[0] + 5312u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B0744u) [[unlikely]] return; }
L_001B0744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0764; } }
L_001B074C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0758u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 279u, depth + 1u); else { c.pc = 0x0012A6F0u; return; } if (c.pc != 0x001B0758u) [[unlikely]] return; }
L_001B0758:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0764u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 267u, depth + 1u); else { c.pc = 0x0012A578u; return; } if (c.pc != 0x001B0764u) [[unlikely]] return; }
L_001B0764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B076Cu);  if (depth < kMaxDepth) unit_008F(c, 7u, depth + 1u); else { c.pc = 0x0035C0C8u; return; } if (c.pc != 0x001B076Cu) [[unlikely]] return; }
L_001B076C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B0770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 576u);  c.pc = t; return; }
L_001B0790:
    set32(c.r[29], c.r[29].w[0] - 608u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B07BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0014ECD0u; return; } if (c.pc != 0x001B07BCu) [[unlikely]] return; }
L_001B07BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st8((c.r[29].w[0] + 607u), static_cast<std::uint8_t>(0u));  goto L_001B0830; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B07CCu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 6u, depth + 1u); else { c.pc = 0x0035C0B0u; return; } if (c.pc != 0x001B07CCu) [[unlikely]] return; }
L_001B07CC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B07D8u); set32(c.r[5], 0u + 1538u);  if (depth < kMaxDepth) unit_0023(c, 300u, depth + 1u); else { c.pc = 0x001AFA00u; return; } if (c.pc != 0x001B07D8u) [[unlikely]] return; }
L_001B07D8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] >= 0) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_001B07F8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B07F0u); set32(c.r[4], c.r[4].w[0] + 5040u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B07F0u) [[unlikely]] return; }
L_001B07F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0820; } }
L_001B07F8:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0804u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 303u, depth + 1u); else { c.pc = 0x001AFA60u; return; } if (c.pc != 0x001B0804u) [[unlikely]] return; }
L_001B0804:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[16], 0u + 1u);  goto L_001B0818; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0818u); set32(c.r[4], c.r[4].w[0] + 5104u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B0818u) [[unlikely]] return; }
L_001B0818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0820u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 301u, depth + 1u); else { c.pc = 0x001AFA20u; return; } if (c.pc != 0x001B0820u) [[unlikely]] return; }
L_001B0820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0828u);  if (depth < kMaxDepth) unit_008F(c, 7u, depth + 1u); else { c.pc = 0x0035C0C8u; return; } if (c.pc != 0x001B0828u) [[unlikely]] return; }
L_001B0828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B08E4; } }
L_001B0830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0838u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_008F(c, 6u, depth + 1u); else { c.pc = 0x0035C0B0u; return; } if (c.pc != 0x001B0838u) [[unlikely]] return; }
L_001B0838:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 511u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0850u); set32(c.r[6], c.r[6].w[0] + 5136u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B0850u) [[unlikely]] return; }
L_001B0850:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B085Cu); set32(c.r[5], 0u + 1538u);  if (depth < kMaxDepth) unit_0002(c, 247u, depth + 1u); else { c.pc = 0x0012A2E8u; return; } if (c.pc != 0x001B085Cu) [[unlikely]] return; }
L_001B085C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_001B0880; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0878u); set32(c.r[4], c.r[4].w[0] + 5360u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B0878u) [[unlikely]] return; }
L_001B0878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001B08D8; } }
L_001B0880:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_001B08A0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0898u); set32(c.r[4], c.r[4].w[0] + 5200u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B0898u) [[unlikely]] return; }
L_001B0898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001B08CC; } }
L_001B08A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B08ACu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 313u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x001B08ACu) [[unlikely]] return; }
L_001B08AC:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001B08D0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B08C8u); set32(c.r[4], c.r[4].w[0] + 5408u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B08C8u) [[unlikely]] return; }
L_001B08C8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B08CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B08D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B08D8u);  if (depth < kMaxDepth) unit_0002(c, 267u, depth + 1u); else { c.pc = 0x0012A578u; return; } if (c.pc != 0x001B08D8u) [[unlikely]] return; }
L_001B08D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B08E0u);  if (depth < kMaxDepth) unit_008F(c, 7u, depth + 1u); else { c.pc = 0x0035C0C8u; return; } if (c.pc != 0x001B08E0u) [[unlikely]] return; }
L_001B08E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B08E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 608u);  c.pc = t; return; }
L_001B0910:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], 0u + 2u);  goto L_001B0980; }
L_001B0920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 5456u);
    st32((c.r[28].w[0] - 31904u), c.r[2].w[0]);
    set32(c.r[4], 0u + 49u);
    set32(c.r[2], 0u + 5u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0944u); st32((c.r[28].w[0] - 31900u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 153u, depth + 1u); else { c.pc = 0x001713B0u; return; } if (c.pc != 0x001B0944u) [[unlikely]] return; }
L_001B0944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B094Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0014(c, 152u, depth + 1u); else { c.pc = 0x001713A0u; return; } if (c.pc != 0x001B094Cu) [[unlikely]] return; }
L_001B094C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0958u); set32(c.r[4], c.r[4].w[0] + 2320u);  if (depth < kMaxDepth) unit_0014(c, 154u, depth + 1u); else { c.pc = 0x001713C0u; return; } if (c.pc != 0x001B0958u) [[unlikely]] return; }
L_001B0958:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B0970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30776u), c.r[4].w[0]);  c.pc = t; return; }
L_001B0980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 31904u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001B09D4; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_001B09D4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 31900u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B09D4; } }
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B09D4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B09D4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30776u)));  goto L_001B09F0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B09ECu); set32(c.r[4], c.r[4].w[0] + 5496u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x001B09ECu) [[unlikely]] return; }
L_001B09EC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30776u)));
    c.budget -= 1;
L_001B09F0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001B0A08; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0A04u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B0A04u) [[unlikely]] return; }
L_001B0A04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001B0A08:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B0A20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[11].d[0]);
    set32(c.r[5], c.r[31].w[0] - 8u);
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_001B0A60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001B0A68; } }
L_001B0A60:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 2;
L_001B0A68:
    c.r[6].d[0] = c.r[4].d[0] << 32;
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0A80u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 122u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B0A80u) [[unlikely]] return; }
L_001B0A80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B0A90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[11].d[0]);
    set32(c.r[5], c.r[31].w[0] - 8u);
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_001B0AD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001B0AD8; } }
L_001B0AD0:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 2;
L_001B0AD8:
    c.r[6].d[0] = c.r[4].d[0] << 32;
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0AF0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 122u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B0AF0u) [[unlikely]] return; }
L_001B0AF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B0B00:
    set32(c.r[29], c.r[29].w[0] - 576u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 31904u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_001B0B60; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_001B0B60; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 31900u)));
    c.r[1].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B0B60; } }
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B0B60; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B0B60:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], c.r[2].w[0] + c.r[29].w[0]);  goto L_001B0B90; }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 511u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0B80u); set32(c.r[6], c.r[6].w[0] + 5504u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B0B80u) [[unlikely]] return; }
L_001B0B80:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0B8Cu); st8((c.r[29].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001B0B8Cu) [[unlikely]] return; }
L_001B0B8C:
    set32(c.r[4], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 1;
L_001B0B90:
    set32(c.r[3], 0u + 510u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0BA8u); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000A(c, 326u, depth + 1u); else { c.pc = 0x0014BE60u; return; } if (c.pc != 0x001B0BA8u) [[unlikely]] return; }
L_001B0BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0BB0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001B0BB0u) [[unlikely]] return; }
L_001B0BB0:
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0BCCu); st8((c.r[2].w[0] + 65u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0024(c, 115u, depth + 1u); else { c.pc = 0x001B0980u; return; } if (c.pc != 0x001B0BCCu) [[unlikely]] return; }
L_001B0BCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 576u);  c.pc = t; return; }
L_001B0BF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30772u), c.r[4].w[0]);  c.pc = t; return; }
L_001B0C00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30772u)));  c.pc = t; return; }
L_001B0C10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31896u), c.r[4].w[0]);  c.pc = t; return; }
L_001B0C20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 31896u)));  c.pc = t; return; }
L_001B0C30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 5512u);  c.pc = t; return; }
L_001B0C40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 5528u);  c.pc = t; return; }
L_001B0C50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0C6Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0025(c, 329u, depth + 1u); else { c.pc = 0x001B60E0u; return; } if (c.pc != 0x001B0C6Cu) [[unlikely]] return; }
L_001B0C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0C74u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 609u, depth + 1u); else { c.pc = 0x001B3F70u; return; } if (c.pc != 0x001B0C74u) [[unlikely]] return; }
L_001B0C74:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[16], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_001B0C88; } }
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001B0C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0C90u); set32(c.r[4], 0u - 1u);  if (depth < kMaxDepth) unit_0024(c, 608u, depth + 1u); else { c.pc = 0x001B3F60u; return; } if (c.pc != 0x001B0C90u) [[unlikely]] return; }
L_001B0C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001B0CA4; } }
L_001B0C98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_001B0CB8; } }
    set32(c.r[16], c.r[16].w[0] + 28u);
    c.budget -= 1;
L_001B0CA4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0C98u | kUnwind; return; } goto L_001B0C98; } }
L_001B0CB8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[17].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001B0CD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0CC8u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0024(c, 141u, depth + 1u); else { c.pc = 0x001B0D00u; return; } if (c.pc != 0x001B0CC8u) [[unlikely]] return; }
L_001B0CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B0CDC; } }
L_001B0CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0CD8u); set32(c.r[4], c.r[4].w[0] + 5536u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B0CD8u) [[unlikely]] return; }
L_001B0CD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B0CDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B0D00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[22], ld32((c.r[4].w[0])));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[7].w[0] + 27072u), c.r[22].w[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[7].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[6].w[0] + 27076u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = c.r[30].w[0];
    st16((c.r[5].w[0] + 27078u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 27080u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[21].w[0] + 27084u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[20].w[0] + 27088u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    st32((c.r[19].w[0] + 27092u), c.f[0]);
    set32(c.r[19], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[18].w[0] + 27096u), c.r[19].w[0]);
    set32(c.r[18], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[17].w[0] + 27100u), c.r[18].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[16].w[0] + 27104u), c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[25].w[0] + 27108u), c.r[16].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[24].w[0] + 27112u), c.r[16].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[15].w[0] + 27116u), c.r[16].w[0]);
    set32(c.r[15], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[14].w[0] + 27120u), c.r[15].w[0]);
    set32(c.r[14], ld32((c.r[4].w[0] + 52u)));
    st32((c.r[13].w[0] + 27124u), c.r[14].w[0]);
    set32(c.r[13], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[12].w[0] + 27128u), c.r[13].w[0]);
    set32(c.r[12], ld32((c.r[4].w[0] + 60u)));
    st32((c.r[11].w[0] + 27132u), c.r[12].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    st32((c.r[10].w[0] + 27136u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    st32((c.r[9].w[0] + 27140u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    st32((c.r[8].w[0] + 27144u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    st32((c.r[7].w[0] + 27148u), c.f[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[6].w[0] + 27152u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[5].w[0] + 27156u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[3].w[0] + 27160u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 88;
    { const bool t = c.r[22].sd[0] < 0; st32((c.r[23].w[0] + 27164u), c.r[3].w[0]);  if (t) { goto L_001B0E6C; } }
    c.f[0] = c.r[22].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B0E88; } }
L_001B0E6C:
    set32(c.r[4], c.r[22].w[0] >> 1);
    c.r[3].d[0] = c.r[22].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_001B0E88:
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 27140u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 27144u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 27148u), 0u);
    st32((c.r[4].w[0] + 27136u), c.f[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001B0EF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0F0Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001B0F0Cu) [[unlikely]] return; }
L_001B0F0C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0F18u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x001B0F18u) [[unlikely]] return; }
L_001B0F18:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[4], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 27160u), c.r[16].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0F38u); st32((c.r[2].w[0] + 27164u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001B0F38u) [[unlikely]] return; }
L_001B0F38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0F48u); st32((c.r[3].w[0] + 27152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001B0F48u) [[unlikely]] return; }
L_001B0F48:
    set32(c.r[4], c.r[16].w[0] - c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 27156u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B0F70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 27156u)));  c.pc = t; return; }
L_001B0F80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 6u));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001B0FC4; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[28].w[0] - 32060u));  goto L_001B0FC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001B0FD0; } }
L_001B0FC4:
    c.f[0] = ld32((c.r[28].w[0] - 32060u));
    c.budget -= 1;
L_001B0FC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.f[0]);  if (t) { goto L_001B0FD4; } }
L_001B0FD0:
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_001B0FD4:
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 40u)));
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    st32((c.r[4].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    st32((c.r[4].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1020u); st32((c.r[4].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 296u, depth + 1u); else { c.pc = 0x00162E30u; return; } if (c.pc != 0x001B1020u) [[unlikely]] return; }
L_001B1020:
    c.r[3].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B1038; }
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_001B1038:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B1040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(24ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001B1064; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B105Cu); set32(c.r[4], c.r[4].w[0] + 5584u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B105Cu) [[unlikely]] return; }
L_001B105C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B1078; } }
L_001B1064:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 27172u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
L_001B1078:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B1090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(24ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001B10B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B10ACu); set32(c.r[4], c.r[4].w[0] + 5584u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B10ACu) [[unlikely]] return; }
L_001B10AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B10C8; } }
L_001B10B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 27168u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
L_001B10C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B10E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 27204u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 27168u);
    c.budget -= 8;
L_001B1100:
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(18ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1100u | kUnwind; return; } goto L_001B1100; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 27204u), c.r[4].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 27168u);  if (t) { goto L_001B116C; } }
L_001B1144:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);  goto L_001B1168; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1160u); set32(c.r[4], c.r[4].w[0] + 5584u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B1160u) [[unlikely]] return; }
L_001B1160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001B1208; } }
L_001B1168:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001B116C:
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(24ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1144u | kUnwind; return; } goto L_001B1144; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001B1190; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1190u); set32(c.r[4], c.r[4].w[0] + 5632u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B1190u) [[unlikely]] return; }
L_001B1190:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 27168u);
    c.budget -= 4;
L_001B11A0:
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(18ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B11A0u | kUnwind; return; } goto L_001B11A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001B11D4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B11D4u); set32(c.r[4], c.r[4].w[0] + 5680u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B11D4u) [[unlikely]] return; }
L_001B11D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 27168u);
    c.budget -= 4;
L_001B11E4:
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(24ll) ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B11E4u | kUnwind; return; } goto L_001B11E4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B1208:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B1210:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 27172u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = c.r[3].d[0] | 64256ull;
    st32((c.r[2].w[0] + 27180u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] | 24576ull;
    st32((c.r[3].w[0] + 27188u), c.r[4].w[0]);
    set32(c.r[2], 0u + 256u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 27196u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01340000u);
    c.r[4].d[0] = c.r[3].d[0] | 53248ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 27204u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00030000u);
    st32((c.r[3].w[0] + 27212u), c.r[5].w[0]);
    c.r[7].d[0] = c.r[4].d[0] | 38912ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].d[0] = c.r[4].d[0] | 512ull;
    st32((c.r[3].w[0] + 27220u), c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 27228u), c.r[7].w[0]);
    c.r[7].d[0] = c.r[4].d[0] | 54784ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 27244u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 27236u), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 12288u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000C0000u);
    st32((c.r[3].w[0] + 27252u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 27260u), c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00250000u);
    st32((c.r[3].w[0] + 27268u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[4].d[0] | 61440ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 27276u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 27284u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 27292u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 27300u), c.r[5].w[0]);
    set32(c.r[3], 0u + 16384u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st32((c.r[2].w[0] + 27308u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 27316u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 27324u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 27332u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 27340u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 27348u), c.r[5].w[0]);
    c.budget -= 71;
    { st32((c.r[2].w[0] + 27356u), c.r[5].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B10E0u | kUnwind; return; } goto L_001B10E0; }
L_001B1330:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_001B1348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1350u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001B1350u) [[unlikely]] return; }
L_001B1350:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B135Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001B135Cu) [[unlikely]] return; }
L_001B135C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1368u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x001B1368u) [[unlikely]] return; }
L_001B1368:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1378u); set32(c.r[17], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x001B1378u) [[unlikely]] return; }
L_001B1378:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 3280u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 6496u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B13A4u); c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B13A4u) [[unlikely]] return; }
L_001B13A4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(24ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1348u | kUnwind; return; } goto L_001B1348; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B13D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B13E8u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 329u, depth + 1u); else { c.pc = 0x001B60E0u; return; } if (c.pc != 0x001B13E8u) [[unlikely]] return; }
L_001B13E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  goto L_001B1408; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1400u);  if (depth < kMaxDepth) unit_0024(c, 177u, depth + 1u); else { c.pc = 0x001B1480u; return; } if (c.pc != 0x001B1400u) [[unlikely]] return; }
L_001B1400:
    st32((c.r[28].w[0] - 30768u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 2;
L_001B1408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001B1410; } }
L_001B1410:
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1410u | kUnwind; return; } goto L_001B1410; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1434u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B1434u) [[unlikely]] return; }
L_001B1434:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 30768u), c.r[2].w[0]);  goto L_001B1450; }
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B144Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 240u, depth + 1u); else { c.pc = 0x001B1C50u; return; } if (c.pc != 0x001B144Cu) [[unlikely]] return; }
L_001B144C:
    st32((c.r[28].w[0] - 30768u), c.r[2].w[0]);
    c.budget -= 1;
L_001B1450:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B1464; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1460u);  if (depth < kMaxDepth) unit_0024(c, 204u, depth + 1u); else { c.pc = 0x001B1700u; return; } if (c.pc != 0x001B1460u) [[unlikely]] return; }
L_001B1460:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B1464:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B1480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B14A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B149Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 248u, depth + 1u); else { c.pc = 0x001B1D60u; return; } if (c.pc != 0x001B149Cu) [[unlikely]] return; }
L_001B149C:
    st32((c.r[28].w[0] - 30768u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_001B14A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B14B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B14D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B14D0u);  if (depth < kMaxDepth) unit_0024(c, 257u, depth + 1u); else { c.pc = 0x001B1E50u; return; } if (c.pc != 0x001B14D0u) [[unlikely]] return; }
L_001B14D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B14E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B1500; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1500u);  if (depth < kMaxDepth) unit_0024(c, 259u, depth + 1u); else { c.pc = 0x001B1EB0u; return; } if (c.pc != 0x001B1500u) [[unlikely]] return; }
L_001B1500:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B1510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B1538; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B152Cu);  if (depth < kMaxDepth) unit_0024(c, 274u, depth + 1u); else { c.pc = 0x001B20D0u; return; } if (c.pc != 0x001B152Cu) [[unlikely]] return; }
L_001B152C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1538u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 259u, depth + 1u); else { c.pc = 0x001B1EB0u; return; } if (c.pc != 0x001B1538u) [[unlikely]] return; }
L_001B1538:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B1550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B156C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B156Cu);  if (depth < kMaxDepth) unit_0024(c, 260u, depth + 1u); else { c.pc = 0x001B1F00u; return; } if (c.pc != 0x001B156Cu) [[unlikely]] return; }
L_001B156C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B1580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B159C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B159Cu);  if (depth < kMaxDepth) unit_0024(c, 261u, depth + 1u); else { c.pc = 0x001B1F20u; return; } if (c.pc != 0x001B159Cu) [[unlikely]] return; }
L_001B159C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B15B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B15CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B15CCu);  if (depth < kMaxDepth) unit_0024(c, 263u, depth + 1u); else { c.pc = 0x001B1F80u; return; } if (c.pc != 0x001B15CCu) [[unlikely]] return; }
L_001B15CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B15E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B1608; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1604u);  if (depth < kMaxDepth) unit_0024(c, 266u, depth + 1u); else { c.pc = 0x001B1FD0u; return; } if (c.pc != 0x001B1604u) [[unlikely]] return; }
L_001B1604:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B1608:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B1610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B1630; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1630u);  if (depth < kMaxDepth) unit_0024(c, 267u, depth + 1u); else { c.pc = 0x001B1FF0u; return; } if (c.pc != 0x001B1630u) [[unlikely]] return; }
L_001B1630:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B1640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B1668; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1664u);  if (depth < kMaxDepth) unit_0024(c, 268u, depth + 1u); else { c.pc = 0x001B2010u; return; } if (c.pc != 0x001B1664u) [[unlikely]] return; }
L_001B1664:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B1668:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B1670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B1690; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1690u);  if (depth < kMaxDepth) unit_0024(c, 269u, depth + 1u); else { c.pc = 0x001B2030u; return; } if (c.pc != 0x001B1690u) [[unlikely]] return; }
L_001B1690:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B16A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_001B16BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B16BCu);  if (depth < kMaxDepth) unit_0024(c, 258u, depth + 1u); else { c.pc = 0x001B1EA0u; return; } if (c.pc != 0x001B16BCu) [[unlikely]] return; }
L_001B16BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B16D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B16F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B16ECu);  if (depth < kMaxDepth) unit_0024(c, 270u, depth + 1u); else { c.pc = 0x001B2050u; return; } if (c.pc != 0x001B16ECu) [[unlikely]] return; }
L_001B16EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B16F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B1700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B1720; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B171Cu);  if (depth < kMaxDepth) unit_0024(c, 272u, depth + 1u); else { c.pc = 0x001B2090u; return; } if (c.pc != 0x001B171Cu) [[unlikely]] return; }
L_001B171C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B1720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B1730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B174C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B174Cu);  if (depth < kMaxDepth) unit_0024(c, 274u, depth + 1u); else { c.pc = 0x001B20D0u; return; } if (c.pc != 0x001B174Cu) [[unlikely]] return; }
L_001B174C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B1760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B177C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B177Cu);  if (depth < kMaxDepth) unit_0024(c, 275u, depth + 1u); else { c.pc = 0x001B20E0u; return; } if (c.pc != 0x001B177Cu) [[unlikely]] return; }
L_001B177C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B1790:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[20].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001B1B68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 3184u));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[3].w[0] - 3180u));
    set32(c.r[4], 0u + 576u);
    set32(c.r[17], c.r[17].w[0] + 27072u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] - 3176u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 3172u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] - 3168u));
    st32((c.r[29].w[0] + 140u), c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 3164u));
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] - 3160u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 3156u));
    st32((c.r[29].w[0] + 120u), c.f[1]);
    st32((c.r[29].w[0] + 124u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0]), 0u);
    st32((c.r[20].w[0] + 4u), 0u);
    st32((c.r[20].w[0] + 8u), 0u);
    st32((c.r[20].w[0] + 12u), 0u);
    st32((c.r[20].w[0] + 16u), c.r[7].w[0]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1848u); st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B1848u) [[unlikely]] return; }
L_001B1848:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0]), c.r[2].w[0]);  goto L_001B1860; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B185Cu); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x001610E0u; return; } if (c.pc != 0x001B185Cu) [[unlikely]] return; }
L_001B185C:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001B1860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1868u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B1868u) [[unlikely]] return; }
L_001B1868:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  goto L_001B187C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1878u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0015C180u; return; } if (c.pc != 0x001B1878u) [[unlikely]] return; }
L_001B1878:
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_001B187C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1884u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B1884u) [[unlikely]] return; }
L_001B1884:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 8u), c.r[2].w[0]);  goto L_001B18A4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B18A0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 302u, depth + 1u); else { c.pc = 0x00156EF0u; return; } if (c.pc != 0x001B18A0u) [[unlikely]] return; }
L_001B18A0:
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001B18A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B18ACu); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B18ACu) [[unlikely]] return; }
L_001B18AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 12u), c.r[2].w[0]);  goto L_001B18C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B18BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 402u, depth + 1u); else { c.pc = 0x0015B500u; return; } if (c.pc != 0x001B18BCu) [[unlikely]] return; }
L_001B18BC:
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001B18C0:
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001B1B6C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B1B68; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B1B68; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B1B68; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001B1918; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1900u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001B1900u) [[unlikely]] return; }
L_001B1900:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1910u); set32(c.r[6], 0u + 2048u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x001B1910u) [[unlikely]] return; }
L_001B1910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[20].w[0])));  if (t) { goto L_001B1934; } }
L_001B1918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1920u);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001B1920u) [[unlikely]] return; }
L_001B1920:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 2049u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1930u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x001B1930u) [[unlikely]] return; }
L_001B1930:
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_001B1934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B193Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001B193Cu) [[unlikely]] return; }
L_001B193C:
    set32(c.r[5], ld32((c.r[16].w[0] + 352u)));
    c.r[4].d[0] = c.r[18].d[0] & 7ull;
    set32(c.r[2], 0u + 6u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 85u));
    c.r[3].d[0] = c.r[3].d[0] & 248ull;
    st8((c.r[5].w[0] + 85u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 85u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[5].w[0] + 85u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 12;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld16((c.r[17].w[0] + 4u));  goto L_001B1990; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B198C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B198C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[17].w[0] + 4u));  if (t) { goto L_001B1A28; } }
L_001B198C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 4u));
    c.budget -= 1;
L_001B1990:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001B19A4; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B19BC; } }
L_001B19A4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_001B19BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001B19EC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B1A08; } }
L_001B19EC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.f[13] = fp::ee::add(c.fcr31, c.f[13], c.f[13]);
    c.budget -= 7;
L_001B1A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1A10u); set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  if (depth < kMaxDepth) unit_000F(c, 46u, depth + 1u); else { c.pc = 0x0015C520u; return; } if (c.pc != 0x001B1A10u) [[unlikely]] return; }
L_001B1A10:
    c.f[12] = ld32((c.r[17].w[0] + 72u));
    c.f[13] = ld32((c.r[17].w[0] + 76u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1A20u); set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  if (depth < kMaxDepth) unit_000F(c, 48u, depth + 1u); else { c.pc = 0x0015C550u; return; } if (c.pc != 0x001B1A20u) [[unlikely]] return; }
L_001B1A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_001B1AD8; } }
L_001B1A28:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001B1A3C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B1A54; } }
L_001B1A3C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_001B1A54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001B1A84; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B1AA0; } }
L_001B1A84:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_001B1AA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1AC4u);  if (depth < kMaxDepth) unit_000F(c, 46u, depth + 1u); else { c.pc = 0x0015C520u; return; } if (c.pc != 0x001B1AC4u) [[unlikely]] return; }
L_001B1AC4:
    c.f[12] = ld32((c.r[17].w[0] + 72u));
    c.f[13] = ld32((c.r[17].w[0] + 76u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1AD4u); set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  if (depth < kMaxDepth) unit_000F(c, 48u, depth + 1u); else { c.pc = 0x0015C550u; return; } if (c.pc != 0x001B1AD4u) [[unlikely]] return; }
L_001B1AD4:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_001B1AD8:
    c.f[13] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1AE4u); c.f[12] = ld32((c.r[17].w[0] + 8u));  if (depth < kMaxDepth) unit_000F(c, 50u, depth + 1u); else { c.pc = 0x0015C580u; return; } if (c.pc != 0x001B1AE4u) [[unlikely]] return; }
L_001B1AE4:
    c.f[12] = ld32((c.r[17].w[0] + 16u));
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1AF4u); set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  if (depth < kMaxDepth) unit_000F(c, 52u, depth + 1u); else { c.pc = 0x0015C5B0u; return; } if (c.pc != 0x001B1AF4u) [[unlikely]] return; }
L_001B1AF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B14u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 432u, depth + 1u); else { c.pc = 0x0015B980u; return; } if (c.pc != 0x001B1B14u) [[unlikely]] return; }
L_001B1B14:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0])));
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0])));
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0])));
    set32(c.r[17], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 171u, depth + 1u); else { c.pc = 0x00161880u; return; } if (c.pc != 0x001B1B3Cu) [[unlikely]] return; }
L_001B1B3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B48u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 473u, depth + 1u); else { c.pc = 0x0015BFD0u; return; } if (c.pc != 0x001B1B48u) [[unlikely]] return; }
L_001B1B48:
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001B1B54u) [[unlikely]] return; }
L_001B1B54:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 64u), c.r[4].w[0]);  if (t) { goto L_001B1B78; } }
L_001B1B68:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001B1B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B74u);  if (depth < kMaxDepth) unit_0024(c, 235u, depth + 1u); else { c.pc = 0x001B1BA0u; return; } if (c.pc != 0x001B1B74u) [[unlikely]] return; }
L_001B1B74:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B1B78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001B1BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001B1C44; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_001B1BE4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_001B1BE0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1BDCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B1BDCu) [[unlikely]] return; }
L_001B1BDC:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_001B1BE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001B1BE4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_001B1C04; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1BFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B1BFCu) [[unlikely]] return; }
L_001B1BFC:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 2;
L_001B1C04:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  goto L_001B1C24; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1C1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B1C1Cu) [[unlikely]] return; }
L_001B1C1C:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 2;
L_001B1C24:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B1C40; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1C3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B1C3Cu) [[unlikely]] return; }
L_001B1C3C:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_001B1C40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001B1C44:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B1C50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0]), 0u);
    set32(c.r[2], c.r[17].w[0] << 1);
    st32((c.r[4].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1CA4u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x001B1CA4u) [[unlikely]] return; }
L_001B1CA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001B1D24; } }
    set32(c.r[4], 0u + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1CB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x001B1CB8u) [[unlikely]] return; }
L_001B1CB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_001B1D24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001B1CFC; } }
L_001B1CC8:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1CF0u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0024(c, 210u, depth + 1u); else { c.pc = 0x001B1790u; return; } if (c.pc != 0x001B1CF0u) [[unlikely]] return; }
L_001B1CF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001B1D28; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001B1CFC:
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1CC8u | kUnwind; return; } goto L_001B1CC8; }
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 6528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D1Cu); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B1D1Cu) [[unlikely]] return; }
L_001B1D1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001B1D40; } }
L_001B1D24:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001B1D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D30u);  if (depth < kMaxDepth) unit_0024(c, 252u, depth + 1u); else { c.pc = 0x001B1DC0u; return; } if (c.pc != 0x001B1D30u) [[unlikely]] return; }
L_001B1D30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D3Cu); set32(c.r[4], c.r[4].w[0] + 6576u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B1D3Cu) [[unlikely]] return; }
L_001B1D3C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001B1D40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B1D60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B1DA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D84u);  if (depth < kMaxDepth) unit_0024(c, 252u, depth + 1u); else { c.pc = 0x001B1DC0u; return; } if (c.pc != 0x001B1D84u) [[unlikely]] return; }
L_001B1D84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D90u); set32(c.r[4], c.r[4].w[0] + 6624u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B1D90u) [[unlikely]] return; }
L_001B1D90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001B1DAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1DA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001B1DA8u) [[unlikely]] return; }
L_001B1DA8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B1DAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B1DC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B1E1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001B1DFC; } }
L_001B1DE4:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1DF8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0024(c, 235u, depth + 1u); else { c.pc = 0x001B1BA0u; return; } if (c.pc != 0x001B1DF8u) [[unlikely]] return; }
L_001B1DF8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001B1DFC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1DE4u | kUnwind; return; } goto L_001B1DE4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x001B1E18u) [[unlikely]] return; }
L_001B1E18:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_001B1E1C:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001B1E38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x001B1E30u) [[unlikely]] return; }
L_001B1E30:
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_001B1E38:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B1E50:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B1E98; }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B1E94; } }
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[6], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[28].w[0] - 31436u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.r[5].w[0]);  if (t) { goto L_001B1E98; } }
L_001B1E94:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B1E98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B1EA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  c.pc = t; return; }
L_001B1EB0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B1EEC; }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B1EE8; } }
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_001B1EEC; } }
L_001B1EE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B1EEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B1F00:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B1F10; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_001B1F10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B1F20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[3].w[0] << 2);  goto L_001B1F4C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F44u); set32(c.r[4], c.r[4].w[0] + 6672u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B1F44u) [[unlikely]] return; }
L_001B1F44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B1F6C; } }
L_001B1F4C:
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 8;
L_001B1F6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B1F80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_001B1FA8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1FA0u); set32(c.r[4], c.r[4].w[0] + 6720u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B1FA0u) [[unlikely]] return; }
L_001B1FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B1FC4; } }
L_001B1FA8:
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1FC0u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0024(c, 257u, depth + 1u); else { c.pc = 0x001B1E50u; return; } if (c.pc != 0x001B1FC0u) [[unlikely]] return; }
L_001B1FC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B1FC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B1FD0:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 16u), c.r[6].w[0]);  c.pc = t; return; }
L_001B1FF0:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  c.pc = t; return; }
L_001B2010:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 20u), c.r[6].w[0]);  c.pc = t; return; }
L_001B2030:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 20u)));  c.pc = t; return; }
L_001B2050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B207C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B2078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2078u); set32(c.r[5], c.r[3].w[0] - 1u);  if (depth < kMaxDepth) unit_0024(c, 257u, depth + 1u); else { c.pc = 0x001B1E50u; return; } if (c.pc != 0x001B2078u) [[unlikely]] return; }
L_001B2078:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B207C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B2090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B20BC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B20B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B20B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 257u, depth + 1u); else { c.pc = 0x001B1E50u; return; } if (c.pc != 0x001B20B8u) [[unlikely]] return; }
L_001B20B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B20BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B20D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 1u);  c.pc = t; return; }
L_001B20E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  c.pc = t; return; }
L_001B20F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[28].w[0] - 30756u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[28].w[0] - 30752u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    st32((c.r[28].w[0] - 30764u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2120u); st32((c.r[28].w[0] - 30760u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0008(c, 10u, depth + 1u); else { c.pc = 0x00140160u; return; } if (c.pc != 0x001B2120u) [[unlikely]] return; }
L_001B2120:
    set32(c.r[6], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[4], 0u + 6u);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 76u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4304u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2160u); set32(c.r[17], c.r[2].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x001B2160u) [[unlikely]] return; }
L_001B2160:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 6768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2174u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B2174u) [[unlikely]] return; }
L_001B2174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B217Cu); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x001B217Cu) [[unlikely]] return; }
L_001B217C:
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B2194; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2194u); set32(c.r[4], c.r[4].w[0] + 6816u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x001B2194u) [[unlikely]] return; }
L_001B2194:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] + 6864u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B21C0u); st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001B21C0u) [[unlikely]] return; }
L_001B21C0:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B21F0u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 60u, depth + 1u); else { c.pc = 0x0035CA68u; return; } if (c.pc != 0x001B21F0u) [[unlikely]] return; }
L_001B21F0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B21FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 341u, depth + 1u); else { c.pc = 0x0017FC80u; return; } if (c.pc != 0x001B21FCu) [[unlikely]] return; }
L_001B21FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2204u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008F(c, 52u, depth + 1u); else { c.pc = 0x0035C8C0u; return; } if (c.pc != 0x001B2204u) [[unlikely]] return; }
L_001B2204:
    c.f[12] = ld32((c.r[28].w[0] - 32056u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2210u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0021(c, 285u, depth + 1u); else { c.pc = 0x001A7430u; return; } if (c.pc != 0x001B2210u) [[unlikely]] return; }
L_001B2210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2218u);  if (depth < kMaxDepth) unit_0025(c, 522u, depth + 1u); else { c.pc = 0x001B7E80u; return; } if (c.pc != 0x001B2218u) [[unlikely]] return; }
L_001B2218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2220u);  if (depth < kMaxDepth) unit_0024(c, 298u, depth + 1u); else { c.pc = 0x001B22B0u; return; } if (c.pc != 0x001B2220u) [[unlikely]] return; }
L_001B2220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2228u);  if (depth < kMaxDepth) unit_0015(c, 239u, depth + 1u); else { c.pc = 0x00176290u; return; } if (c.pc != 0x001B2228u) [[unlikely]] return; }
L_001B2228:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B2244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B223Cu);  if (depth < kMaxDepth) unit_0024(c, 464u, depth + 1u); else { c.pc = 0x001B3240u; return; } if (c.pc != 0x001B223Cu) [[unlikely]] return; }
L_001B223C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2244u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0015(c, 258u, depth + 1u); else { c.pc = 0x00176460u; return; } if (c.pc != 0x001B2244u) [[unlikely]] return; }
L_001B2244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B224Cu);  if (depth < kMaxDepth) unit_000B(c, 121u, depth + 1u); else { c.pc = 0x0014EDD0u; return; } if (c.pc != 0x001B224Cu) [[unlikely]] return; }
L_001B224C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2254u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0015(c, 261u, depth + 1u); else { c.pc = 0x001764A0u; return; } if (c.pc != 0x001B2254u) [[unlikely]] return; }
L_001B2254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B225Cu); set32(c.r[4], ld32((c.r[28].w[0] - 30752u)));  if (depth < kMaxDepth) unit_0018(c, 44u, depth + 1u); else { c.pc = 0x00180470u; return; } if (c.pc != 0x001B225Cu) [[unlikely]] return; }
L_001B225C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 30764u)));  if (t) { goto L_001B2270; } }
L_001B2264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B226Cu);  if (depth < kMaxDepth) unit_0024(c, 308u, depth + 1u); else { c.pc = 0x001B2340u; return; } if (c.pc != 0x001B226Cu) [[unlikely]] return; }
L_001B226C:
    set32(c.r[5], ld32((c.r[28].w[0] - 30764u)));
    c.budget -= 1;
L_001B2270:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 30760u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 30756u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 30752u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2288u); set32(c.r[4], c.r[4].w[0] + 6872u);  if (depth < kMaxDepth) unit_0024(c, 316u, depth + 1u); else { c.pc = 0x001B23E0u; return; } if (c.pc != 0x001B2288u) [[unlikely]] return; }
L_001B2288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2264u | kUnwind; return; } goto L_001B2264; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B22B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] + 1088u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001670A0u | kUnwind; return; } [[clang::musttail]] return unit_0011(c, 349u, depth); }
L_001B22C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B22D0u);  if (depth < kMaxDepth) unit_0021(c, 289u, depth + 1u); else { c.pc = 0x001A74F0u; return; } if (c.pc != 0x001B22D0u) [[unlikely]] return; }
L_001B22D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B22D8u);  if (depth < kMaxDepth) unit_000D(c, 24u, depth + 1u); else { c.pc = 0x001542F0u; return; } if (c.pc != 0x001B22D8u) [[unlikely]] return; }
L_001B22D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B22E0u);  if (depth < kMaxDepth) unit_0015(c, 243u, depth + 1u); else { c.pc = 0x001762F0u; return; } if (c.pc != 0x001B22E0u) [[unlikely]] return; }
L_001B22E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B22E8u);  if (depth < kMaxDepth) unit_0017(c, 360u, depth + 1u); else { c.pc = 0x0017FEF0u; return; } if (c.pc != 0x001B22E8u) [[unlikely]] return; }
L_001B22E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B2300:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00176340u | kUnwind; return; } [[clang::musttail]] return unit_0015(c, 246u, depth); }
L_001B2310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2320u);  if (depth < kMaxDepth) unit_0017(c, 368u, depth + 1u); else { c.pc = 0x0017FF90u; return; } if (c.pc != 0x001B2320u) [[unlikely]] return; }
L_001B2320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2328u);  if (depth < kMaxDepth) unit_000C(c, 236u, depth + 1u); else { c.pc = 0x00152F80u; return; } if (c.pc != 0x001B2328u) [[unlikely]] return; }
L_001B2328:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B2340:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_009C(c, 495u, depth); }
L_001B2350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30752u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001B23B8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2378u); set32(c.r[4], c.r[4].w[0] + 6872u);  if (depth < kMaxDepth) unit_0024(c, 326u, depth + 1u); else { c.pc = 0x001B2550u; return; } if (c.pc != 0x001B2378u) [[unlikely]] return; }
L_001B2378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2380u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 44u, depth + 1u); else { c.pc = 0x00180470u; return; } if (c.pc != 0x001B2380u) [[unlikely]] return; }
L_001B2380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30752u), c.r[16].w[0]);  if (t) { goto L_001B2390; } }
L_001B2388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2390u);  if (depth < kMaxDepth) unit_0024(c, 308u, depth + 1u); else { c.pc = 0x001B2340u; return; } if (c.pc != 0x001B2390u) [[unlikely]] return; }
L_001B2390:
    set32(c.r[5], ld32((c.r[28].w[0] - 30764u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 30760u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 30756u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 30752u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B23ACu); set32(c.r[4], c.r[4].w[0] + 6872u);  if (depth < kMaxDepth) unit_0024(c, 316u, depth + 1u); else { c.pc = 0x001B23E0u; return; } if (c.pc != 0x001B23ACu) [[unlikely]] return; }
L_001B23AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2388u | kUnwind; return; } goto L_001B2388; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001B23B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B23D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30752u)));  c.pc = t; return; }
L_001B23E0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_001B2430; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2428u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 115u, depth + 1u); else { c.pc = 0x0014ED20u; return; } if (c.pc != 0x001B2428u) [[unlikely]] return; }
L_001B2428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2438; } }
L_001B2430:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[16], c.r[16].w[0] + 6880u);
    c.budget -= 2;
L_001B2438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2440u);  if (depth < kMaxDepth) unit_000B(c, 103u, depth + 1u); else { c.pc = 0x0014EC60u; return; } if (c.pc != 0x001B2440u) [[unlikely]] return; }
L_001B2440:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B248C; } }
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[3].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001B2474; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 255u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B246Cu); set32(c.r[6], c.r[6].w[0] + 6888u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B246Cu) [[unlikely]] return; }
L_001B246C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001B24D8; } }
L_001B2474:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 255u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2484u); set32(c.r[6], c.r[6].w[0] + 6864u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B2484u) [[unlikely]] return; }
L_001B2484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B24D4; } }
L_001B248C:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[3].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001B24BC; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], c.r[18].w[0] + 1u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 255u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B24B4u); set32(c.r[6], c.r[6].w[0] + 6912u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B24B4u) [[unlikely]] return; }
L_001B24B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B24D4; } }
L_001B24BC:
    set32(c.r[8], c.r[18].w[0] + 1u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 255u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B24D4u); set32(c.r[6], c.r[6].w[0] + 6944u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001B24D4u) [[unlikely]] return; }
L_001B24D4:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001B24D8:
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B24E8u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0015(c, 249u, depth + 1u); else { c.pc = 0x00176380u; return; } if (c.pc != 0x001B24E8u) [[unlikely]] return; }
L_001B24E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001B250C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 6960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2504u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B2504u) [[unlikely]] return; }
L_001B2504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B2520; } }
L_001B250C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 7008u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B251Cu); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B251Cu) [[unlikely]] return; }
L_001B251C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B2520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_001B2550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2564u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0015(c, 252u, depth + 1u); else { c.pc = 0x001763D0u; return; } if (c.pc != 0x001B2564u) [[unlikely]] return; }
L_001B2564:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2574u); set32(c.r[4], c.r[4].w[0] + 7072u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B2574u) [[unlikely]] return; }
L_001B2574:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B2590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    if (c.r[4].sd[0] < 0) { set32(c.r[3], c.r[4].w[0] >> 1);  goto L_001B25AC; }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B25C4; } }
L_001B25AC:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_001B25C4:
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 27072u), c.r[4].w[0]);
    c.budget -= 8;
    { st32((c.r[3].w[0] + 27136u), c.f[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00164800u | kUnwind; return; } [[clang::musttail]] return unit_0011(c, 76u, depth); }
L_001B25F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));  c.pc = t; return; }
L_001B2600:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30748u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B26A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2628u);  if (depth < kMaxDepth) unit_0025(c, 329u, depth + 1u); else { c.pc = 0x001B60E0u; return; } if (c.pc != 0x001B2628u) [[unlikely]] return; }
L_001B2628:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2638u); set32(c.r[5], c.r[5].w[0] + 27360u);  if (depth < kMaxDepth) unit_0000(c, 21u, depth + 1u); else { c.pc = 0x00120300u; return; } if (c.pc != 0x001B2638u) [[unlikely]] return; }
L_001B2638:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 30748u), c.r[17].w[0]);  goto L_001B2674; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B264Cu); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001B264Cu) [[unlikely]] return; }
L_001B264C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2658u); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x001B2658u) [[unlikely]] return; }
L_001B2658:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B266Cu); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0014(c, 233u, depth + 1u); else { c.pc = 0x00171E30u; return; } if (c.pc != 0x001B266Cu) [[unlikely]] return; }
L_001B266C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[28].w[0] - 30748u), c.r[17].w[0]);
    c.budget -= 2;
L_001B2674:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001B26A4; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 24u), 0u);  goto L_001B269C; }
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 234u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30748u)));
    st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 33u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_001B269C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B26B0; } }
L_001B26A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B26ACu);  if (depth < kMaxDepth) unit_0024(c, 338u, depth + 1u); else { c.pc = 0x001B26D0u; return; } if (c.pc != 0x001B26ACu) [[unlikely]] return; }
L_001B26AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B26B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B26D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30748u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B26FC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B26F4u); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B26F4u) [[unlikely]] return; }
L_001B26F4:
    st32((c.r[28].w[0] - 30748u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_001B26FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B2710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001B2728; } }
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.budget -= 1;
L_001B2728:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2734u); set32(c.r[4], ld32((c.r[28].w[0] - 30748u)));  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x001B2734u) [[unlikely]] return; }
L_001B2734:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001B2750; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B274Cu); set32(c.r[4], c.r[4].w[0] + 7120u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B274Cu) [[unlikely]] return; }
L_001B274C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B2750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B2760:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[5].d[0] = c.r[4].d[0] + 0ull;  goto L_001B2774; }
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_001B2774:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30748u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001720C0u | kUnwind; return; } [[clang::musttail]] return unit_0014(c, 246u, depth); }
L_001B2780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30748u)));  c.pc = t; return; }
L_001B2790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B27A8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 400u, depth + 1u); else { c.pc = 0x001B2E10u; return; } if (c.pc != 0x001B27A8u) [[unlikely]] return; }
L_001B27A8:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B27C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001B2838; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_001B2824; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[19].w[0])));  if (t) { goto L_001B2818; } }
L_001B27F8:
    set32(c.r[16], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2804u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 352u, depth + 1u); else { c.pc = 0x001B2860u; return; } if (c.pc != 0x001B2804u) [[unlikely]] return; }
L_001B2804:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2814u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x001B2814u) [[unlikely]] return; }
L_001B2814:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B2818:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B27F8u | kUnwind; return; } goto L_001B27F8; }
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001B2824:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_001B283C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2838u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001B2838u) [[unlikely]] return; }
L_001B2838:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001B283C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B2860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B28A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2898; } }
L_001B2884:
    set32(c.r[16], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2894u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x001B2894u) [[unlikely]] return; }
L_001B2894:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B2898:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2884u | kUnwind; return; } goto L_001B2884; } }
L_001B28A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B28C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001B2938; } }
    set32(c.r[16], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B28FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x001B28FCu) [[unlikely]] return; }
L_001B28FC:
    st32((c.r[2].w[0]), c.r[18].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[2].w[0] + 12u), 0u);  if (t) { goto L_001B291C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_001B2938; } }
L_001B2918:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001B291C:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2918u | kUnwind; return; } goto L_001B2918; } }
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001B2938:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B2960:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B2A40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0])));  if (t) { goto L_001B29A4; } }
L_001B2990:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B299Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 352u, depth + 1u); else { c.pc = 0x001B2860u; return; } if (c.pc != 0x001B299Cu) [[unlikely]] return; }
L_001B299C:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[17], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 2;
L_001B29A4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2990u | kUnwind; return; } goto L_001B2990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0])));  if (t) { goto L_001B2A38; } }
L_001B29B4:
    set32(c.r[20], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B29C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 256u, depth + 1u); else { c.pc = 0x00172290u; return; } if (c.pc != 0x001B29C0u) [[unlikely]] return; }
L_001B29C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2A2C; } }
L_001B29C8:
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B29D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x001B29D4u) [[unlikely]] return; }
L_001B29D4:
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B29E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 230u, depth + 1u); else { c.pc = 0x00171DD0u; return; } if (c.pc != 0x001B29E8u) [[unlikely]] return; }
L_001B29E8:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B29F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 231u, depth + 1u); else { c.pc = 0x00171DF0u; return; } if (c.pc != 0x001B29F8u) [[unlikely]] return; }
L_001B29F8:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), 0u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != 0ull; st32((c.r[19].w[0] + 16u), 0u);  if (t) { goto L_001B2A14; } }
    st32((c.r[17].w[0] + 8u), c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001B2A1C; } }
L_001B2A14:
    st32((c.r[20].w[0] + 16u), c.r[19].w[0]);
    c.r[20].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_001B2A1C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2A28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 232u, depth + 1u); else { c.pc = 0x00171E10u; return; } if (c.pc != 0x001B2A28u) [[unlikely]] return; }
L_001B2A28:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2A2C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B29C8u | kUnwind; return; } goto L_001B29C8; }
    set32(c.r[17], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_001B2A38:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B29B4u | kUnwind; return; } goto L_001B29B4; }
L_001B2A40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B2A60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_001B2BC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[4].w[0])));  if (t) { goto L_001B2BBC; } }
L_001B2A94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2AA0u); set32(c.r[4], c.r[4].w[0] + 7152u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B2AA0u) [[unlikely]] return; }
L_001B2AA0:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2AB0u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 256u, depth + 1u); else { c.pc = 0x00172290u; return; } if (c.pc != 0x001B2AB0u) [[unlikely]] return; }
L_001B2AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2B60; } }
L_001B2AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001B2B08; } }
L_001B2AC0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[19], ld32((c.r[19].w[0] + 16u)));  goto L_001B2B08; }
    set32(c.r[21], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2AD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 230u, depth + 1u); else { c.pc = 0x00171DD0u; return; } if (c.pc != 0x001B2AD8u) [[unlikely]] return; }
L_001B2AD8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_001B2B04; } }
    set32(c.r[21], ld32((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2AF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 231u, depth + 1u); else { c.pc = 0x00171DF0u; return; } if (c.pc != 0x001B2AF0u) [[unlikely]] return; }
L_001B2AF0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_001B2B04; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 12u), c.r[17].w[0]);  if (t) { goto L_001B2B10; } }
L_001B2B04:
    set32(c.r[19], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_001B2B08:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2AC0u | kUnwind; return; } goto L_001B2AC0; }
L_001B2B10:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001B2B54; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B28u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_0014(c, 231u, depth + 1u); else { c.pc = 0x00171DF0u; return; } if (c.pc != 0x001B2B28u) [[unlikely]] return; }
L_001B2B28:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 230u, depth + 1u); else { c.pc = 0x00171DD0u; return; } if (c.pc != 0x001B2B38u) [[unlikely]] return; }
L_001B2B38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 7184u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B50u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B2B50u) [[unlikely]] return; }
L_001B2B50:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001B2B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 232u, depth + 1u); else { c.pc = 0x00171E10u; return; } if (c.pc != 0x001B2B5Cu) [[unlikely]] return; }
L_001B2B5C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2B60:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[19], ld32((c.r[20].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2AB8u | kUnwind; return; } goto L_001B2AB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[20].w[0] + 8u)));  if (t) { goto L_001B2B9C; } }
L_001B2B70:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { st32((c.r[17].w[0] + 12u), 0u);  goto L_001B2B98; }
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[4].w[0] + 7248u);
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B94u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B2B94u) [[unlikely]] return; }
L_001B2B94:
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 1;
L_001B2B98:
    set32(c.r[17], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_001B2B9C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2B70u | kUnwind; return; } goto L_001B2B70; }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[20], ld32((c.r[20].w[0] + 12u)));  goto L_001B2BBC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2BB8u); set32(c.r[4], c.r[4].w[0] + 7304u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B2BB8u) [[unlikely]] return; }
L_001B2BB8:
    set32(c.r[20], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 1;
L_001B2BBC:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2A94u | kUnwind; return; } goto L_001B2A94; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001B2BC8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001B2BF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30744u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B2C84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C18u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B2C18u) [[unlikely]] return; }
L_001B2C18:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 30744u), c.r[17].w[0]);  goto L_001B2C54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C2Cu); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001B2C2Cu) [[unlikely]] return; }
L_001B2C2C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C38u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x001B2C38u) [[unlikely]] return; }
L_001B2C38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C4Cu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_0014(c, 233u, depth + 1u); else { c.pc = 0x00171E30u; return; } if (c.pc != 0x001B2C4Cu) [[unlikely]] return; }
L_001B2C4C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[28].w[0] - 30744u), c.r[17].w[0]);
    c.budget -= 2;
L_001B2C54:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B2C88; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 24u), 0u);  goto L_001B2C7C; }
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 234u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30744u)));
    st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 33u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_001B2C7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B2C88; } }
L_001B2C84:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B2C88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B2CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30744u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B2CD4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 30744u), 0u);  goto L_001B2CD0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2CCCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B2CCCu) [[unlikely]] return; }
L_001B2CCC:
    st32((c.r[28].w[0] - 30744u), 0u);
    c.budget -= 1;
L_001B2CD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B2CD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B2CE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30744u)));  c.pc = t; return; }
L_001B2CF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2D0Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 100u, depth + 1u); else { c.pc = 0x0014EC30u; return; } if (c.pc != 0x001B2D0Cu) [[unlikely]] return; }
L_001B2D0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001B2DAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2D1Cu);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0014EC50u; return; } if (c.pc != 0x001B2D1Cu) [[unlikely]] return; }
L_001B2D1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B2D9C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30740u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B2DAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2D38u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B2D38u) [[unlikely]] return; }
L_001B2D38:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 30740u), c.r[17].w[0]);  goto L_001B2D74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2D4Cu); set32(c.r[4], 0u + 18u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001B2D4Cu) [[unlikely]] return; }
L_001B2D4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2D58u); set32(c.r[4], 0u + 18u);  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x001B2D58u) [[unlikely]] return; }
L_001B2D58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2D6Cu); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0014(c, 233u, depth + 1u); else { c.pc = 0x00171E30u; return; } if (c.pc != 0x001B2D6Cu) [[unlikely]] return; }
L_001B2D6C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[28].w[0] - 30740u), c.r[17].w[0]);
    c.budget -= 2;
L_001B2D74:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001B2DA8; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 24u), 0u);  goto L_001B2D9C; }
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 234u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30740u)));
    st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 33u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_001B2D9C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2DAC; } }
L_001B2DA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B2DAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B2DD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30740u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B2E04; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 30740u), 0u);  goto L_001B2E00; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2DFCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B2DFCu) [[unlikely]] return; }
L_001B2DFC:
    st32((c.r[28].w[0] - 30740u), 0u);
    c.budget -= 1;
L_001B2E00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B2E04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B2E10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30740u)));  c.pc = t; return; }
L_001B2E20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30736u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B2EB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2E48u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B2E48u) [[unlikely]] return; }
L_001B2E48:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 30736u), c.r[17].w[0]);  goto L_001B2E84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2E5Cu); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001B2E5Cu) [[unlikely]] return; }
L_001B2E5C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2E68u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x001B2E68u) [[unlikely]] return; }
L_001B2E68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2E7Cu); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0014(c, 233u, depth + 1u); else { c.pc = 0x00171E30u; return; } if (c.pc != 0x001B2E7Cu) [[unlikely]] return; }
L_001B2E7C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[28].w[0] - 30736u), c.r[17].w[0]);
    c.budget -= 2;
L_001B2E84:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B2EB8; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 24u), 0u);  goto L_001B2EAC; }
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 234u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30736u)));
    st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 33u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_001B2EAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B2EB8; } }
L_001B2EB4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B2EB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B2ED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30736u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B2F04; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 30736u), 0u);  goto L_001B2F00; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2EFCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B2EFCu) [[unlikely]] return; }
L_001B2EFC:
    st32((c.r[28].w[0] - 30736u), 0u);
    c.budget -= 1;
L_001B2F00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B2F04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B2F10:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[5].d[0] = c.r[4].d[0] + 0ull;  goto L_001B2F24; }
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_001B2F24:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30736u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00171F90u | kUnwind; return; } [[clang::musttail]] return unit_0014(c, 238u, depth); }
L_001B2F30:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30736u)));
    c.budget -= 4;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001720C0u | kUnwind; return; } [[clang::musttail]] return unit_0014(c, 246u, depth); }
L_001B2F40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30736u)));  c.pc = t; return; }
L_001B2F50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30732u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B2FE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2F78u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B2F78u) [[unlikely]] return; }
L_001B2F78:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 30732u), c.r[17].w[0]);  goto L_001B2FB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2F8Cu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001B2F8Cu) [[unlikely]] return; }
L_001B2F8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2F98u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0024(c, 150u, depth + 1u); else { c.pc = 0x001B1040u; return; } if (c.pc != 0x001B2F98u) [[unlikely]] return; }
L_001B2F98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2FACu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_0014(c, 233u, depth + 1u); else { c.pc = 0x00171E30u; return; } if (c.pc != 0x001B2FACu) [[unlikely]] return; }
L_001B2FAC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[28].w[0] - 30732u), c.r[17].w[0]);
    c.budget -= 2;
L_001B2FB4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B2FE8; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 24u), 0u);  goto L_001B2FDC; }
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 234u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30732u)));
    st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 33u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_001B2FDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B2FE8; } }
L_001B2FE4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B2FE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B3000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30732u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B3034; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 30732u), 0u);  goto L_001B3030; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B302Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B302Cu) [[unlikely]] return; }
L_001B302C:
    st32((c.r[28].w[0] - 30732u), 0u);
    c.budget -= 1;
L_001B3030:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B3034:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B3040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30732u)));  c.pc = t; return; }
L_001B3050:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 84u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 16u);
    st32((c.r[28].w[0] - 30728u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[28].w[0] - 30724u), c.r[5].w[0]);  if (t) { goto L_001B3088; } }
L_001B306C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B306Cu | kUnwind; return; } goto L_001B306C; } }
L_001B3088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3090u);  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0014EC20u; return; } if (c.pc != 0x001B3090u) [[unlikely]] return; }
L_001B3090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3098u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0014EC20u; return; } if (c.pc != 0x001B3098u) [[unlikely]] return; }
L_001B3098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30A0u); st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 106u, depth + 1u); else { c.pc = 0x0014EC90u; return; } if (c.pc != 0x001B30A0u) [[unlikely]] return; }
L_001B30A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30A8u); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 106u, depth + 1u); else { c.pc = 0x0014EC90u; return; } if (c.pc != 0x001B30A8u) [[unlikely]] return; }
L_001B30A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30B0u); st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 106u, depth + 1u); else { c.pc = 0x0014EC90u; return; } if (c.pc != 0x001B30B0u) [[unlikely]] return; }
L_001B30B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30B8u); st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 106u, depth + 1u); else { c.pc = 0x0014EC90u; return; } if (c.pc != 0x001B30B8u) [[unlikely]] return; }
L_001B30B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30C0u); st32((c.r[29].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 100u, depth + 1u); else { c.pc = 0x0014EC30u; return; } if (c.pc != 0x001B30C0u) [[unlikely]] return; }
L_001B30C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30C8u); st32((c.r[29].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0014ECD0u; return; } if (c.pc != 0x001B30C8u) [[unlikely]] return; }
L_001B30C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30D0u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 111u, depth + 1u); else { c.pc = 0x0014ECE0u; return; } if (c.pc != 0x001B30D0u) [[unlikely]] return; }
L_001B30D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30D8u); st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 101u, depth + 1u); else { c.pc = 0x0014EC40u; return; } if (c.pc != 0x001B30D8u) [[unlikely]] return; }
L_001B30D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30E0u); st32((c.r[29].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0014ECB0u; return; } if (c.pc != 0x001B30E0u) [[unlikely]] return; }
L_001B30E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30E8u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 105u, depth + 1u); else { c.pc = 0x0014EC80u; return; } if (c.pc != 0x001B30E8u) [[unlikely]] return; }
L_001B30E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30F0u); st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 103u, depth + 1u); else { c.pc = 0x0014EC60u; return; } if (c.pc != 0x001B30F0u) [[unlikely]] return; }
L_001B30F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30F8u); st32((c.r[29].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0014EC70u; return; } if (c.pc != 0x001B30F8u) [[unlikely]] return; }
L_001B30F8:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3108u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 115u, depth + 1u); else { c.pc = 0x0014ED20u; return; } if (c.pc != 0x001B3108u) [[unlikely]] return; }
L_001B3108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3110u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 112u, depth + 1u); else { c.pc = 0x0014ECF0u; return; } if (c.pc != 0x001B3110u) [[unlikely]] return; }
L_001B3110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3118u); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 113u, depth + 1u); else { c.pc = 0x0014ED00u; return; } if (c.pc != 0x001B3118u) [[unlikely]] return; }
L_001B3118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3120u); st32((c.r[29].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 114u, depth + 1u); else { c.pc = 0x0014ED10u; return; } if (c.pc != 0x001B3120u) [[unlikely]] return; }
L_001B3120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3128u); st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 119u, depth + 1u); else { c.pc = 0x0014EDB0u; return; } if (c.pc != 0x001B3128u) [[unlikely]] return; }
L_001B3128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3130u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 120u, depth + 1u); else { c.pc = 0x0014EDC0u; return; } if (c.pc != 0x001B3130u) [[unlikely]] return; }
L_001B3130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3138u); st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 111u, depth + 1u); else { c.pc = 0x00124E50u; return; } if (c.pc != 0x001B3138u) [[unlikely]] return; }
L_001B3138:
    st32((c.r[28].w[0] - 30720u), c.r[2].w[0]);
    c.budget -= 1;
L_001B313C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3144u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0025(c, 140u, depth + 1u); else { c.pc = 0x001B5020u; return; } if (c.pc != 0x001B3144u) [[unlikely]] return; }
L_001B3144:
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3150u); set32(c.r[4], ld32((c.r[29].w[0] + 16u)));  if (depth < kMaxDepth) unit_0024(c, 506u, depth + 1u); else { c.pc = 0x001B3750u; return; } if (c.pc != 0x001B3150u) [[unlikely]] return; }
L_001B3150:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001B320C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3164u); set32(c.r[4], c.r[4].w[0] + 7328u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B3164u) [[unlikely]] return; }
L_001B3164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B316Cu);  if (depth < kMaxDepth) unit_0025(c, 131u, depth + 1u); else { c.pc = 0x001B4F50u; return; } if (c.pc != 0x001B316Cu) [[unlikely]] return; }
L_001B316C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B317C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B317Cu); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0025(c, 132u, depth + 1u); else { c.pc = 0x001B4F70u; return; } if (c.pc != 0x001B317Cu) [[unlikely]] return; }
L_001B317C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3184u);  if (depth < kMaxDepth) unit_0024(c, 514u, depth + 1u); else { c.pc = 0x001B3820u; return; } if (c.pc != 0x001B3184u) [[unlikely]] return; }
L_001B3184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B318Cu);  if (depth < kMaxDepth) unit_0024(c, 523u, depth + 1u); else { c.pc = 0x001B3890u; return; } if (c.pc != 0x001B318Cu) [[unlikely]] return; }
L_001B318C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B319C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B319Cu);  if (depth < kMaxDepth) unit_0025(c, 300u, depth + 1u); else { c.pc = 0x001B5BE0u; return; } if (c.pc != 0x001B319Cu) [[unlikely]] return; }
L_001B319C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B31A4u);  if (depth < kMaxDepth) unit_0024(c, 561u, depth + 1u); else { c.pc = 0x001B3B00u; return; } if (c.pc != 0x001B31A4u) [[unlikely]] return; }
L_001B31A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B31ACu);  if (depth < kMaxDepth) unit_0025(c, 306u, depth + 1u); else { c.pc = 0x001B5CA0u; return; } if (c.pc != 0x001B31ACu) [[unlikely]] return; }
L_001B31AC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B3164u | kUnwind; return; } goto L_001B3164; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B31C4u);  if (depth < kMaxDepth) unit_0024(c, 612u, depth + 1u); else { c.pc = 0x001B3FA0u; return; } if (c.pc != 0x001B31C4u) [[unlikely]] return; }
L_001B31C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B31CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 610u, depth + 1u); else { c.pc = 0x001B3F80u; return; } if (c.pc != 0x001B31CCu) [[unlikely]] return; }
L_001B31CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B31D4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 613u, depth + 1u); else { c.pc = 0x001B3FB0u; return; } if (c.pc != 0x001B31D4u) [[unlikely]] return; }
L_001B31D4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B31E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 378u, depth + 1u); else { c.pc = 0x00123888u; return; } if (c.pc != 0x001B31E0u) [[unlikely]] return; }
L_001B31E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B31E8u);  if (depth < kMaxDepth) unit_0024(c, 571u, depth + 1u); else { c.pc = 0x001B3BC0u; return; } if (c.pc != 0x001B31E8u) [[unlikely]] return; }
L_001B31E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B31F0u);  if (depth < kMaxDepth) unit_0025(c, 168u, depth + 1u); else { c.pc = 0x001B51B0u; return; } if (c.pc != 0x001B31F0u) [[unlikely]] return; }
L_001B31F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B31F8u);  if (depth < kMaxDepth) unit_0024(c, 609u, depth + 1u); else { c.pc = 0x001B3F70u; return; } if (c.pc != 0x001B31F8u) [[unlikely]] return; }
L_001B31F8:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B313Cu | kUnwind; return; } goto L_001B313C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001B3228; } }
L_001B320C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3214u); set32(c.r[4], c.r[4].w[0] + 7360u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B3214u) [[unlikely]] return; }
L_001B3214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B321Cu);  if (depth < kMaxDepth) unit_0008(c, 172u, depth + 1u); else { c.pc = 0x001420C0u; return; } if (c.pc != 0x001B321Cu) [[unlikely]] return; }
L_001B321C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3224u);  if (depth < kMaxDepth) unit_0024(c, 338u, depth + 1u); else { c.pc = 0x001B26D0u; return; } if (c.pc != 0x001B3224u) [[unlikely]] return; }
L_001B3224:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B3228:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001B3230:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30728u)));  c.pc = t; return; }
L_001B3240:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30724u)));  c.pc = t; return; }
L_001B3250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3264u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001B3264u) [[unlikely]] return; }
L_001B3264:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52450000u);
    set32(c.r[3], c.r[3].w[0] + 10608u);
    c.r[4].d[0] = c.r[2].d[0] | 20563ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B32D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B3320; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10608u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B32FCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 471u, depth + 1u); else { c.pc = 0x001B3340u; return; } if (c.pc != 0x001B32FCu) [[unlikely]] return; }
L_001B32FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3308u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001B3308u) [[unlikely]] return; }
L_001B3308:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001B3324; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3320u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001B3320u) [[unlikely]] return; }
L_001B3320:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B3324:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B3340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B3350:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B337C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001B3610; }
L_001B337C:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B360C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B360C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 92u)));  if (t) { goto L_001B360C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 7568u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001B0000u < 16384u) { entry = entries_0024[(t - 0x001B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001B33C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B33CCu);  if (depth < kMaxDepth) unit_0025(c, 302u, depth + 1u); else { c.pc = 0x001B5C40u; return; } if (c.pc != 0x001B33CCu) [[unlikely]] return; }
L_001B33CC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 2;
L_001B33D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[16], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001B3400; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B33F8u); set32(c.r[4], c.r[4].w[0] + 7408u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B33F8u) [[unlikely]] return; }
L_001B33F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 64u)));  if (t) { goto L_001B340C; } }
L_001B3400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3408u); set32(c.r[4], c.r[4].w[0] + 7440u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B3408u) [[unlikely]] return; }
L_001B3408:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 1;
L_001B340C:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001B3454; }
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3428u); set32(c.r[16], c.r[17].w[0] << 2);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B3428u) [[unlikely]] return; }
L_001B3428:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_001B3468; } }
L_001B3454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B345Cu); set32(c.r[4], c.r[4].w[0] + 7472u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B345Cu) [[unlikely]] return; }
L_001B345C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_001B360C; } }
L_001B3468:
    set32(c.r[3], 0u + 2u);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 2;
L_001B3470:
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[5], c.r[17].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B360C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B34A0u); set32(c.r[4], c.r[4].w[0] + 7504u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B34A0u) [[unlikely]] return; }
L_001B34A0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_001B360C; } }
L_001B34AC:
    set32(c.r[4], c.r[17].w[0] + 1u);
    st32((c.r[18].w[0] + 92u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001B34DC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B34D0u); st32((c.r[18].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x001B34D0u) [[unlikely]] return; }
L_001B34D0:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_001B360C; } }
L_001B34DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_001B360C; } }
L_001B34E4:
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001B34FC; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_001B360C; } }
L_001B34FC:
    set32(c.r[2], 0u + 6u);
    st32((c.r[18].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 3;
L_001B3508:
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B352Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B352Cu) [[unlikely]] return; }
L_001B352C:
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[5].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001B355C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3554u); set32(c.r[4], c.r[4].w[0] + 7408u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B3554u) [[unlikely]] return; }
L_001B3554:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_001B3568; } }
L_001B355C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3564u); set32(c.r[4], c.r[4].w[0] + 7440u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B3564u) [[unlikely]] return; }
L_001B3564:
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_001B3568:
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_001B356C:
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B358Cu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 171u, depth + 1u); else { c.pc = 0x001A61F0u; return; } if (c.pc != 0x001B358Cu) [[unlikely]] return; }
L_001B358C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B360C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B35A0u); set32(c.r[4], c.r[4].w[0] + 7536u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B35A0u) [[unlikely]] return; }
L_001B35A0:
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; st32((c.r[18].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_001B35BC; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_001B360C; } }
L_001B35BC:
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 72u), 0u);  goto L_001B35D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B35D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x001B35D0u) [[unlikely]] return; }
L_001B35D0:
    st32((c.r[18].w[0] + 72u), 0u);
    c.budget -= 1;
L_001B35D4:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 76u), 0u);  goto L_001B35EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B35E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x001B35E8u) [[unlikely]] return; }
L_001B35E8:
    st32((c.r[18].w[0] + 76u), 0u);
    c.budget -= 1;
L_001B35EC:
    set32(c.r[2], 0u + 8u);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 2;
L_001B35F4:
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3604u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B3604u) [[unlikely]] return; }
L_001B3604:
    set32(c.r[3], 0u + 9u);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 2;
L_001B360C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001B3610:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B3630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B36FC; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B3700; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001B36FC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B36FC; } }
    st32((c.r[16].w[0] + 60u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[6].w[0]);  if (t) { goto L_001B3680; } }
L_001B3670:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 4;
L_001B3680:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B3670u | kUnwind; return; } goto L_001B3670; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 72u), 0u);  goto L_001B36EC; }
    set32(c.r[4], c.r[2].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B36A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x001B36A4u) [[unlikely]] return; }
L_001B36A4:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B36BCu); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x001B36BCu) [[unlikely]] return; }
L_001B36BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B36CCu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x001B36CCu) [[unlikely]] return; }
L_001B36CC:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B36E4u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x001B36E4u) [[unlikely]] return; }
L_001B36E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B36F4; } }
L_001B36EC:
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001B36F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_001B3700; } }
L_001B36FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B3700:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B3710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 84u)));  c.pc = t; return; }
L_001B3720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30712u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B3740; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B373Cu);  if (depth < kMaxDepth) unit_0024(c, 606u, depth + 1u); else { c.pc = 0x001B3F30u; return; } if (c.pc != 0x001B373Cu) [[unlikely]] return; }
L_001B373C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B3740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B3750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[28].w[0] - 30716u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3774u); st32((c.r[28].w[0] - 30712u), 0u);  if (depth < kMaxDepth) unit_000B(c, 109u, depth + 1u); else { c.pc = 0x0014ECC0u; return; } if (c.pc != 0x001B3774u) [[unlikely]] return; }
L_001B3774:
    st32((c.r[28].w[0] - 31892u), c.f[0]);
    set32(c.r[4], 0u + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3784u); st32((c.r[28].w[0] - 31888u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B3784u) [[unlikely]] return; }
L_001B3784:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 30716u), c.r[2].w[0]);  goto L_001B3798; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3794u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 136u, depth + 1u); else { c.pc = 0x001A5B00u; return; } if (c.pc != 0x001B3794u) [[unlikely]] return; }
L_001B3794:
    st32((c.r[28].w[0] - 30716u), c.r[2].w[0]);
    c.budget -= 1;
L_001B3798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B37F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B37A8u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001B37A8u) [[unlikely]] return; }
L_001B37A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 30712u), c.r[2].w[0]);  goto L_001B37C8; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30716u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B37C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 576u, depth + 1u); else { c.pc = 0x001B3C40u; return; } if (c.pc != 0x001B37C4u) [[unlikely]] return; }
L_001B37C4:
    st32((c.r[28].w[0] - 30712u), c.r[2].w[0]);
    c.budget -= 1;
L_001B37C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B37F4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[28].w[0] - 30704u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 7616u);
    st64((c.r[28].w[0] - 30696u), 0ull);
    st32((c.r[28].w[0] - 30688u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B37ECu); st32((c.r[28].w[0] - 30684u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B37ECu) [[unlikely]] return; }
L_001B37EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B3804; } }
L_001B37F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3800u); set32(c.r[4], c.r[4].w[0] + 7648u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B3800u) [[unlikely]] return; }
L_001B3800:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B3804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B3820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3830u);  if (depth < kMaxDepth) unit_0024(c, 36u, depth + 1u); else { c.pc = 0x001B0300u; return; } if (c.pc != 0x001B3830u) [[unlikely]] return; }
L_001B3830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3838u);  if (depth < kMaxDepth) unit_0011(c, 4u, depth + 1u); else { c.pc = 0x00164080u; return; } if (c.pc != 0x001B3838u) [[unlikely]] return; }
L_001B3838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3840u);  if (depth < kMaxDepth) unit_0024(c, 131u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x001B3840u) [[unlikely]] return; }
L_001B3840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3860; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3850u);  if (depth < kMaxDepth) unit_0013(c, 176u, depth + 1u); else { c.pc = 0x0016DEF0u; return; } if (c.pc != 0x001B3850u) [[unlikely]] return; }
L_001B3850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3858u);  if (depth < kMaxDepth) unit_0013(c, 165u, depth + 1u); else { c.pc = 0x0016DD80u; return; } if (c.pc != 0x001B3858u) [[unlikely]] return; }
L_001B3858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3868; } }
L_001B3860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3868u);  if (depth < kMaxDepth) unit_0013(c, 175u, depth + 1u); else { c.pc = 0x0016DEE0u; return; } if (c.pc != 0x001B3868u) [[unlikely]] return; }
L_001B3868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3870u);  if (depth < kMaxDepth) unit_0025(c, 415u, depth + 1u); else { c.pc = 0x001B6B40u; return; } if (c.pc != 0x001B3870u) [[unlikely]] return; }
L_001B3870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3878u);  if (depth < kMaxDepth) unit_0024(c, 304u, depth + 1u); else { c.pc = 0x001B2300u; return; } if (c.pc != 0x001B3878u) [[unlikely]] return; }
L_001B3878:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B3890:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30716u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001B3ADC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B38B8u);  if (depth < kMaxDepth) unit_0023(c, 306u, depth + 1u); else { c.pc = 0x001AFAD0u; return; } if (c.pc != 0x001B38B8u) [[unlikely]] return; }
L_001B38B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B38C0u);  if (depth < kMaxDepth) unit_0021(c, 291u, depth + 1u); else { c.pc = 0x001A7530u; return; } if (c.pc != 0x001B38C0u) [[unlikely]] return; }
L_001B38C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B38C8u); set32(c.r[4], ld32((c.r[28].w[0] - 30716u)));  if (depth < kMaxDepth) unit_0021(c, 143u, depth + 1u); else { c.pc = 0x001A5C40u; return; } if (c.pc != 0x001B38C8u) [[unlikely]] return; }
L_001B38C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B38D0u); set32(c.r[4], ld32((c.r[28].w[0] - 30716u)));  if (depth < kMaxDepth) unit_0021(c, 145u, depth + 1u); else { c.pc = 0x001A5C80u; return; } if (c.pc != 0x001B38D0u) [[unlikely]] return; }
L_001B38D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B38D8u);  if (depth < kMaxDepth) unit_003C(c, 109u, depth + 1u); else { c.pc = 0x002112D0u; return; } if (c.pc != 0x001B38D8u) [[unlikely]] return; }
L_001B38D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B38E0u);  if (depth < kMaxDepth) unit_0024(c, 131u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x001B38E0u) [[unlikely]] return; }
L_001B38E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30716u)));  goto L_001B38F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B38F0u); c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (depth < kMaxDepth) unit_0013(c, 167u, depth + 1u); else { c.pc = 0x0016DDD0u; return; } if (c.pc != 0x001B38F0u) [[unlikely]] return; }
L_001B38F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30716u)));
    c.budget -= 1;
L_001B38F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B38FCu);  if (depth < kMaxDepth) unit_0021(c, 147u, depth + 1u); else { c.pc = 0x001A5CC0u; return; } if (c.pc != 0x001B38FCu) [[unlikely]] return; }
L_001B38FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3904u);  if (depth < kMaxDepth) unit_003C(c, 111u, depth + 1u); else { c.pc = 0x00211300u; return; } if (c.pc != 0x001B3904u) [[unlikely]] return; }
L_001B3904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B390Cu);  if (depth < kMaxDepth) unit_0024(c, 131u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x001B390Cu) [[unlikely]] return; }
L_001B390C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3920; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3920u); c.r[4].d[0] = c.r[2].d[0] | 65280ull;  if (depth < kMaxDepth) unit_0013(c, 167u, depth + 1u); else { c.pc = 0x0016DDD0u; return; } if (c.pc != 0x001B3920u) [[unlikely]] return; }
L_001B3920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3928u);  if (depth < kMaxDepth) unit_0024(c, 208u, depth + 1u); else { c.pc = 0x001B1760u; return; } if (c.pc != 0x001B3928u) [[unlikely]] return; }
L_001B3928:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_001B39B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3938u);  if (depth < kMaxDepth) unit_0024(c, 186u, depth + 1u); else { c.pc = 0x001B1550u; return; } if (c.pc != 0x001B3938u) [[unlikely]] return; }
L_001B3938:
    set32(c.r[18], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3944u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x001B3944u) [[unlikely]] return; }
L_001B3944:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001B39CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3958u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 198u, depth + 1u); else { c.pc = 0x001B1670u; return; } if (c.pc != 0x001B3958u) [[unlikely]] return; }
L_001B3958:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B396Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B396Cu) [[unlikely]] return; }
L_001B396C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B39CC; } }
L_001B3974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B397Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 194u, depth + 1u); else { c.pc = 0x001B1610u; return; } if (c.pc != 0x001B397Cu) [[unlikely]] return; }
L_001B397C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001B39B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B398Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x001B398Cu) [[unlikely]] return; }
L_001B398C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001B39B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B39A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 198u, depth + 1u); else { c.pc = 0x001B1670u; return; } if (c.pc != 0x001B39A0u) [[unlikely]] return; }
L_001B39A0:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B39B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B39B4u) [[unlikely]] return; }
L_001B39B4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001B39B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B39C0u);  if (depth < kMaxDepth) unit_0024(c, 186u, depth + 1u); else { c.pc = 0x001B1550u; return; } if (c.pc != 0x001B39C0u) [[unlikely]] return; }
L_001B39C0:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B3974u | kUnwind; return; } goto L_001B3974; } }
L_001B39CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B39D4u);  if (depth < kMaxDepth) unit_0024(c, 131u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x001B39D4u) [[unlikely]] return; }
L_001B39D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30716u)));  goto L_001B39EC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B39E8u); c.r[4].d[0] = c.r[2].d[0] | 255ull;  if (depth < kMaxDepth) unit_0013(c, 167u, depth + 1u); else { c.pc = 0x0016DDD0u; return; } if (c.pc != 0x001B39E8u) [[unlikely]] return; }
L_001B39E8:
    set32(c.r[4], ld32((c.r[28].w[0] - 30716u)));
    c.budget -= 1;
L_001B39EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B39F4u);  if (depth < kMaxDepth) unit_0021(c, 149u, depth + 1u); else { c.pc = 0x001A5D10u; return; } if (c.pc != 0x001B39F4u) [[unlikely]] return; }
L_001B39F4:
    set32(c.r[4], ld32((c.r[28].w[0] - 30712u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30688u)));  goto L_001B3A20; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B3A1C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 30688u), c.r[2].w[0]);
    c.budget -= 2;
L_001B3A1C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30688u)));
    c.budget -= 1;
L_001B3A20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30716u)));  goto L_001B3AAC; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30684u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B3AA8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 7696u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001B0000u < 16384u) { entry = entries_0024[(t - 0x001B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001B3A54:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3A64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B3A64u) [[unlikely]] return; }
L_001B3A64:
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 30712u), 0u);
    st32((c.r[28].w[0] - 30684u), c.r[2].w[0]);
    c.budget -= 3;
L_001B3A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3A78u); set32(c.r[4], ld32((c.r[28].w[0] - 30716u)));  if (depth < kMaxDepth) unit_0021(c, 142u, depth + 1u); else { c.pc = 0x001A5C30u; return; } if (c.pc != 0x001B3A78u) [[unlikely]] return; }
L_001B3A78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B3AA8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30684u), c.r[2].w[0]);  if (t) { goto L_001B3AA8; } }
L_001B3A8C:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30684u), c.r[2].w[0]);  if (t) { goto L_001B3AA8; } }
L_001B3A98:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30684u), c.r[2].w[0]);  if (t) { goto L_001B3AA8; } }
L_001B3AA4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B3AA8:
    set32(c.r[4], ld32((c.r[28].w[0] - 30716u)));
    c.budget -= 1;
L_001B3AAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3AB4u);  if (depth < kMaxDepth) unit_0021(c, 151u, depth + 1u); else { c.pc = 0x001A5D50u; return; } if (c.pc != 0x001B3AB4u) [[unlikely]] return; }
L_001B3AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3ABCu);  if (depth < kMaxDepth) unit_0024(c, 131u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x001B3ABCu) [[unlikely]] return; }
L_001B3ABC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3ACC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3ACCu); set32(c.r[4], 0u - 1u);  if (depth < kMaxDepth) unit_0013(c, 167u, depth + 1u); else { c.pc = 0x0016DDD0u; return; } if (c.pc != 0x001B3ACCu) [[unlikely]] return; }
L_001B3ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3AD4u);  if (depth < kMaxDepth) unit_0025(c, 396u, depth + 1u); else { c.pc = 0x001B6950u; return; } if (c.pc != 0x001B3AD4u) [[unlikely]] return; }
L_001B3AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3ADCu);  if (depth < kMaxDepth) unit_0015(c, 9u, depth + 1u); else { c.pc = 0x001740A0u; return; } if (c.pc != 0x001B3ADCu) [[unlikely]] return; }
L_001B3ADC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B3B00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3B10u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0013(c, 169u, depth + 1u); else { c.pc = 0x0016DE30u; return; } if (c.pc != 0x001B3B10u) [[unlikely]] return; }
L_001B3B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3B18u);  if (depth < kMaxDepth) unit_0011(c, 66u, depth + 1u); else { c.pc = 0x00164750u; return; } if (c.pc != 0x001B3B18u) [[unlikely]] return; }
L_001B3B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3B20u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 107u, depth + 1u); else { c.pc = 0x00164CA0u; return; } if (c.pc != 0x001B3B20u) [[unlikely]] return; }
L_001B3B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3B28u); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0011(c, 104u, depth + 1u); else { c.pc = 0x00164C60u; return; } if (c.pc != 0x001B3B28u) [[unlikely]] return; }
L_001B3B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3B30u);  if (depth < kMaxDepth) unit_0024(c, 131u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x001B3B30u) [[unlikely]] return; }
L_001B3B30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3B8C; } }
    c.r[3].d[0] = ld64((c.r[16].w[0]));
    c.r[2].d[0] = ld64((c.r[28].w[0] - 30704u));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));  goto L_001B3B54; }
    st64((c.r[28].w[0] - 30704u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    c.budget -= 2;
L_001B3B54:
    c.r[2].d[0] = ld64((c.r[28].w[0] - 30696u));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[7].d[0] = ld64((c.r[16].w[0]));  goto L_001B3B6C; }
    st64((c.r[28].w[0] - 30696u), c.r[3].d[0]);
    c.r[7].d[0] = ld64((c.r[16].w[0]));
    c.budget -= 2;
L_001B3B6C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[9].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[8].d[0] = ld64((c.r[28].w[0] - 30704u));
    set32(c.r[5], 0u + 440u);
    c.r[10].d[0] = ld64((c.r[28].w[0] - 30696u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3B8Cu); set32(c.r[6], c.r[6].w[0] + 7728u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001B3B8Cu) [[unlikely]] return; }
L_001B3B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3B94u);  if (depth < kMaxDepth) unit_0011(c, 113u, depth + 1u); else { c.pc = 0x00164D10u; return; } if (c.pc != 0x001B3B94u) [[unlikely]] return; }
L_001B3B94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3B9Cu);  if (depth < kMaxDepth) unit_0024(c, 305u, depth + 1u); else { c.pc = 0x001B2310u; return; } if (c.pc != 0x001B3B9Cu) [[unlikely]] return; }
L_001B3B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3BA4u);  if (depth < kMaxDepth) unit_0011(c, 33u, depth + 1u); else { c.pc = 0x001642F0u; return; } if (c.pc != 0x001B3BA4u) [[unlikely]] return; }
L_001B3BA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B3BC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30712u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30716u)));  goto L_001B3BEC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3BE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B3BE4u) [[unlikely]] return; }
L_001B3BE4:
    st32((c.r[28].w[0] - 30712u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30716u)));
    c.budget -= 2;
L_001B3BEC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B3C10; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 30716u), 0u);  goto L_001B3C10; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C0Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B3C0Cu) [[unlikely]] return; }
L_001B3C0C:
    st32((c.r[28].w[0] - 30716u), 0u);
    c.budget -= 1;
L_001B3C10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C1Cu); set32(c.r[4], c.r[4].w[0] + 7760u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B3C1Cu) [[unlikely]] return; }
L_001B3C1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B3C30:
    st64((c.r[28].w[0] - 30704u), 0ull);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[28].w[0] - 30696u), 0ull);  c.pc = t; return; }
L_001B3C40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C64u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 307u, depth + 1u); else { c.pc = 0x001B5CD0u; return; } if (c.pc != 0x001B3C64u) [[unlikely]] return; }
L_001B3C64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 10672u);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 7792u);
    st32((c.r[18].w[0] + 52u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[18].w[0] + 56u), c.r[17].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 60u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x544F0000u);
    st32((c.r[18].w[0] + 64u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 21063ull;
    st32((c.r[18].w[0] + 68u), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3CB0u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B3CB0u) [[unlikely]] return; }
L_001B3CB0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B3CD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B3D68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10672u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  goto L_001B3D1C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3D14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B3D14u) [[unlikely]] return; }
L_001B3D14:
    st32((c.r[17].w[0] + 68u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 2;
L_001B3D1C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B3D38; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3D34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B3D34u) [[unlikely]] return; }
L_001B3D34:
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 1;
L_001B3D38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3D44u); set32(c.r[4], c.r[4].w[0] + 7824u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001B3D44u) [[unlikely]] return; }
L_001B3D44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3D50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001B3D50u) [[unlikely]] return; }
L_001B3D50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001B3D6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3D68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001B3D68u) [[unlikely]] return; }
L_001B3D68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B3D6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B3D80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B3F20; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 7952u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001B0000u < 16384u) { entry = entries_0024[(t - 0x001B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001B3DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3DC0u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001B3DC0u) [[unlikely]] return; }
L_001B3DC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  goto L_001B3DD8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3DD4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 465u, depth + 1u); else { c.pc = 0x001B3250u; return; } if (c.pc != 0x001B3DD4u) [[unlikely]] return; }
L_001B3DD4:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_001B3DD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B3E0C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 7856u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3E04u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B3E04u) [[unlikely]] return; }
L_001B3E04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001B3F24; } }
L_001B3E0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3E14u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x001B5C70u; return; } if (c.pc != 0x001B3E14u) [[unlikely]] return; }
L_001B3E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3E1Cu);  if (depth < kMaxDepth) unit_0025(c, 329u, depth + 1u); else { c.pc = 0x001B60E0u; return; } if (c.pc != 0x001B3E1Cu) [[unlikely]] return; }
L_001B3E1C:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001B3E38; } }
L_001B3E28:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[6], ld32((c.r[5].w[0] + 16u)));  goto L_001B3E4C; }
    set32(c.r[5], c.r[5].w[0] + 28u);
    c.budget -= 1;
L_001B3E38:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B3E28u | kUnwind; return; } goto L_001B3E28; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 1;
L_001B3E4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3E58u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 497u, depth + 1u); else { c.pc = 0x001B3630u; return; } if (c.pc != 0x001B3E58u) [[unlikely]] return; }
L_001B3E58:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_001B3E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3E68u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0024(c, 503u, depth + 1u); else { c.pc = 0x001B3710u; return; } if (c.pc != 0x001B3E68u) [[unlikely]] return; }
L_001B3E68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3F20; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_001B3E78:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3E88u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0024(c, 608u, depth + 1u); else { c.pc = 0x001B3F60u; return; } if (c.pc != 0x001B3E88u) [[unlikely]] return; }
L_001B3E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3E90u);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x001B3E90u) [[unlikely]] return; }
L_001B3E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3E98u); set32(c.r[4], 0u + 132u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001B3E98u) [[unlikely]] return; }
L_001B3E98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  goto L_001B3EB4; }
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3EB0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 614u, depth + 1u); else { c.pc = 0x001B3FC0u; return; } if (c.pc != 0x001B3EB0u) [[unlikely]] return; }
L_001B3EB0:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 1;
L_001B3EB4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_001B3EE8; }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 7904u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3EE0u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001B3EE0u) [[unlikely]] return; }
L_001B3EE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3F20; } }
L_001B3EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3EF0u);  if (depth < kMaxDepth) unit_0025(c, 68u, depth + 1u); else { c.pc = 0x001B4820u; return; } if (c.pc != 0x001B3EF0u) [[unlikely]] return; }
L_001B3EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3F20; } }
L_001B3EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3F00u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_0025(c, 73u, depth + 1u); else { c.pc = 0x001B4910u; return; } if (c.pc != 0x001B3F00u) [[unlikely]] return; }
L_001B3F00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3F20; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 6;
L_001B3F20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001B3F24:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B3F30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B3F50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3F4Cu);  if (depth < kMaxDepth) unit_0025(c, 72u, depth + 1u); else { c.pc = 0x001B48E0u; return; } if (c.pc != 0x001B3F4Cu) [[unlikely]] return; }
L_001B3F4C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B3F50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B3F60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31884u), c.r[4].w[0]);  c.pc = t; return; }
L_001B3F70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 31884u)));  c.pc = t; return; }
L_001B3F80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31880u), c.r[4].w[0]);  c.pc = t; return; }
L_001B3F90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 31880u)));  c.pc = t; return; }
L_001B3FA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 31876u)));  c.pc = t; return; }
L_001B3FB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30676u), c.r[4].w[0]);  c.pc = t; return; }
L_001B3FC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3FDCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001B3FDCu) [[unlikely]] return; }
L_001B3FDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 10736u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 9;
    [[clang::musttail]] return unit_0025(c, 1u, depth);
}

}
