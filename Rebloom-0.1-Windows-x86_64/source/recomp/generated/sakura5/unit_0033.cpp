#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0033[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    13, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 36,
    0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0,
    0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98,
    0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 145,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157,
    0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0,
    0, 177, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0,
    187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0,
    0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282,
    0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0,
    0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0,
    0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0,
    0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0,
    0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0,
    0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371,
    0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0,
    389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0,
    0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0,
    0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0,
    427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432,
    0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0,
    0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0,
    0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0,
    0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0033(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001EC000;
    case 2u: goto L_001EC014;
    case 3u: goto L_001EC024;
    case 4u: goto L_001EC054;
    case 5u: goto L_001EC068;
    case 6u: goto L_001EC098;
    case 7u: goto L_001EC0B0;
    case 8u: goto L_001EC0E0;
    case 9u: goto L_001EC0F8;
    case 10u: goto L_001EC128;
    case 11u: goto L_001EC140;
    case 12u: goto L_001EC170;
    case 13u: goto L_001EC180;
    case 14u: goto L_001EC184;
    case 15u: goto L_001EC190;
    case 16u: goto L_001EC1C0;
    case 17u: goto L_001EC204;
    case 18u: goto L_001EC22C;
    case 19u: goto L_001EC234;
    case 20u: goto L_001EC24C;
    case 21u: goto L_001EC260;
    case 22u: goto L_001EC26C;
    case 23u: goto L_001EC278;
    case 24u: goto L_001EC288;
    case 25u: goto L_001EC2A4;
    case 26u: goto L_001EC2BC;
    case 27u: goto L_001EC2D0;
    case 28u: goto L_001EC2E8;
    case 29u: goto L_001EC318;
    case 30u: goto L_001EC32C;
    case 31u: goto L_001EC340;
    case 32u: goto L_001EC350;
    case 33u: goto L_001EC35C;
    case 34u: goto L_001EC364;
    case 35u: goto L_001EC370;
    case 36u: goto L_001EC37C;
    case 37u: goto L_001EC38C;
    case 38u: goto L_001EC3A8;
    case 39u: goto L_001EC3B8;
    case 40u: goto L_001EC3D4;
    case 41u: goto L_001EC3E4;
    case 42u: goto L_001EC400;
    case 43u: goto L_001EC410;
    case 44u: goto L_001EC42C;
    case 45u: goto L_001EC43C;
    case 46u: goto L_001EC458;
    case 47u: goto L_001EC478;
    case 48u: goto L_001EC484;
    case 49u: goto L_001EC51C;
    case 50u: goto L_001EC528;
    case 51u: goto L_001EC53C;
    case 52u: goto L_001EC554;
    case 53u: goto L_001EC574;
    case 54u: goto L_001EC58C;
    case 55u: goto L_001EC5A8;
    case 56u: goto L_001EC5C4;
    case 57u: goto L_001EC5D8;
    case 58u: goto L_001EC600;
    case 59u: goto L_001EC608;
    case 60u: goto L_001EC650;
    case 61u: goto L_001EC658;
    case 62u: goto L_001EC660;
    case 63u: goto L_001EC690;
    case 64u: goto L_001EC6A0;
    case 65u: goto L_001EC6B0;
    case 66u: goto L_001EC6C4;
    case 67u: goto L_001EC6CC;
    case 68u: goto L_001EC6D8;
    case 69u: goto L_001EC6F0;
    case 70u: goto L_001EC750;
    case 71u: goto L_001EC774;
    case 72u: goto L_001EC784;
    case 73u: goto L_001EC794;
    case 74u: goto L_001EC7B0;
    case 75u: goto L_001EC7CC;
    case 76u: goto L_001EC7F8;
    case 77u: goto L_001EC82C;
    case 78u: goto L_001EC864;
    case 79u: goto L_001EC894;
    case 80u: goto L_001EC90C;
    case 81u: goto L_001EC918;
    case 82u: goto L_001EC92C;
    case 83u: goto L_001EC958;
    case 84u: goto L_001EC980;
    case 85u: goto L_001EC9A0;
    case 86u: goto L_001EC9DC;
    case 87u: goto L_001EC9EC;
    case 88u: goto L_001EC9F8;
    case 89u: goto L_001ECA20;
    case 90u: goto L_001ECA40;
    case 91u: goto L_001ECA60;
    case 92u: goto L_001ECAA0;
    case 93u: goto L_001ECABC;
    case 94u: goto L_001ECAE0;
    case 95u: goto L_001ECAF8;
    case 96u: goto L_001ECB20;
    case 97u: goto L_001ECB40;
    case 98u: goto L_001ECB7C;
    case 99u: goto L_001ECB88;
    case 100u: goto L_001ECBA0;
    case 101u: goto L_001ECBC0;
    case 102u: goto L_001ECBE0;
    case 103u: goto L_001ECC04;
    case 104u: goto L_001ECC38;
    case 105u: goto L_001ECC54;
    case 106u: goto L_001ECC80;
    case 107u: goto L_001ECCB0;
    case 108u: goto L_001ECCD8;
    case 109u: goto L_001ECCFC;
    case 110u: goto L_001ECD24;
    case 111u: goto L_001ECD44;
    case 112u: goto L_001ECD6C;
    case 113u: goto L_001ECD90;
    case 114u: goto L_001ECDE0;
    case 115u: goto L_001ECDEC;
    case 116u: goto L_001ECE08;
    case 117u: goto L_001ECE30;
    case 118u: goto L_001ECE48;
    case 119u: goto L_001ECE54;
    case 120u: goto L_001ECE70;
    case 121u: goto L_001ECE84;
    case 122u: goto L_001ECE8C;
    case 123u: goto L_001ECEAC;
    case 124u: goto L_001ECEC0;
    case 125u: goto L_001ECF14;
    case 126u: goto L_001ECF20;
    case 127u: goto L_001ECF38;
    case 128u: goto L_001ECF6C;
    case 129u: goto L_001ECFBC;
    case 130u: goto L_001ED03C;
    case 131u: goto L_001ED048;
    case 132u: goto L_001ED060;
    case 133u: goto L_001ED088;
    case 134u: goto L_001ED0AC;
    case 135u: goto L_001ED0C0;
    case 136u: goto L_001ED134;
    case 137u: goto L_001ED16C;
    case 138u: goto L_001ED1BC;
    case 139u: goto L_001ED29C;
    case 140u: goto L_001ED2C4;
    case 141u: goto L_001ED2E0;
    case 142u: goto L_001ED330;
    case 143u: goto L_001ED358;
    case 144u: goto L_001ED370;
    case 145u: goto L_001ED37C;
    case 146u: goto L_001ED3AC;
    case 147u: goto L_001ED3C0;
    case 148u: goto L_001ED3D0;
    case 149u: goto L_001ED414;
    case 150u: goto L_001ED420;
    case 151u: goto L_001ED438;
    case 152u: goto L_001ED440;
    case 153u: goto L_001ED464;
    case 154u: goto L_001ED480;
    case 155u: goto L_001ED4D4;
    case 156u: goto L_001ED4E8;
    case 157u: goto L_001ED4FC;
    case 158u: goto L_001ED520;
    case 159u: goto L_001ED548;
    case 160u: goto L_001ED560;
    case 161u: goto L_001ED580;
    case 162u: goto L_001ED598;
    case 163u: goto L_001ED5AC;
    case 164u: goto L_001ED5BC;
    case 165u: goto L_001ED5D0;
    case 166u: goto L_001ED5FC;
    case 167u: goto L_001ED608;
    case 168u: goto L_001ED620;
    case 169u: goto L_001ED640;
    case 170u: goto L_001ED660;
    case 171u: goto L_001ED680;
    case 172u: goto L_001ED690;
    case 173u: goto L_001ED6C8;
    case 174u: goto L_001ED6D0;
    case 175u: goto L_001ED6E0;
    case 176u: goto L_001ED6F8;
    case 177u: goto L_001ED704;
    case 178u: goto L_001ED70C;
    case 179u: goto L_001ED724;
    case 180u: goto L_001ED73C;
    case 181u: goto L_001ED748;
    case 182u: goto L_001ED788;
    case 183u: goto L_001ED7A8;
    case 184u: goto L_001ED7C0;
    case 185u: goto L_001ED7FC;
    case 186u: goto L_001ED874;
    case 187u: goto L_001ED880;
    case 188u: goto L_001ED890;
    case 189u: goto L_001ED8B4;
    case 190u: goto L_001ED8BC;
    case 191u: goto L_001ED9A0;
    case 192u: goto L_001ED9B8;
    case 193u: goto L_001EDA34;
    case 194u: goto L_001EDA3C;
    case 195u: goto L_001EDA4C;
    case 196u: goto L_001EDA60;
    case 197u: goto L_001EDA94;
    case 198u: goto L_001EDAAC;
    case 199u: goto L_001EDB98;
    case 200u: goto L_001EDBAC;
    case 201u: goto L_001EDBB4;
    case 202u: goto L_001EDBBC;
    case 203u: goto L_001EDBD0;
    case 204u: goto L_001EDBEC;
    case 205u: goto L_001EDC00;
    case 206u: goto L_001EDC18;
    case 207u: goto L_001EDC34;
    case 208u: goto L_001EDC50;
    case 209u: goto L_001EDC80;
    case 210u: goto L_001EDC98;
    case 211u: goto L_001EDCB0;
    case 212u: goto L_001EDD8C;
    case 213u: goto L_001EDD9C;
    case 214u: goto L_001EDDA8;
    case 215u: goto L_001EDDC8;
    case 216u: goto L_001EDDE0;
    case 217u: goto L_001EDDF8;
    case 218u: goto L_001EDE30;
    case 219u: goto L_001EDE60;
    case 220u: goto L_001EDE78;
    case 221u: goto L_001EDE90;
    case 222u: goto L_001EDED0;
    case 223u: goto L_001EDFB0;
    case 224u: goto L_001EDFD8;
    case 225u: goto L_001EDFE0;
    case 226u: goto L_001EE004;
    case 227u: goto L_001EE020;
    case 228u: goto L_001EE04C;
    case 229u: goto L_001EE080;
    case 230u: goto L_001EE09C;
    case 231u: goto L_001EE0C8;
    case 232u: goto L_001EE0E4;
    case 233u: goto L_001EE114;
    case 234u: goto L_001EE124;
    case 235u: goto L_001EE158;
    case 236u: goto L_001EE168;
    case 237u: goto L_001EE19C;
    case 238u: goto L_001EE1AC;
    case 239u: goto L_001EE1E0;
    case 240u: goto L_001EE1F0;
    case 241u: goto L_001EE224;
    case 242u: goto L_001EE234;
    case 243u: goto L_001EE268;
    case 244u: goto L_001EE290;
    case 245u: goto L_001EE2BC;
    case 246u: goto L_001EE2CC;
    case 247u: goto L_001EE2F8;
    case 248u: goto L_001EE314;
    case 249u: goto L_001EE330;
    case 250u: goto L_001EE344;
    case 251u: goto L_001EE360;
    case 252u: goto L_001EE374;
    case 253u: goto L_001EE390;
    case 254u: goto L_001EE3A4;
    case 255u: goto L_001EE3C0;
    case 256u: goto L_001EE3D4;
    case 257u: goto L_001EE3F0;
    case 258u: goto L_001EE404;
    case 259u: goto L_001EE420;
    case 260u: goto L_001EE444;
    case 261u: goto L_001EE45C;
    case 262u: goto L_001EE470;
    case 263u: goto L_001EE4AC;
    case 264u: goto L_001EE4C8;
    case 265u: goto L_001EE4E0;
    case 266u: goto L_001EE4F4;
    case 267u: goto L_001EE514;
    case 268u: goto L_001EE540;
    case 269u: goto L_001EE570;
    case 270u: goto L_001EE5A0;
    case 271u: goto L_001EE5A8;
    case 272u: goto L_001EE5C0;
    case 273u: goto L_001EE5D4;
    case 274u: goto L_001EE650;
    case 275u: goto L_001EE670;
    case 276u: goto L_001EE684;
    case 277u: goto L_001EE698;
    case 278u: goto L_001EE6AC;
    case 279u: goto L_001EE6C0;
    case 280u: goto L_001EE6D0;
    case 281u: goto L_001EE6E8;
    case 282u: goto L_001EE6FC;
    case 283u: goto L_001EE720;
    case 284u: goto L_001EE738;
    case 285u: goto L_001EE74C;
    case 286u: goto L_001EE760;
    case 287u: goto L_001EE778;
    case 288u: goto L_001EE78C;
    case 289u: goto L_001EE7A0;
    case 290u: goto L_001EE7B8;
    case 291u: goto L_001EE7CC;
    case 292u: goto L_001EE7E0;
    case 293u: goto L_001EE7F8;
    case 294u: goto L_001EE80C;
    case 295u: goto L_001EE820;
    case 296u: goto L_001EE830;
    case 297u: goto L_001EE840;
    case 298u: goto L_001EE850;
    case 299u: goto L_001EE8A0;
    case 300u: goto L_001EE8F8;
    case 301u: goto L_001EE910;
    case 302u: goto L_001EE950;
    case 303u: goto L_001EE99C;
    case 304u: goto L_001EE9B8;
    case 305u: goto L_001EE9D0;
    case 306u: goto L_001EEA04;
    case 307u: goto L_001EEA20;
    case 308u: goto L_001EEA40;
    case 309u: goto L_001EEA50;
    case 310u: goto L_001EEA9C;
    case 311u: goto L_001EEABC;
    case 312u: goto L_001EEADC;
    case 313u: goto L_001EEB04;
    case 314u: goto L_001EEB14;
    case 315u: goto L_001EEB38;
    case 316u: goto L_001EEB40;
    case 317u: goto L_001EEB78;
    case 318u: goto L_001EEB8C;
    case 319u: goto L_001EEBA0;
    case 320u: goto L_001EEBB4;
    case 321u: goto L_001EEBC0;
    case 322u: goto L_001EEC10;
    case 323u: goto L_001EEC34;
    case 324u: goto L_001EEC40;
    case 325u: goto L_001EEC50;
    case 326u: goto L_001EEC70;
    case 327u: goto L_001EECA0;
    case 328u: goto L_001EECB0;
    case 329u: goto L_001EECD0;
    case 330u: goto L_001EED10;
    case 331u: goto L_001EED20;
    case 332u: goto L_001EED40;
    case 333u: goto L_001EED8C;
    case 334u: goto L_001EEDA0;
    case 335u: goto L_001EEDC0;
    case 336u: goto L_001EEE18;
    case 337u: goto L_001EEE30;
    case 338u: goto L_001EEE50;
    case 339u: goto L_001EEEB4;
    case 340u: goto L_001EEEC0;
    case 341u: goto L_001EEED8;
    case 342u: goto L_001EEEF0;
    case 343u: goto L_001EEF20;
    case 344u: goto L_001EEF40;
    case 345u: goto L_001EEF5C;
    case 346u: goto L_001EEF70;
    case 347u: goto L_001EEF88;
    case 348u: goto L_001EEFA8;
    case 349u: goto L_001EEFB4;
    case 350u: goto L_001EEFC4;
    case 351u: goto L_001EEFD8;
    case 352u: goto L_001EEFE4;
    case 353u: goto L_001EF030;
    case 354u: goto L_001EF06C;
    case 355u: goto L_001EF088;
    case 356u: goto L_001EF098;
    case 357u: goto L_001EF0A4;
    case 358u: goto L_001EF0BC;
    case 359u: goto L_001EF0E0;
    case 360u: goto L_001EF124;
    case 361u: goto L_001EF14C;
    case 362u: goto L_001EF164;
    case 363u: goto L_001EF170;
    case 364u: goto L_001EF188;
    case 365u: goto L_001EF1B0;
    case 366u: goto L_001EF1D0;
    case 367u: goto L_001EF1E0;
    case 368u: goto L_001EF1F0;
    case 369u: goto L_001EF290;
    case 370u: goto L_001EF2C4;
    case 371u: goto L_001EF2FC;
    case 372u: goto L_001EF310;
    case 373u: goto L_001EF320;
    case 374u: goto L_001EF340;
    case 375u: goto L_001EF368;
    case 376u: goto L_001EF378;
    case 377u: goto L_001EF3E0;
    case 378u: goto L_001EF40C;
    case 379u: goto L_001EF444;
    case 380u: goto L_001EF470;
    case 381u: goto L_001EF49C;
    case 382u: goto L_001EF4D8;
    case 383u: goto L_001EF510;
    case 384u: goto L_001EF52C;
    case 385u: goto L_001EF558;
    case 386u: goto L_001EF584;
    case 387u: goto L_001EF5A0;
    case 388u: goto L_001EF5F4;
    case 389u: goto L_001EF600;
    case 390u: goto L_001EF618;
    case 391u: goto L_001EF630;
    case 392u: goto L_001EF64C;
    case 393u: goto L_001EF6A0;
    case 394u: goto L_001EF6CC;
    case 395u: goto L_001EF6D8;
    case 396u: goto L_001EF6F0;
    case 397u: goto L_001EF710;
    case 398u: goto L_001EF73C;
    case 399u: goto L_001EF744;
    case 400u: goto L_001EF7B0;
    case 401u: goto L_001EF7BC;
    case 402u: goto L_001EF7E0;
    case 403u: goto L_001EF7E8;
    case 404u: goto L_001EF810;
    case 405u: goto L_001EF828;
    case 406u: goto L_001EF854;
    case 407u: goto L_001EF868;
    case 408u: goto L_001EF870;
    case 409u: goto L_001EF8A0;
    case 410u: goto L_001EF8C0;
    case 411u: goto L_001EF8CC;
    case 412u: goto L_001EF8E0;
    case 413u: goto L_001EF8E8;
    case 414u: goto L_001EF910;
    case 415u: goto L_001EF944;
    case 416u: goto L_001EF978;
    case 417u: goto L_001EF984;
    case 418u: goto L_001EF994;
    case 419u: goto L_001EF9E0;
    case 420u: goto L_001EF9F8;
    case 421u: goto L_001EFA10;
    case 422u: goto L_001EFA50;
    case 423u: goto L_001EFA80;
    case 424u: goto L_001EFA98;
    case 425u: goto L_001EFAB0;
    case 426u: goto L_001EFAF4;
    case 427u: goto L_001EFB00;
    case 428u: goto L_001EFB18;
    case 429u: goto L_001EFB30;
    case 430u: goto L_001EFB40;
    case 431u: goto L_001EFB60;
    case 432u: goto L_001EFB7C;
    case 433u: goto L_001EFB90;
    case 434u: goto L_001EFBA0;
    case 435u: goto L_001EFBB4;
    case 436u: goto L_001EFC00;
    case 437u: goto L_001EFC4C;
    case 438u: goto L_001EFC5C;
    case 439u: goto L_001EFC74;
    case 440u: goto L_001EFC90;
    case 441u: goto L_001EFCD0;
    case 442u: goto L_001EFCF0;
    case 443u: goto L_001EFD0C;
    case 444u: goto L_001EFD60;
    case 445u: goto L_001EFD98;
    case 446u: goto L_001EFDB0;
    case 447u: goto L_001EFDD8;
    case 448u: goto L_001EFE00;
    case 449u: goto L_001EFE30;
    case 450u: goto L_001EFE8C;
    case 451u: goto L_001EFE94;
    case 452u: goto L_001EFEC8;
    case 453u: goto L_001EFED0;
    case 454u: goto L_001EFF04;
    case 455u: goto L_001EFF34;
    case 456u: goto L_001EFF64;
    case 457u: goto L_001EFF84;
    case 458u: goto L_001EFFAC;
    case 459u: goto L_001EFFB4;
    case 460u: goto L_001EFFC8;
    default: bad_entry(c, 0x001EC000u); return;
    }
