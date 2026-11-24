#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009C[4096] = {
    1, 2, 3, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0,
    0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0,
    0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0,
    47, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0,
    0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 137, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0,
    0, 153, 0, 0, 154, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0,
    0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0,
    170, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196,
    0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0,
    222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 237, 0, 0, 0, 238, 0,
    0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0,
    0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0,
    0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 0, 0, 276, 0, 0, 277, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 283, 0, 284, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0,
    300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0,
    309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0,
    332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0,
    0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 359, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0,
    0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0,
    0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0,
    374, 0, 375, 0, 0, 376, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0,
    0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0,
    0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0,
    396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 400, 0, 0, 401, 0, 402, 0, 0, 0,
    0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 407,
    0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0,
    426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0,
    0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0,
    0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0,
    451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 456, 0, 0,
    0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 463,
    0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467, 0,
    0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0,
    472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 481,
    0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0,
    0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 490, 0,
    0, 491, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0,
    0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0,
    0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0,
    0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 517, 0, 0,
    0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0,
};

void unit_009C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00390000;
    case 2u: goto L_00390004;
    case 3u: goto L_00390008;
    case 4u: goto L_00390014;
    case 5u: goto L_00390024;
    case 6u: goto L_0039002C;
    case 7u: goto L_00390034;
    case 8u: goto L_00390044;
    case 9u: goto L_00390054;
    case 10u: goto L_00390064;
    case 11u: goto L_00390074;
    case 12u: goto L_003900A0;
    case 13u: goto L_003900C0;
    case 14u: goto L_003900E8;
    case 15u: goto L_003900F8;
    case 16u: goto L_00390108;
    case 17u: goto L_00390118;
    case 18u: goto L_00390130;
    case 19u: goto L_00390158;
    case 20u: goto L_00390198;
    case 21u: goto L_003901AC;
    case 22u: goto L_003901BC;
    case 23u: goto L_003901D0;
    case 24u: goto L_00390208;
    case 25u: goto L_00390220;
    case 26u: goto L_00390234;
    case 27u: goto L_00390254;
    case 28u: goto L_00390260;
    case 29u: goto L_003902CC;
    case 30u: goto L_003902F0;
    case 31u: goto L_003902F8;
    case 32u: goto L_00390318;
    case 33u: goto L_0039032C;
    case 34u: goto L_00390334;
    case 35u: goto L_00390354;
    case 36u: goto L_003903B0;
    case 37u: goto L_003903DC;
    case 38u: goto L_003903E8;
    case 39u: goto L_003903F8;
    case 40u: goto L_00390408;
    case 41u: goto L_00390410;
    case 42u: goto L_00390424;
    case 43u: goto L_0039042C;
    case 44u: goto L_00390448;
    case 45u: goto L_0039046C;
    case 46u: goto L_00390474;
    case 47u: goto L_00390480;
    case 48u: goto L_00390498;
    case 49u: goto L_003904A0;
    case 50u: goto L_003904B0;
    case 51u: goto L_003904B8;
    case 52u: goto L_003904C0;
    case 53u: goto L_003904F0;
    case 54u: goto L_00390504;
    case 55u: goto L_00390540;
    case 56u: goto L_00390570;
    case 57u: goto L_00390598;
    case 58u: goto L_003905C4;
    case 59u: goto L_003905E4;
    case 60u: goto L_00390600;
    case 61u: goto L_00390628;
    case 62u: goto L_00390638;
    case 63u: goto L_00390654;
    case 64u: goto L_00390668;
    case 65u: goto L_00390680;
    case 66u: goto L_00390688;
    case 67u: goto L_003906C8;
    case 68u: goto L_003906E4;
    case 69u: goto L_003906F0;
    case 70u: goto L_00390704;
    case 71u: goto L_00390718;
    case 72u: goto L_0039072C;
    case 73u: goto L_00390748;
    case 74u: goto L_00390764;
    case 75u: goto L_00390778;
    case 76u: goto L_0039078C;
    case 77u: goto L_00390794;
    case 78u: goto L_0039079C;
    case 79u: goto L_003907A4;
    case 80u: goto L_003907B4;
    case 81u: goto L_003907C4;
    case 82u: goto L_003907F8;
    case 83u: goto L_00390884;
    case 84u: goto L_00390894;
    case 85u: goto L_003908A8;
    case 86u: goto L_003908B8;
    case 87u: goto L_003908C8;
    case 88u: goto L_003908F8;
    case 89u: goto L_00390934;
    case 90u: goto L_00390954;
    case 91u: goto L_0039096C;
    case 92u: goto L_00390980;
    case 93u: goto L_00390A00;
    case 94u: goto L_00390A3C;
    case 95u: goto L_00390A44;
    case 96u: goto L_00390AC0;
    case 97u: goto L_00390B10;
    case 98u: goto L_00390B88;
    case 99u: goto L_00390BAC;
    case 100u: goto L_00390BD0;
    case 101u: goto L_00390C00;
    case 102u: goto L_00390C24;
    case 103u: goto L_00390C38;
    case 104u: goto L_00390C58;
    case 105u: goto L_00390C70;
    case 106u: goto L_00390CA8;
    case 107u: goto L_00390CBC;
    case 108u: goto L_00390CCC;
    case 109u: goto L_00390CE0;
    case 110u: goto L_00390D04;
    case 111u: goto L_00390D18;
    case 112u: goto L_00390D30;
    case 113u: goto L_00390D38;
    case 114u: goto L_00390D4C;
    case 115u: goto L_00390D5C;
    case 116u: goto L_00390D70;
    case 117u: goto L_00390D90;
    case 118u: goto L_00390DA4;
    case 119u: goto L_00390DD0;
    case 120u: goto L_00390DF0;
    case 121u: goto L_00390DF8;
    case 122u: goto L_00390E18;
    case 123u: goto L_00390E54;
    case 124u: goto L_00390EC0;
    case 125u: goto L_00390F30;
    case 126u: goto L_00390F44;
    case 127u: goto L_00390F58;
    case 128u: goto L_00390F88;
    case 129u: goto L_00390FBC;
    case 130u: goto L_00390FD0;
    case 131u: goto L_00390FE0;
    case 132u: goto L_00390FF0;
    case 133u: goto L_0039100C;
    case 134u: goto L_0039101C;
    case 135u: goto L_00391028;
    case 136u: goto L_00391034;
    case 137u: goto L_0039103C;
    case 138u: goto L_00391040;
    case 139u: goto L_00391048;
    case 140u: goto L_0039105C;
    case 141u: goto L_00391068;
    case 142u: goto L_00391088;
    case 143u: goto L_00391098;
    case 144u: goto L_003910B4;
    case 145u: goto L_003910C8;
    case 146u: goto L_003910D8;
    case 147u: goto L_003910E8;
    case 148u: goto L_00391110;
    case 149u: goto L_00391120;
    case 150u: goto L_00391130;
    case 151u: goto L_00391148;
    case 152u: goto L_00391174;
    case 153u: goto L_00391184;
    case 154u: goto L_00391190;
    case 155u: goto L_0039119C;
    case 156u: goto L_003911A4;
    case 157u: goto L_003911B0;
    case 158u: goto L_003911C4;
    case 159u: goto L_003911D0;
    case 160u: goto L_00391200;
    case 161u: goto L_00391234;
    case 162u: goto L_00391250;
    case 163u: goto L_00391274;
    case 164u: goto L_00391284;
    case 165u: goto L_00391298;
    case 166u: goto L_003912C8;
    case 167u: goto L_00391310;
    case 168u: goto L_0039133C;
    case 169u: goto L_0039136C;
    case 170u: goto L_00391380;
    case 171u: goto L_00391390;
    case 172u: goto L_003913A4;
    case 173u: goto L_00391418;
    case 174u: goto L_00391480;
    case 175u: goto L_003914B8;
    case 176u: goto L_00391518;
    case 177u: goto L_00391548;
    case 178u: goto L_00391588;
    case 179u: goto L_003915DC;
    case 180u: goto L_003915F0;
    case 181u: goto L_00391650;
    case 182u: goto L_00391658;
    case 183u: goto L_00391670;
    case 184u: goto L_00391698;
    case 185u: goto L_003916E0;
    case 186u: goto L_00391708;
    case 187u: goto L_00391744;
    case 188u: goto L_0039178C;
    case 189u: goto L_0039179C;
    case 190u: goto L_003917C8;
    case 191u: goto L_003917F8;
    case 192u: goto L_00391808;
    case 193u: goto L_00391820;
    case 194u: goto L_0039182C;
    case 195u: goto L_00391840;
    case 196u: goto L_0039187C;
    case 197u: goto L_00391898;
    case 198u: goto L_003918D8;
    case 199u: goto L_00391908;
    case 200u: goto L_00391948;
    case 201u: goto L_0039199C;
    case 202u: goto L_003919B0;
    case 203u: goto L_003919E0;
    case 204u: goto L_003919FC;
    case 205u: goto L_00391A28;
    case 206u: goto L_00391A48;
    case 207u: goto L_00391A68;
    case 208u: goto L_00391AA8;
    case 209u: goto L_00391AC0;
    case 210u: goto L_00391AF0;
    case 211u: goto L_00391B04;
    case 212u: goto L_00391B18;
    case 213u: goto L_00391B38;
    case 214u: goto L_00391C18;
    case 215u: goto L_00391C2C;
    case 216u: goto L_00391C40;
    case 217u: goto L_00391C58;
    case 218u: goto L_00391C70;
    case 219u: goto L_00391C80;
    case 220u: goto L_00391CA0;
    case 221u: goto L_00391CF8;
    case 222u: goto L_00391D00;
    case 223u: goto L_00391D1C;
    case 224u: goto L_00391D3C;
    case 225u: goto L_00391D50;
    case 226u: goto L_00391D5C;
    case 227u: goto L_00391D68;
    case 228u: goto L_00391D74;
    case 229u: goto L_00391D80;
    case 230u: goto L_00391DC0;
    case 231u: goto L_00391DD0;
    case 232u: goto L_00391E00;
    case 233u: goto L_00391E14;
    case 234u: goto L_00391E50;
    case 235u: goto L_00391E58;
    case 236u: goto L_00391E60;
    case 237u: goto L_00391E68;
    case 238u: goto L_00391E78;
    case 239u: goto L_00391E88;
    case 240u: goto L_00391EA8;
    case 241u: goto L_00391EB8;
    case 242u: goto L_00391ED8;
    case 243u: goto L_00391F10;
    case 244u: goto L_00391F58;
    case 245u: goto L_00391F84;
    case 246u: goto L_00391FA8;
    case 247u: goto L_00391FEC;
    case 248u: goto L_00392004;
    case 249u: goto L_0039201C;
    case 250u: goto L_00392030;
    case 251u: goto L_0039203C;
    case 252u: goto L_00392048;
    case 253u: goto L_003920C4;
    case 254u: goto L_003920E0;
    case 255u: goto L_003920FC;
    case 256u: goto L_00392124;
    case 257u: goto L_00392148;
    case 258u: goto L_003921C8;
    case 259u: goto L_00392248;
    case 260u: goto L_003922D0;
    case 261u: goto L_003922E4;
    case 262u: goto L_003922F8;
    case 263u: goto L_00392318;
    case 264u: goto L_00392340;
    case 265u: goto L_00392350;
    case 266u: goto L_00392368;
    case 267u: goto L_00392390;
    case 268u: goto L_003923A4;
    case 269u: goto L_00392400;
    case 270u: goto L_00392408;
    case 271u: goto L_0039242C;
    case 272u: goto L_00392434;
    case 273u: goto L_0039243C;
    case 274u: goto L_00392444;
    case 275u: goto L_0039244C;
    case 276u: goto L_0039245C;
    case 277u: goto L_00392468;
    case 278u: goto L_00392470;
    case 279u: goto L_003924A8;
    case 280u: goto L_003924BC;
    case 281u: goto L_003924D0;
    case 282u: goto L_003924D8;
    case 283u: goto L_003924E8;
    case 284u: goto L_003924F0;
    case 285u: goto L_003924F8;
    case 286u: goto L_00392520;
    case 287u: goto L_0039253C;
    case 288u: goto L_0039254C;
    case 289u: goto L_0039255C;
    case 290u: goto L_00392568;
    case 291u: goto L_00392580;
    case 292u: goto L_00392594;
    case 293u: goto L_0039259C;
    case 294u: goto L_00392610;
    case 295u: goto L_00392624;
    case 296u: goto L_00392638;
    case 297u: goto L_00392648;
    case 298u: goto L_00392658;
    case 299u: goto L_0039266C;
    case 300u: goto L_00392680;
    case 301u: goto L_00392690;
    case 302u: goto L_003926A0;
    case 303u: goto L_003926C0;
    case 304u: goto L_00392708;
    case 305u: goto L_00392724;
    case 306u: goto L_00392750;
    case 307u: goto L_00392764;
    case 308u: goto L_00392778;
    case 309u: goto L_00392780;
    case 310u: goto L_00392788;
    case 311u: goto L_00392790;
    case 312u: goto L_00392798;
    case 313u: goto L_003927A0;
    case 314u: goto L_003927A8;
    case 315u: goto L_003927B0;
    case 316u: goto L_003927B8;
    case 317u: goto L_003927C0;
    case 318u: goto L_003927C8;
    case 319u: goto L_003927D0;
    case 320u: goto L_003927D8;
    case 321u: goto L_00392808;
    case 322u: goto L_0039281C;
    case 323u: goto L_00392838;
    case 324u: goto L_00392848;
    case 325u: goto L_00392858;
    case 326u: goto L_0039288C;
    case 327u: goto L_003928A4;
    case 328u: goto L_003928B8;
    case 329u: goto L_003928C8;
    case 330u: goto L_003928E0;
    case 331u: goto L_003928F0;
    case 332u: goto L_00392900;
    case 333u: goto L_00392910;
    case 334u: goto L_00392920;
    case 335u: goto L_00392954;
    case 336u: goto L_00392958;
    case 337u: goto L_00392AB0;
    case 338u: goto L_00392AC0;
    case 339u: goto L_00392AD8;
    case 340u: goto L_00392B04;
    case 341u: goto L_00392B24;
    case 342u: goto L_00392B48;
    case 343u: goto L_00392B64;
    case 344u: goto L_00392B98;
    case 345u: goto L_00392BAC;
    case 346u: goto L_00392BC0;
    case 347u: goto L_00392BD0;
    case 348u: goto L_00392BE0;
    case 349u: goto L_00392C04;
    case 350u: goto L_00392C68;
    case 351u: goto L_00392C78;
    case 352u: goto L_00392C88;
    case 353u: goto L_00392C94;
    case 354u: goto L_00392CA8;
    case 355u: goto L_00392CB8;
    case 356u: goto L_00392CC8;
    case 357u: goto L_00392CD4;
    case 358u: goto L_00392CE8;
    case 359u: goto L_00392D14;
    case 360u: goto L_00392D18;
    case 361u: goto L_00392D48;
    case 362u: goto L_00392D78;
    case 363u: goto L_00392D88;
    case 364u: goto L_00392DAC;
    case 365u: goto L_00392DC0;
    case 366u: goto L_00392DD8;
    case 367u: goto L_00392DF4;
    case 368u: goto L_00392E08;
    case 369u: goto L_00392E30;
    case 370u: goto L_00392E38;
    case 371u: goto L_00392E40;
    case 372u: goto L_00392E70;
    case 373u: goto L_00392E78;
    case 374u: goto L_00392E80;
    case 375u: goto L_00392E88;
    case 376u: goto L_00392E94;
    case 377u: goto L_00392EA0;
    case 378u: goto L_00392EA8;
    case 379u: goto L_00392ED0;
    case 380u: goto L_00392EE0;
    case 381u: goto L_00392EFC;
    case 382u: goto L_00392F9C;
    case 383u: goto L_00392FA4;
    case 384u: goto L_00392FB0;
    case 385u: goto L_00392FC0;
    case 386u: goto L_00392FE8;
    case 387u: goto L_0039300C;
    case 388u: goto L_00393020;
    case 389u: goto L_00393040;
    case 390u: goto L_00393054;
    case 391u: goto L_00393060;
    case 392u: goto L_00393078;
    case 393u: goto L_00393098;
    case 394u: goto L_003930B4;
    case 395u: goto L_003930E0;
    case 396u: goto L_00393100;
    case 397u: goto L_00393118;
    case 398u: goto L_00393140;
    case 399u: goto L_0039314C;
    case 400u: goto L_0039315C;
    case 401u: goto L_00393168;
    case 402u: goto L_00393170;
    case 403u: goto L_00393188;
    case 404u: goto L_003931B0;
    case 405u: goto L_003931C4;
    case 406u: goto L_003931F0;
    case 407u: goto L_003931FC;
    case 408u: goto L_00393218;
    case 409u: goto L_0039323C;
    case 410u: goto L_00393250;
    case 411u: goto L_00393270;
    case 412u: goto L_00393298;
    case 413u: goto L_003932B0;
    case 414u: goto L_003932C0;
    case 415u: goto L_003932CC;
    case 416u: goto L_003932DC;
    case 417u: goto L_00393308;
    case 418u: goto L_00393314;
    case 419u: goto L_00393338;
    case 420u: goto L_0039335C;
    case 421u: goto L_00393390;
    case 422u: goto L_003933A4;
    case 423u: goto L_003933C8;
    case 424u: goto L_003933E8;
    case 425u: goto L_003933F8;
    case 426u: goto L_00393400;
    case 427u: goto L_00393420;
    case 428u: goto L_00393444;
    case 429u: goto L_00393478;
    case 430u: goto L_00393498;
    case 431u: goto L_003934B8;
    case 432u: goto L_003934F0;
    case 433u: goto L_00393510;
    case 434u: goto L_00393534;
    case 435u: goto L_00393560;
    case 436u: goto L_0039358C;
    case 437u: goto L_003935C8;
    case 438u: goto L_003935D8;
    case 439u: goto L_00393608;
    case 440u: goto L_0039361C;
    case 441u: goto L_0039362C;
    case 442u: goto L_00393640;
    case 443u: goto L_0039366C;
    case 444u: goto L_003936C8;
    case 445u: goto L_003936DC;
    case 446u: goto L_00393708;
    case 447u: goto L_00393720;
    case 448u: goto L_00393738;
    case 449u: goto L_00393750;
    case 450u: goto L_00393768;
    case 451u: goto L_00393780;
    case 452u: goto L_00393798;
    case 453u: goto L_003937B0;
    case 454u: goto L_003937D8;
    case 455u: goto L_003937EC;
    case 456u: goto L_003937F4;
    case 457u: goto L_00393808;
    case 458u: goto L_00393810;
    case 459u: goto L_00393828;
    case 460u: goto L_0039383C;
    case 461u: goto L_00393860;
    case 462u: goto L_00393874;
    case 463u: goto L_0039387C;
    case 464u: goto L_00393890;
    case 465u: goto L_00393898;
    case 466u: goto L_003938D8;
    case 467u: goto L_003938F8;
    case 468u: goto L_0039390C;
    case 469u: goto L_00393928;
    case 470u: goto L_00393960;
    case 471u: goto L_00393970;
    case 472u: goto L_00393980;
    case 473u: goto L_0039399C;
    case 474u: goto L_003939B0;
    case 475u: goto L_003939C0;
    case 476u: goto L_003939E4;
    case 477u: goto L_003939F8;
    case 478u: goto L_00393A20;
    case 479u: goto L_00393A40;
    case 480u: goto L_00393A60;
    case 481u: goto L_00393A7C;
    case 482u: goto L_00393A90;
    case 483u: goto L_00393AA0;
    case 484u: goto L_00393AC0;
    case 485u: goto L_00393AD0;
    case 486u: goto L_00393AF8;
    case 487u: goto L_00393B18;
    case 488u: goto L_00393B58;
    case 489u: goto L_00393B6C;
    case 490u: goto L_00393B78;
    case 491u: goto L_00393B84;
    case 492u: goto L_00393BA0;
    case 493u: goto L_00393BB4;
    case 494u: goto L_00393BC4;
    case 495u: goto L_00393BD8;
    case 496u: goto L_00393BF0;
    case 497u: goto L_00393C08;
    case 498u: goto L_00393C20;
    case 499u: goto L_00393C30;
    case 500u: goto L_00393C38;
    case 501u: goto L_00393C54;
    case 502u: goto L_00393CB8;
    case 503u: goto L_00393CCC;
    case 504u: goto L_00393CE0;
    case 505u: goto L_00393CF8;
    case 506u: goto L_00393D0C;
    case 507u: goto L_00393D20;
    case 508u: goto L_00393D48;
    case 509u: goto L_00393D60;
    case 510u: goto L_00393D74;
    case 511u: goto L_00393D88;
    case 512u: goto L_00393D94;
    case 513u: goto L_00393DB0;
    case 514u: goto L_00393DC4;
    case 515u: goto L_00393DD8;
    case 516u: goto L_00393DE8;
    case 517u: goto L_00393DF4;
    case 518u: goto L_00393E10;
    case 519u: goto L_00393E64;
    case 520u: goto L_00393EB8;
    case 521u: goto L_00393ED4;
    case 522u: goto L_00393F00;
    case 523u: goto L_00393F38;
    case 524u: goto L_00393FA8;
    case 525u: goto L_00393FC4;
    case 526u: goto L_00393FF0;
    default: bad_entry(c, 0x00390000u); return;
    }
L_00390000:
    set32(c.r[5], 0u + 45u);
    c.budget -= 1;
L_00390004:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00390008:
    set32(c.r[19], c.r[2].w[0] - c.r[19].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390014u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 384u, depth + 1u); else { c.pc = 0x003AB698u; return; } if (c.pc != 0x00390014u) [[unlikely]] return; }
L_00390014:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390024u); set32(c.r[5], 0u + 44u);  if (depth < kMaxDepth) unit_00A2(c, 384u, depth + 1u); else { c.pc = 0x003AB698u; return; } if (c.pc != 0x00390024u) [[unlikely]] return; }
L_00390024:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_0039002C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390034u); set32(c.r[5], 0u + 42u);  if (depth < kMaxDepth) unit_00A2(c, 384u, depth + 1u); else { c.pc = 0x003AB698u; return; } if (c.pc != 0x00390034u) [[unlikely]] return; }
L_00390034:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390044u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00A2(c, 384u, depth + 1u); else { c.pc = 0x003AB698u; return; } if (c.pc != 0x00390044u) [[unlikely]] return; }
L_00390044:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 51u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390054u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 384u, depth + 1u); else { c.pc = 0x003AB698u; return; } if (c.pc != 0x00390054u) [[unlikely]] return; }
L_00390054:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 14u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390064u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 384u, depth + 1u); else { c.pc = 0x003AB698u; return; } if (c.pc != 0x00390064u) [[unlikely]] return; }
L_00390064:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390074u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 384u, depth + 1u); else { c.pc = 0x003AB698u; return; } if (c.pc != 0x00390074u) [[unlikely]] return; }
L_00390074:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 5u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00A0(c, 80u, depth); }
L_003900A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003900C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 215u, depth + 1u); else { c.pc = 0x003A9A00u; return; } if (c.pc != 0x003900C0u) [[unlikely]] return; }
L_003900C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00390000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 10528u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003900E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 7896u);  if (t) { goto L_00390100; } }
L_003900E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003900E8u);  if (depth < kMaxDepth) unit_009F(c, 254u, depth + 1u); else { c.pc = 0x0039E630u; return; } if (c.pc != 0x003900E8u) [[unlikely]] return; }
L_003900E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00390110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003900F8u); set32(c.r[4], 0u - 303u);  if (depth < kMaxDepth) unit_009C(c, 321u, depth + 1u); else { c.pc = 0x00392808u; return; } if (c.pc != 0x003900F8u) [[unlikely]] return; }
L_003900F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 7952u);
    c.budget -= 2;
L_00390100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390108u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00390108u) [[unlikely]] return; }
L_00390108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039011C; } }
L_00390110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390118u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 341u, depth + 1u); else { c.pc = 0x0038FDA8u; return; } if (c.pc != 0x00390118u) [[unlikely]] return; }
L_00390118:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039011C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00390130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 480u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 472u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 476u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379E40u | kUnwind; return; } [[clang::musttail]] return unit_0096(c, 170u, depth); }
L_00390158:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 80u), c.r[31].d[0]);  if (t) { goto L_00390190; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 8008u);  if (t) { goto L_0039022C; } }
    c.budget -= 1;
L_00390190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390198u);  if (depth < kMaxDepth) unit_009C(c, 57u, depth + 1u); else { c.pc = 0x00390598u; return; } if (c.pc != 0x00390198u) [[unlikely]] return; }
L_00390198:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003904C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003901ACu);  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x003901ACu) [[unlikely]] return; }
L_003901AC:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + 108u);
    set32(c.r[18], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
L_003901BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_003901F8; } }
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_003901D0:
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 700u);  if (t) { goto L_003901F4; } }
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003901D0u | kUnwind; return; } goto L_003901D0; }
L_003901F4:
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_003901F8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00390218; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390208u); set32(c.r[4], 0u - 11u);  if (depth < kMaxDepth) unit_009C(c, 321u, depth + 1u); else { c.pc = 0x00392808u; return; } if (c.pc != 0x00390208u) [[unlikely]] return; }
L_00390208:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 8056u);  if (t) { goto L_0039022C; } }
    c.budget -= 1;
L_00390218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390220u); set32(c.r[21], 0u - 1u);  if (depth < kMaxDepth) unit_009C(c, 53u, depth + 1u); else { c.pc = 0x003904F0u; return; } if (c.pc != 0x00390220u) [[unlikely]] return; }
L_00390220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[21].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00390240; } }
    set32(c.r[4], c.r[4].w[0] + 8136u);
    c.budget -= 1;
L_0039022C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390234u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00390234u) [[unlikely]] return; }
L_00390234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003904C8; } }
    c.budget -= 1;
L_00390240:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00390254; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390254u); set32(c.r[6], 0u + 700u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x00390254u) [[unlikely]] return; }
L_00390254:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390260u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 55u, depth + 1u); else { c.pc = 0x00390540u; return; } if (c.pc != 0x00390260u) [[unlikely]] return; }
L_00390260:
    ldl(c.r[2], (c.r[17].w[0] + 7u));
    ldr(c.r[2], (c.r[17].w[0]));
    ldl(c.r[3], (c.r[17].w[0] + 15u));
    ldr(c.r[3], (c.r[17].w[0] + 8u));
    ldl(c.r[4], (c.r[17].w[0] + 23u));
    ldr(c.r[4], (c.r[17].w[0] + 16u));
    ldl(c.r[5], (c.r[17].w[0] + 31u));
    ldr(c.r[5], (c.r[17].w[0] + 24u));
    sdl(c.r[2], (c.r[16].w[0] + 19u));
    sdr(c.r[2], (c.r[16].w[0] + 12u));
    sdl(c.r[3], (c.r[16].w[0] + 27u));
    sdr(c.r[3], (c.r[16].w[0] + 20u));
    sdl(c.r[4], (c.r[16].w[0] + 35u));
    sdr(c.r[4], (c.r[16].w[0] + 28u));
    sdl(c.r[5], (c.r[16].w[0] + 43u));
    sdr(c.r[5], (c.r[16].w[0] + 36u));
    ldl(c.r[2], (c.r[17].w[0] + 39u));
    ldr(c.r[2], (c.r[17].w[0] + 32u));
    ldl(c.r[3], (c.r[17].w[0] + 47u));
    ldr(c.r[3], (c.r[17].w[0] + 40u));
    sdl(c.r[2], (c.r[16].w[0] + 51u));
    sdr(c.r[2], (c.r[16].w[0] + 44u));
    sdl(c.r[3], (c.r[16].w[0] + 59u));
    sdr(c.r[3], (c.r[16].w[0] + 52u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003902CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 299u, depth + 1u); else { c.pc = 0x0038F5F0u; return; } if (c.pc != 0x003902CCu) [[unlikely]] return; }
L_003902CC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[16].w[0] + 64u), c.r[19].w[0]);  if (t) { goto L_003902E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 8200u);  if (t) { goto L_00390490; } }
    c.budget -= 1;
L_003902E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003902F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 467u, depth + 1u); else { c.pc = 0x003938F8u; return; } if (c.pc != 0x003902F0u) [[unlikely]] return; }
L_003902F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003902F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 341u, depth + 1u); else { c.pc = 0x0038FDA8u; return; } if (c.pc != 0x003902F8u) [[unlikely]] return; }
L_003902F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    set32(c.r[7], c.r[29].w[0] + 8u);
    set32(c.r[8], c.r[29].w[0] + 12u);
    set32(c.r[9], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390318u); set32(c.r[10], c.r[29].w[0] + 20u);  if (depth < kMaxDepth) unit_009B(c, 266u, depth + 1u); else { c.pc = 0x0038EE28u; return; } if (c.pc != 0x00390318u) [[unlikely]] return; }
L_00390318:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039032Cu); set32(c.r[7], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_009B(c, 346u, depth + 1u); else { c.pc = 0x0038FF50u; return; } if (c.pc != 0x0039032Cu) [[unlikely]] return; }
L_0039032C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390334u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 18u, depth + 1u); else { c.pc = 0x00390130u; return; } if (c.pc != 0x00390334u) [[unlikely]] return; }
L_00390334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 468u), c.r[2].w[0]);  if (t) { goto L_00390348; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 8240u);  if (t) { goto L_00390490; } }
L_00390348:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390354u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0096(c, 102u, depth + 1u); else { c.pc = 0x00379428u; return; } if (c.pc != 0x00390354u) [[unlikely]] return; }
L_00390354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 500u), c.r[2].w[0]);  if (t) { goto L_00390368; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 8280u);  if (t) { goto L_00390490; } }
L_00390368:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[20], 0u + 1u);
    st32((c.r[16].w[0] + 60u), c.r[20].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 3680u);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[18], c.r[16].w[0] + 72u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], 0u + 3u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003903B0u); st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 413u, depth + 1u); else { c.pc = 0x003ABC28u; return; } if (c.pc != 0x003903B0u) [[unlikely]] return; }