L_001EC000:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EC014; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC014u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EC014u) [[unlikely]] return; }
L_001EC014:
    st32((c.r[22].w[0] + 8u), 0u);
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC024u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EC024u) [[unlikely]] return; }
L_001EC024:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EC054; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EC054; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC054u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EC054u) [[unlikely]] return; }
L_001EC054:
    st32((c.r[22].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[16], ld32((c.r[2].w[0] + 356u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC068u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EC068u) [[unlikely]] return; }
L_001EC068:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EC098; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EC098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC098u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EC098u) [[unlikely]] return; }
L_001EC098:
    st32((c.r[22].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 348u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC0B0u); c.r[16].d[0] = c.r[2].d[0] & 32768ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EC0B0u) [[unlikely]] return; }
L_001EC0B0:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EC0E0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EC0E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC0E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EC0E0u) [[unlikely]] return; }
L_001EC0E0:
    st32((c.r[22].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 348u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC0F8u); c.r[16].d[0] = c.r[2].d[0] & 16384ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EC0F8u) [[unlikely]] return; }
L_001EC0F8:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EC128; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EC128; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC128u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EC128u) [[unlikely]] return; }
L_001EC128:
    st32((c.r[22].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 348u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC140u); c.r[16].d[0] = c.r[2].d[0] & 8192ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EC140u) [[unlikely]] return; }
L_001EC140:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EC170; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EC170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC170u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EC170u) [[unlikely]] return; }
L_001EC170:
    st32((c.r[22].w[0] + 8u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC180u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 225u, depth + 1u); else { c.pc = 0x001E1C40u; return; } if (c.pc != 0x001EC180u) [[unlikely]] return; }
L_001EC180:
    set32(c.r[18], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_001EC184:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EBF4Cu | kUnwind; return; } [[clang::musttail]] return unit_0032(c, 441u, depth); } }
    set32(c.r[20], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 1;
L_001EC190:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EBE38u | kUnwind; return; } [[clang::musttail]] return unit_0032(c, 432u, depth); } }
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
L_001EC1C0:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[29].w[0] + 352u);
    st32((c.r[29].w[0] + 360u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC204u); st32((c.r[29].w[0] + 364u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x001EC204u) [[unlikely]] return; }
L_001EC204:
    set32(c.r[4], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001EC304; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001EC224; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_001EC5DC; } }
L_001EC224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC22Cu);  if (depth < kMaxDepth) unit_0032(c, 421u, depth + 1u); else { c.pc = 0x001EBCC0u; return; } if (c.pc != 0x001EC22Cu) [[unlikely]] return; }
L_001EC22C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC234u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 420u, depth + 1u); else { c.pc = 0x001EBCB0u; return; } if (c.pc != 0x001EC234u) [[unlikely]] return; }
L_001EC234:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 312u);
    set32(c.r[5], c.r[29].w[0] + 360u);
    set32(c.r[6], c.r[6].w[0] + 23714u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC24Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001EC24Cu) [[unlikely]] return; }
L_001EC24C:
    set32(c.r[3], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    st32((c.r[29].w[0] + 352u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 356u), c.r[2].w[0]);  if (t) { goto L_001EC2E0; } }
L_001EC260:
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC26Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001EC26Cu) [[unlikely]] return; }
L_001EC26C:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC278u); set32(c.r[5], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EC278u) [[unlikely]] return; }
L_001EC278:
    set32(c.r[16], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC288u); set32(c.r[5], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EC288u) [[unlikely]] return; }