L_003903B0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[18].w[0]), 0u);  goto L_003903B8; }
L_003903B8:
    st32((c.r[16].w[0] + 112u), c.r[20].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 119u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003903DCu); st32((c.r[16].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_009E(c, 94u, depth + 1u); else { c.pc = 0x00398830u; return; } if (c.pc != 0x003903DCu) [[unlikely]] return; }
L_003903DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003903E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 96u, depth + 1u); else { c.pc = 0x00398840u; return; } if (c.pc != 0x003903E8u) [[unlikely]] return; }
L_003903E8:
    st32((c.r[16].w[0] + 88u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003903F8u); set32(c.r[4], ld32((c.r[16].w[0] + 468u)));  if (depth < kMaxDepth) unit_009E(c, 137u, depth + 1u); else { c.pc = 0x00398BE8u; return; } if (c.pc != 0x003903F8u) [[unlikely]] return; }
L_003903F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_00390498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390408u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 423u, depth + 1u); else { c.pc = 0x003933C8u; return; } if (c.pc != 0x00390408u) [[unlikely]] return; }
L_00390408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390410u); set32(c.r[4], ld32((c.r[16].w[0] + 468u)));  if (depth < kMaxDepth) unit_0095(c, 103u, depth + 1u); else { c.pc = 0x00374D58u; return; } if (c.pc != 0x00390410u) [[unlikely]] return; }
L_00390410:
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390424u); set32(c.r[5], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_0095(c, 114u, depth + 1u); else { c.pc = 0x00374EB0u; return; } if (c.pc != 0x00390424u) [[unlikely]] return; }
L_00390424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039042Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 60u, depth + 1u); else { c.pc = 0x00390600u; return; } if (c.pc != 0x0039042Cu) [[unlikely]] return; }
L_0039042C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_00390498; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390448u); set32(c.r[6], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_009D(c, 94u, depth + 1u); else { c.pc = 0x003950F0u; return; } if (c.pc != 0x00390448u) [[unlikely]] return; }
L_00390448:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 172u), c.r[2].w[0]);  goto L_00390460; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 8320u);  if (t) { goto L_00390490; } }
    c.budget -= 1;
L_00390460:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039046Cu); set32(c.r[5], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_009D(c, 138u, depth + 1u); else { c.pc = 0x00395768u; return; } if (c.pc != 0x0039046Cu) [[unlikely]] return; }
L_0039046C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390474u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 146u, depth + 1u); else { c.pc = 0x00395B98u; return; } if (c.pc != 0x00390474u) [[unlikely]] return; }
L_00390474:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390480u); st32((c.r[16].w[0] + 400u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 153u, depth + 1u); else { c.pc = 0x00395C28u; return; } if (c.pc != 0x00390480u) [[unlikely]] return; }
L_00390480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003904A8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 8352u);
    c.budget -= 2;
L_00390490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390498u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00390498u) [[unlikely]] return; }
L_00390498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003904A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 67u, depth + 1u); else { c.pc = 0x003906C8u; return; } if (c.pc != 0x003904A0u) [[unlikely]] return; }
L_003904A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003904C8; } }
L_003904A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003904B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 156u, depth + 1u); else { c.pc = 0x00395C88u; return; } if (c.pc != 0x003904B0u) [[unlikely]] return; }
L_003904B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003904B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 242u, depth + 1u); else { c.pc = 0x00391ED8u; return; } if (c.pc != 0x003904B8u) [[unlikely]] return; }
L_003904B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003904C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 244u, depth + 1u); else { c.pc = 0x00391F58u; return; } if (c.pc != 0x003904C0u) [[unlikely]] return; }
L_003904C0:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003904C8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003904F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390504u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00390504u) [[unlikely]] return; }
L_00390504:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[6], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039052C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    if (c.r[3].d[0] != 0) c.r[4].d[0] = 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[6].d[0];
    c.budget -= 5;
L_0039052C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00390540:
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[2], c.r[4].w[0] + 512u);
    set32(c.r[6], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[7], c.r[4].w[0] + 656u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[8], 0u + 31u);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 528u), 0u);
    c.budget -= 12;
L_00390570:
    set32(c.r[8], c.r[8].w[0] - 1u);
    st32((c.r[7].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[7], c.r[7].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00390570u | kUnwind; return; } goto L_00390570; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00390598:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003905C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003905C4u); set32(c.r[4], c.r[4].w[0] + 8392u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003905C4u) [[unlikely]] return; }
L_003905C4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003905C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003905EC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003905E4u); set32(c.r[4], c.r[4].w[0] + 8440u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003905E4u) [[unlikely]] return; }
L_003905E4:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003905EC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00390600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 12u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390628u); set32(c.r[5], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_009D(c, 93u, depth + 1u); else { c.pc = 0x003950E8u; return; } if (c.pc != 0x00390628u) [[unlikely]] return; }
L_00390628:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390638u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 100u, depth + 1u); else { c.pc = 0x00390BD0u; return; } if (c.pc != 0x00390638u) [[unlikely]] return; }
L_00390638:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 8480u);  if (t) { goto L_00390678; } }
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390654u); st32((c.r[16].w[0] + 180u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_009D(c, 145u, depth + 1u); else { c.pc = 0x00395B70u; return; } if (c.pc != 0x00390654u) [[unlikely]] return; }
L_00390654:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003906A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390668u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (depth < kMaxDepth) unit_009C(c, 100u, depth + 1u); else { c.pc = 0x00390BD0u; return; } if (c.pc != 0x00390668u) [[unlikely]] return; }
L_00390668:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8520u);  if (t) { goto L_00390690; } }
L_00390678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390680u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00390680u) [[unlikely]] return; }
L_00390680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390688u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 116u, depth + 1u); else { c.pc = 0x00390D70u; return; } if (c.pc != 0x00390688u) [[unlikely]] return; }
L_00390688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003906AC; } }
L_00390690:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st32((c.r[16].w[0] + 404u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 408u), c.r[2].w[0]);  if (t) { goto L_003906A8; } }
L_003906A0:
    st32((c.r[16].w[0] + 408u), 0u);
    st32((c.r[16].w[0] + 404u), 0u);
    c.budget -= 2;
L_003906A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003906AC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003906C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003907D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003906E4u);  if (depth < kMaxDepth) unit_009C(c, 397u, depth + 1u); else { c.pc = 0x00393118u; return; } if (c.pc != 0x003906E4u) [[unlikely]] return; }
L_003906E4:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003906F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 151u, depth + 1u); else { c.pc = 0x00395BF8u; return; } if (c.pc != 0x003906F0u) [[unlikely]] return; }
L_003906F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_00390708; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390704u);  if (depth < kMaxDepth) unit_009D(c, 95u, depth + 1u); else { c.pc = 0x00395108u; return; } if (c.pc != 0x00390704u) [[unlikely]] return; }
L_00390704:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00390708:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  goto L_0039071C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390718u);  if (depth < kMaxDepth) unit_0095(c, 112u, depth + 1u); else { c.pc = 0x00374E60u; return; } if (c.pc != 0x00390718u) [[unlikely]] return; }
L_00390718:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_0039071C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 468u)));  goto L_00390730; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039072Cu);  if (depth < kMaxDepth) unit_009E(c, 138u, depth + 1u); else { c.pc = 0x00398C00u; return; } if (c.pc != 0x0039072Cu) [[unlikely]] return; }
L_0039072C:
    set32(c.r[4], ld32((c.r[16].w[0] + 468u)));
    c.budget -= 1;
L_00390730:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 500u)));  goto L_0039074C; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00390748u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00390748u) [[unlikely]] return; }
L_00390748:
    set32(c.r[4], ld32((c.r[16].w[0] + 500u)));
    c.budget -= 1;
L_0039074C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 696u)));  goto L_00390768; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00390764u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00390764u) [[unlikely]] return; }
L_00390764:
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.budget -= 1;
L_00390768:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  goto L_0039077C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390778u);  if (depth < kMaxDepth) unit_009B(c, 244u, depth + 1u); else { c.pc = 0x0038EB30u; return; } if (c.pc != 0x00390778u) [[unlikely]] return; }
L_00390778:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 1;
L_0039077C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039078C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039078Cu);  if (depth < kMaxDepth) unit_009B(c, 343u, depth + 1u); else { c.pc = 0x0038FF08u; return; } if (c.pc != 0x0039078Cu) [[unlikely]] return; }
L_0039078C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390794u); set32(c.r[4], c.r[16].w[0] + 660u);  if (depth < kMaxDepth) unit_009D(c, 319u, depth + 1u); else { c.pc = 0x003977C8u; return; } if (c.pc != 0x00390794u) [[unlikely]] return; }
L_00390794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039079Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 116u, depth + 1u); else { c.pc = 0x00390D70u; return; } if (c.pc != 0x0039079Cu) [[unlikely]] return; }
L_0039079C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003907A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 120u, depth + 1u); else { c.pc = 0x00390DF0u; return; } if (c.pc != 0x003907A4u) [[unlikely]] return; }
L_003907A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003907B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003907B4u); set32(c.r[4], c.r[4].w[0] + 8560u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003907B4u) [[unlikely]] return; }
L_003907B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003907C4u); set32(c.r[6], 0u + 700u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003907C4u) [[unlikely]] return; }
L_003907C4:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + 3680u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_003907D4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003907F8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.budget -= 13;
    { const bool t = c.r[20].d[0] == 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_00390840; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00390844; } }
    c.r[2].d[0] = c.r[19].d[0] & 2047ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00390870; } }
L_00390840:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_00390844:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 8584u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_00390870:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_003908C8; } }
    set32(c.r[5], 0u + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390884u); set32(c.r[4], c.r[4].w[0] - 8632u);  if (depth < kMaxDepth) unit_009B(c, 243u, depth + 1u); else { c.pc = 0x0038EB10u; return; } if (c.pc != 0x00390884u) [[unlikely]] return; }
L_00390884:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390894u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 245u, depth + 1u); else { c.pc = 0x0038EB38u; return; } if (c.pc != 0x00390894u) [[unlikely]] return; }
L_00390894:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 11));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003908C0; } }
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003908A8:
    set32(c.r[16], c.r[16].w[0] + 2048u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003908B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 262u, depth + 1u); else { c.pc = 0x0038ED88u; return; } if (c.pc != 0x003908B8u) [[unlikely]] return; }
L_003908B8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003908A8u | kUnwind; return; } goto L_003908A8; } }
L_003908C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003908C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 244u, depth + 1u); else { c.pc = 0x0038EB30u; return; } if (c.pc != 0x003908C8u) [[unlikely]] return; }
L_003908C8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 64u);  goto L_003908F8; }
L_003908F8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 120u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 136u), c.r[19].d[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 144u), c.r[31].d[0]);  if (t) { goto L_00390928; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00390940; } }
L_00390928:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390934u); set32(c.r[4], c.r[4].w[0] + 8640u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00390934u) [[unlikely]] return; }
L_00390934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00390AA4; } }
    c.budget -= 1;
L_00390940:
    c.budget -= 2;
    if (c.r[16].sd[0] > 0) { c.r[4].d[0] = c.r[29].d[0] + 0ull;  goto L_00390960; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390954u); set32(c.r[4], c.r[4].w[0] + 8680u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00390954u) [[unlikely]] return; }
L_00390954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00390AA4; } }
    c.budget -= 1;
L_00390960:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039096Cu); set32(c.r[6], 0u + 44u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0039096Cu) [[unlikely]] return; }
L_0039096C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390980u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 59u, depth + 1u); else { c.pc = 0x0039CB28u; return; } if (c.pc != 0x00390980u) [[unlikely]] return; }
L_00390980:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 49u)));  if (t) { goto L_00390994; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003909F8; } }
L_00390994:
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    ldl(c.r[3], (c.r[29].w[0] + 15u));
    ldr(c.r[3], (c.r[29].w[0] + 8u));
    ldl(c.r[4], (c.r[29].w[0] + 23u));
    ldr(c.r[4], (c.r[29].w[0] + 16u));
    ldl(c.r[5], (c.r[29].w[0] + 31u));
    ldr(c.r[5], (c.r[29].w[0] + 24u));
    sdl(c.r[2], (c.r[18].w[0] + 7u));
    sdr(c.r[2], (c.r[18].w[0]));
    sdl(c.r[3], (c.r[18].w[0] + 15u));
    sdr(c.r[3], (c.r[18].w[0] + 8u));
    sdl(c.r[4], (c.r[18].w[0] + 23u));
    sdr(c.r[4], (c.r[18].w[0] + 16u));
    sdl(c.r[5], (c.r[18].w[0] + 31u));
    sdr(c.r[5], (c.r[18].w[0] + 24u));
    ldl(c.r[2], (c.r[29].w[0] + 39u));
    ldr(c.r[2], (c.r[29].w[0] + 32u));
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    sdl(c.r[2], (c.r[18].w[0] + 39u));
    sdr(c.r[2], (c.r[18].w[0] + 32u));
    st32((c.r[18].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_00390AA0; } }
    c.budget -= 1;
L_003909F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A00u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 96u, depth + 1u); else { c.pc = 0x00390AC0u; return; } if (c.pc != 0x00390A00u) [[unlikely]] return; }
L_00390A00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[29].w[0] + 68u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 92u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 88u)));
    st32((c.r[29].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[8].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A3Cu); st32((c.r[29].w[0] + 40u), c.r[9].w[0]);  if (depth < kMaxDepth) unit_009C(c, 220u, depth + 1u); else { c.pc = 0x00391CA0u; return; } if (c.pc != 0x00390A3Cu) [[unlikely]] return; }
L_00390A3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A44u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 97u, depth + 1u); else { c.pc = 0x00390B10u; return; } if (c.pc != 0x00390A44u) [[unlikely]] return; }
L_00390A44:
    st32((c.r[29].w[0]), c.r[2].w[0]);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    ldl(c.r[3], (c.r[29].w[0] + 15u));
    ldr(c.r[3], (c.r[29].w[0] + 8u));
    ldl(c.r[4], (c.r[29].w[0] + 23u));
    ldr(c.r[4], (c.r[29].w[0] + 16u));
    ldl(c.r[5], (c.r[29].w[0] + 31u));
    ldr(c.r[5], (c.r[29].w[0] + 24u));
    sdl(c.r[2], (c.r[18].w[0] + 7u));
    sdr(c.r[2], (c.r[18].w[0]));
    sdl(c.r[3], (c.r[18].w[0] + 15u));
    sdr(c.r[3], (c.r[18].w[0] + 8u));
    sdl(c.r[4], (c.r[18].w[0] + 23u));
    sdr(c.r[4], (c.r[18].w[0] + 16u));
    sdl(c.r[5], (c.r[18].w[0] + 31u));
    sdr(c.r[5], (c.r[18].w[0] + 24u));
    ldl(c.r[2], (c.r[29].w[0] + 39u));
    ldr(c.r[2], (c.r[29].w[0] + 32u));
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    sdl(c.r[2], (c.r[18].w[0] + 39u));
    sdr(c.r[2], (c.r[18].w[0] + 32u));
    st32((c.r[18].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 23;
L_00390AA0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00390AA4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 136u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00390AC0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00390AF0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00390B04; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 2u);  goto L_00390B00; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_00390AF0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 4;
L_00390B00:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00390B04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00390B10:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00390B80; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00390B80; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00390B80; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], 0u + 12000u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00390B80; } }
    c.r[2].d[0] = c.r[4].sd[0] < 12001ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 24000u);  if (t) { goto L_00390B60; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00390B80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6000u);  if (t) { goto L_00390B6C; } }
L_00390B60:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00390B80; } }
    c.r[2].d[0] = 0ull | 48000ull;
    c.budget -= 1;
L_00390B6C:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00390B80; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00390B80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00390B88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390BACu); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00390BACu) [[unlikely]] return; }
L_00390BAC:
    st32((c.r[2].w[0] + 48u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 44u), c.r[18].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00390BD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 528u)));
    c.r[2].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00390C08; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390C00u); set32(c.r[4], c.r[4].w[0] + 8728u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00390C00u) [[unlikely]] return; }
L_00390C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00390C5C; } }
L_00390C08:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00390C5C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 512u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00390C30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390C24u);  if (depth < kMaxDepth) unit_009C(c, 105u, depth + 1u); else { c.pc = 0x00390C70u; return; } if (c.pc != 0x00390C24u) [[unlikely]] return; }
L_00390C24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00390C3C; } }
    c.budget -= 1;
L_00390C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390C38u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 106u, depth + 1u); else { c.pc = 0x00390CA8u; return; } if (c.pc != 0x00390C38u) [[unlikely]] return; }
L_00390C38:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00390C3C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00390C58; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 528u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390C58u); st32((c.r[2].w[0] + 532u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_009C(c, 119u, depth + 1u); else { c.pc = 0x00390DD0u; return; } if (c.pc != 0x00390C58u) [[unlikely]] return; }
L_00390C58:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00390C5C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00390C70:
    set32(c.r[4], c.r[4].w[0] + 512u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00390C9C; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_00390C9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; return; }
L_00390CA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390CBCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00390CBCu) [[unlikely]] return; }
L_00390CBC:
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00390CCCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00390CCCu) [[unlikely]] return; }
L_00390CCC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00390CE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 512u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00390D10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D04u);  if (depth < kMaxDepth) unit_009C(c, 112u, depth + 1u); else { c.pc = 0x00390D30u; return; } if (c.pc != 0x00390D04u) [[unlikely]] return; }
L_00390D04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00390D1C; } }
    c.budget -= 1;
L_00390D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D18u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 113u, depth + 1u); else { c.pc = 0x00390D38u; return; } if (c.pc != 0x00390D18u) [[unlikely]] return; }
L_00390D18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00390D1C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00390DE0; }
L_00390D30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00390D38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D4Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00390D4Cu) [[unlikely]] return; }
L_00390D4C:
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00390D5Cu) [[unlikely]] return; }
L_00390D5C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00390D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[17].w[0] + 656u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 31u);
    c.budget -= 8;
L_00390D90:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] - 1u);  goto L_00390DAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390DA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 109u, depth + 1u); else { c.pc = 0x00390CE0u; return; } if (c.pc != 0x00390DA4u) [[unlikely]] return; }
L_00390DA4:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 2;
L_00390DAC:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00390D90u | kUnwind; return; } goto L_00390D90; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00390DD0:
    set32(c.r[2], ld32((c.r[4].w[0] + 528u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 528u), c.r[2].w[0]);  c.pc = t; return; }
L_00390DE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 528u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 528u), c.r[2].w[0]);  c.pc = t; return; }
L_00390DF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 528u)));  c.pc = t; return; }
L_00390DF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390E18u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 502u, depth + 1u); else { c.pc = 0x00393CB8u; return; } if (c.pc != 0x00390E18u) [[unlikely]] return; }
L_00390E18:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 696u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00390E48; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009F(c, 316u, depth); }
L_00390E48:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390E54u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 245u, depth + 1u); else { c.pc = 0x0038EB38u; return; } if (c.pc != 0x00390E54u) [[unlikely]] return; }
L_00390E54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00390000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], c.r[5].w[0] + 3776u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009F(c, 316u, depth); }
L_00390EC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 696u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0038ED88u | kUnwind; return; } [[clang::musttail]] return unit_009B(c, 262u, depth); }
L_00390F30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390F44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00390F44u) [[unlikely]] return; }
L_00390F44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00390F70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390F58u); set32(c.r[4], c.r[4].w[0] + 8816u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00390F58u) [[unlikely]] return; }
L_00390F58:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00390F70:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00390F80; }
L_00390F80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 88u)));  c.pc = t; return; }
L_00390F88:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390FBCu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00390FBCu) [[unlikely]] return; }
L_00390FBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00390FD8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390FD0u); set32(c.r[4], c.r[4].w[0] + 8864u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00390FD0u) [[unlikely]] return; }
L_00390FD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039106C; } }
L_00390FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390FE0u);  if (depth < kMaxDepth) unit_009C(c, 502u, depth + 1u); else { c.pc = 0x00393CB8u; return; } if (c.pc != 0x00390FE0u) [[unlikely]] return; }
L_00390FE0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390FF0u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 266u, depth + 1u); else { c.pc = 0x003AA0B0u; return; } if (c.pc != 0x00390FF0u) [[unlikely]] return; }
L_00390FF0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039106C; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039100Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 184u, depth + 1u); else { c.pc = 0x00391698u; return; } if (c.pc != 0x0039100Cu) [[unlikely]] return; }
L_0039100C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039101Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 166u, depth + 1u); else { c.pc = 0x003912C8u; return; } if (c.pc != 0x0039101Cu) [[unlikely]] return; }
L_0039101C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391028u); set32(c.r[5], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_009C(c, 185u, depth + 1u); else { c.pc = 0x003916E0u; return; } if (c.pc != 0x00391028u) [[unlikely]] return; }
L_00391028:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391034u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 160u, depth + 1u); else { c.pc = 0x00391200u; return; } if (c.pc != 0x00391034u) [[unlikely]] return; }
L_00391034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039103Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 162u, depth + 1u); else { c.pc = 0x00391250u; return; } if (c.pc != 0x0039103Cu) [[unlikely]] return; }
L_0039103C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00391040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391048u); set32(c.r[5], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_009C(c, 180u, depth + 1u); else { c.pc = 0x003915F0u; return; } if (c.pc != 0x00391048u) [[unlikely]] return; }
L_00391048:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039105Cu); st32((c.r[16].w[0] + 188u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_009C(c, 259u, depth + 1u); else { c.pc = 0x00392248u; return; } if (c.pc != 0x0039105Cu) [[unlikely]] return; }
L_0039105C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391068u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 140u, depth + 1u); else { c.pc = 0x003957F8u; return; } if (c.pc != 0x00391068u) [[unlikely]] return; }
L_00391068:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0039106C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00391088:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.budget -= 4;
L_00391098:
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003910B4u); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x003910B4u) [[unlikely]] return; }
L_003910B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003910D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003910C8u); set32(c.r[4], c.r[4].w[0] + 8912u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003910C8u) [[unlikely]] return; }
L_003910C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), 0u);  if (t) { goto L_003911DC; } }
L_003910D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003910D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 502u, depth + 1u); else { c.pc = 0x00393CB8u; return; } if (c.pc != 0x003910D8u) [[unlikely]] return; }
L_003910D8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003910E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 275u, depth + 1u); else { c.pc = 0x003AA200u; return; } if (c.pc != 0x003910E8u) [[unlikely]] return; }
L_003910E8:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_003911DC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00391154; } }
    set32(c.r[20], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[21], 0u + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00391110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00391150; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391120u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 210u, depth + 1u); else { c.pc = 0x00391AF0u; return; } if (c.pc != 0x00391120u) [[unlikely]] return; }
L_00391120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[21].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00391150; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391130u); set32(c.r[5], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00A2(c, 280u, depth + 1u); else { c.pc = 0x003AA2C8u; return; } if (c.pc != 0x00391130u) [[unlikely]] return; }
L_00391130:
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391148u); st32((c.r[16].w[0] + 136u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 275u, depth + 1u); else { c.pc = 0x003AA200u; return; } if (c.pc != 0x00391148u) [[unlikely]] return; }
L_00391148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391110u | kUnwind; return; } goto L_00391110; } }
L_00391150:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_00391154:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003911D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    st32((c.r[16].w[0] + 124u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391174u); st32((c.r[16].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009C(c, 184u, depth + 1u); else { c.pc = 0x00391698u; return; } if (c.pc != 0x00391174u) [[unlikely]] return; }
L_00391174:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391184u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 166u, depth + 1u); else { c.pc = 0x003912C8u; return; } if (c.pc != 0x00391184u) [[unlikely]] return; }
L_00391184:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391190u); set32(c.r[5], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_009C(c, 185u, depth + 1u); else { c.pc = 0x003916E0u; return; } if (c.pc != 0x00391190u) [[unlikely]] return; }
L_00391190:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039119Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 160u, depth + 1u); else { c.pc = 0x00391200u; return; } if (c.pc != 0x0039119Cu) [[unlikely]] return; }
L_0039119C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003911A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 162u, depth + 1u); else { c.pc = 0x00391250u; return; } if (c.pc != 0x003911A4u) [[unlikely]] return; }
L_003911A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003911B0u); set32(c.r[5], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_009C(c, 180u, depth + 1u); else { c.pc = 0x003915F0u; return; } if (c.pc != 0x003911B0u) [[unlikely]] return; }
L_003911B0:
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    st32((c.r[19].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003911C4u); st32((c.r[16].w[0] + 188u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_009C(c, 259u, depth + 1u); else { c.pc = 0x00392248u; return; } if (c.pc != 0x003911C4u) [[unlikely]] return; }
L_003911C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003911D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 140u, depth + 1u); else { c.pc = 0x003957F8u; return; } if (c.pc != 0x003911D0u) [[unlikely]] return; }
L_003911D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003911E0; } }
L_003911D8:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_003911DC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003911E0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00391200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 420u), c.r[3].w[0]);  goto L_0039123C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391234u);  if (depth < kMaxDepth) unit_009D(c, 161u, depth + 1u); else { c.pc = 0x00395D30u; return; } if (c.pc != 0x00391234u) [[unlikely]] return; }
L_00391234:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    st32((c.r[16].w[0] + 420u), c.r[3].w[0]);
    c.budget -= 2;
L_0039123C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00391250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391274u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 257u, depth + 1u); else { c.pc = 0x00392148u; return; } if (c.pc != 0x00391274u) [[unlikely]] return; }
L_00391274:
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391284u); c.r[19].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_009C(c, 191u, depth + 1u); else { c.pc = 0x003917F8u; return; } if (c.pc != 0x00391284u) [[unlikely]] return; }
L_00391284:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003912A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391298u);  if (depth < kMaxDepth) unit_009D(c, 200u, depth + 1u); else { c.pc = 0x003963F8u; return; } if (c.pc != 0x00391298u) [[unlikely]] return; }
L_00391298:
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[17].d[0];
    c.r[19].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_003912A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_009D(c, 143u, depth); }
L_003912C8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[22].w[0] + 64u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391310u); set32(c.r[23], ld32((c.r[18].w[0] + 32u)));  if (depth < kMaxDepth) unit_009C(c, 177u, depth + 1u); else { c.pc = 0x00391548u; return; } if (c.pc != 0x00391310u) [[unlikely]] return; }
L_00391310:
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[29].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039133Cu); st32((c.r[29].w[0] + 20u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_009C(c, 178u, depth + 1u); else { c.pc = 0x00391588u; return; } if (c.pc != 0x0039133Cu) [[unlikely]] return; }
L_0039133C:
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[19], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[20], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[21], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[30], ld32((c.r[18].w[0] + 44u)));
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039136Cu); st32((c.r[29].w[0] + 32u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00A3(c, 114u, depth + 1u); else { c.pc = 0x003AD2F8u; return; } if (c.pc != 0x0039136Cu) [[unlikely]] return; }
L_0039136C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0])));  if (t) { goto L_00391384; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391380u); set32(c.r[4], c.r[4].w[0] + 8960u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00391380u) [[unlikely]] return; }
L_00391380:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_00391384:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391390u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 176u, depth + 1u); else { c.pc = 0x00391518u; return; } if (c.pc != 0x00391390u) [[unlikely]] return; }
L_00391390:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003913A4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 176u, depth + 1u); else { c.pc = 0x00391518u; return; } if (c.pc != 0x003913A4u) [[unlikely]] return; }
L_003913A4:
    st32((c.r[17].w[0]), c.r[23].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    st32((c.r[17].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    st32((c.r[17].w[0] + 12u), c.r[6].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 12u)));
    st32((c.r[17].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[17].w[0] + 20u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 20u)));
    st32((c.r[17].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 48u), c.r[30].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[21].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391418u); st32((c.r[17].w[0] + 64u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_009C(c, 174u, depth + 1u); else { c.pc = 0x00391480u; return; } if (c.pc != 0x00391418u) [[unlikely]] return; }
L_00391418:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 72u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    st64((c.r[17].w[0] + 80u), c.r[2].d[0]);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[3].d[0] = ld64((c.r[18].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    st64((c.r[17].w[0] + 88u), c.r[3].d[0]);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[2].d[0] = ld64((c.r[18].w[0] + 88u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    st64((c.r[17].w[0] + 96u), c.r[2].d[0]);
    c.r[23].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[3].d[0] = ld64((c.r[18].w[0] + 96u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 112u));
    st64((c.r[17].w[0] + 104u), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[2].d[0] = ld64((c.r[18].w[0] + 104u));
    st64((c.r[17].w[0] + 112u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 112u));
    st64((c.r[17].w[0] + 120u), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 120u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    st64((c.r[17].w[0] + 128u), c.r[2].d[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00391480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], c.r[4].w[0] + 356u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[20], ld32((c.r[4].w[0] + 380u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003914B8u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_009C(c, 296u, depth + 1u); else { c.pc = 0x00392638u; return; } if (c.pc != 0x003914B8u) [[unlikely]] return; }
L_003914B8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[18].w[0] + 72u), 0u);  goto L_003914D0; }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[19].d[0];  if (t) { goto L_003914D8; } }
    st32((c.r[18].w[0] + 72u), 0u);
    c.budget -= 1;
L_003914D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 68u), 0u);  if (t) { goto L_003914F8; } }
L_003914D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_003914F0; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[18].w[0] + 72u), c.r[17].w[0]);  goto L_003914F4; }
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] - 4u);
    c.budget -= 2;
L_003914F0:
    st32((c.r[18].w[0] + 72u), c.r[17].w[0]);
    c.budget -= 1;
L_003914F4:
    st32((c.r[18].w[0] + 68u), c.r[16].w[0]);
    c.budget -= 1;
L_003914F8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00391518:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], c.r[2].w[0] << 5);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E0D0u | kUnwind; return; } [[clang::musttail]] return unit_009B(c, 173u, depth); }
L_00391548:
    set32(c.r[2], 0u + 2u);
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0039157C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_00391570; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00391574; } }
    c.budget -= 1;