L_001EC288:
    set32(c.r[3], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[5], c.r[29].w[0] + 344u);
    st32((c.r[29].w[0] + 344u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC2A4u); st32((c.r[29].w[0] + 348u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EC2A4u) [[unlikely]] return; }
L_001EC2A4:
    set32(c.r[7], ld32((c.r[29].w[0] + 292u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x011F0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC2BCu); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002C(c, 43u, depth + 1u); else { c.pc = 0x001D06E0u; return; } if (c.pc != 0x001EC2BCu) [[unlikely]] return; }
L_001EC2BC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 280u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC2D0u); set32(c.r[6], c.r[6].w[0] + 23714u);  if (depth < kMaxDepth) unit_0022(c, 125u, depth + 1u); else { c.pc = 0x001A9410u; return; } if (c.pc != 0x001EC2D0u) [[unlikely]] return; }
L_001EC2D0:
    set32(c.r[3], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    st32((c.r[29].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 356u), c.r[2].w[0]);
    c.budget -= 4;
L_001EC2E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC2E8u); set32(c.r[4], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001EC2E8u) [[unlikely]] return; }
L_001EC2E8:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 344u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC260u | kUnwind; return; } goto L_001EC260; }
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001EC5D8; } }
L_001EC304:
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[29].w[0] + 360u);
    set32(c.r[6], c.r[6].w[0] + 23714u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC318u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001EC318u) [[unlikely]] return; }
L_001EC318:
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    st32((c.r[29].w[0] + 352u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 356u), c.r[2].w[0]);  if (t) { goto L_001EC584; } }
L_001EC32C:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    set32(c.r[6], c.r[6].w[0] + 23725u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC340u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001EC340u) [[unlikely]] return; }
L_001EC340:
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC350u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001EC350u) [[unlikely]] return; }
L_001EC350:
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC35Cu); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EC35Cu) [[unlikely]] return; }
L_001EC35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[29].w[0] + 268u)));  if (t) { goto L_001EC54C; } }
L_001EC364:
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC370u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001EC370u) [[unlikely]] return; }
L_001EC370:
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC37Cu); set32(c.r[5], c.r[29].w[0] + 328u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EC37Cu) [[unlikely]] return; }
L_001EC37C:
    set32(c.r[17], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC38Cu); set32(c.r[5], c.r[29].w[0] + 328u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EC38Cu) [[unlikely]] return; }
L_001EC38C:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], c.r[29].w[0] + 232u);
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[5], c.r[29].w[0] + 328u);
    st32((c.r[29].w[0] + 328u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC3A8u); st32((c.r[29].w[0] + 332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EC3A8u) [[unlikely]] return; }
L_001EC3A8:
    set32(c.r[19], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC3B8u); set32(c.r[5], c.r[29].w[0] + 328u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EC3B8u) [[unlikely]] return; }
L_001EC3B8:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[4], c.r[29].w[0] + 216u);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[5], c.r[29].w[0] + 328u);
    st32((c.r[29].w[0] + 328u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC3D4u); st32((c.r[29].w[0] + 332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EC3D4u) [[unlikely]] return; }
L_001EC3D4:
    set32(c.r[18], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC3E4u); set32(c.r[5], c.r[29].w[0] + 328u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EC3E4u) [[unlikely]] return; }
L_001EC3E4:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[5], c.r[29].w[0] + 328u);
    st32((c.r[29].w[0] + 328u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC400u); st32((c.r[29].w[0] + 332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EC400u) [[unlikely]] return; }
L_001EC400:
    set32(c.r[16], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC410u); set32(c.r[5], c.r[29].w[0] + 328u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EC410u) [[unlikely]] return; }
L_001EC410:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[29].w[0] + 184u);
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[5], c.r[29].w[0] + 328u);
    st32((c.r[29].w[0] + 328u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC42Cu); st32((c.r[29].w[0] + 332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EC42Cu) [[unlikely]] return; }
L_001EC42C:
    set32(c.r[22], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC43Cu); set32(c.r[5], c.r[29].w[0] + 328u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EC43Cu) [[unlikely]] return; }
L_001EC43C:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[5], c.r[29].w[0] + 328u);
    st32((c.r[29].w[0] + 328u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC458u); st32((c.r[29].w[0] + 332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EC458u) [[unlikely]] return; }
L_001EC458:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[29].w[0] + 172u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], 0u + 5u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC478u); set32(c.r[9], 0u + 8u);  if (depth < kMaxDepth) unit_0032(c, 393u, depth + 1u); else { c.pc = 0x001EB8D0u; return; } if (c.pc != 0x001EC478u) [[unlikely]] return; }
L_001EC478:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC484u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 60u, depth + 1u); else { c.pc = 0x001EC650u; return; } if (c.pc != 0x001EC484u) [[unlikely]] return; }
L_001EC484:
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EC4A4; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 348u));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 348u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001EC4B4; } }
L_001EC4A4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 348u));
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    st16((c.r[3].w[0] + 348u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001EC4B4:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_001EC4D0; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 348u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 348u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001EC4DC; } }
L_001EC4D0:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 348u));
    c.r[2].d[0] = c.r[2].d[0] & 49151ull;
    st16((c.r[3].w[0] + 348u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001EC4DC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_001EC4F8; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 348u));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 348u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001EC504; } }
L_001EC4F8:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 348u));
    c.r[2].d[0] = c.r[2].d[0] & 57343ull;
    st16((c.r[3].w[0] + 348u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001EC504:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    set32(c.r[6], c.r[6].w[0] + 23733u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC51Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001EC51Cu) [[unlikely]] return; }
L_001EC51C:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 320u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC528u); set32(c.r[5], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0030(c, 264u, depth + 1u); else { c.pc = 0x001E2170u; return; } if (c.pc != 0x001EC528u) [[unlikely]] return; }
L_001EC528:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC53Cu); set32(c.r[6], c.r[6].w[0] + 23725u);  if (depth < kMaxDepth) unit_0022(c, 125u, depth + 1u); else { c.pc = 0x001A9410u; return; } if (c.pc != 0x001EC53Cu) [[unlikely]] return; }
L_001EC53C:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    st32((c.r[29].w[0] + 336u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    c.budget -= 4;
L_001EC54C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC554u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001EC554u) [[unlikely]] return; }
L_001EC554:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 328u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC364u | kUnwind; return; } goto L_001EC364; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC574u); set32(c.r[6], c.r[6].w[0] + 23714u);  if (depth < kMaxDepth) unit_0022(c, 125u, depth + 1u); else { c.pc = 0x001A9410u; return; } if (c.pc != 0x001EC574u) [[unlikely]] return; }
L_001EC574:
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    st32((c.r[29].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 356u), c.r[2].w[0]);
    c.budget -= 4;
L_001EC584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC58Cu); set32(c.r[4], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001EC58Cu) [[unlikely]] return; }
L_001EC58C:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC32Cu | kUnwind; return; } goto L_001EC32C; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC5A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001EC5A8u) [[unlikely]] return; }
L_001EC5A8:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[5], c.r[29].w[0] + 352u);
    st32((c.r[29].w[0] + 352u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC5C4u); st32((c.r[29].w[0] + 356u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EC5C4u) [[unlikely]] return; }
L_001EC5C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC5D8u); st32((c.r[21].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001EC5D8u) [[unlikely]] return; }
L_001EC5D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_001EC5DC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_001EC600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 152u)));  if (t) { goto L_001EC634; } }
L_001EC608:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  goto L_001EC634; }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EC62C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EC62C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC63C; } }
L_001EC634:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC608u | kUnwind; return; } goto L_001EC608; }
L_001EC63C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EC650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 152u)));  if (t) { goto L_001EC67C; } }
L_001EC658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_001EC670; } }
L_001EC660:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 12u)));  goto L_001EC670; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC688; } }
L_001EC670:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC660u | kUnwind; return; } goto L_001EC660; }
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_001EC67C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC658u | kUnwind; return; } goto L_001EC658; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EC688:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EC690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC6A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001EC6A0u) [[unlikely]] return; }
L_001EC6A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EC6B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC6C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 421u, depth + 1u); else { c.pc = 0x001EBCC0u; return; } if (c.pc != 0x001EC6C4u) [[unlikely]] return; }
L_001EC6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC6CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 420u, depth + 1u); else { c.pc = 0x001EBCB0u; return; } if (c.pc != 0x001EC6CCu) [[unlikely]] return; }
L_001EC6CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC6D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001EC6D8u) [[unlikely]] return; }
L_001EC6D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EC6F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[6], ld32((c.r[20].w[0] + 148u)));  goto L_001EC8C0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 52u)));  goto L_001EC734; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001EC95C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 1;
L_001EC734:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 56u)));  goto L_001EC748; }
    st32((c.r[20].w[0] + 60u), 0u);
    set32(c.r[5], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 2;
L_001EC748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC750u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 58u, depth + 1u); else { c.pc = 0x001EC600u; return; } if (c.pc != 0x001EC750u) [[unlikely]] return; }
L_001EC750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_001EC77C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC774u); st32((c.r[20].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001EC774u) [[unlikely]] return; }
L_001EC774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC958; } }
L_001EC77C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC784u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001EC784u) [[unlikely]] return; }
L_001EC784:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 148u), c.r[2].w[0]);  goto L_001EC798; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC794u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 84u, depth + 1u); else { c.pc = 0x001EC980u; return; } if (c.pc != 0x001EC794u) [[unlikely]] return; }
L_001EC794:
    st32((c.r[20].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 1;
L_001EC798:
    set32(c.r[4], 0u + 432u);
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC7B0u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001EC7B0u) [[unlikely]] return; }
L_001EC7B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 148u)));  goto L_001EC834; }
    set32(c.r[6], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC7CCu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002B(c, 254u, depth + 1u); else { c.pc = 0x001CE000u; return; } if (c.pc != 0x001EC7CCu) [[unlikely]] return; }
L_001EC7CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[19], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 120u);  if (t) { goto L_001EC7E8; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 12u);  if (t) { goto L_001EC7EC; } }
L_001EC7E8:
    set32(c.r[16], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001EC7EC:
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC7F8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002B(c, 270u, depth + 1u); else { c.pc = 0x001CE260u; return; } if (c.pc != 0x001EC7F8u) [[unlikely]] return; }
L_001EC7F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[18], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 116u);  if (t) { goto L_001EC814; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 12u);  if (t) { goto L_001EC818; } }
L_001EC814:
    set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001EC818:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC82Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 289u, depth + 1u); else { c.pc = 0x00207460u; return; } if (c.pc != 0x001EC82Cu) [[unlikely]] return; }
L_001EC82C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 148u)));
    c.budget -= 2;
L_001EC834:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[3].w[0] + 4u), c.r[17].w[0]);  if (t) { goto L_001EC864; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EC864; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001EC864; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC864u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EC864u) [[unlikely]] return; }
L_001EC864:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 148u)));  goto L_001EC898; }
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EC894; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001EC894; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC894u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EC894u) [[unlikely]] return; }
L_001EC894:
    set32(c.r[3], ld32((c.r[20].w[0] + 148u)));
    c.budget -= 1;
L_001EC898:
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 148u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 148u)));
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 148u)));
    c.budget -= 10;
L_001EC8C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EC958; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[6].w[0])));  goto L_001EC8FC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 152u)));  goto L_001EC93C; }
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 1;
L_001EC8FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC90Cu); set32(c.r[5], c.r[5].w[0] + 23739u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001EC90Cu) [[unlikely]] return; }
L_001EC90C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC918u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001EC918u) [[unlikely]] return; }
L_001EC918:
    set32(c.r[4], ld32((c.r[20].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EC958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC92Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 85u, depth + 1u); else { c.pc = 0x001EC9A0u; return; } if (c.pc != 0x001EC92Cu) [[unlikely]] return; }
L_001EC92C:
    st32((c.r[20].w[0] + 148u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC958; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 152u)));
    c.budget -= 1;