L_00391570:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00391574:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[3], 0u + 3u);  goto L_0039157C; }
L_0039157C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_00391588:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003915E0; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_003915B8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003915C8; } }
    c.budget -= 1;
L_003915B8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003915E0; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 4u);
    c.budget -= 2;
L_003915C8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003915E4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003915DCu); set32(c.r[4], c.r[4].w[0] + 8992u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003915DCu) [[unlikely]] return; }
L_003915DC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003915E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003915E4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003915F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00391628; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], 0u + 2u);  goto L_00391650; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00391648; } }
L_00391628:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00391648; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00391650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_00391650; } }
L_00391648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391650u); set32(c.r[4], c.r[4].w[0] + 9032u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00391650u) [[unlikely]] return; }
L_00391650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391658u);  if (depth < kMaxDepth) unit_009C(c, 296u, depth + 1u); else { c.pc = 0x00392638u; return; } if (c.pc != 0x00391658u) [[unlikely]] return; }
L_00391658:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00391680; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391670u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 201u, depth + 1u); else { c.pc = 0x00396428u; return; } if (c.pc != 0x00391670u) [[unlikely]] return; }
L_00391670:
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_00391680:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00391698:
    set32(c.r[3], ld32((c.r[5].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + 140u);
    set32(c.r[6], ld32((c.r[5].w[0] + 60u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 92u)));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 108u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 109u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 110u)));
    st32((c.r[4].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 64u)));
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  c.pc = t; return; }
L_003916E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391708u); set32(c.r[17], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_009C(c, 296u, depth + 1u); else { c.pc = 0x00392638u; return; } if (c.pc != 0x00391708u) [[unlikely]] return; }
L_00391708:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003917CC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 384u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003917CC; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_00391750; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0]), 0u);  goto L_00391754; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[5], c.r[18].w[0] - 4u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391744u); set32(c.r[7], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00A4(c, 322u, depth + 1u); else { c.pc = 0x003B3AB8u; return; } if (c.pc != 0x00391744u) [[unlikely]] return; }
L_00391744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_0039175C; } }
    c.budget -= 1;
L_00391750:
    st32((c.r[29].w[0]), 0u);
    c.budget -= 1;
L_00391754:
    st32((c.r[29].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 2;
L_0039175C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003917B0; } }
    c.budget -= 2;
    if (c.r[7].sd[0] <= 0) { st32((c.r[16].w[0] + 392u), 0u);  goto L_003917B4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 388u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 384u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[7].d[0] = c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039178Cu); st32((c.r[29].w[0] + 4u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0039178Cu) [[unlikely]] return; }
L_0039178C:
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 384u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039179Cu); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x0039179Cu) [[unlikely]] return; }
L_0039179C:
    set32(c.r[3], ld32((c.r[16].w[0] + 384u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[16].w[0] + 392u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 396u), c.r[2].w[0]);  if (t) { goto L_003917B8; } }
L_003917B0:
    st32((c.r[16].w[0] + 392u), 0u);
    c.budget -= 1;
L_003917B4:
    st32((c.r[16].w[0] + 396u), 0u);
    c.budget -= 1;
L_003917B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003917C8u); set32(c.r[6], ld32((c.r[4].w[0] + 396u)));  if (depth < kMaxDepth) unit_009D(c, 199u, depth + 1u); else { c.pc = 0x003963E0u; return; } if (c.pc != 0x003917C8u) [[unlikely]] return; }
L_003917C8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003917CC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003917F8:
    set32(c.r[2], ld32((c.r[4].w[0] + 392u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00391808:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391820u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 79u, depth + 1u); else { c.pc = 0x003A0BD8u; return; } if (c.pc != 0x00391820u) [[unlikely]] return; }
L_00391820:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039182Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 202u, depth + 1u); else { c.pc = 0x003919B0u; return; } if (c.pc != 0x0039182Cu) [[unlikely]] return; }
L_0039182C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00391840:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039187Cu); set32(c.r[23], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_009C(c, 199u, depth + 1u); else { c.pc = 0x00391908u; return; } if (c.pc != 0x0039187Cu) [[unlikely]] return; }
L_0039187C:
    set32(c.r[22], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[19], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391898u); set32(c.r[20], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_009C(c, 200u, depth + 1u); else { c.pc = 0x00391948u; return; } if (c.pc != 0x00391898u) [[unlikely]] return; }
L_00391898:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[17].w[0] + 32u), c.r[23].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[21].w[0]);
    st32((c.r[17].w[0]), c.r[22].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[6].w[0]);
    c.budget -= 16;
L_003918D8:
    st32((c.r[17].w[0] + 40u), c.r[7].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00391908:
    set32(c.r[2], 0u + 2u);
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0039193C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_00391930; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00391934; } }
    c.budget -= 1;
L_00391930:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00391934:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[3], 0u + 3u);  goto L_0039193C; }
L_0039193C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_00391948:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003919A0; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_00391978; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00391988; } }
    c.budget -= 1;
L_00391978:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003919A0; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 4u);
    c.budget -= 2;
L_00391988:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003919A4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039199Cu); set32(c.r[4], c.r[4].w[0] + 9088u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x0039199Cu) [[unlikely]] return; }
L_0039199C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003919A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003919A4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003919B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[5].w[0] + 16u), c.r[6].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  c.pc = t; return; }
L_003919E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003919FCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x003919FCu) [[unlikely]] return; }
L_003919FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00391A20; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 9128u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_00391A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391A28u);  if (depth < kMaxDepth) unit_009C(c, 502u, depth + 1u); else { c.pc = 0x00393CB8u; return; } if (c.pc != 0x00391A28u) [[unlikely]] return; }
L_00391A28:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A2(c, 272u, depth); }
L_00391A48:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391A68u); c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00391A68u) [[unlikely]] return; }
L_00391A68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00391A98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 9176u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_00391A98:
    set32(c.r[18], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[16], ld32((c.r[19].w[0] + 132u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391AA8u); set32(c.r[17], ld32((c.r[19].w[0] + 124u)));  if (depth < kMaxDepth) unit_009C(c, 502u, depth + 1u); else { c.pc = 0x00393CB8u; return; } if (c.pc != 0x00391AA8u) [[unlikely]] return; }
L_00391AA8:
    c.r[16].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00391AD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391AC0u);  if (depth < kMaxDepth) unit_00A2(c, 280u, depth + 1u); else { c.pc = 0x003AA2C8u; return; } if (c.pc != 0x00391AC0u) [[unlikely]] return; }
L_00391AC0:
    set32(c.r[3], ld32((c.r[19].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 4;
L_00391AD0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00391AF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391B04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00391B04u) [[unlikely]] return; }
L_00391B04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00391B30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391B18u); set32(c.r[4], c.r[4].w[0] + 9224u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00391B18u) [[unlikely]] return; }
L_00391B18:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00391B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391B38u);  if (depth < kMaxDepth) unit_009C(c, 502u, depth + 1u); else { c.pc = 0x00393CB8u; return; } if (c.pc != 0x00391B38u) [[unlikely]] return; }
L_00391B38:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A1(c, 206u, depth); }
L_00391C18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391C2Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00391C2Cu) [[unlikely]] return; }
L_00391C2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 136u)));  goto L_00391C44; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391C40u); set32(c.r[4], c.r[4].w[0] + 9336u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00391C40u) [[unlikely]] return; }
L_00391C40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00391C44:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00391C58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003921C8; }
L_00391C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391C80u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 10u, depth + 1u); else { c.pc = 0x003B0148u; return; } if (c.pc != 0x00391C80u) [[unlikely]] return; }
L_00391C80:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00391CA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(2048ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00391D98; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[20], 0u + 2u);  if (t) { goto L_00391D98; } }
    set32(c.r[22], 0u - 1u);
    set32(c.r[18], 0u + 2048u);
    set32(c.r[4], c.r[19].w[0] + c.r[18].w[0]);
    c.budget -= 4;
L_00391CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391D00u); set32(c.r[5], c.r[21].w[0] - c.r[18].w[0]);  if (depth < kMaxDepth) unit_00A3(c, 332u, depth + 1u); else { c.pc = 0x003AF528u; return; } if (c.pc != 0x00391D00u) [[unlikely]] return; }
L_00391D00:
    set32(c.r[18], c.r[18].w[0] + 2048u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00391D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391D1Cu);  if (depth < kMaxDepth) unit_00A3(c, 347u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00391D1Cu) [[unlikely]] return; }
L_00391D1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_00391D2C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00391D48; } }
L_00391D2C:
    st32((c.r[17].w[0] + 20u), c.r[22].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391D3Cu); st32((c.r[17].w[0] + 24u), c.r[22].w[0]);  if (depth < kMaxDepth) unit_00A3(c, 336u, depth + 1u); else { c.pc = 0x003AF5F0u; return; } if (c.pc != 0x00391D3Cu) [[unlikely]] return; }
L_00391D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_00391D8C; } }
    c.budget -= 1;
L_00391D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391D50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 218u, depth + 1u); else { c.pc = 0x00391C70u; return; } if (c.pc != 0x00391D50u) [[unlikely]] return; }
L_00391D50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391D5Cu); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009C(c, 232u, depth + 1u); else { c.pc = 0x00391E00u; return; } if (c.pc != 0x00391D5Cu) [[unlikely]] return; }
L_00391D5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391D68u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009C(c, 240u, depth + 1u); else { c.pc = 0x00391EA8u; return; } if (c.pc != 0x00391D68u) [[unlikely]] return; }
L_00391D68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391D74u); st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009C(c, 238u, depth + 1u); else { c.pc = 0x00391E78u; return; } if (c.pc != 0x00391D74u) [[unlikely]] return; }
L_00391D74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391D80u); st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A3(c, 336u, depth + 1u); else { c.pc = 0x003AF5F0u; return; } if (c.pc != 0x00391D80u) [[unlikely]] return; }
L_00391D80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00391D9C; } }
L_00391D88:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00391D8C:
    c.r[2].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] + c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391CF8u | kUnwind; return; } goto L_00391CF8; } }
L_00391D98:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00391D9C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00391DC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391DD0u);  if (depth < kMaxDepth) unit_009C(c, 259u, depth + 1u); else { c.pc = 0x00392248u; return; } if (c.pc != 0x00391DD0u) [[unlikely]] return; }
L_00391DD0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 81u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 97u);  if (t) { goto L_00391DE8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00391DF0; } }
L_00391DE8:
    set32(c.r[3], 0u + 65u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00391DF0:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00391E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 224u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391E14u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 66u, depth + 1u); else { c.pc = 0x003B0A70u; return; } if (c.pc != 0x00391E14u) [[unlikely]] return; }
L_00391E14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_00391E28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 17u);  if (t) { goto L_00391E6C; } }
    c.budget -= 1;
L_00391E28:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 17u);  if (t) { goto L_00391E6C; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 9392u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_009C[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00391E50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_00391E6C; } }
L_00391E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 81u);  if (t) { goto L_00391E6C; } }
L_00391E60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 97u);  if (t) { goto L_00391E6C; } }
L_00391E68:
    set32(c.r[2], 0u + 17u);
    c.budget -= 1;
L_00391E6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00391E78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391E88u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 393u, depth + 1u); else { c.pc = 0x003AFF50u; return; } if (c.pc != 0x00391E88u) [[unlikely]] return; }
L_00391E88:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00391EA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391EB8u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 395u, depth + 1u); else { c.pc = 0x003AFFA0u; return; } if (c.pc != 0x00391EB8u) [[unlikely]] return; }
L_00391EB8:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00391ED8:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[12], 0u + 17u);
    st32((c.r[6].w[0] + 184u), 0u);
    set32(c.r[11], c.r[6].w[0] + 8u);
    st32((c.r[6].w[0] + 188u), 0u);
    set32(c.r[10], c.r[6].w[0] + 12u);
    st32((c.r[6].w[0] + 192u), 0u);
    set32(c.r[9], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[6].w[0] + 212u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 7u);
    c.budget -= 14;
L_00391F10:
    set32(c.r[2], c.r[8].w[0] + 192u);
    set32(c.r[8], c.r[8].w[0] + 20u);
    set32(c.r[4], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[11].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0] - 16u), 0u);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[5].w[0]), c.r[12].w[0]);
    c.budget -= 13;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391F10u | kUnwind; return; } goto L_00391F10; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009D(c, 142u, depth); }
L_00391F58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00390000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 8104u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[5], 0u + 75u);
    set32(c.r[17], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391F84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 384u, depth + 1u); else { c.pc = 0x003AB698u; return; } if (c.pc != 0x00391F84u) [[unlikely]] return; }
L_00391F84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 76u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A2(c, 384u, depth); }
L_00391FA8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2048ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[19].w[0] + 184u), c.r[2].w[0]);  if (t) { goto L_003920C4; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003920C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391FECu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 332u, depth + 1u); else { c.pc = 0x003AF528u; return; } if (c.pc != 0x00391FECu) [[unlikely]] return; }
L_00391FEC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003920C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392004u);  if (depth < kMaxDepth) unit_00A3(c, 347u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00392004u) [[unlikely]] return; }
L_00392004:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_00392014; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00392028; } }
L_00392014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039201Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 336u, depth + 1u); else { c.pc = 0x003AF5F0u; return; } if (c.pc != 0x0039201Cu) [[unlikely]] return; }
L_0039201C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003920C8; } }
    c.budget -= 1;
L_00392028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392030u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 254u, depth + 1u); else { c.pc = 0x003920E0u; return; } if (c.pc != 0x00392030u) [[unlikely]] return; }
L_00392030:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039203Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 218u, depth + 1u); else { c.pc = 0x00391C70u; return; } if (c.pc != 0x0039203Cu) [[unlikely]] return; }
L_0039203C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392048u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 232u, depth + 1u); else { c.pc = 0x00391E00u; return; } if (c.pc != 0x00392048u) [[unlikely]] return; }
L_00392048:
    set32(c.r[4], ld32((c.r[19].w[0] + 192u)));
    set32(c.r[9], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[8], c.r[19].w[0] + 4u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[10], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] - 1u);
    set32(c.r[5], c.r[3].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[5].w[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[6].w[0] + 8u), c.r[9].w[0]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[7].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[5].w[0] + 16u), c.r[16].w[0]);
    st32((c.r[3].w[0] + 208u), c.r[2].w[0]);
    st32((c.r[8].w[0]), c.r[10].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 192u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[6].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003920C4u); st32((c.r[19].w[0] + 192u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00A3(c, 336u, depth + 1u); else { c.pc = 0x003AF5F0u; return; } if (c.pc != 0x003920C4u) [[unlikely]] return; }
L_003920C4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003920C8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003920E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 224u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003920FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 351u, depth + 1u); else { c.pc = 0x003AF830u; return; } if (c.pc != 0x003920FCu) [[unlikely]] return; }
L_003920FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00392138; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00392118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00392138; } }
L_00392118:
    set32(c.r[5], 0u + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392124u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00A4(c, 45u, depth + 1u); else { c.pc = 0x003B0728u; return; } if (c.pc != 0x00392124u) [[unlikely]] return; }
L_00392124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0039213C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00392138:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0039213C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00392148:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[8].w[0] + 188u)));
    set32(c.r[7], c.r[6].w[0] + 7u);
    c.r[5].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[5], c.r[7].w[0] << 3);
    set32(c.r[7], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 196u)));
    c.budget -= 19;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003921A0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003921B0; }
L_003921A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003921B0:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 204u)));  c.pc = t; return; }
L_003921C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[8].w[0] + 188u)));
    set32(c.r[7], c.r[6].w[0] + 7u);
    c.r[5].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[5], c.r[7].w[0] << 3);
    set32(c.r[7], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 196u)));
    c.budget -= 19;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00392220; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00392230; }
L_00392220:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00392230:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 208u)));  c.pc = t; return; }
L_00392248:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 17u);
    set32(c.r[6], ld32((c.r[8].w[0] + 188u)));
    set32(c.r[7], c.r[6].w[0] + 7u);
    c.r[5].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[5], c.r[7].w[0] << 3);
    set32(c.r[7], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 196u)));
    c.budget -= 19;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003922A0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003922B0; }
L_003922A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003922B0:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 212u)));  c.pc = t; return; }
L_003922D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003922E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x003922E4u) [[unlikely]] return; }
L_003922E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00392310; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003922F8u); set32(c.r[4], c.r[4].w[0] + 9432u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003922F8u) [[unlikely]] return; }
L_003922F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00392310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392318u);  if (depth < kMaxDepth) unit_009C(c, 502u, depth + 1u); else { c.pc = 0x00393CB8u; return; } if (c.pc != 0x00392318u) [[unlikely]] return; }
L_00392318:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A1(c, 195u, depth); }
L_00392340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 4056u);  c.pc = t; return; }
L_00392350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_00392368:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_00392398; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392390u); set32(c.r[4], c.r[4].w[0] + 9648u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00392390u) [[unlikely]] return; }
L_00392390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0039250C; } }
L_00392398:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003923A4u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003923A4u) [[unlikely]] return; }
L_003923A4:
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 8488u);
    set32(c.r[2], c.r[2].w[0] + 9488u);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[10], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392400u); st32((c.r[29].w[0] + 28u), c.r[10].w[0]);  if (depth < kMaxDepth) unit_009D(c, 331u, depth + 1u); else { c.pc = 0x003978D8u; return; } if (c.pc != 0x00392400u) [[unlikely]] return; }
L_00392400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392408u);  if (depth < kMaxDepth) unit_009C(c, 450u, depth + 1u); else { c.pc = 0x00393768u; return; } if (c.pc != 0x00392408u) [[unlikely]] return; }
L_00392408:
    set32(c.r[4], ld32((c.r[17].w[0] + 4048u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003924F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039242Cu);  if (depth < kMaxDepth) unit_008E(c, 264u, depth + 1u); else { c.pc = 0x00359FD8u; return; } if (c.pc != 0x0039242Cu) [[unlikely]] return; }
L_0039242C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392434u);  if (depth < kMaxDepth) unit_0096(c, 159u, depth + 1u); else { c.pc = 0x00379D40u; return; } if (c.pc != 0x00392434u) [[unlikely]] return; }
L_00392434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039243Cu);  if (depth < kMaxDepth) unit_0096(c, 91u, depth + 1u); else { c.pc = 0x00379328u; return; } if (c.pc != 0x0039243Cu) [[unlikely]] return; }
L_0039243C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392444u);  if (depth < kMaxDepth) unit_0096(c, 225u, depth + 1u); else { c.pc = 0x0037A948u; return; } if (c.pc != 0x00392444u) [[unlikely]] return; }
L_00392444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039244Cu);  if (depth < kMaxDepth) unit_009E(c, 120u, depth + 1u); else { c.pc = 0x00398A30u; return; } if (c.pc != 0x0039244Cu) [[unlikely]] return; }
L_0039244C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00392468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039245Cu); set32(c.r[4], 0u - 101u);  if (depth < kMaxDepth) unit_009C(c, 321u, depth + 1u); else { c.pc = 0x00392808u; return; } if (c.pc != 0x0039245Cu) [[unlikely]] return; }
L_0039245C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392468u); set32(c.r[4], c.r[4].w[0] + 9688u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00392468u) [[unlikely]] return; }
L_00392468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392470u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 290u, depth + 1u); else { c.pc = 0x00392568u; return; } if (c.pc != 0x00392470u) [[unlikely]] return; }
L_00392470:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + 9804u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[2] = c.r[1].w[0];
    st32((c.r[2].w[0]), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003924A8u);  if (depth < kMaxDepth) unit_009C(c, 325u, depth + 1u); else { c.pc = 0x00392858u; return; } if (c.pc != 0x003924A8u) [[unlikely]] return; }
L_003924A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 9728u);  if (t) { goto L_003924BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003924BCu);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003924BCu) [[unlikely]] return; }
L_003924BC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003924D0u); st32((c.r[2].w[0] + 4052u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_009C(c, 302u, depth + 1u); else { c.pc = 0x003926A0u; return; } if (c.pc != 0x003924D0u) [[unlikely]] return; }
L_003924D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003924D8u);  if (depth < kMaxDepth) unit_0095(c, 165u, depth + 1u); else { c.pc = 0x00375740u; return; } if (c.pc != 0x003924D8u) [[unlikely]] return; }
L_003924D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[4], c.r[4].w[0] + 9040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003924E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 159u, depth + 1u); else { c.pc = 0x00375678u; return; } if (c.pc != 0x003924E8u) [[unlikely]] return; }
L_003924E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003924F0u);  if (depth < kMaxDepth) unit_009D(c, 89u, depth + 1u); else { c.pc = 0x00395090u; return; } if (c.pc != 0x003924F0u) [[unlikely]] return; }
L_003924F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003924F8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 286u, depth + 1u); else { c.pc = 0x00392520u; return; } if (c.pc != 0x003924F8u) [[unlikely]] return; }
L_003924F8:
    set32(c.r[3], c.r[17].w[0] + 4048u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
L_0039250C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00392520:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 32168u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039253Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009D(c, 335u, depth + 1u); else { c.pc = 0x003979B0u; return; } if (c.pc != 0x0039253Cu) [[unlikely]] return; }
L_0039253C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[4], c.r[4].w[0] - 32096u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039254Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009D(c, 341u, depth + 1u); else { c.pc = 0x00397A60u; return; } if (c.pc != 0x0039254Cu) [[unlikely]] return; }
L_0039254C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[4], c.r[4].w[0] - 31968u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039255Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009D(c, 338u, depth + 1u); else { c.pc = 0x00397A10u; return; } if (c.pc != 0x0039255Cu) [[unlikely]] return; }
L_0039255C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009D(c, 344u, depth); }
L_00392568:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392580u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00392580u) [[unlikely]] return; }
L_00392580:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392594u); set32(c.r[6], 0u + 5708u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x00392594u) [[unlikely]] return; }
L_00392594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039259Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 90u, depth + 1u); else { c.pc = 0x003987E8u; return; } if (c.pc != 0x0039259Cu) [[unlikely]] return; }
L_0039259C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 4u);  if (t) { goto L_003925D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003925F4; } }
    c.budget -= 1;
L_003925D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x426F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 49807ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
L_003925F4:
    st32((c.r[17].w[0] + 60u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[4].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00392610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392624u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00392624u) [[unlikely]] return; }
L_00392624:
    st32((c.r[2].w[0] + 56u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00392638:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392648u);  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00392648u) [[unlikely]] return; }
L_00392648:
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00392658:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039266Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x0039266Cu) [[unlikely]] return; }
L_0039266C:
    st32((c.r[2].w[0] + 60u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00392680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392690u);  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00392690u) [[unlikely]] return; }
L_00392690:
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003926A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 27u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003926C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009D(c, 5u, depth + 1u); else { c.pc = 0x003940C8u; return; } if (c.pc != 0x003926C0u) [[unlikely]] return; }
L_003926C0:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009D(c, 5u, depth); }
L_00392708:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392724u);  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00392724u) [[unlikely]] return; }
L_00392724:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 4048u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003927F0; } }
    set32(c.r[16], c.r[4].w[0] + 108u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[17], 0u + 7u);
    c.budget -= 4;
L_00392750:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00392768; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392764u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 67u, depth + 1u); else { c.pc = 0x003906C8u; return; } if (c.pc != 0x00392764u) [[unlikely]] return; }
L_00392764:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00392768:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 700u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392750u | kUnwind; return; } goto L_00392750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392778u);  if (depth < kMaxDepth) unit_009D(c, 346u, depth + 1u); else { c.pc = 0x00397AE0u; return; } if (c.pc != 0x00392778u) [[unlikely]] return; }
L_00392778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392780u);  if (depth < kMaxDepth) unit_009D(c, 337u, depth + 1u); else { c.pc = 0x003979F0u; return; } if (c.pc != 0x00392780u) [[unlikely]] return; }
L_00392780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392788u);  if (depth < kMaxDepth) unit_009D(c, 343u, depth + 1u); else { c.pc = 0x00397A90u; return; } if (c.pc != 0x00392788u) [[unlikely]] return; }
L_00392788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392790u);  if (depth < kMaxDepth) unit_009D(c, 340u, depth + 1u); else { c.pc = 0x00397A40u; return; } if (c.pc != 0x00392790u) [[unlikely]] return; }
L_00392790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392798u);  if (depth < kMaxDepth) unit_009D(c, 92u, depth + 1u); else { c.pc = 0x003950D0u; return; } if (c.pc != 0x00392798u) [[unlikely]] return; }
L_00392798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003927A0u);  if (depth < kMaxDepth) unit_0095(c, 171u, depth + 1u); else { c.pc = 0x003757C0u; return; } if (c.pc != 0x003927A0u) [[unlikely]] return; }
L_003927A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003927A8u);  if (depth < kMaxDepth) unit_009C(c, 332u, depth + 1u); else { c.pc = 0x00392900u; return; } if (c.pc != 0x003927A8u) [[unlikely]] return; }
L_003927A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003927B0u);  if (depth < kMaxDepth) unit_008E(c, 287u, depth + 1u); else { c.pc = 0x0035A188u; return; } if (c.pc != 0x003927B0u) [[unlikely]] return; }
L_003927B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003927B8u);  if (depth < kMaxDepth) unit_009E(c, 121u, depth + 1u); else { c.pc = 0x00398A40u; return; } if (c.pc != 0x003927B8u) [[unlikely]] return; }
L_003927B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003927C0u);  if (depth < kMaxDepth) unit_0096(c, 231u, depth + 1u); else { c.pc = 0x0037A9C8u; return; } if (c.pc != 0x003927C0u) [[unlikely]] return; }
L_003927C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003927C8u);  if (depth < kMaxDepth) unit_0096(c, 97u, depth + 1u); else { c.pc = 0x003793A8u; return; } if (c.pc != 0x003927C8u) [[unlikely]] return; }
L_003927C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003927D0u);  if (depth < kMaxDepth) unit_0096(c, 165u, depth + 1u); else { c.pc = 0x00379DC0u; return; } if (c.pc != 0x003927D0u) [[unlikely]] return; }
L_003927D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003927D8u);  if (depth < kMaxDepth) unit_009C(c, 451u, depth + 1u); else { c.pc = 0x00393780u; return; } if (c.pc != 0x003927D8u) [[unlikely]] return; }
L_003927D8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009D(c, 333u, depth); }
L_003927F0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00392808:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039281Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x0039281Cu) [[unlikely]] return; }
L_0039281C:
    st32((c.r[2].w[0] + 104u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00392838:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392848u);  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00392848u) [[unlikely]] return; }
L_00392848:
    set32(c.r[2], ld32((c.r[2].w[0] + 104u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00392858:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], c.r[2].w[0] + 9632u);
    ldl(c.r[5], (c.r[8].w[0] + 7u));
    ldr(c.r[5], (c.r[8].w[0]));
    sdl(c.r[5], (c.r[29].w[0] + 7u));
    sdr(c.r[5], (c.r[29].w[0]));
    set32(c.r[5], 0u + 14216u);
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039288Cu); set32(c.r[4], c.r[3].w[0] + 9760u);  if (depth < kMaxDepth) unit_009F(c, 222u, depth + 1u); else { c.pc = 0x0039E360u; return; } if (c.pc != 0x0039288Cu) [[unlikely]] return; }
L_0039288C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003928B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003928A4u); set32(c.r[4], c.r[4].w[0] + 9768u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003928A4u) [[unlikely]] return; }
L_003928A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003928F0; } }
    c.budget -= 1;
L_003928B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003928B8u);  if (depth < kMaxDepth) unit_009F(c, 223u, depth + 1u); else { c.pc = 0x0039E370u; return; } if (c.pc != 0x003928B8u) [[unlikely]] return; }
L_003928B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00390000u);  if (t) { goto L_003928D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003928C8u); set32(c.r[4], 0u - 301u);  if (depth < kMaxDepth) unit_009C(c, 321u, depth + 1u); else { c.pc = 0x00392808u; return; } if (c.pc != 0x003928C8u) [[unlikely]] return; }
L_003928C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003928F4; } }
L_003928D0:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 10528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003928E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 254u, depth + 1u); else { c.pc = 0x0039E630u; return; } if (c.pc != 0x003928E0u) [[unlikely]] return; }
L_003928E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 303u);  if (t) { goto L_003928F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003928F0u);  if (depth < kMaxDepth) unit_009C(c, 321u, depth + 1u); else { c.pc = 0x00392808u; return; } if (c.pc != 0x003928F0u) [[unlikely]] return; }
L_003928F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003928F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00392900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392910u);  if (depth < kMaxDepth) unit_009F(c, 238u, depth + 1u); else { c.pc = 0x0039E4A8u; return; } if (c.pc != 0x00392910u) [[unlikely]] return; }
L_00392910:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00392920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_00392970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392954u);  if (depth < kMaxDepth) unit_009C(c, 502u, depth + 1u); else { c.pc = 0x00393CB8u; return; } if (c.pc != 0x00392954u) [[unlikely]] return; }
L_00392954:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 1;
L_00392958:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[2].w[0] + 9764u), c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 9768u), c.r[18].w[0]);  if (t) { goto L_00392984; } }
    c.budget -= 1;
L_00392970:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[2].w[0] + 9764u), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 9768u), 0u);
    c.budget -= 5;
L_00392984:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_003929B4; } }
    set32(c.r[5], c.r[2].w[0] - 8416u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[4].sd[0] < 15ll ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[1], c.r[1].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 8480u), c.r[17].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_003929B4; } }
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003929B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 3864ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00392A38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 3863ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00392AE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 1036ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_00392AF0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00392A10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 1032ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00392AF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00392B54; } }
    c.budget -= 1;
L_00392A10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 3076ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00392B30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 3861ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00392B10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00392B54; } }
L_00392A38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 3904ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_00392A90; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].sd[0] < -1ll ? 1ull : 0ull;  if (t) { goto L_00392A68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 3868ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00392AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00392B54; } }
L_00392A68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00392B50; } }
    c.r[2].d[0] = c.r[17].sd[0] < -3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_00392B54; }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 9880u);  if (t) { goto L_00392AF8; } }
    c.budget -= 1;