L_001EC93C:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[6].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 148u)));
    st32((c.r[20].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC958u); st32((c.r[20].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001EC958u) [[unlikely]] return; }
L_001EC958:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001EC95C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001EC980:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), 0u);  c.pc = t; return; }
L_001EC9A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001ECA20; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  goto L_001EC9FC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC9DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EC9DCu) [[unlikely]] return; }
L_001EC9DC:
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC9FC; } }
L_001EC9EC:
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC9F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 91u, depth + 1u); else { c.pc = 0x001ECA60u; return; } if (c.pc != 0x001EC9F8u) [[unlikely]] return; }
L_001EC9F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EC9FC:
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC9ECu | kUnwind; return; } goto L_001EC9EC; } }
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_001ECA24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001ECA20u) [[unlikely]] return; }
L_001ECA20:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001ECA24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001ECA40:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_001ECA60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001ECABC; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001ECAA8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0]), 0u);  goto L_001ECAA4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECAA0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ECAA0u) [[unlikely]] return; }
L_001ECAA0:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_001ECAA4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001ECAA8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001ECAC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECABCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001ECABCu) [[unlikely]] return; }
L_001ECABC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001ECAC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ECAE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 288u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECAF8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001ECAF8u) [[unlikely]] return; }
L_001ECAF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 15216u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 23760u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECB20u); st32((c.r[16].w[0] + 160u), 0u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001ECB20u) [[unlikely]] return; }
L_001ECB20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ECB40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001ECBA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 15216u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001ECB80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECB7Cu);  if (depth < kMaxDepth) unit_0026(c, 14u, depth + 1u); else { c.pc = 0x001B8100u; return; } if (c.pc != 0x001ECB7Cu) [[unlikely]] return; }
L_001ECB7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001ECB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECB88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001ECB88u) [[unlikely]] return; }
L_001ECB88:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001ECBA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECBA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001ECBA0u) [[unlikely]] return; }
L_001ECBA0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001ECBA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ECBC0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_001ECBD4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 1;
L_001ECBD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ECBE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECC04u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001ECC04u) [[unlikely]] return; }
L_001ECC04:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001ECC38; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001ECC38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECC38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001ECC38u) [[unlikely]] return; }
L_001ECC38:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_001ECC90; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ECC8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECC54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001ECC54u) [[unlikely]] return; }
L_001ECC54:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001ECC80; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001ECC70; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECC80; } }
L_001ECC70:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECC80u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001ECC80u) [[unlikely]] return; }
L_001ECC80:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 152u)));  if (t) { goto L_001ECC94; } }
L_001ECC8C:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001ECC90:
    set32(c.r[2], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 1;
L_001ECC94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 31828u)));
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECCB0u); st32((c.r[29].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001ECCB0u) [[unlikely]] return; }
L_001ECCB0:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[18].w[0] + 156u));  goto L_001ECCDC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001ECCD8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECCD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001ECCD8u) [[unlikely]] return; }
L_001ECCD8:
    c.f[0] = ld32((c.r[18].w[0] + 156u));
    c.budget -= 1;
L_001ECCDC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], ld32((c.r[28].w[0] - 31824u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECCFCu); st32((c.r[29].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001ECCFCu) [[unlikely]] return; }
L_001ECCFC:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));  goto L_001ECD28; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001ECD24; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECD24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001ECD24u) [[unlikely]] return; }
L_001ECD24:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));
    c.budget -= 1;
L_001ECD28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 31820u)));
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECD44u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001ECD44u) [[unlikely]] return; }
L_001ECD44:
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001ECD70; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001ECD6C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECD6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001ECD6Cu) [[unlikely]] return; }
L_001ECD6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001ECD70:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001ECD90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001ECE68; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  goto L_001ECE20; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001ECDC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001ECEB0; } }
L_001ECDC8:
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 32768ull;  goto L_001ECDF4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECDE0u); set32(c.r[5], c.r[5].w[0] + 23979u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001ECDE0u) [[unlikely]] return; }
L_001ECDE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECDECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001ECDECu) [[unlikely]] return; }
L_001ECDEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECEAC; } }
L_001ECDF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_001ECE18; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECE08u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002C(c, 35u, depth + 1u); else { c.pc = 0x001D0600u; return; } if (c.pc != 0x001ECE08u) [[unlikely]] return; }
L_001ECE08:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001ECEAC; } }
L_001ECE18:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 2;
L_001ECE20:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECE30u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 13u, depth + 1u); else { c.pc = 0x001B80E0u; return; } if (c.pc != 0x001ECE30u) [[unlikely]] return; }
L_001ECE30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_001ECE5C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECE48u); set32(c.r[5], c.r[5].w[0] + 23989u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001ECE48u) [[unlikely]] return; }
L_001ECE48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECE54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001ECE54u) [[unlikely]] return; }
L_001ECE54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECEAC; } }
L_001ECE5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
L_001ECE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECE70u); set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  if (depth < kMaxDepth) unit_0026(c, 16u, depth + 1u); else { c.pc = 0x001B8120u; return; } if (c.pc != 0x001ECE70u) [[unlikely]] return; }
L_001ECE70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ECEAC; } }
    c.f[12] = ld32((c.r[16].w[0] + 156u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECE84u); set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  if (depth < kMaxDepth) unit_0026(c, 17u, depth + 1u); else { c.pc = 0x001B8130u; return; } if (c.pc != 0x001ECE84u) [[unlikely]] return; }
L_001ECE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECE8Cu); set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  if (depth < kMaxDepth) unit_0026(c, 15u, depth + 1u); else { c.pc = 0x001B8110u; return; } if (c.pc != 0x001ECE8Cu) [[unlikely]] return; }
L_001ECE8C:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECEACu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001ECEACu) [[unlikely]] return; }
L_001ECEAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001ECEB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ECEC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001ED080; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  goto L_001ECF50; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001ECEFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001ED0B0; } }
L_001ECEFC:
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 32768ull;  goto L_001ECF28; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECF14u); set32(c.r[5], c.r[5].w[0] + 23979u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001ECF14u) [[unlikely]] return; }
L_001ECF14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECF20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001ECF20u) [[unlikely]] return; }
L_001ECF20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED0AC; } }
L_001ECF28:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 148u), 0u);  goto L_001ECF40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECF38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001ECF38u) [[unlikely]] return; }
L_001ECF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED0AC; } }
L_001ECF40:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
L_001ECF50:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_001ECF60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[16].w[0] + 56u));  if (t) { goto L_001ECFBC; } }
L_001ECF60:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECF6Cu); set32(c.r[6], 0u + 26u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001ECF6Cu) [[unlikely]] return; }
L_001ECF6C:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001ECF84; }
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001ECF98; } }
L_001ECF84:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001ECF94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[29].w[0] + 48u));  if (t) { goto L_001ECF98; } }
L_001ECF94:
    c.f[20] = 0u;
    c.budget -= 1;
L_001ECF98:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_001ECFC0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001ECFBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECFBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001ECFBCu) [[unlikely]] return; }
L_001ECFBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_001ECFC0:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ECFD8; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_001ECFD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001ECFF4; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001ED00C; } }
L_001ECFF4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_001ED00C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[16].w[0] + 148u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 156u));
    c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED03Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001ED03Cu) [[unlikely]] return; }
L_001ED03C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED048u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 32u, depth + 1u); else { c.pc = 0x00120400u; return; } if (c.pc != 0x001ED048u) [[unlikely]] return; }
L_001ED048:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  goto L_001ED058; }
    c.f[20] = 0u;
    set32(c.r[4], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 2;
L_001ED058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED060u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0026(c, 17u, depth + 1u); else { c.pc = 0x001B8130u; return; } if (c.pc != 0x001ED060u) [[unlikely]] return; }
L_001ED060:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ED0AC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
L_001ED080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED088u); set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  if (depth < kMaxDepth) unit_0026(c, 14u, depth + 1u); else { c.pc = 0x001B8100u; return; } if (c.pc != 0x001ED088u) [[unlikely]] return; }
L_001ED088:
    st32((c.r[16].w[0] + 160u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED0ACu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001ED0ACu) [[unlikely]] return; }
L_001ED0AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001ED0B0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001ED0C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 10;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[16].w[0] + 56u));  goto L_001ED2B4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  goto L_001ED14C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 56u));  goto L_001ED104; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001ED2C8; } }
L_001ED104:
    c.f[0] = ld32((c.r[16].w[0] + 156u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[16].w[0] + 156u), c.f[1]);  goto L_001ED128; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 148u), 0u);  goto L_001ED13C; }
    st32((c.r[16].w[0] + 156u), c.f[1]);
    c.budget -= 1;
L_001ED128:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED134u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001ED134u) [[unlikely]] return; }
L_001ED134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED2C4; } }
L_001ED13C:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
L_001ED14C:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_001ED160; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[16].w[0] + 60u));  if (t) { goto L_001ED1BC; } }
L_001ED160:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED16Cu); set32(c.r[6], 0u + 26u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001ED16Cu) [[unlikely]] return; }
L_001ED16C:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001ED184; }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001ED198; } }
L_001ED184:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001ED194; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[29].w[0] + 64u));  if (t) { goto L_001ED198; } }
L_001ED194:
    c.f[20] = 0u;
    c.budget -= 1;
L_001ED198:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_001ED1C0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001ED1BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED1BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001ED1BCu) [[unlikely]] return; }
L_001ED1BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_001ED1C0:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ED1D8; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_001ED1D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001ED1F4; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001ED20C; } }
L_001ED1F4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_001ED20C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[16].w[0] + 148u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 156u));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001ED268; } }
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  goto L_001ED294; }
    c.f[12] = c.f[1];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001ED290; } }
L_001ED268:
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.f[12] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ED290; } }
    c.f[12] = c.f[1];
    set32(c.r[17], 0u + 1u);
    c.budget -= 2;
L_001ED290:
    set32(c.r[4], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 1;
L_001ED294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED29Cu);  if (depth < kMaxDepth) unit_0026(c, 17u, depth + 1u); else { c.pc = 0x001B8130u; return; } if (c.pc != 0x001ED29Cu) [[unlikely]] return; }
L_001ED29C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001ED2C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.budget -= 4;
L_001ED2B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED2C4u); st32((c.r[16].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001ED2C4u) [[unlikely]] return; }
L_001ED2C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001ED2C8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001ED2E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001ED3A4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  goto L_001ED348; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_001ED318; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001ED3C4; } }
L_001ED318:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_001ED340; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED330u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002C(c, 35u, depth + 1u); else { c.pc = 0x001D0600u; return; } if (c.pc != 0x001ED330u) [[unlikely]] return; }
L_001ED330:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001ED3C0; } }
L_001ED340:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 2;
L_001ED348:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED358u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 13u, depth + 1u); else { c.pc = 0x001B80E0u; return; } if (c.pc != 0x001ED358u) [[unlikely]] return; }
L_001ED358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_001ED384; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED370u); set32(c.r[5], c.r[5].w[0] + 24004u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001ED370u) [[unlikely]] return; }
L_001ED370:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED37Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001ED37Cu) [[unlikely]] return; }
L_001ED37C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED3C0; } }
L_001ED384:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 8;
L_001ED3A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED3ACu); set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  if (depth < kMaxDepth) unit_0026(c, 16u, depth + 1u); else { c.pc = 0x001B8120u; return; } if (c.pc != 0x001ED3ACu) [[unlikely]] return; }
L_001ED3AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED3C0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED3C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001ED3C0u) [[unlikely]] return; }
L_001ED3C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001ED3C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ED3D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001ED42C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_001ED3FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001ED468; } }
L_001ED3FC:
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_001ED428; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED414u); set32(c.r[5], c.r[5].w[0] + 24019u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001ED414u) [[unlikely]] return; }
L_001ED414:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED420u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001ED420u) [[unlikely]] return; }
L_001ED420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED464; } }
L_001ED428:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_001ED42C:
    c.f[12] = ld32((c.r[16].w[0] + 156u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED438u); set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  if (depth < kMaxDepth) unit_0026(c, 17u, depth + 1u); else { c.pc = 0x001B8130u; return; } if (c.pc != 0x001ED438u) [[unlikely]] return; }
L_001ED438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED440u); set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  if (depth < kMaxDepth) unit_0026(c, 15u, depth + 1u); else { c.pc = 0x001B8110u; return; } if (c.pc != 0x001ED440u) [[unlikely]] return; }
L_001ED440:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 16385u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED464u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001ED464u) [[unlikely]] return; }
L_001ED464:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001ED468:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ED480:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001ED558; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_001ED4B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001ED564; } }
L_001ED4B4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], ld32((c.r[28].w[0] - 31828u)));
    set32(c.r[5], c.r[29].w[0] + 88u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED4D4u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001ED4D4u) [[unlikely]] return; }