L_00392A90:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[16], c.r[20].w[0] - 8408u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[5], c.r[5].w[0] + 9904u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392AB0u); c.r[6].d[0] = c.r[6].d[0] | 3904ull;  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x00392AB0u) [[unlikely]] return; }
L_00392AB0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00392AC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392AC0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 291u, depth + 1u); else { c.pc = 0x003A7508u; return; } if (c.pc != 0x00392AC0u) [[unlikely]] return; }
L_00392AC0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00392AC4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00392B64; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392AD8u); set32(c.r[6], 0u + 233u);  if (depth < kMaxDepth) unit_0009(c, 222u, depth + 1u); else { c.pc = 0x001479F8u; return; } if (c.pc != 0x00392AD8u) [[unlikely]] return; }
L_00392AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[20].w[0] - 8408u);  if (t) { goto L_00392B68; } }
L_00392AE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 9928u);  if (t) { goto L_00392AF8; } }
    c.budget -= 1;
L_00392AF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_00392AF4:
    set32(c.r[5], c.r[5].w[0] + 10024u);
    c.budget -= 1;
L_00392AF8:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392B04u); set32(c.r[4], c.r[20].w[0] - 8408u);  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x00392B04u) [[unlikely]] return; }
L_00392B04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[20].w[0] - 8408u);  if (t) { goto L_00392B68; } }
    c.budget -= 1;
L_00392B10:
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[5], c.r[5].w[0] + 10112u);
    set32(c.r[4], c.r[20].w[0] - 8408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392B24u); c.r[6].d[0] = c.r[6].d[0] | 3861ull;  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x00392B24u) [[unlikely]] return; }
L_00392B24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[20].w[0] - 8408u);  if (t) { goto L_00392B68; } }
    c.budget -= 1;
L_00392B30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[5], c.r[5].w[0] + 10224u);
    set32(c.r[4], c.r[20].w[0] - 8408u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392B48u); c.r[6].d[0] = c.r[6].d[0] | 3076ull;  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x00392B48u) [[unlikely]] return; }
L_00392B48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[20].w[0] - 8408u);  if (t) { goto L_00392B68; } }
L_00392B50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_00392B54:
    set32(c.r[5], c.r[5].w[0] + 10360u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392B64u); set32(c.r[4], c.r[20].w[0] - 8408u);  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x00392B64u) [[unlikely]] return; }
L_00392B64:
    set32(c.r[4], c.r[20].w[0] - 8408u);
    c.budget -= 1;
L_00392B68:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_00392B98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392BACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00392BACu) [[unlikely]] return; }
L_00392BAC:
    st32((c.r[2].w[0] + 52u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00392BC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392BD0u);  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00392BD0u) [[unlikely]] return; }
L_00392BD0:
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00392BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392C04u); c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 502u, depth + 1u); else { c.pc = 0x00393CB8u; return; } if (c.pc != 0x00392C04u) [[unlikely]] return; }
L_00392C04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A3(c, 70u, depth); }
L_00392C68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392C78u); set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (depth < kMaxDepth) unit_00A2(c, 4u, depth + 1u); else { c.pc = 0x003A8040u; return; } if (c.pc != 0x00392C78u) [[unlikely]] return; }
L_00392C78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 311u);  if (t) { goto L_00392C98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392C88u);  if (depth < kMaxDepth) unit_009C(c, 321u, depth + 1u); else { c.pc = 0x00392808u; return; } if (c.pc != 0x00392C88u) [[unlikely]] return; }
L_00392C88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392C94u); set32(c.r[4], c.r[4].w[0] + 10376u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00392C94u) [[unlikely]] return; }
L_00392C94:
    set32(c.r[2], 0u - 311u);
    c.budget -= 1;
L_00392C98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00392CA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392CB8u); set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (depth < kMaxDepth) unit_00A2(c, 207u, depth + 1u); else { c.pc = 0x003A9948u; return; } if (c.pc != 0x00392CB8u) [[unlikely]] return; }
L_00392CB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 307u);  if (t) { goto L_00392CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392CC8u);  if (depth < kMaxDepth) unit_009C(c, 321u, depth + 1u); else { c.pc = 0x00392808u; return; } if (c.pc != 0x00392CC8u) [[unlikely]] return; }
L_00392CC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392CD4u); set32(c.r[4], c.r[4].w[0] + 10408u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00392CD4u) [[unlikely]] return; }
L_00392CD4:
    set32(c.r[2], 0u - 307u);
    c.budget -= 1;
L_00392CD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00392CE8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D14u); set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (depth < kMaxDepth) unit_00A2(c, 256u, depth + 1u); else { c.pc = 0x003A9F10u; return; } if (c.pc != 0x00392D14u) [[unlikely]] return; }
L_00392D14:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_00392D18:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00392D48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (t) { goto L_00392D68; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A2(c, 258u, depth); }
L_00392D68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00392D78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D88u); set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (depth < kMaxDepth) unit_00A1(c, 352u, depth + 1u); else { c.pc = 0x003A7E40u; return; } if (c.pc != 0x00392D88u) [[unlikely]] return; }
L_00392D88:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00392DB0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00392DB0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392DACu); set32(c.r[4], c.r[4].w[0] + 10440u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00392DACu) [[unlikely]] return; }
L_00392DAC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00392DB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00392DC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A2(c, 260u, depth); }
L_00392DD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392DF4u); set32(c.r[17], c.r[16].w[0] + 660u);  if (depth < kMaxDepth) unit_009C(c, 264u, depth + 1u); else { c.pc = 0x00392340u; return; } if (c.pc != 0x00392DF4u) [[unlikely]] return; }
L_00392DF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00392E78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392E08u);  if (depth < kMaxDepth) unit_009C(c, 12u, depth + 1u); else { c.pc = 0x003900A0u; return; } if (c.pc != 0x00392E08u) [[unlikely]] return; }
L_00392E08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00392E28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 10488u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_00392E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392E30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 314u, depth + 1u); else { c.pc = 0x00397718u; return; } if (c.pc != 0x00392E30u) [[unlikely]] return; }
L_00392E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392E38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 157u, depth + 1u); else { c.pc = 0x00395CA8u; return; } if (c.pc != 0x00392E38u) [[unlikely]] return; }
L_00392E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392E40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 153u, depth + 1u); else { c.pc = 0x00395C28u; return; } if (c.pc != 0x00392E40u) [[unlikely]] return; }
L_00392E40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00392E68; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 10536u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_00392E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392E70u);  if (depth < kMaxDepth) unit_009D(c, 156u, depth + 1u); else { c.pc = 0x00395C88u; return; } if (c.pc != 0x00392E70u) [[unlikely]] return; }
L_00392E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392E78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 242u, depth + 1u); else { c.pc = 0x00391ED8u; return; } if (c.pc != 0x00392E78u) [[unlikely]] return; }
L_00392E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392E80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 379u, depth + 1u); else { c.pc = 0x00392ED0u; return; } if (c.pc != 0x00392E80u) [[unlikely]] return; }
L_00392E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392E88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 350u, depth + 1u); else { c.pc = 0x00392C68u; return; } if (c.pc != 0x00392E88u) [[unlikely]] return; }
L_00392E88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392E94u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 118u)));  if (depth < kMaxDepth) unit_009C(c, 408u, depth + 1u); else { c.pc = 0x00393218u; return; } if (c.pc != 0x00392E94u) [[unlikely]] return; }
L_00392E94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392EA0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009D(c, 294u, depth + 1u); else { c.pc = 0x003974D0u; return; } if (c.pc != 0x00392EA0u) [[unlikely]] return; }
L_00392EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392EA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00397348u; return; } if (c.pc != 0x00392EA8u) [[unlikely]] return; }
L_00392EA8:
    st32((c.r[16].w[0] + 136u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00392ED0:
    st32((c.r[4].w[0] + 132u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 128u), 0u);  c.pc = t; return; }
L_00392EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392EFCu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00392EFCu) [[unlikely]] return; }
L_00392EFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 10584u);  if (t) { goto L_00392F20; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_00392F20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00392F48; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 10632u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_00392F48:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00392F68; }
L_00392F68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 468u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392F9Cu); st32((c.r[16].w[0] + 464u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009C(c, 397u, depth + 1u); else { c.pc = 0x00393118u; return; } if (c.pc != 0x00392F9Cu) [[unlikely]] return; }
L_00392F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392FA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 366u, depth + 1u); else { c.pc = 0x00392DD8u; return; } if (c.pc != 0x00392FA4u) [[unlikely]] return; }
L_00392FA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392FB0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 432u, depth + 1u); else { c.pc = 0x003934F0u; return; } if (c.pc != 0x00392FB0u) [[unlikely]] return; }
L_00392FB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392FC0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 498u, depth + 1u); else { c.pc = 0x00393C20u; return; } if (c.pc != 0x00392FC0u) [[unlikely]] return; }
L_00392FC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_00393C28; }
L_00392FE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039300Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x0039300Cu) [[unlikely]] return; }
L_0039300C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00393038; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
L_00393020:
    set32(c.r[4], c.r[4].w[0] + 10680u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_00393038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393040u);  if (depth < kMaxDepth) unit_009C(c, 397u, depth + 1u); else { c.pc = 0x00393118u; return; } if (c.pc != 0x00393040u) [[unlikely]] return; }
L_00393040:
    set32(c.r[4], ld32((c.r[16].w[0] + 500u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393054u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393054u) [[unlikely]] return; }
L_00393054:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393060u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 102u, depth + 1u); else { c.pc = 0x00379428u; return; } if (c.pc != 0x00393060u) [[unlikely]] return; }
L_00393060:
    st32((c.r[16].w[0] + 504u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 464u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 508u), c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393078u); st32((c.r[16].w[0] + 500u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009C(c, 366u, depth + 1u); else { c.pc = 0x00392DD8u; return; } if (c.pc != 0x00393078u) [[unlikely]] return; }
L_00393078:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F2A8u | kUnwind; return; } [[clang::musttail]] return unit_009B(c, 287u, depth); }
L_00393098:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003930B4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x003930B4u) [[unlikely]] return; }
L_003930B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003930D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 10728u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_003930D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003930E0u);  if (depth < kMaxDepth) unit_009C(c, 397u, depth + 1u); else { c.pc = 0x00393118u; return; } if (c.pc != 0x003930E0u) [[unlikely]] return; }
L_003930E0:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 464u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 484u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 488u), 0u);
    st32((c.r[16].w[0] + 492u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393100u); st32((c.r[16].w[0] + 496u), 0u);  if (depth < kMaxDepth) unit_009C(c, 366u, depth + 1u); else { c.pc = 0x00392DD8u; return; } if (c.pc != 0x00393100u) [[unlikely]] return; }
L_00393100:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F2A8u | kUnwind; return; } [[clang::musttail]] return unit_009B(c, 287u, depth); }
L_00393118:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 8;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003931A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393140u);  if (depth < kMaxDepth) unit_009E(c, 107u, depth + 1u); else { c.pc = 0x00398928u; return; } if (c.pc != 0x00393140u) [[unlikely]] return; }
L_00393140:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039314Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 215u, depth + 1u); else { c.pc = 0x003A9A00u; return; } if (c.pc != 0x0039314Cu) [[unlikely]] return; }
L_0039314C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 308u);  if (t) { goto L_00393168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039315Cu);  if (depth < kMaxDepth) unit_009C(c, 321u, depth + 1u); else { c.pc = 0x00392808u; return; } if (c.pc != 0x0039315Cu) [[unlikely]] return; }
L_0039315C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393168u); set32(c.r[4], c.r[4].w[0] + 10776u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00393168u) [[unlikely]] return; }
L_00393168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393170u); set32(c.r[4], c.r[16].w[0] + 660u);  if (depth < kMaxDepth) unit_009D(c, 282u, depth + 1u); else { c.pc = 0x003973A0u; return; } if (c.pc != 0x00393170u) [[unlikely]] return; }
L_00393170:
    st32((c.r[16].w[0] + 692u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00393188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393188u);  if (depth < kMaxDepth) unit_009E(c, 144u, depth + 1u); else { c.pc = 0x00398D00u; return; } if (c.pc != 0x00393188u) [[unlikely]] return; }
L_00393188:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00375120u | kUnwind; return; } [[clang::musttail]] return unit_0095(c, 124u, depth); }
L_003931A0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003931B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003931C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x003931C4u) [[unlikely]] return; }
L_003931C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003931E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 10808u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_003931E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003931F0u);  if (depth < kMaxDepth) unit_009C(c, 397u, depth + 1u); else { c.pc = 0x00393118u; return; } if (c.pc != 0x003931F0u) [[unlikely]] return; }
L_003931F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003931FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009D(c, 241u, depth + 1u); else { c.pc = 0x00396EF0u; return; } if (c.pc != 0x003931FCu) [[unlikely]] return; }
L_003931FC:
    st32((c.r[16].w[0] + 120u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00375120u | kUnwind; return; } [[clang::musttail]] return unit_0095(c, 124u, depth); }
L_00393218:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039323Cu); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x0039323Cu) [[unlikely]] return; }
L_0039323C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 118u)));  goto L_00393258; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393250u); set32(c.r[4], c.r[4].w[0] + 10848u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00393250u) [[unlikely]] return; }
L_00393250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0039331C; } }
L_00393258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], ld32((c.r[16].w[0] + 64u)));  if (t) { goto L_00393268; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0039331C; }
L_00393268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393270u);  if (depth < kMaxDepth) unit_009C(c, 300u, depth + 1u); else { c.pc = 0x00392680u; return; } if (c.pc != 0x00393270u) [[unlikely]] return; }
L_00393270:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003932C4; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_003932C4; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393298u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 400u, depth + 1u); else { c.pc = 0x003AB900u; return; } if (c.pc != 0x00393298u) [[unlikely]] return; }
L_00393298:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003932B8; } }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003932C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003932B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 107u, depth + 1u); else { c.pc = 0x00398928u; return; } if (c.pc != 0x003932B0u) [[unlikely]] return; }
L_003932B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003932C4; } }
L_003932B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003932C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 107u, depth + 1u); else { c.pc = 0x00398928u; return; } if (c.pc != 0x003932C0u) [[unlikely]] return; }
L_003932C0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003932C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003932CCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 355u, depth + 1u); else { c.pc = 0x003A7E90u; return; } if (c.pc != 0x003932CCu) [[unlikely]] return; }
L_003932CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 660u);  goto L_0039330C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003932DCu); set32(c.r[4], 0u - 310u);  if (depth < kMaxDepth) unit_009C(c, 321u, depth + 1u); else { c.pc = 0x00392808u; return; } if (c.pc != 0x003932DCu) [[unlikely]] return; }
L_003932DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[3].w[0] + 10888u);  if (t) { goto L_003932F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 10928u);  if (t) { goto L_00393300; } }
L_003932F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[2].w[0] + 10936u);
    c.budget -= 2;