L_001ED4D4:
    set32(c.r[6], ld32((c.r[28].w[0] - 31824u)));
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[17], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED4E8u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001ED4E8u) [[unlikely]] return; }
L_001ED4E8:
    set32(c.r[6], ld32((c.r[28].w[0] - 31820u)));
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED4FCu); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001ED4FCu) [[unlikely]] return; }
L_001ED4FC:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 156u), c.f[20]);  if (t) { goto L_001ED528; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01200000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED520u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002C(c, 39u, depth + 1u); else { c.pc = 0x001D0660u; return; } if (c.pc != 0x001ED520u) [[unlikely]] return; }
L_001ED520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 88u)));  if (t) { goto L_001ED54C; } }
L_001ED528:
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ED548; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01200000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED548u); c.r[5].d[0] = c.r[2].d[0] | 4099ull;  if (depth < kMaxDepth) unit_002C(c, 39u, depth + 1u); else { c.pc = 0x001D0660u; return; } if (c.pc != 0x001ED548u) [[unlikely]] return; }
L_001ED548:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_001ED54C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001ED560; } }
L_001ED558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED560u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001ED560u) [[unlikely]] return; }
L_001ED560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001ED564:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001ED580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 289u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED598u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001ED598u) [[unlikely]] return; }
L_001ED598:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED5ACu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 169u, depth + 1u); else { c.pc = 0x001ED640u; return; } if (c.pc != 0x001ED5ACu) [[unlikely]] return; }
L_001ED5AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED5BCu); set32(c.r[5], c.r[5].w[0] + 24048u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001ED5BCu) [[unlikely]] return; }
L_001ED5BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ED5D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001ED620; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 15280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED5FCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 170u, depth + 1u); else { c.pc = 0x001ED660u; return; } if (c.pc != 0x001ED5FCu) [[unlikely]] return; }
L_001ED5FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED608u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001ED608u) [[unlikely]] return; }
L_001ED608:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001ED624; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED620u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001ED620u) [[unlikely]] return; }
L_001ED620:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001ED624:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ED640:
    st32((c.r[4].w[0] + 148u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_001ED660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001ED684; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED680u);  if (depth < kMaxDepth) unit_0026(c, 4u, depth + 1u); else { c.pc = 0x001B8030u; return; } if (c.pc != 0x001ED680u) [[unlikely]] return; }
L_001ED680:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001ED684:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001ED690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001ED780; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001ED6C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001ED7AC; } }
L_001ED6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED6C8u);  if (depth < kMaxDepth) unit_0033(c, 170u, depth + 1u); else { c.pc = 0x001ED660u; return; } if (c.pc != 0x001ED6C8u) [[unlikely]] return; }
L_001ED6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED6D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 169u, depth + 1u); else { c.pc = 0x001ED640u; return; } if (c.pc != 0x001ED6D0u) [[unlikely]] return; }
L_001ED6D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED6E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 536u, depth + 1u); else { c.pc = 0x001B7FF0u; return; } if (c.pc != 0x001ED6E0u) [[unlikely]] return; }
L_001ED6E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], 0u + 1u);  goto L_001ED754; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED6F8u); set32(c.r[5], c.r[5].w[0] + 24155u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001ED6F8u) [[unlikely]] return; }
L_001ED6F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED704u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001ED704u) [[unlikely]] return; }
L_001ED704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED7A8; } }
L_001ED70C:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 4;
    if (c.r[4].sd[0] < 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001ED754; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED724u);  if (depth < kMaxDepth) unit_0026(c, 2u, depth + 1u); else { c.pc = 0x001B8010u; return; } if (c.pc != 0x001ED724u) [[unlikely]] return; }
L_001ED724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED750; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED73Cu); set32(c.r[5], c.r[5].w[0] + 24155u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001ED73Cu) [[unlikely]] return; }
L_001ED73C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED748u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001ED748u) [[unlikely]] return; }
L_001ED748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED7A8; } }
L_001ED750:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001ED754:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED70Cu | kUnwind; return; } goto L_001ED70C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001ED7A8; } }
L_001ED780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED788u);  if (depth < kMaxDepth) unit_0026(c, 7u, depth + 1u); else { c.pc = 0x001B8060u; return; } if (c.pc != 0x001ED788u) [[unlikely]] return; }
L_001ED788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED7A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED7A8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001ED7A8u) [[unlikely]] return; }
L_001ED7A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001ED7AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001ED7C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EDBEC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 24112u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001EC000u < 16384u) { entry = entries_0033[(t - 0x001EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001ED7FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_001ED828; }
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  goto L_001ED834; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_001ED828:
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
L_001ED834:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0] + 60u), c.f[1]);  goto L_001ED854; }
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_001ED858; }
    st32((c.r[17].w[0] + 60u), c.f[1]);
    c.budget -= 1;
L_001ED854:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_001ED858:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001ED888; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED874u); set32(c.r[5], c.r[5].w[0] + 24171u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001ED874u) [[unlikely]] return; }
L_001ED874:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED880u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001ED880u) [[unlikely]] return; }
L_001ED880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001EDBF0; } }
L_001ED888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED890u);  if (depth < kMaxDepth) unit_0026(c, 5u, depth + 1u); else { c.pc = 0x001B8040u; return; } if (c.pc != 0x001ED890u) [[unlikely]] return; }
L_001ED890:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 148u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 9;
L_001ED8B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED8BCu);  if (depth < kMaxDepth) unit_0026(c, 10u, depth + 1u); else { c.pc = 0x001B8090u; return; } if (c.pc != 0x001ED8BCu) [[unlikely]] return; }
L_001ED8BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001ED8D8; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001ED8F4; } }
L_001ED8D8:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_001ED8F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 148u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[17].w[0] + 148u));  goto L_001ED930; }
    st32((c.r[17].w[0] + 148u), c.f[1]);
    set32(c.r[16], 0u + 1u);
    c.f[2] = ld32((c.r[17].w[0] + 148u));
    c.budget -= 3;
L_001ED930:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[3] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001ED970; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_001ED988; } }
L_001ED970:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_001ED988:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[5].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED9A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 137u, depth + 1u); else { c.pc = 0x001ACF90u; return; } if (c.pc != 0x001ED9A0u) [[unlikely]] return; }
L_001ED9A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001EDBEC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001EDBEC; } }
L_001ED9B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_001ED9D4; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001ED9EC; } }
L_001ED9D4:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 6;
L_001ED9EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[2] = ld32((c.r[17].w[0] + 148u));
    c.f[1] = 0u;
    c.f[3] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 148u), c.f[1]);  if (t) { goto L_001EDBEC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001EDBEC; } }
L_001EDA34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDA3Cu);  if (depth < kMaxDepth) unit_0026(c, 8u, depth + 1u); else { c.pc = 0x001B8070u; return; } if (c.pc != 0x001EDA3Cu) [[unlikely]] return; }
L_001EDA3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0] + 148u), 0u);  goto L_001EDA7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDA4Cu);  if (depth < kMaxDepth) unit_0030(c, 346u, depth + 1u); else { c.pc = 0x001E2E70u; return; } if (c.pc != 0x001EDA4Cu) [[unlikely]] return; }
L_001EDA4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_001EDA6C; }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDA60u); c.r[4].d[0] = c.r[2].d[0] << 32;  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x001EDA60u) [[unlikely]] return; }
L_001EDA60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EDA78; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_001EDA6C:
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EDBEC; } }
L_001EDA78:
    st32((c.r[17].w[0] + 148u), 0u);
    c.budget -= 1;
L_001EDA7C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 6;
L_001EDA94:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EDBEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDAACu);  if (depth < kMaxDepth) unit_0026(c, 10u, depth + 1u); else { c.pc = 0x001B8090u; return; } if (c.pc != 0x001EDAACu) [[unlikely]] return; }
L_001EDAAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001EDAC8; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001EDAE4; } }
L_001EDAC8:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_001EDAE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 148u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[17].w[0] + 148u));  goto L_001EDB20; }
    st32((c.r[17].w[0] + 148u), c.f[1]);
    set32(c.r[16], 0u + 1u);
    c.f[2] = ld32((c.r[17].w[0] + 148u));
    c.budget -= 3;
L_001EDB20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[3] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[17].w[0] + 60u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001EDB60; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 255u);  if (t) { goto L_001EDB78; } }
L_001EDB60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[4], 0u + 255u);
    c.budget -= 6;
L_001EDB78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] << 24);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDB98u); c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_0023(c, 137u, depth + 1u); else { c.pc = 0x001ACF90u; return; } if (c.pc != 0x001EDB98u) [[unlikely]] return; }
L_001EDB98:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001EDBEC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
L_001EDBAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDBB4u);  if (depth < kMaxDepth) unit_0026(c, 4u, depth + 1u); else { c.pc = 0x001B8030u; return; } if (c.pc != 0x001EDBB4u) [[unlikely]] return; }
L_001EDBB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDBBCu);  if (depth < kMaxDepth) unit_0026(c, 10u, depth + 1u); else { c.pc = 0x001B8090u; return; } if (c.pc != 0x001EDBBCu) [[unlikely]] return; }
L_001EDBBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_001EDBD4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDBD0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 137u, depth + 1u); else { c.pc = 0x001ACF90u; return; } if (c.pc != 0x001EDBD0u) [[unlikely]] return; }
L_001EDBD0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_001EDBD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDBECu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001EDBECu) [[unlikely]] return; }
L_001EDBEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001EDBF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EDC00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 290u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDC18u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001EDC18u) [[unlikely]] return; }
L_001EDC18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 15344u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDC34u); set32(c.r[5], c.r[5].w[0] + 24208u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001EDC34u) [[unlikely]] return; }
L_001EDC34:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EDC50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EDC98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDC80u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001EDC80u) [[unlikely]] return; }
L_001EDC80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001EDC9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDC98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001EDC98u) [[unlikely]] return; }
L_001EDC98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001EDC9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EDCB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 9;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_001EDD1C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 52u)));  goto L_001EDCE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001EDDCC; } }
L_001EDCE4:
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 52u)));  goto L_001EDCF8; }
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 2;
L_001EDCF8:
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { st32((c.r[17].w[0] + 148u), 0u);  goto L_001EDD0C; }
    st32((c.r[17].w[0] + 64u), 0u);
    st32((c.r[17].w[0] + 148u), 0u);
    c.budget -= 2;
L_001EDD0C:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001EDDC8; } }
L_001EDD1C:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.f[4] = ld32((c.r[17].w[0] + 56u));
    set32(c.r[16], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[5], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_001EDD3C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001EDD58; } }
L_001EDD3C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_001EDD58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 148u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 148u), c.f[0]);  if (t) { goto L_001EDD94; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001EDDC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDD8Cu); c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x001EDD8Cu) [[unlikely]] return; }
L_001EDD8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EDDC8; } }
L_001EDD94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDD9Cu);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001EDD9Cu) [[unlikely]] return; }
L_001EDD9C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDDA8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x001EDDA8u) [[unlikely]] return; }
L_001EDDA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001EDDC0; }
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_001EDDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDDC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001EDDC8u) [[unlikely]] return; }
L_001EDDC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001EDDCC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EDDE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 292u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDDF8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001EDDF8u) [[unlikely]] return; }
L_001EDDF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 15408u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 152u), 0u);
    st32((c.r[16].w[0] + 160u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EDE30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EDE78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE60u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001EDE60u) [[unlikely]] return; }
L_001EDE60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001EDE7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001EDE78u) [[unlikely]] return; }
L_001EDE78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001EDE7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EDE90:
    c.f[1] = ld32((c.r[4].w[0] + 148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[12]);
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 160u), c.f[13]);  if (t) { goto L_001EDEB8; } }
    st32((c.r[4].w[0] + 160u), c.f[0]);
    c.budget -= 1;