L_00393300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393308u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00393308u) [[unlikely]] return; }
L_00393308:
    set32(c.r[4], c.r[16].w[0] + 660u);
    c.budget -= 1;
L_0039330C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393314u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 294u, depth + 1u); else { c.pc = 0x003974D0u; return; } if (c.pc != 0x00393314u) [[unlikely]] return; }
L_00393314:
    st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0039331C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00393338:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039335Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x0039335Cu) [[unlikely]] return; }
L_0039335C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00393388; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 10944u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_00393388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393390u);  if (depth < kMaxDepth) unit_009D(c, 64u, depth + 1u); else { c.pc = 0x00394AC0u; return; } if (c.pc != 0x00393390u) [[unlikely]] return; }
L_00393390:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003933A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003933A4u) [[unlikely]] return; }
L_003933A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00393560; }
L_003933C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 476u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003933E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 87u, depth + 1u); else { c.pc = 0x0014E9A0u; return; } if (c.pc != 0x003933E8u) [[unlikely]] return; }
L_003933E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 10992u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003933F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x003933F8u) [[unlikely]] return; }
L_003933F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393400u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 90u, depth + 1u); else { c.pc = 0x0014EA58u; return; } if (c.pc != 0x00393400u) [[unlikely]] return; }
L_00393400:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009D(c, 6u, depth); }
L_00393420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00393468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393444u);  if (depth < kMaxDepth) unit_009E(c, 146u, depth + 1u); else { c.pc = 0x00398D50u; return; } if (c.pc != 0x00393444u) [[unlikely]] return; }
L_00393444:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039346C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A2(c, 260u, depth); }
L_00393468:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0039346C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393478:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393498u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00393498u) [[unlikely]] return; }
L_00393498:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 444u)));
    set32(c.r[4], c.r[4].w[0] + 11000u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003934D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003934B8u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003934B8u) [[unlikely]] return; }
L_003934B8:
    set32(c.r[6], ld32((c.r[16].w[0] + 444u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], ld32((c.r[16].w[0] + 440u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00147D60u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 232u, depth); }
L_003934D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 440u)));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001477A8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 213u, depth); }
L_003934F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00393510; }
L_00393510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393534u); c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 429u, depth + 1u); else { c.pc = 0x00393478u; return; } if (c.pc != 0x00393534u) [[unlikely]] return; }
L_00393534:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    st32((c.r[16].w[0] + 456u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 460u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 448u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 452u), 0u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00393560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 440u)));
    set32(c.r[8], c.r[29].w[0] + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039358Cu); set32(c.r[9], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_008E(c, 176u, depth + 1u); else { c.pc = 0x00359258u; return; } if (c.pc != 0x0039358Cu) [[unlikely]] return; }
L_0039358C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 11032u);  if (t) { goto L_003935C0; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    st32((c.r[16].w[0] + 448u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 452u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 456u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 460u), c.r[5].w[0]);  if (t) { goto L_003935C8; } }
    c.budget -= 1;
L_003935C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003935C8u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x003935C8u) [[unlikely]] return; }
L_003935C8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003935D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[6].w[0] + 2047u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[7], c.r[7].w[0] >> 11);
    set32(c.r[5], c.r[5].w[0] + 11072u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393608u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x00393608u) [[unlikely]] return; }
L_00393608:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039361Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039361Cu) [[unlikely]] return; }
L_0039361C:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039362Cu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0039362Cu) [[unlikely]] return; }
L_0039362C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00393640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039366Cu); c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x0039366Cu) [[unlikely]] return; }
L_0039366C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 11088u);  if (t) { goto L_00393698; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_00393698:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003936C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 11144u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_003936C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003936C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 64u, depth + 1u); else { c.pc = 0x00394AC0u; return; } if (c.pc != 0x003936C8u) [[unlikely]] return; }
L_003936C8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003936DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003936DCu) [[unlikely]] return; }
L_003936DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00393510u | kUnwind; return; } goto L_00393510; }
L_00393708:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009E(c, 358u, depth); }
L_00393720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009E(c, 362u, depth); }
L_00393738:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009E(c, 348u, depth); }
L_00393750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009E(c, 353u, depth); }
L_00393768:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00393938; }
L_00393780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00393938; }
L_00393798:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003937B0u);  if (depth < kMaxDepth) unit_009C(c, 466u, depth + 1u); else { c.pc = 0x003938D8u; return; } if (c.pc != 0x003937B0u) [[unlikely]] return; }
L_003937B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[17], c.r[2].w[0] + 9784u);  if (t) { goto L_00393814; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00393818; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003937D8u);  if (depth < kMaxDepth) unit_009C(c, 470u, depth + 1u); else { c.pc = 0x00393960u; return; } if (c.pc != 0x003937D8u) [[unlikely]] return; }
L_003937D8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] - 8128u);
    set32(c.r[5], 0u + 16384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003937ECu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 472u, depth + 1u); else { c.pc = 0x00393980u; return; } if (c.pc != 0x003937ECu) [[unlikely]] return; }
L_003937EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003937F4u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_009C(c, 488u, depth + 1u); else { c.pc = 0x00393B58u; return; } if (c.pc != 0x003937F4u) [[unlikely]] return; }
L_003937F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 8256u);
    set32(c.r[5], 0u + 16384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393808u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 480u, depth + 1u); else { c.pc = 0x00393A60u; return; } if (c.pc != 0x00393808u) [[unlikely]] return; }
L_00393808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393810u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_009C(c, 488u, depth + 1u); else { c.pc = 0x00393B58u; return; } if (c.pc != 0x00393810u) [[unlikely]] return; }
L_00393810:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_00393814:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00393818:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00393828:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039383Cu);  if (depth < kMaxDepth) unit_009C(c, 466u, depth + 1u); else { c.pc = 0x003938D8u; return; } if (c.pc != 0x0039383Cu) [[unlikely]] return; }
L_0039383C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[16], c.r[3].w[0] + 9784u);  if (t) { goto L_0039389C; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003938A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393860u);  if (depth < kMaxDepth) unit_009C(c, 470u, depth + 1u); else { c.pc = 0x00393960u; return; } if (c.pc != 0x00393860u) [[unlikely]] return; }
L_00393860:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] + 8256u);
    set32(c.r[5], 0u + 16384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393874u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 472u, depth + 1u); else { c.pc = 0x00393980u; return; } if (c.pc != 0x00393874u) [[unlikely]] return; }
L_00393874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039387Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_009C(c, 488u, depth + 1u); else { c.pc = 0x00393B58u; return; } if (c.pc != 0x0039387Cu) [[unlikely]] return; }
L_0039387C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 8128u);
    set32(c.r[5], 0u + 16384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393890u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 480u, depth + 1u); else { c.pc = 0x00393A60u; return; } if (c.pc != 0x00393890u) [[unlikely]] return; }
L_00393890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393898u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_009C(c, 488u, depth + 1u); else { c.pc = 0x00393B58u; return; } if (c.pc != 0x00393898u) [[unlikely]] return; }
L_00393898:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0039389C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003938A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003938D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 9776u)));  c.pc = t; return; }
L_003938F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039390Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 466u, depth + 1u); else { c.pc = 0x003938D8u; return; } if (c.pc != 0x0039390Cu) [[unlikely]] return; }
L_0039390C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 9780u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00393928; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393928u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393928u) [[unlikely]] return; }
L_00393928:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393938:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[6].w[0] + 9776u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 9780u), 0u);
    st32((c.r[4].w[0] + 9784u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 9788u), 0u);  c.pc = t; return; }
L_00393960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393970u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_009C(c, 488u, depth + 1u); else { c.pc = 0x00393B58u; return; } if (c.pc != 0x00393970u) [[unlikely]] return; }
L_00393970:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00393B58; }
L_00393980:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 9788u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003939A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039399Cu);  if (depth < kMaxDepth) unit_009C(c, 477u, depth + 1u); else { c.pc = 0x003939F8u; return; } if (c.pc != 0x0039399Cu) [[unlikely]] return; }
L_0039399C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003939B4; } }
    c.budget -= 1;
L_003939A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003939B0u);  if (depth < kMaxDepth) unit_009C(c, 475u, depth + 1u); else { c.pc = 0x003939C0u; return; } if (c.pc != 0x003939B0u) [[unlikely]] return; }
L_003939B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003939B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003939C0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], c.r[1].w[0] + c.r[4].w[0]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003939E4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003939E4u) [[unlikely]] return; }
L_003939E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003939F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393A20u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 285u, depth + 1u); else { c.pc = 0x00122278u; return; } if (c.pc != 0x00393A20u) [[unlikely]] return; }
L_00393A20:
    set32(c.r[4], c.r[16].w[0] + 15u);
    c.r[3].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    st32((c.r[2].w[0] + 128u), c.r[17].w[0]);
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393A40u); set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 4));  if (depth < kMaxDepth) unit_0000(c, 304u, depth + 1u); else { c.pc = 0x00122748u; return; } if (c.pc != 0x00393A40u) [[unlikely]] return; }
L_00393A40:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00393A60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 9788u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00393A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393A7Cu);  if (depth < kMaxDepth) unit_009C(c, 485u, depth + 1u); else { c.pc = 0x00393AD0u; return; } if (c.pc != 0x00393A7Cu) [[unlikely]] return; }
L_00393A7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00393A94; } }
    c.budget -= 1;
L_00393A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393A90u);  if (depth < kMaxDepth) unit_009C(c, 483u, depth + 1u); else { c.pc = 0x00393AA0u; return; } if (c.pc != 0x00393A90u) [[unlikely]] return; }
L_00393A90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00393A94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393AA0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393AC0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x00393AC0u) [[unlikely]] return; }
L_00393AC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 9u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393AF8u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 285u, depth + 1u); else { c.pc = 0x00122278u; return; } if (c.pc != 0x00393AF8u) [[unlikely]] return; }
L_00393AF8:
    set32(c.r[4], c.r[16].w[0] + 15u);
    c.r[3].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    st32((c.r[2].w[0] + 128u), c.r[17].w[0]);
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393B18u); set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 4));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00122610u; return; } if (c.pc != 0x00393B18u) [[unlikely]] return; }
L_00393B18:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00393B58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393B6Cu);  if (depth < kMaxDepth) unit_0000(c, 285u, depth + 1u); else { c.pc = 0x00122278u; return; } if (c.pc != 0x00393B6Cu) [[unlikely]] return; }
L_00393B6C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00393B78:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393B84u); set32(c.r[6], 0u + 30u);  if (depth < kMaxDepth) unit_0000(c, 312u, depth + 1u); else { c.pc = 0x00122848u; return; } if (c.pc != 0x00393B84u) [[unlikely]] return; }
L_00393B84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393B78u | kUnwind; return; } goto L_00393B78; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393BA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393BB4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 285u, depth + 1u); else { c.pc = 0x00122278u; return; } if (c.pc != 0x00393BB4u) [[unlikely]] return; }
L_00393BB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393BC4u); set32(c.r[6], 0u + 30u);  if (depth < kMaxDepth) unit_0000(c, 312u, depth + 1u); else { c.pc = 0x00122848u; return; } if (c.pc != 0x00393BC4u) [[unlikely]] return; }
L_00393BC4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393BD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C378u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 27u, depth); }
L_00393BF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00393798u | kUnwind; return; } goto L_00393798; }
L_00393C08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00393828u | kUnwind; return; } goto L_00393828; }
L_00393C20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00393C28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00393C30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00393C38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393C54u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00393C54u) [[unlikely]] return; }
L_00393C54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 11192u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_00393C80; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_00393C80:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A2(c, 384u, depth); }
L_00393CB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393CCCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00393CCCu) [[unlikely]] return; }
L_00393CCC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 64u)));  goto L_00393CE4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393CE0u); set32(c.r[4], c.r[4].w[0] + 11240u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00393CE0u) [[unlikely]] return; }
L_00393CE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00393CE4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393CF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393D0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00393D0Cu) [[unlikely]] return; }
L_00393D0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00393D38; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393D20u); set32(c.r[4], c.r[4].w[0] + 11288u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00393D20u) [[unlikely]] return; }
L_00393D20:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393D38:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009D(c, 9u, depth); }
L_00393D48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393D60u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00393D60u) [[unlikely]] return; }
L_00393D60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00393D80; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393D74u); set32(c.r[4], c.r[4].w[0] + 11336u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00393D74u) [[unlikely]] return; }
L_00393D74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00393D98; } }
    c.budget -= 1;
L_00393D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393D88u);  if (depth < kMaxDepth) unit_009C(c, 513u, depth + 1u); else { c.pc = 0x00393DB0u; return; } if (c.pc != 0x00393D88u) [[unlikely]] return; }
L_00393D88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393D94u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 214u, depth + 1u); else { c.pc = 0x00391C18u; return; } if (c.pc != 0x00393D94u) [[unlikely]] return; }
L_00393D94:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00393D98:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00393DB0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 160u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393DC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00393DC4u) [[unlikely]] return; }
L_00393DC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00393DE0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393DD8u); set32(c.r[4], c.r[4].w[0] + 11384u);  if (depth < kMaxDepth) unit_009D(c, 355u, depth + 1u); else { c.pc = 0x00397C30u; return; } if (c.pc != 0x00393DD8u) [[unlikely]] return; }
L_00393DD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00393E00; } }
L_00393DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393DE8u);  if (depth < kMaxDepth) unit_009C(c, 502u, depth + 1u); else { c.pc = 0x00393CB8u; return; } if (c.pc != 0x00393DE8u) [[unlikely]] return; }
L_00393DE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393DF4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 406u, depth + 1u); else { c.pc = 0x003ABA88u; return; } if (c.pc != 0x00393DF4u) [[unlikely]] return; }
L_00393DF4:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 3;
L_00393E00:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 168u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00393E10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00393E40; }
L_00393E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393E64u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00393E64u) [[unlikely]] return; }
L_00393E64:
    c.r[16].d[0] = c.r[16].d[0] ^ 1ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 11440u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_00393E98; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_00393E98:
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A2(c, 384u, depth); }
L_00393EB8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393ED4u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00393ED4u) [[unlikely]] return; }
L_00393ED4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 11504u);  if (t) { goto L_00393EF8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_00393EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393F00u); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_00A2(c, 11u, depth + 1u); else { c.pc = 0x003A8108u; return; } if (c.pc != 0x00393F00u) [[unlikely]] return; }
L_00393F00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 11552u);  if (t) { goto L_00393F20; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_00393F20:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00393F38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_009F(c, 289u, depth); }
L_00393FA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393FC4u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 8u, depth + 1u); else { c.pc = 0x003941D0u; return; } if (c.pc != 0x00393FC4u) [[unlikely]] return; }
L_00393FC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 11640u);  if (t) { goto L_00393FE8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_009D(c, 355u, depth); }
L_00393FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393FF0u); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_00A2(c, 14u, depth + 1u); else { c.pc = 0x003A8178u; return; } if (c.pc != 0x00393FF0u) [[unlikely]] return; }
L_00393FF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 11688u);  if (t) { [[clang::musttail]] return unit_009D(c, 2u, depth); } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
    [[clang::musttail]] return unit_009D(c, 1u, depth);
}

}