L_001EDEB8:
    st32((c.r[4].w[0] + 164u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_001EDED0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EDFA4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[5], c.r[3].w[0] >> 1);  goto L_001EDEFC; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001EDF14; } }
L_001EDEFC:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_001EDF14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[4].w[0] + 164u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[4].w[0] + 164u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 160u));
    c.f[0] = ld32((c.r[4].w[0] + 164u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[4].w[0] + 160u));  goto L_001EDF4C; }
    st32((c.r[4].w[0] + 164u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 160u));
    c.budget -= 2;
L_001EDF4C:
    c.f[0] = ld32((c.r[4].w[0] + 164u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EDF7C; } }
    c.f[0] = ld32((c.r[4].w[0] + 156u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    st32((c.r[4].w[0] + 148u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001EDFA4; } }
L_001EDF7C:
    c.f[2] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[3] = ld32((c.r[4].w[0] + 152u));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[4].w[0] + 156u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 148u), c.f[0]);
    c.budget -= 10;
L_001EDFA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EDFB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EE004; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDFD8u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001EDFD8u) [[unlikely]] return; }
L_001EDFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDFE0u); set32(c.r[4], ld32((c.r[2].w[0] + 976u)));  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x001EDFE0u) [[unlikely]] return; }
L_001EDFE0:
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE004u); st32((c.r[29].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 156u, depth + 1u); else { c.pc = 0x00161620u; return; } if (c.pc != 0x001EE004u) [[unlikely]] return; }
L_001EE004:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EE020:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE04Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EE04Cu) [[unlikely]] return; }
L_001EE04C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EE080; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EE080; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE080u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EE080u) [[unlikely]] return; }
L_001EE080:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_001EE0D8; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE0D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE09Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001EE09Cu) [[unlikely]] return; }
L_001EE09C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001EE0C8; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001EE0B8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE0C8; } }
L_001EE0B8:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE0C8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001EE0C8u) [[unlikely]] return; }
L_001EE0C8:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[18].w[0] + 4u));  if (t) { goto L_001EE0DC; } }
L_001EE0D4:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001EE0D8:
    c.r[19].d[0] = ld16((c.r[18].w[0] + 4u));
    c.budget -= 1;
L_001EE0DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE0E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EE0E4u) [[unlikely]] return; }
L_001EE0E4:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EE114; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EE114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE114u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EE114u) [[unlikely]] return; }
L_001EE114:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 148u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE124u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EE124u) [[unlikely]] return; }
L_001EE124:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EE158; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EE158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE158u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EE158u) [[unlikely]] return; }
L_001EE158:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE168u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EE168u) [[unlikely]] return; }
L_001EE168:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EE19C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EE19C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE19Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EE19Cu) [[unlikely]] return; }
L_001EE19C:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 156u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE1ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EE1ACu) [[unlikely]] return; }
L_001EE1AC:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EE1E0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EE1E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE1E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EE1E0u) [[unlikely]] return; }
L_001EE1E0:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 160u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE1F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EE1F0u) [[unlikely]] return; }
L_001EE1F0:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EE224; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EE224; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE224u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EE224u) [[unlikely]] return; }
L_001EE224:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 164u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE234u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EE234u) [[unlikely]] return; }
L_001EE234:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EE268; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001EE268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE268u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EE268u) [[unlikely]] return; }
L_001EE268:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001EE290:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE2BCu); st32((c.r[29].w[0] + 148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x001EE2BCu) [[unlikely]] return; }
L_001EE2BC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE2CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001EE2CCu) [[unlikely]] return; }
L_001EE2CC:
    set32(c.r[6], ld32((c.r[29].w[0] + 128u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 136u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE2F8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EE2F8u) [[unlikely]] return; }
L_001EE2F8:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 124u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE314u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EE314u) [[unlikely]] return; }
L_001EE314:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[5], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE330u); st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EE330u) [[unlikely]] return; }
L_001EE330:
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE344u); st32((c.r[16].w[0] + 148u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EE344u) [[unlikely]] return; }
L_001EE344:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE360u); st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EE360u) [[unlikely]] return; }
L_001EE360:
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE374u); st32((c.r[16].w[0] + 152u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EE374u) [[unlikely]] return; }
L_001EE374:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[5], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE390u); st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EE390u) [[unlikely]] return; }
L_001EE390:
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE3A4u); st32((c.r[16].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EE3A4u) [[unlikely]] return; }
L_001EE3A4:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[5], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE3C0u); st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EE3C0u) [[unlikely]] return; }
L_001EE3C0:
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE3D4u); st32((c.r[16].w[0] + 160u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EE3D4u) [[unlikely]] return; }
L_001EE3D4:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[4], c.r[29].w[0] + 40u);
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE3F0u); st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EE3F0u) [[unlikely]] return; }
L_001EE3F0:
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE404u); st32((c.r[16].w[0] + 164u), c.f[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001EE404u) [[unlikely]] return; }
L_001EE404:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001EE420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 15472u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE444u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001EE444u) [[unlikely]] return; }
L_001EE444:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 10u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE45Cu); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 274u, depth + 1u); else { c.pc = 0x001EE650u; return; } if (c.pc != 0x001EE45Cu) [[unlikely]] return; }
L_001EE45C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EE470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EE4C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 15472u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001EE4B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE4ACu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001EE4ACu) [[unlikely]] return; }
L_001EE4AC:
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 2;
L_001EE4B4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001EE4CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE4C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001EE4C8u) [[unlikely]] return; }
L_001EE4C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001EE4CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EE4E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_001EE51C; } }
L_001EE4F4:
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_001EE51C; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE514u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EE514u) [[unlikely]] return; }
L_001EE514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001EE530; } }
L_001EE51C:
    c.r[2].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EE4F4u | kUnwind; return; } goto L_001EE4F4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_001EE530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001EE540:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001EE58C; } }
L_001EE570:
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[17].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001EE58C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[16].w[0]);  if (t) { goto L_001EE62C; } }
L_001EE58C:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EE570u | kUnwind; return; } goto L_001EE570; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_001EE5EC; } }
L_001EE5A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE5A8u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001EE5A8u) [[unlikely]] return; }
L_001EE5A8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE5C0u); set32(c.r[6], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001EE5C0u) [[unlikely]] return; }
L_001EE5C0:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 4u), c.r[19].w[0]);  goto L_001EE5DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE5D4u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001EE5D4u) [[unlikely]] return; }
L_001EE5D4:
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 2;
L_001EE5DC:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 10u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
L_001EE5EC:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 10u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EE5A0u | kUnwind; return; } goto L_001EE5A0; }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 12;
L_001EE62C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EE650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[6].w[0] - 6176u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE670u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 268u, depth + 1u); else { c.pc = 0x001EE540u; return; } if (c.pc != 0x001EE670u) [[unlikely]] return; }
L_001EE670:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE684u); set32(c.r[6], c.r[6].w[0] - 6240u);  if (depth < kMaxDepth) unit_0033(c, 268u, depth + 1u); else { c.pc = 0x001EE540u; return; } if (c.pc != 0x001EE684u) [[unlikely]] return; }
L_001EE684:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE698u); set32(c.r[6], c.r[6].w[0] - 6304u);  if (depth < kMaxDepth) unit_0033(c, 268u, depth + 1u); else { c.pc = 0x001EE540u; return; } if (c.pc != 0x001EE698u) [[unlikely]] return; }
L_001EE698:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE6ACu); set32(c.r[6], c.r[6].w[0] - 6368u);  if (depth < kMaxDepth) unit_0033(c, 268u, depth + 1u); else { c.pc = 0x001EE540u; return; } if (c.pc != 0x001EE6ACu) [[unlikely]] return; }
L_001EE6AC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE6C0u); set32(c.r[6], c.r[6].w[0] - 6448u);  if (depth < kMaxDepth) unit_0033(c, 268u, depth + 1u); else { c.pc = 0x001EE540u; return; } if (c.pc != 0x001EE6C0u) [[unlikely]] return; }
L_001EE6C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EE6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE6E8u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001EE6E8u) [[unlikely]] return; }
L_001EE6E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 4u)));  goto L_001EE700; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE6FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 18u, depth + 1u); else { c.pc = 0x001F02D0u; return; } if (c.pc != 0x001EE6FCu) [[unlikely]] return; }
L_001EE6FC:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_001EE700:
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EE720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE738u); set32(c.r[4], 0u + 560u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001EE738u) [[unlikely]] return; }
L_001EE738:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001EE750; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE74Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 68u, depth + 1u); else { c.pc = 0x001F0AB0u; return; } if (c.pc != 0x001EE74Cu) [[unlikely]] return; }
L_001EE74C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001EE750:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EE760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE778u); set32(c.r[4], 0u + 384u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001EE778u) [[unlikely]] return; }
L_001EE778:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001EE790; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE78Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 419u, depth + 1u); else { c.pc = 0x001EF9E0u; return; } if (c.pc != 0x001EE78Cu) [[unlikely]] return; }
L_001EE78C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001EE790:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EE7A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE7B8u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001EE7B8u) [[unlikely]] return; }
L_001EE7B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001EE7D0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE7CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 434u, depth + 1u); else { c.pc = 0x001EFBA0u; return; } if (c.pc != 0x001EE7CCu) [[unlikely]] return; }
L_001EE7CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001EE7D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EE7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE7F8u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001EE7F8u) [[unlikely]] return; }
L_001EE7F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001EE810; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE80Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 18u, depth + 1u); else { c.pc = 0x001F02D0u; return; } if (c.pc != 0x001EE80Cu) [[unlikely]] return; }
L_001EE80C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001EE810:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EE820:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30508u), c.r[4].w[0]);  c.pc = t; return; }
L_001EE830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30508u), 0u);  c.pc = t; return; }
L_001EE840:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30508u)));  c.pc = t; return; }
L_001EE850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[7], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[3], c.r[3].w[0] + 15504u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), 0u);  c.pc = t; return; }
L_001EE8A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001EE8FC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 15504u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001EE8E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_001EE8E0:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001EE8F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE8F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001EE8F8u) [[unlikely]] return; }
L_001EE8F8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EE8FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EE910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 15488u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  c.pc = t; return; }
L_001EE950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EE9B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 15488u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001EE9A4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_001EE9A0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE99Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EE99Cu) [[unlikely]] return; }
L_001EE99C:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_001EE9A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001EE9A4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001EE9BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE9B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001EE9B8u) [[unlikely]] return; }
L_001EE9B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001EE9BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EE9D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001EEA0C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_001EEA08; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA04u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EEA04u) [[unlikely]] return; }
L_001EEA04:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_001EEA08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001EEA0C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EEA20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EEA40; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA40u); set32(c.r[6], c.r[4].w[0] + 12u);  if (depth < kMaxDepth) unit_0033(c, 309u, depth + 1u); else { c.pc = 0x001EEA50u; return; } if (c.pc != 0x001EEA40u) [[unlikely]] return; }
L_001EEA40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001EEA50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001EEAA0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 4u), 0u);  goto L_001EEAA0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA9Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EEA9Cu) [[unlikely]] return; }
L_001EEA9C:
    st32((c.r[20].w[0] + 4u), 0u);
    c.budget -= 1;
L_001EEAA0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0] + 8u), c.r[19].w[0]);  if (t) { goto L_001EEBE4; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001EEAE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEABCu); set32(c.r[4], ld32((c.r[19].w[0] + 64u)));  if (depth < kMaxDepth) unit_0033(c, 402u, depth + 1u); else { c.pc = 0x001EF7E0u; return; } if (c.pc != 0x001EEABCu) [[unlikely]] return; }
L_001EEABC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 12u), 0u);  goto L_001EEBCC; }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEADCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EEADCu) [[unlikely]] return; }
L_001EEADC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EEBC8; } }
L_001EEAE4:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EEAFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[18].w[0])));  if (t) { goto L_001EEB08; } }
L_001EEAFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB04u);  if (depth < kMaxDepth) unit_0033(c, 297u, depth + 1u); else { c.pc = 0x001EE840u; return; } if (c.pc != 0x001EEB04u) [[unlikely]] return; }
L_001EEB04:
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_001EEB08:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB14u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 265u, depth + 1u); else { c.pc = 0x001EE4E0u; return; } if (c.pc != 0x001EEB14u) [[unlikely]] return; }
L_001EEB14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EEBC8; } }
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB38u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x001EEB38u) [[unlikely]] return; }
L_001EEB38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB40u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x001EEB40u) [[unlikely]] return; }
L_001EEB40:
    set32(c.r[4], ld32((c.r[2].w[0] + 292u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] | 4096ull;
    st32((c.r[2].w[0] + 292u), c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001EEB84; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001EEB80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB78u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x001EEB78u) [[unlikely]] return; }
L_001EEB78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 276u), c.r[16].w[0]);  if (t) { goto L_001EEB90; } }
L_001EEB80:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001EEB84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB8Cu);  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x001EEB8Cu) [[unlikely]] return; }
L_001EEB8C:
    st32((c.r[2].w[0] + 272u), c.r[16].w[0]);
    c.budget -= 1;
L_001EEB90:
    set32(c.r[4], c.r[20].w[0] + 12u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEBA0u); set32(c.r[6], 0u + 28u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001EEBA0u) [[unlikely]] return; }
L_001EEBA0:
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001EEBB8; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEBB4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 369u, depth + 1u); else { c.pc = 0x001EF290u; return; } if (c.pc != 0x001EEBB4u) [[unlikely]] return; }
L_001EEBB4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001EEBB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEBC0u);  if (depth < kMaxDepth) unit_0033(c, 374u, depth + 1u); else { c.pc = 0x001EF340u; return; } if (c.pc != 0x001EEBC0u) [[unlikely]] return; }
L_001EEBC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001EEBE8; } }
L_001EEBC8:
    st32((c.r[20].w[0] + 12u), 0u);
    c.budget -= 1;
L_001EEBCC:
    set32(c.r[3], 0u - 1u);
    st32((c.r[20].w[0] + 16u), 0u);
    st32((c.r[20].w[0] + 20u), 0u);
    st32((c.r[20].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 36u), 0u);
    st32((c.r[20].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 6;
L_001EEBE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001EEBE8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001EEC10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001EEC34; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EEC34u) [[unlikely]] return; }
L_001EEC34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001EEC40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001EEC50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[7], c.r[29].w[0] + 24u);  goto L_001EEC6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_001EECA0; } }
L_001EEC6C:
    set32(c.r[3], c.r[29].w[0] + 56u);
    c.budget -= 1;
L_001EEC70:
    st32((c.r[7].w[0]), 0u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EEC70u | kUnwind; return; } goto L_001EEC70; } }
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), 0u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EECA0u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 340u, depth + 1u); else { c.pc = 0x001EEEC0u; return; } if (c.pc != 0x001EECA0u) [[unlikely]] return; }
L_001EECA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EECB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[8], c.r[29].w[0] + 40u);  goto L_001EECCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_001EED10; } }
L_001EECCC:
    set32(c.r[3], c.r[29].w[0] + 72u);
    c.budget -= 1;
L_001EECD0:
    st32((c.r[8].w[0]), 0u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.r[2].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EECD0u | kUnwind; return; } goto L_001EECD0; } }
    c.r[2].d[0] = c.r[7].d[0] << 32;
    st32((c.r[29].w[0] + 32u), c.r[6].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED10u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0033(c, 340u, depth + 1u); else { c.pc = 0x001EEEC0u; return; } if (c.pc != 0x001EED10u) [[unlikely]] return; }
L_001EED10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EED20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[9], c.r[29].w[0] + 40u);  goto L_001EED3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_001EED8C; } }
L_001EED3C:
    set32(c.r[3], c.r[29].w[0] + 72u);
    c.budget -= 1;
L_001EED40:
    st32((c.r[9].w[0]), 0u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.r[2].d[0] = c.r[9].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EED40u | kUnwind; return; } goto L_001EED40; } }
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = c.r[8].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[29].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED8Cu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0033(c, 340u, depth + 1u); else { c.pc = 0x001EEEC0u; return; } if (c.pc != 0x001EED8Cu) [[unlikely]] return; }
L_001EED8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EEDA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[10], c.r[29].w[0] + 40u);  goto L_001EEDBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_001EEE18; } }
L_001EEDBC:
    set32(c.r[3], c.r[29].w[0] + 72u);
    c.budget -= 1;
L_001EEDC0:
    st32((c.r[10].w[0]), 0u);
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.r[2].d[0] = c.r[10].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EEDC0u | kUnwind; return; } goto L_001EEDC0; } }
    c.r[2].d[0] = c.r[7].d[0] << 32;
    c.r[3].d[0] = c.r[8].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[9].d[0] << 32;
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], 0u + 3u);
    st32((c.r[29].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEE18u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0033(c, 340u, depth + 1u); else { c.pc = 0x001EEEC0u; return; } if (c.pc != 0x001EEE18u) [[unlikely]] return; }
L_001EEE18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EEE30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[11], c.r[29].w[0] + 40u);  goto L_001EEE4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_001EEEB4; } }
L_001EEE4C:
    set32(c.r[3], c.r[29].w[0] + 72u);
    c.budget -= 1;
L_001EEE50:
    st32((c.r[11].w[0]), 0u);
    set32(c.r[11], c.r[11].w[0] + 4u);
    c.r[2].d[0] = c.r[11].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EEE50u | kUnwind; return; } goto L_001EEE50; } }
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = c.r[8].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[9].d[0] << 32;
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[10].d[0] << 32;
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], 0u + 4u);
    st32((c.r[29].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEEB4u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0033(c, 340u, depth + 1u); else { c.pc = 0x001EEEC0u; return; } if (c.pc != 0x001EEEB4u) [[unlikely]] return; }
L_001EEEB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EEEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EEEF8; } }
L_001EEED8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 20u);  goto L_001EEEF8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEEF0u); set32(c.r[25], c.r[7].w[0] + 8u);  if (depth < kMaxDepth) unit_0008(c, 166u, depth + 1u); else { c.pc = 0x00142000u; return; } if (c.pc != 0x001EEEF0u) [[unlikely]] return; }
L_001EEEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001EEF28; } }
L_001EEEF8:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[7].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EEED8u | kUnwind; return; } goto L_001EEED8; }
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { st32((c.r[16].w[0]), 0u);  goto L_001EEF24; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF20u); set32(c.r[4], c.r[4].w[0] + 24304u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001EEF20u) [[unlikely]] return; }
L_001EEF20:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_001EEF24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001EEF28:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EEF40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF5Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001EEF5Cu) [[unlikely]] return; }
L_001EEF5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[17].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF70u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 393u, depth + 1u); else { c.pc = 0x0020BD00u; return; } if (c.pc != 0x001EEF70u) [[unlikely]] return; }
L_001EEF70:
    set32(c.r[2], c.r[16].w[0] << 2);
    st32((c.r[17].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF88u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001EEF88u) [[unlikely]] return; }
L_001EEF88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5872u);
    set32(c.r[6], c.r[6].w[0] - 5808u);
    set32(c.r[7], 0u + 40u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEFA8u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 152u, depth + 1u); else { c.pc = 0x00141DA0u; return; } if (c.pc != 0x001EEFA8u) [[unlikely]] return; }
L_001EEFA8:
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEFB4u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001EEFB4u) [[unlikely]] return; }
L_001EEFB4:
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEFC4u); st32((c.r[17].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001EEFC4u) [[unlikely]] return; }
L_001EEFC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  goto L_001EEFDC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEFD8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 391u, depth + 1u); else { c.pc = 0x001EF630u; return; } if (c.pc != 0x001EEFD8u) [[unlikely]] return; }
L_001EEFD8:
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_001EEFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001EF004; } }
L_001EEFE4:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 8;
L_001EF004:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EEFE4u | kUnwind; return; } goto L_001EEFE4; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EF030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EF0BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_001EF074; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF06Cu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001EF06Cu) [[unlikely]] return; }
L_001EF06C:
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 2;
L_001EF074:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 80u);  goto L_001EF090; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF088u); set32(c.r[5], c.r[5].w[0] - 5808u);  if (depth < kMaxDepth) unit_0008(c, 138u, depth + 1u); else { c.pc = 0x00141BA0u; return; } if (c.pc != 0x001EF088u) [[unlikely]] return; }
L_001EF088:
    st32((c.r[17].w[0] + 52u), 0u);
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 2;
L_001EF090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF098u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 398u, depth + 1u); else { c.pc = 0x0020BDB0u; return; } if (c.pc != 0x001EF098u) [[unlikely]] return; }
L_001EF098:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF0A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001EF0A4u) [[unlikely]] return; }
L_001EF0A4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001EF0C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF0BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001EF0BCu) [[unlikely]] return; }
L_001EF0BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001EF0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EF0E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 72u), c.r[7].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 76u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 360u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 372u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 372u), c.r[2].w[0]);  if (t) { goto L_001EF150; } }
L_001EF124:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF14Cu); set32(c.r[6], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 309u, depth + 1u); else { c.pc = 0x001EEA50u; return; } if (c.pc != 0x001EF14Cu) [[unlikely]] return; }
L_001EF14C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001EF150:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF124u | kUnwind; return; } goto L_001EF124; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001EF174; } }
L_001EF164:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF170u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 369u, depth + 1u); else { c.pc = 0x001EF290u; return; } if (c.pc != 0x001EF170u) [[unlikely]] return; }
L_001EF170:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001EF174:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF164u | kUnwind; return; } goto L_001EF164; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF188u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 374u, depth + 1u); else { c.pc = 0x001EF340u; return; } if (c.pc != 0x001EF188u) [[unlikely]] return; }
L_001EF188:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EF1B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 80u);  goto L_001EF1D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF1D0u); set32(c.r[4], c.r[4].w[0] + 80u);  if (depth < kMaxDepth) unit_003B(c, 5u, depth + 1u); else { c.pc = 0x0020C040u; return; } if (c.pc != 0x001EF1D0u) [[unlikely]] return; }
L_001EF1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001EF1E4; } }
L_001EF1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF1E0u);  if (depth < kMaxDepth) unit_003A(c, 414u, depth + 1u); else { c.pc = 0x0020BFF0u; return; } if (c.pc != 0x001EF1E0u) [[unlikely]] return; }
L_001EF1E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001EF1E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001EF1F0:
    c.f[1] = ld32((c.r[4].w[0] + 416u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[4].w[0] + 416u));  goto L_001EF25C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[5], c.r[3].w[0] >> 1);  goto L_001EF224; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001EF23C; } }
L_001EF224:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_001EF23C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[4].w[0] + 416u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[4].w[0] + 416u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 416u));
    c.budget -= 8;
L_001EF25C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF284; } }
    st32((c.r[4].w[0] + 416u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_001EF284:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF290:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF2C4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x001EF2C4u) [[unlikely]] return; }
L_001EF2C4:
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 24u)));  if (t) { goto L_001EF320; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EF2FC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_001EF2FC; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF2FCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x001EF2FCu) [[unlikely]] return; }
L_001EF2FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001EF318; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF310u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x001EF310u) [[unlikely]] return; }
L_001EF310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001EF324; } }
L_001EF318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF320u); set32(c.r[5], c.r[19].w[0] + 80u);  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x001EF320u) [[unlikely]] return; }
L_001EF320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001EF324:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EF340:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001EF3A8; } }
L_001EF368:
    set32(c.r[19], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF378u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x001EF378u) [[unlikely]] return; }
L_001EF378:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001EF394; } }
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001EF394:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001EF3A4; }
    st32((c.r[2].w[0] + 284u), c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001EF3A4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001EF3A8:
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF368u | kUnwind; return; } goto L_001EF368; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EF3E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EF458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001EF448; } }
L_001EF40C:
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[2], ld32((c.r[18].w[0] + 56u)));  goto L_001EF434; }
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    if (c.r[17].d[0] != c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001EF448; }
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 1;
L_001EF434:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF444u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0033(c, 305u, depth + 1u); else { c.pc = 0x001EE9D0u; return; } if (c.pc != 0x001EF444u) [[unlikely]] return; }
L_001EF444:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001EF448:
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF40Cu | kUnwind; return; } goto L_001EF40C; } }
L_001EF458:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EF470:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EF4EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001EF4DC; } }
L_001EF49C:
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[2], ld32((c.r[18].w[0] + 56u)));  goto L_001EF4C4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    if (c.r[17].d[0] != c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001EF4DC; }
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 1;
L_001EF4C4:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF4D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 307u, depth + 1u); else { c.pc = 0x001EEA20u; return; } if (c.pc != 0x001EF4D8u) [[unlikely]] return; }
L_001EF4D8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001EF4DC:
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF49Cu | kUnwind; return; } goto L_001EF49C; } }
L_001EF4EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EF510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF52Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001EF52Cu) [[unlikely]] return; }
L_001EF52C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 15648u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001EF548; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001EF548:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001EF584; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF558u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001EF558u) [[unlikely]] return; }
L_001EF558:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001EF584; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001EF574; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF584; } }
L_001EF574:
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF584u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001EF584u) [[unlikely]] return; }
L_001EF584:
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EF5A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EF618; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[16].w[0] + 52u);
    set32(c.r[3], c.r[3].w[0] + 15648u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_001EF5F4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001EF5F8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EF5F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF5F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EF5F4u) [[unlikely]] return; }
L_001EF5F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EF5F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF600u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001EF600u) [[unlikely]] return; }
L_001EF600:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001EF61C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF618u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001EF618u) [[unlikely]] return; }
L_001EF618:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EF61C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EF630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF64Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001EF64Cu) [[unlikely]] return; }
L_001EF64C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[2].w[0] + 15584u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D520000u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 20045ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EF6A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EF6F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 15584u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF6CCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 409u, depth + 1u); else { c.pc = 0x001EF8A0u; return; } if (c.pc != 0x001EF6CCu) [[unlikely]] return; }
L_001EF6CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF6D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001EF6D8u) [[unlikely]] return; }
L_001EF6D8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001EF6F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF6F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001EF6F0u) [[unlikely]] return; }
L_001EF6F0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001EF6F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EF710:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF73Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 404u, depth + 1u); else { c.pc = 0x001EF810u; return; } if (c.pc != 0x001EF73Cu) [[unlikely]] return; }
L_001EF73C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF744u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001EF744u) [[unlikely]] return; }
L_001EF744:
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[2].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_001EF790; }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[18].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 8;
L_001EF790:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001EF7C0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF7B0u); set32(c.r[5], c.r[5].w[0] + 24336u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001EF7B0u) [[unlikely]] return; }
L_001EF7B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF7BCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 404u, depth + 1u); else { c.pc = 0x001EF810u; return; } if (c.pc != 0x001EF7BCu) [[unlikely]] return; }
L_001EF7BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001EF7C0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EF7E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 52u)));  if (t) { goto L_001EF7F8; } }
L_001EF7E8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 12u)));  goto L_001EF7F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_001EF804; } }
L_001EF7F8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF7E8u | kUnwind; return; } goto L_001EF7E8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EF804:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001EF87C; } }
L_001EF828:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_001EF878; }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_001EF844; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_001EF848; } }
L_001EF844:
    st32((c.r[6].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001EF848:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF854u); set32(c.r[4], ld32((c.r[4].w[0] + 56u)));  if (depth < kMaxDepth) unit_0033(c, 377u, depth + 1u); else { c.pc = 0x001EF3E0u; return; } if (c.pc != 0x001EF854u) [[unlikely]] return; }
L_001EF854:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF868u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EF868u) [[unlikely]] return; }
L_001EF868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF870u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001EF870u) [[unlikely]] return; }
L_001EF870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001EF888; } }
L_001EF878:
    set32(c.r[16], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_001EF87C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF828u | kUnwind; return; } goto L_001EF828; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001EF888:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EF8A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EF8EC; } }
L_001EF8C0:
    set32(c.r[16], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF8CCu); set32(c.r[4], ld32((c.r[18].w[0] + 56u)));  if (depth < kMaxDepth) unit_0033(c, 377u, depth + 1u); else { c.pc = 0x001EF3E0u; return; } if (c.pc != 0x001EF8CCu) [[unlikely]] return; }
L_001EF8CC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF8E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EF8E0u) [[unlikely]] return; }
L_001EF8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF8E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001EF8E8u) [[unlikely]] return; }
L_001EF8E8:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EF8EC:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF8C0u | kUnwind; return; } goto L_001EF8C0; }
    st32((c.r[18].w[0] + 52u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EF910:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001EF9C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 52u)));  if (t) { goto L_001EF998; } }
L_001EF944:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_001EF9BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 8u)));  goto L_001EF98C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF978u); set32(c.r[5], c.r[5].w[0] + 24336u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001EF978u) [[unlikely]] return; }
L_001EF978:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF984u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 404u, depth + 1u); else { c.pc = 0x001EF810u; return; } if (c.pc != 0x001EF984u) [[unlikely]] return; }
L_001EF984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF998; } }
L_001EF98C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF994u); set32(c.r[4], ld32((c.r[18].w[0] + 56u)));  if (depth < kMaxDepth) unit_0033(c, 380u, depth + 1u); else { c.pc = 0x001EF470u; return; } if (c.pc != 0x001EF994u) [[unlikely]] return; }
L_001EF994:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EF998:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF944u | kUnwind; return; } goto L_001EF944; }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
L_001EF9BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001EF9C0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EF9E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF9F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0033(c, 298u, depth + 1u); else { c.pc = 0x001EE850u; return; } if (c.pc != 0x001EF9F8u) [[unlikely]] return; }
L_001EF9F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[16], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 15744u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA10u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 393u, depth + 1u); else { c.pc = 0x0020BD00u; return; } if (c.pc != 0x001EFA10u) [[unlikely]] return; }
L_001EFA10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 15712u);
    set32(c.r[3], c.r[3].w[0] + 24368u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 340u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 336u), 0u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EFA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EFA98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15712u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA80u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 398u, depth + 1u); else { c.pc = 0x0020BDB0u; return; } if (c.pc != 0x001EFA80u) [[unlikely]] return; }
L_001EFA80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001EFA9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001EFA98u) [[unlikely]] return; }
L_001EFA98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001EFA9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EFAB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EFB18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 15744u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001EFAF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15712u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFAF4u); st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 398u, depth + 1u); else { c.pc = 0x0020BDB0u; return; } if (c.pc != 0x001EFAF4u) [[unlikely]] return; }
L_001EFAF4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 299u, depth + 1u); else { c.pc = 0x001EE8A0u; return; } if (c.pc != 0x001EFB00u) [[unlikely]] return; }
L_001EFB00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001EFB1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001EFB18u) [[unlikely]] return; }
L_001EFB18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001EFB1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EFB30:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_001EFB40:
    set32(c.r[7], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], ld32((c.r[6].w[0] + 8u)));
    st32((c.r[5].w[0] + 368u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 372u), c.r[7].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_001EFB60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 336u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001EFB80; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB7Cu); set32(c.r[5], ld32((c.r[4].w[0] + 340u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EFB7Cu) [[unlikely]] return; }
L_001EFB7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001EFB80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001EFB90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 32u);  c.pc = t; return; }
L_001EFBA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFBB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 298u, depth + 1u); else { c.pc = 0x001EE850u; return; } if (c.pc != 0x001EFBB4u) [[unlikely]] return; }
L_001EFBB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 15824u);
    set32(c.r[2], c.r[2].w[0] + 24448u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EFC00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EFC74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 15824u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001EFC54; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 28u), 0u);  goto L_001EFC50; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFC4Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EFC4Cu) [[unlikely]] return; }
L_001EFC4C:
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 1;
L_001EFC50:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001EFC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFC5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 299u, depth + 1u); else { c.pc = 0x001EE8A0u; return; } if (c.pc != 0x001EFC5Cu) [[unlikely]] return; }
L_001EFC5C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001EFC78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFC74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001EFC74u) [[unlikely]] return; }
L_001EFC74:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001EFC78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EFC90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EFCD4; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 28u), 0u);  goto L_001EFCD4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFCD0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EFCD0u) [[unlikely]] return; }
L_001EFCD0:
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 1;
L_001EFCD4:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_001EFCF8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFCF0u); set32(c.r[4], c.r[4].w[0] + 24725u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001EFCF0u) [[unlikely]] return; }
L_001EFCF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_001EFD3C; } }
L_001EFCF8:
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[16].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFD0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 347u, depth + 1u); else { c.pc = 0x00207BE0u; return; } if (c.pc != 0x001EFD0Cu) [[unlikely]] return; }
L_001EFD0C:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 348u));
    c.r[4].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] & 32767ull;
    st16((c.r[2].w[0] + 348u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 292u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[6].w[0] + 292u), c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 12;
L_001EFD3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EFD60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[5].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001EFDA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFD98u); set32(c.r[5], ld32((c.r[18].w[0] + 36u)));  if (depth < kMaxDepth) unit_0039(c, 258u, depth + 1u); else { c.pc = 0x00206FC0u; return; } if (c.pc != 0x001EFD98u) [[unlikely]] return; }
L_001EFD98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_001EFDB8; } }
L_001EFDA0:
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFDB0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 347u, depth + 1u); else { c.pc = 0x00207BE0u; return; } if (c.pc != 0x001EFDB0u) [[unlikely]] return; }
L_001EFDB0:
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_001EFDB8:
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001EFDDC; }
    set32(c.r[7], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFDD8u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x001EFDD8u) [[unlikely]] return; }
L_001EFDD8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001EFDDC:
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EFE00:
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.f[0] = ld32((c.r[6].w[0] + 8u));  goto L_001EFE14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_001EFE20; } }
L_001EFE14:
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0] + 340u), c.f[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_001EFE20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EFE30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001EFE60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_001EFFE0; } }
L_001EFE60:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFFBC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 24640u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001EC000u < 16384u) { entry = entries_0033[(t - 0x001EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001EFE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFE94u); set32(c.r[5], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0039(c, 258u, depth + 1u); else { c.pc = 0x00206FC0u; return; } if (c.pc != 0x001EFE94u) [[unlikely]] return; }
L_001EFE94:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 348u));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st16((c.r[4].w[0] + 348u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 348u));
    c.r[3].d[0] = c.r[3].d[0] & 49151ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 348u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001EFFD0; } }
L_001EFEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFED0u); set32(c.r[5], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0039(c, 258u, depth + 1u); else { c.pc = 0x00206FC0u; return; } if (c.pc != 0x001EFED0u) [[unlikely]] return; }
L_001EFED0:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 348u));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st16((c.r[4].w[0] + 348u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 348u));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 348u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001EFFD0; } }
L_001EFF04:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 348u));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st16((c.r[4].w[0] + 348u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 348u));
    c.r[3].d[0] = c.r[3].d[0] & 49151ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 348u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001EFFD0; } }
L_001EFF34:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 348u));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st16((c.r[4].w[0] + 348u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 348u));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 348u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001EFFD0; } }
L_001EFF64:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 348u));
    c.r[3].d[0] = c.r[3].d[0] & 32767ull;
    st16((c.r[4].w[0] + 348u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_001EFFD0; } }
L_001EFF84:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 348u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[5].d[0] = c.r[5].d[0] & 32767ull;
    st16((c.r[4].w[0] + 348u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_001EFFD0; } }
L_001EFFAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFFB4u);  if (depth < kMaxDepth) unit_0039(c, 263u, depth + 1u); else { c.pc = 0x00207070u; return; } if (c.pc != 0x001EFFB4u) [[unlikely]] return; }
L_001EFFB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_001EFFD4; } }
L_001EFFBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFFC8u); set32(c.r[4], c.r[4].w[0] + 24745u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001EFFC8u) [[unlikely]] return; }
L_001EFFC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_001EFFE0; } }
L_001EFFD0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_001EFFD4:
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 40u), c.r[4].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_001EFFE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
}

}
