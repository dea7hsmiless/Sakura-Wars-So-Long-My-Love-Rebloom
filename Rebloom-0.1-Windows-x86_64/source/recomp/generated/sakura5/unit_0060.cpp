#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0060[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 77,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0,
    0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118,
    0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0,
    123, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 135,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 146, 0, 147, 0, 148, 0, 149,
    0, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0,
    0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 169,
    0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187,
    0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 201,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0,
    230, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 254,
    0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 294, 0, 295, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0,
    0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317,
    0, 318, 0, 319, 0, 320, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0,
    339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0,
    361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0,
    0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 382, 0, 0,
    383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0,
    0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 407, 0, 408, 0, 409, 0, 410, 0, 411, 0, 412, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0060(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002A0000;
    case 2u: goto L_002A0010;
    case 3u: goto L_002A002C;
    case 4u: goto L_002A0034;
    case 5u: goto L_002A0048;
    case 6u: goto L_002A0058;
    case 7u: goto L_002A00A0;
    case 8u: goto L_002A00E0;
    case 9u: goto L_002A0110;
    case 10u: goto L_002A0128;
    case 11u: goto L_002A0140;
    case 12u: goto L_002A0168;
    case 13u: goto L_002A018C;
    case 14u: goto L_002A01C0;
    case 15u: goto L_002A01DC;
    case 16u: goto L_002A0208;
    case 17u: goto L_002A023C;
    case 18u: goto L_002A0258;
    case 19u: goto L_002A0284;
    case 20u: goto L_002A0298;
    case 21u: goto L_002A02B8;
    case 22u: goto L_002A02DC;
    case 23u: goto L_002A0300;
    case 24u: goto L_002A0330;
    case 25u: goto L_002A0398;
    case 26u: goto L_002A03D0;
    case 27u: goto L_002A0410;
    case 28u: goto L_002A043C;
    case 29u: goto L_002A0490;
    case 30u: goto L_002A04C4;
    case 31u: goto L_002A052C;
    case 32u: goto L_002A0554;
    case 33u: goto L_002A0578;
    case 34u: goto L_002A0598;
    case 35u: goto L_002A05B4;
    case 36u: goto L_002A05C8;
    case 37u: goto L_002A05E4;
    case 38u: goto L_002A05F8;
    case 39u: goto L_002A0614;
    case 40u: goto L_002A0628;
    case 41u: goto L_002A0644;
    case 42u: goto L_002A0658;
    case 43u: goto L_002A06C0;
    case 44u: goto L_002A06CC;
    case 45u: goto L_002A06E8;
    case 46u: goto L_002A0720;
    case 47u: goto L_002A0738;
    case 48u: goto L_002A0758;
    case 49u: goto L_002A0764;
    case 50u: goto L_002A0778;
    case 51u: goto L_002A07A8;
    case 52u: goto L_002A07CC;
    case 53u: goto L_002A07EC;
    case 54u: goto L_002A0820;
    case 55u: goto L_002A08B0;
    case 56u: goto L_002A08C0;
    case 57u: goto L_002A08DC;
    case 58u: goto L_002A0908;
    case 59u: goto L_002A0918;
    case 60u: goto L_002A0930;
    case 61u: goto L_002A095C;
    case 62u: goto L_002A096C;
    case 63u: goto L_002A0980;
    case 64u: goto L_002A09A4;
    case 65u: goto L_002A09BC;
    case 66u: goto L_002A09C4;
    case 67u: goto L_002A0A14;
    case 68u: goto L_002A0A30;
    case 69u: goto L_002A0A44;
    case 70u: goto L_002A0AB4;
    case 71u: goto L_002A0ADC;
    case 72u: goto L_002A0AF0;
    case 73u: goto L_002A0B2C;
    case 74u: goto L_002A0B44;
    case 75u: goto L_002A0B60;
    case 76u: goto L_002A0B74;
    case 77u: goto L_002A0B7C;
    case 78u: goto L_002A0B88;
    case 79u: goto L_002A0BB0;
    case 80u: goto L_002A0C64;
    case 81u: goto L_002A0CC4;
    case 82u: goto L_002A0D30;
    case 83u: goto L_002A0D58;
    case 84u: goto L_002A0D90;
    case 85u: goto L_002A0DAC;
    case 86u: goto L_002A0DD0;
    case 87u: goto L_002A0E68;
    case 88u: goto L_002A0E98;
    case 89u: goto L_002A0F3C;
    case 90u: goto L_002A0F6C;
    case 91u: goto L_002A0FA4;
    case 92u: goto L_002A0FC0;
    case 93u: goto L_002A0FD0;
    case 94u: goto L_002A0FF0;
    case 95u: goto L_002A0FFC;
    case 96u: goto L_002A1018;
    case 97u: goto L_002A1028;
    case 98u: goto L_002A1048;
    case 99u: goto L_002A1054;
    case 100u: goto L_002A1070;
    case 101u: goto L_002A1080;
    case 102u: goto L_002A10A0;
    case 103u: goto L_002A10AC;
    case 104u: goto L_002A10BC;
    case 105u: goto L_002A10C8;
    case 106u: goto L_002A10D8;
    case 107u: goto L_002A10F8;
    case 108u: goto L_002A1104;
    case 109u: goto L_002A1120;
    case 110u: goto L_002A1130;
    case 111u: goto L_002A1150;
    case 112u: goto L_002A115C;
    case 113u: goto L_002A1164;
    case 114u: goto L_002A1174;
    case 115u: goto L_002A1194;
    case 116u: goto L_002A11B8;
    case 117u: goto L_002A11D8;
    case 118u: goto L_002A11FC;
    case 119u: goto L_002A120C;
    case 120u: goto L_002A121C;
    case 121u: goto L_002A1234;
    case 122u: goto L_002A1264;
    case 123u: goto L_002A1280;
    case 124u: goto L_002A1288;
    case 125u: goto L_002A12A4;
    case 126u: goto L_002A12EC;
    case 127u: goto L_002A1338;
    case 128u: goto L_002A1350;
    case 129u: goto L_002A1388;
    case 130u: goto L_002A1398;
    case 131u: goto L_002A13A0;
    case 132u: goto L_002A13B0;
    case 133u: goto L_002A13E4;
    case 134u: goto L_002A13EC;
    case 135u: goto L_002A13FC;
    case 136u: goto L_002A1430;
    case 137u: goto L_002A1460;
    case 138u: goto L_002A1498;
    case 139u: goto L_002A14C0;
    case 140u: goto L_002A159C;
    case 141u: goto L_002A15A8;
    case 142u: goto L_002A15B8;
    case 143u: goto L_002A15C4;
    case 144u: goto L_002A15CC;
    case 145u: goto L_002A15D4;
    case 146u: goto L_002A15E4;
    case 147u: goto L_002A15EC;
    case 148u: goto L_002A15F4;
    case 149u: goto L_002A15FC;
    case 150u: goto L_002A160C;
    case 151u: goto L_002A1614;
    case 152u: goto L_002A161C;
    case 153u: goto L_002A1624;
    case 154u: goto L_002A1634;
    case 155u: goto L_002A163C;
    case 156u: goto L_002A1644;
    case 157u: goto L_002A164C;
    case 158u: goto L_002A165C;
    case 159u: goto L_002A1664;
    case 160u: goto L_002A166C;
    case 161u: goto L_002A1674;
    case 162u: goto L_002A1684;
    case 163u: goto L_002A168C;
    case 164u: goto L_002A16B8;
    case 165u: goto L_002A16C0;
    case 166u: goto L_002A16D4;
    case 167u: goto L_002A16DC;
    case 168u: goto L_002A16E4;
    case 169u: goto L_002A16FC;
    case 170u: goto L_002A1704;
    case 171u: goto L_002A170C;
    case 172u: goto L_002A1714;
    case 173u: goto L_002A1758;
    case 174u: goto L_002A1788;
    case 175u: goto L_002A1790;
    case 176u: goto L_002A17C0;
    case 177u: goto L_002A17D0;
    case 178u: goto L_002A17E4;
    case 179u: goto L_002A182C;
    case 180u: goto L_002A183C;
    case 181u: goto L_002A1850;
    case 182u: goto L_002A1870;
    case 183u: goto L_002A18A8;
    case 184u: goto L_002A18B8;
    case 185u: goto L_002A18BC;
    case 186u: goto L_002A18CC;
    case 187u: goto L_002A18FC;
    case 188u: goto L_002A1920;
    case 189u: goto L_002A1940;
    case 190u: goto L_002A1978;
    case 191u: goto L_002A1988;
    case 192u: goto L_002A199C;
    case 193u: goto L_002A19CC;
    case 194u: goto L_002A19DC;
    case 195u: goto L_002A1A34;
    case 196u: goto L_002A1A4C;
    case 197u: goto L_002A1A6C;
    case 198u: goto L_002A1A90;
    case 199u: goto L_002A1AD8;
    case 200u: goto L_002A1AE8;
    case 201u: goto L_002A1AFC;
    case 202u: goto L_002A1B30;
    case 203u: goto L_002A1B40;
    case 204u: goto L_002A1B5C;
    case 205u: goto L_002A1B70;
    case 206u: goto L_002A1BBC;
    case 207u: goto L_002A1BD0;
    case 208u: goto L_002A1C1C;
    case 209u: goto L_002A1C30;
    case 210u: goto L_002A1C4C;
    case 211u: goto L_002A1C5C;
    case 212u: goto L_002A1CC0;
    case 213u: goto L_002A1CE0;
    case 214u: goto L_002A1CE8;
    case 215u: goto L_002A1D00;
    case 216u: goto L_002A1D20;
    case 217u: goto L_002A1D84;
    case 218u: goto L_002A1D94;
    case 219u: goto L_002A1DE0;
    case 220u: goto L_002A1E60;
    case 221u: goto L_002A1E74;
    case 222u: goto L_002A1EBC;
    case 223u: goto L_002A1F28;
    case 224u: goto L_002A1FFC;
    case 225u: goto L_002A2008;
    case 226u: goto L_002A2024;
    case 227u: goto L_002A2038;
    case 228u: goto L_002A2058;
    case 229u: goto L_002A2074;
    case 230u: goto L_002A2080;
    case 231u: goto L_002A208C;
    case 232u: goto L_002A2098;
    case 233u: goto L_002A20C0;
    case 234u: goto L_002A2170;
    case 235u: goto L_002A21AC;
    case 236u: goto L_002A21C8;
    case 237u: goto L_002A2224;
    case 238u: goto L_002A2258;
    case 239u: goto L_002A2270;
    case 240u: goto L_002A22A0;
    case 241u: goto L_002A22D0;
    case 242u: goto L_002A22E0;
    case 243u: goto L_002A2330;
    case 244u: goto L_002A23CC;
    case 245u: goto L_002A23E8;
    case 246u: goto L_002A2438;
    case 247u: goto L_002A2450;
    case 248u: goto L_002A2480;
    case 249u: goto L_002A24A8;
    case 250u: goto L_002A24C0;
    case 251u: goto L_002A24EC;
    case 252u: goto L_002A2560;
    case 253u: goto L_002A256C;
    case 254u: goto L_002A257C;
    case 255u: goto L_002A2588;
    case 256u: goto L_002A25D0;
    case 257u: goto L_002A2600;
    case 258u: goto L_002A2620;
    case 259u: goto L_002A26B0;
    case 260u: goto L_002A26DC;
    case 261u: goto L_002A26F8;
    case 262u: goto L_002A2710;
    case 263u: goto L_002A2728;
    case 264u: goto L_002A2740;
    case 265u: goto L_002A2758;
    case 266u: goto L_002A2780;
    case 267u: goto L_002A27CC;
    case 268u: goto L_002A27F8;
    case 269u: goto L_002A280C;
    case 270u: goto L_002A283C;
    case 271u: goto L_002A286C;
    case 272u: goto L_002A2880;
    case 273u: goto L_002A2898;
    case 274u: goto L_002A28C8;
    case 275u: goto L_002A28F8;
    case 276u: goto L_002A290C;
    case 277u: goto L_002A2924;
    case 278u: goto L_002A2930;
    case 279u: goto L_002A2964;
    case 280u: goto L_002A296C;
    case 281u: goto L_002A29A0;
    case 282u: goto L_002A29A8;
    case 283u: goto L_002A29E0;
    case 284u: goto L_002A29F0;
    case 285u: goto L_002A2A14;
    case 286u: goto L_002A2A6C;
    case 287u: goto L_002A2AB8;
    case 288u: goto L_002A2B00;
    case 289u: goto L_002A2B4C;
    case 290u: goto L_002A2B60;
    case 291u: goto L_002A2B80;
    case 292u: goto L_002A2BC4;
    case 293u: goto L_002A2BD0;
    case 294u: goto L_002A2BD8;
    case 295u: goto L_002A2BE0;
    case 296u: goto L_002A2BF0;
    case 297u: goto L_002A2C14;
    case 298u: goto L_002A2C74;
    case 299u: goto L_002A2CC4;
    case 300u: goto L_002A2D10;
    case 301u: goto L_002A2D50;
    case 302u: goto L_002A2D90;
    case 303u: goto L_002A2DEC;
    case 304u: goto L_002A2E18;
    case 305u: goto L_002A2E28;
    case 306u: goto L_002A2E48;
    case 307u: goto L_002A2E60;
    case 308u: goto L_002A2E80;
    case 309u: goto L_002A2EAC;
    case 310u: goto L_002A2ECC;
    case 311u: goto L_002A2EEC;
    case 312u: goto L_002A2F0C;
    case 313u: goto L_002A2F2C;
    case 314u: goto L_002A2F3C;
    case 315u: goto L_002A2F50;
    case 316u: goto L_002A2F70;
    case 317u: goto L_002A2F7C;
    case 318u: goto L_002A2F84;
    case 319u: goto L_002A2F8C;
    case 320u: goto L_002A2F94;
    case 321u: goto L_002A2F9C;
    case 322u: goto L_002A2FB0;
    case 323u: goto L_002A2FD8;
    case 324u: goto L_002A2FF0;
    case 325u: goto L_002A302C;
    case 326u: goto L_002A3060;
    case 327u: goto L_002A3090;
    case 328u: goto L_002A30BC;
    case 329u: goto L_002A310C;
    case 330u: goto L_002A311C;
    case 331u: goto L_002A316C;
    case 332u: goto L_002A3190;
    case 333u: goto L_002A31CC;
    case 334u: goto L_002A31F0;
    case 335u: goto L_002A3210;
    case 336u: goto L_002A3234;
    case 337u: goto L_002A3260;
    case 338u: goto L_002A3270;
    case 339u: goto L_002A3280;
    case 340u: goto L_002A32B0;
    case 341u: goto L_002A32C4;
    case 342u: goto L_002A32F0;
    case 343u: goto L_002A333C;
    case 344u: goto L_002A3358;
    case 345u: goto L_002A3370;
    case 346u: goto L_002A3390;
    case 347u: goto L_002A33AC;
    case 348u: goto L_002A33F0;
    case 349u: goto L_002A3420;
    case 350u: goto L_002A3470;
    case 351u: goto L_002A348C;
    case 352u: goto L_002A34D0;
    case 353u: goto L_002A3500;
    case 354u: goto L_002A3550;
    case 355u: goto L_002A3574;
    case 356u: goto L_002A35B0;
    case 357u: goto L_002A35D8;
    case 358u: goto L_002A35E8;
    case 359u: goto L_002A3650;
    case 360u: goto L_002A3674;
    case 361u: goto L_002A3680;
    case 362u: goto L_002A3688;
    case 363u: goto L_002A36E0;
    case 364u: goto L_002A3704;
    case 365u: goto L_002A3714;
    case 366u: goto L_002A3780;
    case 367u: goto L_002A37A8;
    case 368u: goto L_002A37C0;
    case 369u: goto L_002A3830;
    case 370u: goto L_002A3844;
    case 371u: goto L_002A3854;
    case 372u: goto L_002A3860;
    case 373u: goto L_002A386C;
    case 374u: goto L_002A38B0;
    case 375u: goto L_002A3928;
    case 376u: goto L_002A3938;
    case 377u: goto L_002A3950;
    case 378u: goto L_002A3960;
    case 379u: goto L_002A3998;
    case 380u: goto L_002A39D8;
    case 381u: goto L_002A39E8;
    case 382u: goto L_002A39F4;
    case 383u: goto L_002A3A00;
    case 384u: goto L_002A3A14;
    case 385u: goto L_002A3A5C;
    case 386u: goto L_002A3A68;
    case 387u: goto L_002A3A74;
    case 388u: goto L_002A3A84;
    case 389u: goto L_002A3AA0;
    case 390u: goto L_002A3ABC;
    case 391u: goto L_002A3B00;
    case 392u: goto L_002A3B50;
    case 393u: goto L_002A3CD0;
    case 394u: goto L_002A3CE4;
    case 395u: goto L_002A3D84;
    case 396u: goto L_002A3D8C;
    case 397u: goto L_002A3D94;
    case 398u: goto L_002A3D9C;
    case 399u: goto L_002A3DA4;
    case 400u: goto L_002A3DAC;
    case 401u: goto L_002A3DB4;
    case 402u: goto L_002A3DBC;
    case 403u: goto L_002A3DC4;
    case 404u: goto L_002A3DCC;
    case 405u: goto L_002A3DD4;
    case 406u: goto L_002A3DDC;
    case 407u: goto L_002A3E0C;
    case 408u: goto L_002A3E14;
    case 409u: goto L_002A3E1C;
    case 410u: goto L_002A3E24;
    case 411u: goto L_002A3E2C;
    case 412u: goto L_002A3E34;
    case 413u: goto L_002A3E3C;
    case 414u: goto L_002A3E44;
    case 415u: goto L_002A3FC4;
    case 416u: goto L_002A3FE0;
    default: bad_entry(c, 0x002A0000u); return;
    }
L_002A0000:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A0010:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 7;
L_002A002C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0034u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002A0034u) [[unlikely]] return; }
L_002A0034:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 24704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0048u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x002A00A0u; return; } if (c.pc != 0x002A0048u) [[unlikely]] return; }
L_002A0048:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0058u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 54u, depth + 1u); else { c.pc = 0x002A0820u; return; } if (c.pc != 0x002A0058u) [[unlikely]] return; }
L_002A0058:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002A0070; }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002A0080; } }
L_002A0070:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_002A0080:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A00A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x53520000u);
    c.r[3].d[0] = c.r[3].d[0] | 16723ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 88u), 0u);  c.pc = t; return; }
L_002A00E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A0128; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 24704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0110u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002A0110u) [[unlikely]] return; }
L_002A0110:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002A012C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0128u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002A0128u) [[unlikely]] return; }
L_002A0128:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A012C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A0140:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A01C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A019C; } }
L_002A0168:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002A019C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A018Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A018Cu) [[unlikely]] return; }
L_002A018C:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
L_002A019C:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0168u | kUnwind; return; } goto L_002A0168; }
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), 0u);  goto L_002A01C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A01C0u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002A01C0u) [[unlikely]] return; }
L_002A01C0:
    st32((c.r[17].w[0] + 60u), 0u);
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 2;
L_002A01C8:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  goto L_002A0248; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A0218; } }
L_002A01DC:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002A0218; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 68u)));  goto L_002A020C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0208u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0208u) [[unlikely]] return; }
L_002A0208:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 1;
L_002A020C:
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_002A0218:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 68u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A01DCu | kUnwind; return; } goto L_002A01DC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 72u), 0u);  goto L_002A0244; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A023Cu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002A023Cu) [[unlikely]] return; }
L_002A023C:
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 72u), 0u);
    c.budget -= 2;
L_002A0244:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002A0248:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  goto L_002A02C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A0294; } }
L_002A0258:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002A0294; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  goto L_002A0288; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0284u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0284u) [[unlikely]] return; }
L_002A0284:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002A0288:
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_002A0294:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 1;
L_002A0298:
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0258u | kUnwind; return; } goto L_002A0258; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 80u), 0u);  goto L_002A02C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A02B8u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002A02B8u) [[unlikely]] return; }
L_002A02B8:
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 80u), 0u);
    c.budget -= 2;
L_002A02C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_002A02C4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  goto L_002A02E8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 88u), 0u);  goto L_002A02E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A02DCu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002A02DCu) [[unlikely]] return; }
L_002A02DC:
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 2;
L_002A02E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_002A02E8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_002A0308; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0300u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0300u) [[unlikely]] return; }
L_002A0300:
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 2;
L_002A0308:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A0330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A0480; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002A0484; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 64u)));  goto L_002A03C0; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 56u)));  goto L_002A037C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0480; } }
L_002A037C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A0480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0398u); set32(c.r[5], ld32((c.r[6].w[0] + 60u)));  if (depth < kMaxDepth) unit_0060(c, 29u, depth + 1u); else { c.pc = 0x002A0490u; return; } if (c.pc != 0x002A0398u) [[unlikely]] return; }
L_002A0398:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  goto L_002A03B4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002A0480; } }
L_002A03B4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
L_002A03C0:
    set32(c.r[8], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_002A0450; } }
L_002A03D0:
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002A0450; }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A044C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_002A045C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0410u); set32(c.r[4], c.r[4].w[0] + 9200u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002A0410u) [[unlikely]] return; }
L_002A0410:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A0440; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A043Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A043Cu) [[unlikely]] return; }
L_002A043C:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_002A0440:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A045C; } }
L_002A044C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002A0450:
    c.r[3].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A03D0u | kUnwind; return; } goto L_002A03D0; }
L_002A045C:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002A0480; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 7;
L_002A0480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002A0484:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0490:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002A057C; } }
L_002A04C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 17473ull;
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A054C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.r[2].d[0] = c.r[2].d[0] | 20275ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 72u)));  goto L_002A0540; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[2].d[0] = c.r[2].d[0] | 20562ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A0524; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 88u)));  if (t) { goto L_002A0568; } }
L_002A0524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A052Cu);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002A052Cu) [[unlikely]] return; }
L_002A052C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_002A0570; } }
L_002A0540:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_002A0570; } }
L_002A054C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0554u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002A0554u) [[unlikely]] return; }
L_002A0554:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002A0570; } }
L_002A0568:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_002A0570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0578u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002A0578u) [[unlikely]] return; }
L_002A0578:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002A057C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A04C4u | kUnwind; return; } goto L_002A04C4; }
    set32(c.r[2], ld32((c.r[21].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 72u)));  goto L_002A05B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0598u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002A0598u) [[unlikely]] return; }
L_002A0598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_002A07E0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A05B4u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002A05B4u) [[unlikely]] return; }
L_002A05B4:
    set32(c.r[2], ld32((c.r[21].w[0] + 72u)));
    c.budget -= 1;
L_002A05B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 80u)));  goto L_002A05E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A05C8u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002A05C8u) [[unlikely]] return; }
L_002A05C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_002A07E0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A05E4u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002A05E4u) [[unlikely]] return; }
L_002A05E4:
    set32(c.r[2], ld32((c.r[21].w[0] + 80u)));
    c.budget -= 1;
L_002A05E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 88u)));  goto L_002A0618; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A05F8u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002A05F8u) [[unlikely]] return; }
L_002A05F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_002A07E0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0614u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002A0614u) [[unlikely]] return; }
L_002A0614:
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    c.budget -= 1;
L_002A0618:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_002A0648; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0628u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002A0628u) [[unlikely]] return; }
L_002A0628:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_002A07E0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0644u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002A0644u) [[unlikely]] return; }
L_002A0644:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A0648:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A07D0; } }
L_002A0658:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 17473ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002A0750; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.r[2].d[0] = c.r[2].d[0] | 20275ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 124u);  goto L_002A0718; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[2].d[0] = c.r[2].d[0] | 20562ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002A06B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 84u)));  if (t) { goto L_002A07B4; } }
L_002A06B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A06C0u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002A06C0u) [[unlikely]] return; }
L_002A06C0:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A06CCu); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002A06CCu) [[unlikely]] return; }
L_002A06CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 60u)));  goto L_002A06EC; }
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A06E8u); c.r[7].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 74u, depth + 1u); else { c.pc = 0x0020CA00u; return; } if (c.pc != 0x002A06E8u) [[unlikely]] return; }
L_002A06E8:
    set32(c.r[3], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 1;
L_002A06EC:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A07E0; } }
    c.r[20].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_002A07C4; } }
L_002A0718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0720u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002A0720u) [[unlikely]] return; }
L_002A0720:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 68u)));  goto L_002A073C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0738u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 56u, depth + 1u); else { c.pc = 0x00208610u; return; } if (c.pc != 0x002A0738u) [[unlikely]] return; }
L_002A0738:
    set32(c.r[3], ld32((c.r[21].w[0] + 68u)));
    c.budget -= 1;
L_002A073C:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_002A07C4; } }
L_002A0750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0758u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002A0758u) [[unlikely]] return; }
L_002A0758:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0764u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x002A0764u) [[unlikely]] return; }
L_002A0764:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 76u)));  goto L_002A077C; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0778u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x002A0778u) [[unlikely]] return; }
L_002A0778:
    set32(c.r[3], ld32((c.r[21].w[0] + 76u)));
    c.budget -= 1;
L_002A077C:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A07E0; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A07A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x002A07A8u) [[unlikely]] return; }
L_002A07A8:
    c.r[20].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_002A07C4; } }
L_002A07B4:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[20].w[0]);
    c.budget -= 4;
L_002A07C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A07CCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x002A07CCu) [[unlikely]] return; }
L_002A07CC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002A07D0:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[6], ld32((c.r[20].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0658u | kUnwind; return; } goto L_002A0658; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A07F0; } }
L_002A07E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A07ECu); set32(c.r[4], c.r[4].w[0] + 9264u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002A07ECu) [[unlikely]] return; }
L_002A07EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A07F0:
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
L_002A0820:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[2].d[0] | 17473ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 23;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002A0950; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.r[2].d[0] = c.r[2].d[0] | 20275ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002A08FC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[2].d[0] = c.r[2].d[0] | 20562ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002A08A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A09AC; } }
L_002A08A4:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A08B0u); st32((c.r[18].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002A08B0u) [[unlikely]] return; }
L_002A08B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_002A0A08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A08C0u); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002A08C0u) [[unlikely]] return; }
L_002A08C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 60u)));  goto L_002A08E0; }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A08DCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 74u, depth + 1u); else { c.pc = 0x0020CA00u; return; } if (c.pc != 0x002A08DCu) [[unlikely]] return; }
L_002A08DC:
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 1;
L_002A08E0:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002A0A18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0A08; } }
L_002A08FC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0908u); st32((c.r[18].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002A0908u) [[unlikely]] return; }
L_002A0908:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_002A0A08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0918u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002A0918u) [[unlikely]] return; }
L_002A0918:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 68u)));  goto L_002A0934; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0930u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 56u, depth + 1u); else { c.pc = 0x00208610u; return; } if (c.pc != 0x002A0930u) [[unlikely]] return; }
L_002A0930:
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 1;
L_002A0934:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A09FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0A08; } }
L_002A0950:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A095Cu); st32((c.r[18].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002A095Cu) [[unlikely]] return; }
L_002A095C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_002A0A08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A096Cu); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x002A096Cu) [[unlikely]] return; }
L_002A096C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 76u)));  goto L_002A0984; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0980u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x002A0980u) [[unlikely]] return; }
L_002A0980:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_002A0984:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A0A08; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A09A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x002A09A4u) [[unlikely]] return; }
L_002A09A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A09FC; } }
L_002A09AC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002A09B8; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002A09B8:
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_002A09BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A09C4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002A09C4u) [[unlikely]] return; }
L_002A09C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_002A0A08; } }
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A0A08; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A09FC; } }
    st32((c.r[3].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A0A08; } }
L_002A09FC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0A18; } }
L_002A0A08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0A14u); set32(c.r[4], c.r[4].w[0] + 9264u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002A0A14u) [[unlikely]] return; }
L_002A0A14:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A0A18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A0A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0A44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 372u, depth + 1u); else { c.pc = 0x00293560u; return; } if (c.pc != 0x002A0A44u) [[unlikely]] return; }
L_002A0A44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 24768u);
    set32(c.r[3], c.r[3].w[0] + 24824u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16723ull;
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0] + 80u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 544u), 0u);
    st32((c.r[16].w[0] + 548u), 0u);
    st32((c.r[16].w[0] + 552u), 0u);
    st32((c.r[16].w[0] + 556u), 0u);
    st32((c.r[16].w[0] + 560u), 0u);
    st32((c.r[16].w[0] + 564u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 568u), 0u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 572u), 0u);
    st32((c.r[16].w[0] + 576u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 580u), c.r[2].w[0]);
    c.budget -= 28;
L_002A0AB4:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 480u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 512u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0AB4u | kUnwind; return; } goto L_002A0AB4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0ADCu); set32(c.r[4], c.r[4].w[0] + 9312u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002A0ADCu) [[unlikely]] return; }
L_002A0ADC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0AF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A0B44; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 24768u);
    set32(c.r[2], c.r[2].w[0] + 24824u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0B2Cu); st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 377u, depth + 1u); else { c.pc = 0x00293640u; return; } if (c.pc != 0x002A0B2Cu) [[unlikely]] return; }
L_002A0B2C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002A0B48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0B44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002A0B44u) [[unlikely]] return; }
L_002A0B44:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A0B48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A0B60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0B74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 332u, depth + 1u); else { c.pc = 0x002A3190u; return; } if (c.pc != 0x002A0B74u) [[unlikely]] return; }
L_002A0B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0B7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 308u, depth + 1u); else { c.pc = 0x002A2E80u; return; } if (c.pc != 0x002A0B7Cu) [[unlikely]] return; }
L_002A0B7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0B88u); set32(c.r[4], c.r[4].w[0] + 9360u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002A0B88u) [[unlikely]] return; }
L_002A0B88:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A0D14; } }
    set32(c.r[3], 0u + 65u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002A0CFC; }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002A0D50; }
    set32(c.r[3], 0u + 74u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 1u);  goto L_002A0CBC; }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002A0CA8; }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_002A0C70; }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_002A0C1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0D44; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002A0C1C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002A0DC4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A0C44; } }
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  goto L_002A0C48; }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002A0C44:
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002A0C48:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A0DC0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0C64u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0060(c, 240u, depth + 1u); else { c.pc = 0x002A22A0u; return; } if (c.pc != 0x002A0C64u) [[unlikely]] return; }
L_002A0C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0D44; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002A0C70:
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A0DC0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], 0u - 9u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 2u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 564u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), 0u);  if (t) { goto L_002A0D44; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002A0CA8:
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002A0DC0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002A0CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0CC4u);  if (depth < kMaxDepth) unit_0060(c, 302u, depth + 1u); else { c.pc = 0x002A2D90u; return; } if (c.pc != 0x002A0CC4u) [[unlikely]] return; }
L_002A0CC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A0DC0; } }
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[16].w[0] + 76u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0DC0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002A0CFC:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A0D4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0D44; } }
L_002A0D14:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A0DC0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0D30u); set32(c.r[4], c.r[4].w[0] + 9392u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002A0D30u) [[unlikely]] return; }
L_002A0D30:
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[16].w[0] + 564u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 5;
L_002A0D44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0DC0; } }
L_002A0D4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A0D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0D58u);  if (depth < kMaxDepth) unit_0060(c, 324u, depth + 1u); else { c.pc = 0x002A2FF0u; return; } if (c.pc != 0x002A0D58u) [[unlikely]] return; }
L_002A0D58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A0DC0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A0D7C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002A0D7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A0DA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0D90u); set32(c.r[4], c.r[4].w[0] + 9456u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002A0D90u) [[unlikely]] return; }
L_002A0D90:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002A0DC0; } }
L_002A0DA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0DACu); set32(c.r[4], c.r[4].w[0] + 9520u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002A0DACu) [[unlikely]] return; }
L_002A0DAC:
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[16].w[0] + 564u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 5;
L_002A0DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002A0DC4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0DD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A14A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002A14AC; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A14A8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A1490; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A1348; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002A0F2C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A14A8; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002A0E58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A14A8; } }
L_002A0E58:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A0E88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0E68u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002A0E68u) [[unlikely]] return; }
L_002A0E68:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002A0E7C; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0E88; } }
L_002A0E7C:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002A0E88:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_002A0F0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0E98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 322u, depth + 1u); else { c.pc = 0x002A2FB0u; return; } if (c.pc != 0x002A0E98u) [[unlikely]] return; }
L_002A0E98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A0F08; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 122u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002A0F08; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1180u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 1u);  goto L_002A0EF4; }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A0EF0; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A0EF0; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A14A8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A14A8; } }
L_002A0EF0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002A0EF4:
    set32(c.r[3], 0u + 2u);
    st32((c.r[18].w[0] + 564u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), 0u);  if (t) { goto L_002A14A8; } }
L_002A0F08:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_002A0F0C:
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A14A8; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[18].w[0] + 564u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), 0u);  if (t) { goto L_002A14A8; } }
L_002A0F2C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A0F5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0F3Cu);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002A0F3Cu) [[unlikely]] return; }
L_002A0F3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002A0F50; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0F5C; } }
L_002A0F50:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002A0F5C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002A1224; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0F6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 266u, depth + 1u); else { c.pc = 0x002A2780u; return; } if (c.pc != 0x002A0F6Cu) [[unlikely]] return; }
L_002A0F6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A14A8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[17], 0u + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A115C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 9728u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0060[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A0FA4:
    set32(c.r[4], ld32((c.r[18].w[0] + 544u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 960u);  goto L_002A0FC8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0FC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0FC0u) [[unlikely]] return; }
L_002A0FC0:
    st32((c.r[18].w[0] + 544u), 0u);
    set32(c.r[4], 0u + 960u);
    c.budget -= 2;
L_002A0FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0FD0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002A0FD0u) [[unlikely]] return; }
L_002A0FD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 544u), c.r[2].w[0]);  goto L_002A1164; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002A0FE4; } }
    set32(c.r[6], c.r[18].w[0] + 52u);
    c.budget -= 1;
L_002A0FE4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0FF0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 37u, depth + 1u); else { c.pc = 0x00294520u; return; } if (c.pc != 0x002A0FF0u) [[unlikely]] return; }
L_002A0FF0:
    st32((c.r[18].w[0] + 544u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1164; } }
L_002A0FFC:
    set32(c.r[4], ld32((c.r[18].w[0] + 548u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 592u);  goto L_002A1020; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1018u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1018u) [[unlikely]] return; }
L_002A1018:
    st32((c.r[18].w[0] + 548u), 0u);
    set32(c.r[4], 0u + 592u);
    c.budget -= 2;
L_002A1020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1028u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002A1028u) [[unlikely]] return; }
L_002A1028:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 548u), c.r[2].w[0]);  goto L_002A1164; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002A103C; } }
    set32(c.r[6], c.r[18].w[0] + 52u);
    c.budget -= 1;
L_002A103C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1048u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 157u, depth + 1u); else { c.pc = 0x0029D8A0u; return; } if (c.pc != 0x002A1048u) [[unlikely]] return; }
L_002A1048:
    st32((c.r[18].w[0] + 548u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1164; } }
L_002A1054:
    set32(c.r[4], ld32((c.r[18].w[0] + 556u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 496u);  goto L_002A1078; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1070u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1070u) [[unlikely]] return; }
L_002A1070:
    st32((c.r[18].w[0] + 556u), 0u);
    set32(c.r[4], 0u + 496u);
    c.budget -= 2;
L_002A1078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1080u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002A1080u) [[unlikely]] return; }
L_002A1080:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 556u), c.r[2].w[0]);  goto L_002A1164; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002A1094; } }
    set32(c.r[6], c.r[18].w[0] + 52u);
    c.budget -= 1;
L_002A1094:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A10A0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x002A8AB0u; return; } if (c.pc != 0x002A10A0u) [[unlikely]] return; }
L_002A10A0:
    st32((c.r[18].w[0] + 556u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1164; } }
L_002A10AC:
    set32(c.r[4], ld32((c.r[18].w[0] + 552u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 560u);  goto L_002A10D0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_002A10BC:
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A10C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A10C8u) [[unlikely]] return; }
L_002A10C8:
    st32((c.r[18].w[0] + 552u), 0u);
    set32(c.r[4], 0u + 560u);
    c.budget -= 2;
L_002A10D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A10D8u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002A10D8u) [[unlikely]] return; }
L_002A10D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 552u), c.r[2].w[0]);  goto L_002A1164; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002A10EC; } }
    set32(c.r[6], c.r[18].w[0] + 52u);
    c.budget -= 1;
L_002A10EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A10F8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 385u, depth + 1u); else { c.pc = 0x002ABBF0u; return; } if (c.pc != 0x002A10F8u) [[unlikely]] return; }
L_002A10F8:
    st32((c.r[18].w[0] + 552u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1164; } }
L_002A1104:
    set32(c.r[4], ld32((c.r[18].w[0] + 560u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 544u);  goto L_002A1128; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1120u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1120u) [[unlikely]] return; }
L_002A1120:
    st32((c.r[18].w[0] + 560u), 0u);
    set32(c.r[4], 0u + 544u);
    c.budget -= 2;
L_002A1128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1130u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002A1130u) [[unlikely]] return; }
L_002A1130:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 560u), c.r[2].w[0]);  goto L_002A1164; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002A1144; } }
    set32(c.r[6], c.r[18].w[0] + 52u);
    c.budget -= 1;
L_002A1144:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1150u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 81u, depth + 1u); else { c.pc = 0x002C8CF0u; return; } if (c.pc != 0x002A1150u) [[unlikely]] return; }
L_002A1150:
    st32((c.r[18].w[0] + 560u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1164; } }
L_002A115C:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_002A1164:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A11FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1174u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 327u, depth + 1u); else { c.pc = 0x002A3090u; return; } if (c.pc != 0x002A1174u) [[unlikely]] return; }
L_002A1174:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 100u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1194u); st32((c.r[29].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002A1194u) [[unlikely]] return; }
L_002A1194:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002A11BC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002A11B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A11B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002A11B8u) [[unlikely]] return; }
L_002A11B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A11BC:
    set32(c.r[4], 0u + 2u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A11D8u); st32((c.r[29].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002A11D8u) [[unlikely]] return; }
L_002A11D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A11FC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002A11FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A11FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002A11FCu) [[unlikely]] return; }
L_002A11FC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 80u)));  goto L_002A1210; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A120Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 332u, depth + 1u); else { c.pc = 0x002A3190u; return; } if (c.pc != 0x002A120Cu) [[unlikely]] return; }
L_002A120C:
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_002A1210:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A121Cu); set32(c.r[4], c.r[4].w[0] + 9568u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002A121Cu) [[unlikely]] return; }
L_002A121C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A14A8; } }
L_002A1224:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A1254; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1234u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002A1234u) [[unlikely]] return; }
L_002A1234:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002A1248; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1254; } }
L_002A1248:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 272ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002A1254:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002A1294; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1264u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 322u, depth + 1u); else { c.pc = 0x002A2FB0u; return; } if (c.pc != 0x002A1264u) [[unlikely]] return; }
L_002A1264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1290; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 122u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002A1290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1280u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 240u, depth + 1u); else { c.pc = 0x002A22A0u; return; } if (c.pc != 0x002A1280u) [[unlikely]] return; }
L_002A1280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1288u);  if (depth < kMaxDepth) unit_005E(c, 282u, depth + 1u); else { c.pc = 0x0029AF40u; return; } if (c.pc != 0x002A1288u) [[unlikely]] return; }
L_002A1288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A14A8; } }
L_002A1290:
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 1;
L_002A1294:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A12AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A12A4u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002A12A4u) [[unlikely]] return; }
L_002A12A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 2u);  goto L_002A12B4; }
L_002A12AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002A12CC; } }
L_002A12B4:
    set32(c.r[5], ld32((c.r[28].w[0] - 30400u)));
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = ld64((c.r[5].w[0] + 168u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
L_002A12CC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_002A12DC; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 2;
L_002A12DC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A1318; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A12ECu);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x002A12ECu) [[unlikely]] return; }
L_002A12EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 1u);  goto L_002A1300; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1318; } }
L_002A1300:
    set32(c.r[5], ld32((c.r[28].w[0] - 30400u)));
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = ld64((c.r[5].w[0] + 168u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
L_002A1318:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A1324; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_002A1324:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A14A8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1338u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 256u, depth + 1u); else { c.pc = 0x002A25D0u; return; } if (c.pc != 0x002A1338u) [[unlikely]] return; }
L_002A1338:
    st32((c.r[18].w[0] + 576u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 580u), c.r[3].w[0]);  if (t) { goto L_002A14A8; } }
L_002A1348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1350u);  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002A1350u) [[unlikely]] return; }
L_002A1350:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A14A8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A14A8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 9680u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0060[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A1388:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1398u); set32(c.r[5], c.r[5].w[0] + 9616u);  if (depth < kMaxDepth) unit_005D(c, 16u, depth + 1u); else { c.pc = 0x002941A0u; return; } if (c.pc != 0x002A1398u) [[unlikely]] return; }
L_002A1398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A14A8; } }
L_002A13A0:
    set32(c.r[3], 0u + 6u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), 0u);  if (t) { goto L_002A14A8; } }
L_002A13B0:
    set32(c.r[4], ld32((c.r[18].w[0] + 544u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 6u);  goto L_002A13D0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002A13D4; } }
L_002A13D0:
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_002A13D4:
    set32(c.r[3], 0u + 7u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), 0u);  if (t) { goto L_002A14A8; } }
L_002A13E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A13ECu); set32(c.r[4], ld32((c.r[18].w[0] + 548u)));  if (depth < kMaxDepth) unit_005F(c, 219u, depth + 1u); else { c.pc = 0x0029E360u; return; } if (c.pc != 0x002A13ECu) [[unlikely]] return; }
L_002A13EC:
    set32(c.r[3], 0u + 8u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), 0u);  if (t) { goto L_002A14A8; } }
L_002A13FC:
    set32(c.r[4], ld32((c.r[18].w[0] + 556u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 2u);  goto L_002A141C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002A1420; } }
L_002A141C:
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_002A1420:
    set32(c.r[3], 0u + 9u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), 0u);  if (t) { goto L_002A14A8; } }
L_002A1430:
    set32(c.r[4], ld32((c.r[18].w[0] + 552u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 2u);  goto L_002A144C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 484u), c.r[3].w[0]);  if (t) { goto L_002A1450; } }
L_002A144C:
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_002A1450:
    set32(c.r[3], 0u + 11u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), 0u);  if (t) { goto L_002A14A8; } }
L_002A1460:
    set32(c.r[4], ld32((c.r[18].w[0] + 560u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 2u);  goto L_002A147C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 484u), c.r[3].w[0]);  if (t) { goto L_002A1480; } }
L_002A147C:
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_002A1480:
    set32(c.r[3], 0u + 13u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), 0u);  if (t) { goto L_002A14A8; } }
L_002A1490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1498u);  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002A1498u) [[unlikely]] return; }
L_002A1498:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A14A8; } }
    set32(c.r[3], 0u + 4u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 2;
L_002A14A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002A14AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002A14C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002A1B60; }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002A1504; } }
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  goto L_002A1508; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002A1504:
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002A1508:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A1B5C; } }
    c.f[0] = ld32((c.r[16].w[0] + 580u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_002A1690; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[2] = ld32((c.r[5].w[0] + 80u));  goto L_002A154C; }
L_002A154C:
    c.f[1] = ld32((c.r[16].w[0] + 580u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 580u), c.f[1]);  if (t) { goto L_002A168C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0] + 580u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 576u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A168C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 9824u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0060[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A159C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A15A8u); set32(c.r[4], ld32((c.r[2].w[0] + 116u)));  if (depth < kMaxDepth) unit_006A(c, 79u, depth + 1u); else { c.pc = 0x002C8CA0u; return; } if (c.pc != 0x002A15A8u) [[unlikely]] return; }
L_002A15A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A168C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A15B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 315u, depth + 1u); else { c.pc = 0x002A2F50u; return; } if (c.pc != 0x002A15B8u) [[unlikely]] return; }
L_002A15B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A15C4u); set32(c.r[4], ld32((c.r[2].w[0] + 116u)));  if (depth < kMaxDepth) unit_006A(c, 71u, depth + 1u); else { c.pc = 0x002C8B90u; return; } if (c.pc != 0x002A15C4u) [[unlikely]] return; }
L_002A15C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A168C; } }
L_002A15CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A15D4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 285u, depth + 1u); else { c.pc = 0x0029AFA0u; return; } if (c.pc != 0x002A15D4u) [[unlikely]] return; }
L_002A15D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A168C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A15E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 315u, depth + 1u); else { c.pc = 0x002A2F50u; return; } if (c.pc != 0x002A15E4u) [[unlikely]] return; }
L_002A15E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A15ECu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 278u, depth + 1u); else { c.pc = 0x0029AEA0u; return; } if (c.pc != 0x002A15ECu) [[unlikely]] return; }
L_002A15EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A168C; } }
L_002A15F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A15FCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_005E(c, 285u, depth + 1u); else { c.pc = 0x0029AFA0u; return; } if (c.pc != 0x002A15FCu) [[unlikely]] return; }
L_002A15FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A168C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A160Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 315u, depth + 1u); else { c.pc = 0x002A2F50u; return; } if (c.pc != 0x002A160Cu) [[unlikely]] return; }
L_002A160C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1614u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_005E(c, 278u, depth + 1u); else { c.pc = 0x0029AEA0u; return; } if (c.pc != 0x002A1614u) [[unlikely]] return; }
L_002A1614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A168C; } }
L_002A161C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1624u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_005E(c, 285u, depth + 1u); else { c.pc = 0x0029AFA0u; return; } if (c.pc != 0x002A1624u) [[unlikely]] return; }
L_002A1624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A168C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1634u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 315u, depth + 1u); else { c.pc = 0x002A2F50u; return; } if (c.pc != 0x002A1634u) [[unlikely]] return; }
L_002A1634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A163Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_005E(c, 278u, depth + 1u); else { c.pc = 0x0029AEA0u; return; } if (c.pc != 0x002A163Cu) [[unlikely]] return; }
L_002A163C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A168C; } }
L_002A1644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A164Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_005E(c, 285u, depth + 1u); else { c.pc = 0x0029AFA0u; return; } if (c.pc != 0x002A164Cu) [[unlikely]] return; }
L_002A164C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A168C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A165Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 315u, depth + 1u); else { c.pc = 0x002A2F50u; return; } if (c.pc != 0x002A165Cu) [[unlikely]] return; }
L_002A165C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1664u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_005E(c, 278u, depth + 1u); else { c.pc = 0x0029AEA0u; return; } if (c.pc != 0x002A1664u) [[unlikely]] return; }
L_002A1664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A168C; } }
L_002A166C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1674u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_005E(c, 285u, depth + 1u); else { c.pc = 0x0029AFA0u; return; } if (c.pc != 0x002A1674u) [[unlikely]] return; }
L_002A1674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A168C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1684u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 315u, depth + 1u); else { c.pc = 0x002A2F50u; return; } if (c.pc != 0x002A1684u) [[unlikely]] return; }
L_002A1684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A168Cu); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_005E(c, 278u, depth + 1u); else { c.pc = 0x0029AEA0u; return; } if (c.pc != 0x002A168Cu) [[unlikely]] return; }
L_002A168C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002A1690:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A1B5C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 9760u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0060[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A16B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A16C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002A16C0u) [[unlikely]] return; }
L_002A16C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1B5C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 564u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A16D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 219u, depth + 1u); else { c.pc = 0x002A1DE0u; return; } if (c.pc != 0x002A16D4u) [[unlikely]] return; }
L_002A16D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1B5C; } }
L_002A16DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A16E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002A16E4u) [[unlikely]] return; }
L_002A16E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1B5C; } }
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A16FCu); st32((c.r[16].w[0] + 84u), 0u);  if (depth < kMaxDepth) unit_0060(c, 315u, depth + 1u); else { c.pc = 0x002A2F50u; return; } if (c.pc != 0x002A16FCu) [[unlikely]] return; }
L_002A16FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1704u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 443u, depth + 1u); else { c.pc = 0x00293FB0u; return; } if (c.pc != 0x002A1704u) [[unlikely]] return; }
L_002A1704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1B5C; } }
L_002A170C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1714u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002A1714u) [[unlikely]] return; }
L_002A1714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1B5C; } }
    set32(c.r[3], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.f[13] = 0u;
    st32((c.r[16].w[0] + 84u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1758u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_005E(c, 209u, depth + 1u); else { c.pc = 0x0029A3C0u; return; } if (c.pc != 0x002A1758u) [[unlikely]] return; }
L_002A1758:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], c.r[3].w[0] << 3);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1788u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_005E(c, 209u, depth + 1u); else { c.pc = 0x0029A3C0u; return; } if (c.pc != 0x002A1788u) [[unlikely]] return; }
L_002A1788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1B5C; } }
L_002A1790:
    set32(c.r[4], ld32((c.r[16].w[0] + 544u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 3ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A1B5C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002A17C8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A17C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A17C0u) [[unlikely]] return; }
L_002A17C0:
    st32((c.r[16].w[0] + 544u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002A17C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A17D0u);  if (depth < kMaxDepth) unit_0060(c, 291u, depth + 1u); else { c.pc = 0x002A2B80u; return; } if (c.pc != 0x002A17D0u) [[unlikely]] return; }
L_002A17D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002A1B5C; } }
L_002A17E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 548u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 7ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A180C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002A180C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A1B5C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002A1834; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A182Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A182Cu) [[unlikely]] return; }
L_002A182C:
    st32((c.r[16].w[0] + 548u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002A1834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A183Cu);  if (depth < kMaxDepth) unit_0060(c, 291u, depth + 1u); else { c.pc = 0x002A2B80u; return; } if (c.pc != 0x002A183Cu) [[unlikely]] return; }
L_002A183C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002A1B5C; } }
L_002A1850:
    set32(c.r[4], ld32((c.r[16].w[0] + 556u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 76u)));  goto L_002A1880; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1870u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 302u, depth + 1u); else { c.pc = 0x002A2D90u; return; } if (c.pc != 0x002A1870u) [[unlikely]] return; }
L_002A1870:
    set32(c.r[3], 0u + 10u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), 0u);  if (t) { goto L_002A1B5C; } }
L_002A1880:
    c.r[3].d[0] = c.r[3].d[0] ^ 9ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A1B5C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002A18B0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A18A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A18A8u) [[unlikely]] return; }
L_002A18A8:
    st32((c.r[16].w[0] + 556u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002A18B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A18B8u);  if (depth < kMaxDepth) unit_0060(c, 291u, depth + 1u); else { c.pc = 0x002A2B80u; return; } if (c.pc != 0x002A18B8u) [[unlikely]] return; }
L_002A18B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002A18BC:
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002A1B5C; } }
L_002A18CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 556u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 9ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A1B5C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 1u);  goto L_002A1904; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A18FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A18FCu) [[unlikely]] return; }
L_002A18FC:
    st32((c.r[16].w[0] + 556u), 0u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_002A1904:
    set32(c.r[3], 0u - 2u);
    st32((c.r[16].w[0] + 76u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002A1B5C; } }
L_002A1920:
    set32(c.r[4], ld32((c.r[16].w[0] + 552u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 76u)));  goto L_002A1950; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1940u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 302u, depth + 1u); else { c.pc = 0x002A2D90u; return; } if (c.pc != 0x002A1940u) [[unlikely]] return; }
L_002A1940:
    set32(c.r[3], 0u + 12u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), 0u);  if (t) { goto L_002A1B5C; } }
L_002A1950:
    c.r[3].d[0] = c.r[3].d[0] ^ 7ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A1B5C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002A1980; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1978u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1978u) [[unlikely]] return; }
L_002A1978:
    st32((c.r[16].w[0] + 552u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002A1980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1988u);  if (depth < kMaxDepth) unit_0060(c, 291u, depth + 1u); else { c.pc = 0x002A2B80u; return; } if (c.pc != 0x002A1988u) [[unlikely]] return; }
L_002A1988:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002A1B5C; } }
L_002A199C:
    set32(c.r[4], ld32((c.r[16].w[0] + 552u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 7ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A1B5C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002A19D4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A19CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A19CCu) [[unlikely]] return; }
L_002A19CC:
    st32((c.r[16].w[0] + 552u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002A19D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A19DCu);  if (depth < kMaxDepth) unit_0060(c, 324u, depth + 1u); else { c.pc = 0x002A2FF0u; return; } if (c.pc != 0x002A19DCu) [[unlikely]] return; }
L_002A19DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));  goto L_002A19F8; }
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 564u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), 0u);  if (t) { goto L_002A1A58; } }
L_002A19F8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[5].w[0] + 112u);
    set32(c.r[5], ld32((c.r[5].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 1100u)));
    c.budget -= 6;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_002A1A50; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A1A20; }
    set32(c.r[3], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 1;
L_002A1A20:
    set32(c.r[17], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A1A4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1A34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x002A1A34u) [[unlikely]] return; }
L_002A1A34:
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1A4Cu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 102u, depth + 1u); else { c.pc = 0x002BD060u; return; } if (c.pc != 0x002A1A4Cu) [[unlikely]] return; }
L_002A1A4C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002A1A50:
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 2;
L_002A1A58:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002A1B5C; } }
L_002A1A6C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 25u);
    set32(c.r[4], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 1180u)));
    c.budget -= 6;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 560u)));  goto L_002A1AAC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1A90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 302u, depth + 1u); else { c.pc = 0x002A2D90u; return; } if (c.pc != 0x002A1A90u) [[unlikely]] return; }
L_002A1A90:
    set32(c.r[4], ld32((c.r[16].w[0] + 560u)));
    set32(c.r[5], 0u + 5u);
    set32(c.r[3], 0u + 14u);
    st32((c.r[4].w[0] + 76u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), 0u);  if (t) { goto L_002A1B5C; } }
L_002A1AAC:
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 7ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A1B5C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002A1AE0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1AD8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1AD8u) [[unlikely]] return; }
L_002A1AD8:
    st32((c.r[16].w[0] + 560u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002A1AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1AE8u);  if (depth < kMaxDepth) unit_0060(c, 291u, depth + 1u); else { c.pc = 0x002A2B80u; return; } if (c.pc != 0x002A1AE8u) [[unlikely]] return; }
L_002A1AE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002A1B5C; } }
L_002A1AFC:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 25u);
    set32(c.r[4], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 1180u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A1B5C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 560u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002A1B38; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1B30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1B30u) [[unlikely]] return; }
L_002A1B30:
    st32((c.r[16].w[0] + 560u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002A1B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1B40u);  if (depth < kMaxDepth) unit_0060(c, 332u, depth + 1u); else { c.pc = 0x002A3190u; return; } if (c.pc != 0x002A1B40u) [[unlikely]] return; }
L_002A1B40:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[16].w[0] + 76u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
L_002A1B5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002A1B60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A1B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002A1BC0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A1BA8; } }
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  goto L_002A1BAC; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002A1BA8:
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002A1BAC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A1BBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1BBCu);  if (depth < kMaxDepth) unit_005C(c, 390u, depth + 1u); else { c.pc = 0x00293800u; return; } if (c.pc != 0x002A1BBCu) [[unlikely]] return; }
L_002A1BBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002A1BC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A1BD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002A1C20; }
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A1C08; } }
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  goto L_002A1C0C; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002A1C08:
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002A1C0C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A1C1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1C1Cu);  if (depth < kMaxDepth) unit_005C(c, 402u, depth + 1u); else { c.pc = 0x002939B0u; return; } if (c.pc != 0x002A1C1Cu) [[unlikely]] return; }
L_002A1C1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002A1C20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A1C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[7], 0u + 183u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1C4Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 420u, depth + 1u); else { c.pc = 0x00293CA0u; return; } if (c.pc != 0x002A1C4Cu) [[unlikely]] return; }
L_002A1C4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A1CA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A1C90; } }
L_002A1C5C:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 13;
L_002A1C90:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1C5Cu | kUnwind; return; } goto L_002A1C5C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A1CA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A1CC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1CE0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 404u, depth + 1u); else { c.pc = 0x00293A00u; return; } if (c.pc != 0x002A1CE0u) [[unlikely]] return; }
L_002A1CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1CE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 215u, depth + 1u); else { c.pc = 0x002A1D00u; return; } if (c.pc != 0x002A1CE8u) [[unlikely]] return; }
L_002A1CE8:
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A1D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 180u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 189u);  if (t) { goto L_002A1D6C; } }
L_002A1D20:
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[7].sd[0] >= 0; c.r[2].d[0] = c.r[7].d[0] & 1ull;  if (t) { goto L_002A1D40; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1D40; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_002A1D40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[4].d[0] + 0ull;  goto L_002A1D4C; }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_002A1D4C:
    st32((c.r[3].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 8;
L_002A1D6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1D20u | kUnwind; return; } goto L_002A1D20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1D84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 440u, depth + 1u); else { c.pc = 0x00293F10u; return; } if (c.pc != 0x002A1D84u) [[unlikely]] return; }
L_002A1D84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] | 17217ull;  if (t) { goto L_002A1DB4; } }
L_002A1D94:
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 200u), c.r[4].w[0]);
    c.budget -= 8;
L_002A1DB4:
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1D94u | kUnwind; return; } goto L_002A1D94; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A1DE0:
    set32(c.r[29], c.r[29].w[0] - 288u);
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
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 116u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A1E2C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002A1E2C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_002A1E4C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), 0u);  if (t) { goto L_002A2270; } }
L_002A1E4C:
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1E60u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0060(c, 308u, depth + 1u); else { c.pc = 0x002A2E80u; return; } if (c.pc != 0x002A1E60u) [[unlikely]] return; }
L_002A1E60:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A1E74; }
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), 0u);  if (t) { goto L_002A2270; } }
L_002A1E74:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 480u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1E74u | kUnwind; return; } goto L_002A1E74; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[25], ld32((c.r[19].w[0] + 16u)));  goto L_002A1EAC; }
    set32(c.r[16], ld32((c.r[17].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[17].w[0] + 580u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
L_002A1EAC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1EBCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1EBCu) [[unlikely]] return; }
L_002A1EBC:
    set32(c.r[4], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0] + 72u), c.r[3].w[0]);  goto L_002A1EF4; }
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_002A1EF0; }
    set32(c.r[3], 0u + 99u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 172u)));  goto L_002A1EF8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002A1EF0:
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 1;
L_002A1EF4:
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    c.budget -= 1;
L_002A1EF8:
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_002A1F10; }
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 488u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
L_002A1F10:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 3168u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002A1F44; } }
L_002A1F28:
    set32(c.r[4], c.r[8].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002A1F44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1F54; } }
L_002A1F44:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[7].w[0] + 3172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1F28u | kUnwind; return; } goto L_002A1F28; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A1F54:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A1F60; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_002A1F60:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A1F78; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 480u), c.r[2].w[0]);  if (t) { goto L_002A1F88; } }
L_002A1F78:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 2u);  goto L_002A1F8C; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 480u), c.r[2].w[0]);
    c.budget -= 2;
L_002A1F88:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002A1F8C:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002A1FA4; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 122u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[3], ld32((c.r[17].w[0] + 72u)));  goto L_002A1FAC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A1FA4:
    st32((c.r[17].w[0] + 484u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 2;
L_002A1FAC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 8u);  goto L_002A1FC8; }
    st32((c.r[17].w[0] + 504u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 500u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 508u), c.r[2].w[0]);  if (t) { goto L_002A2018; } }
L_002A1FC8:
    set32(c.r[3], 0u - 1u);
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 264u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 280u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 256u), 0u);
    st32((c.r[29].w[0] + 260u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1FFCu); st32((c.r[29].w[0] + 276u), 0u);  if (depth < kMaxDepth) unit_0060(c, 391u, depth + 1u); else { c.pc = 0x002A3B00u; return; } if (c.pc != 0x002A1FFCu) [[unlikely]] return; }
L_002A1FFC:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2008u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0060(c, 416u, depth + 1u); else { c.pc = 0x002A3FE0u; return; } if (c.pc != 0x002A2008u) [[unlikely]] return; }
L_002A2008:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002A201C; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 508u), c.r[2].w[0]);
    c.budget -= 2;
L_002A2018:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A201C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2024u);  if (depth < kMaxDepth) unit_0060(c, 326u, depth + 1u); else { c.pc = 0x002A3060u; return; } if (c.pc != 0x002A2024u) [[unlikely]] return; }
L_002A2024:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[20].d[0] = c.r[2].d[0] | 17218ull;
    c.budget -= 5;
L_002A2038:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2058u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A2058u) [[unlikely]] return; }
L_002A2058:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[22], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[22].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2074u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2074u) [[unlikely]] return; }
L_002A2074:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2080u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 147u, depth + 1u); else { c.pc = 0x0020D4B0u; return; } if (c.pc != 0x002A2080u) [[unlikely]] return; }
L_002A2080:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A208Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001F(c, 213u, depth + 1u); else { c.pc = 0x0019E620u; return; } if (c.pc != 0x002A208Cu) [[unlikely]] return; }
L_002A208C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2098u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x002A2098u) [[unlikely]] return; }
L_002A2098:
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[2].w[0] + 512u), c.f[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2038u | kUnwind; return; } goto L_002A2038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002A21B4; } }
L_002A20C0:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 512u));
    set32(c.r[7], c.r[3].w[0] + 480u);
    set32(c.r[3], ld32((c.r[3].w[0] + 480u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A20EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  if (t) { goto L_002A20F4; } }
L_002A20EC:
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 2;
L_002A20F4:
    set32(c.r[6], c.r[18].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    st32((c.r[5].w[0] + 208u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[5].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 212u), c.f[1]);
    set32(c.r[3], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = c.r[18].sd[0] >= 0; st32((c.r[5].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_002A2138; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2138; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_002A2138:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  goto L_002A2178; }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[21].d[0]; set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);  if (t) { goto L_002A2154; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A2158; } }
L_002A2154:
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_002A2158:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2170u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A2170u) [[unlikely]] return; }
L_002A2170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_002A21B4; } }
L_002A2178:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);  if (t) { goto L_002A2190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_002A2194; } }
L_002A2190:
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_002A2194:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A21ACu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A21ACu) [[unlikely]] return; }
L_002A21AC:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_002A21B4:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[21].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A20C0u | kUnwind; return; } goto L_002A20C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A21C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 248u, depth + 1u); else { c.pc = 0x002A2480u; return; } if (c.pc != 0x002A21C8u) [[unlikely]] return; }
L_002A21C8:
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[5], 0u + 6u);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 1180u)));
    c.budget -= 13;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 172u)));  goto L_002A2228; }
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A2224; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2224u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002A2224u) [[unlikely]] return; }
L_002A2224:
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    c.budget -= 1;
L_002A2228:
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 52u)));  goto L_002A2248; }
    set32(c.r[3], ld32((c.r[19].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 5;
L_002A2248:
    set32(c.r[4], c.r[17].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2258u); set32(c.r[5], 0u + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2258u) [[unlikely]] return; }
L_002A2258:
    c.f[12] = 0u;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2270u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x002A2270u) [[unlikely]] return; }
L_002A2270:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_002A22A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A22D0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 326u, depth + 1u); else { c.pc = 0x002A3060u; return; } if (c.pc != 0x002A22D0u) [[unlikely]] return; }
L_002A22D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002A23D4; } }
L_002A22E0:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0; c.r[2].d[0] = c.r[20].d[0] & 1ull;  if (t) { goto L_002A22F4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A22F4; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_002A22F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[21].w[0] << 2);  goto L_002A2364; }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[21].d[0]) { set32(c.r[5], 0u + 11u);  goto L_002A230C; }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_002A230C:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[17], c.r[20].w[0] << 2);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2330u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A2330u) [[unlikely]] return; }
L_002A2330:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.f[1] = ld32((c.r[4].w[0] + 208u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 208u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_002A23D0; } }
L_002A2364:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 480u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], 0u + 6u);  goto L_002A23A8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], c.r[20].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.f[0] = ld32((c.r[3].w[0] + 208u));
    st32((c.r[4].w[0] + 208u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 12;
L_002A23A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A23CCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A23CCu) [[unlikely]] return; }
L_002A23CC:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002A23D0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002A23D4:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A22E0u | kUnwind; return; } goto L_002A22E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A23E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 332u, depth + 1u); else { c.pc = 0x002A3190u; return; } if (c.pc != 0x002A23E8u) [[unlikely]] return; }
L_002A23E8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_002A2418; }
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2414; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFBFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 5;
L_002A2414:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002A2418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2438u); set32(c.r[5], 0u + 97u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2438u) [[unlikely]] return; }
L_002A2438:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = 0u;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2450u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x002A2450u) [[unlikely]] return; }
L_002A2450:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A2480:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A24A8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 326u, depth + 1u); else { c.pc = 0x002A3060u; return; } if (c.pc != 0x002A24A8u) [[unlikely]] return; }
L_002A24A8:
    set32(c.r[20], 0u + 1u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_002A24C0; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_002A24C0:
    set32(c.r[3], ld32((c.r[21].w[0] + 472u)));
    set32(c.r[3], c.r[20].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[20].sd[0] < 0; set32(c.r[5], c.r[3].w[0] - 1u);  if (t) { goto L_002A24E0; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 92u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 88u)));  goto L_002A24F4; }
L_002A24E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A24ECu); set32(c.r[4], c.r[4].w[0] + 10000u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002A24ECu) [[unlikely]] return; }
L_002A24EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A2500; } }
L_002A24F4:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_002A2500:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 164u)));  goto L_002A2590; }
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[4], 0u - 2u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[17].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 480u)));
    c.budget -= 10;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 208u)));  goto L_002A2574; }
    set32(c.r[5], ld32((c.r[17].w[0] + 208u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D000000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 40;
    c.r[5].d[0] = c.r[5].d[0] >> 40;
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[18].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2560u); c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_005E(c, 132u, depth + 1u); else { c.pc = 0x00299350u; return; } if (c.pc != 0x002A2560u) [[unlikely]] return; }
L_002A2560:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A256Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 131u, depth + 1u); else { c.pc = 0x00299320u; return; } if (c.pc != 0x002A256Cu) [[unlikely]] return; }
L_002A256C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_002A259C; } }
L_002A2574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A257Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 131u, depth + 1u); else { c.pc = 0x00299320u; return; } if (c.pc != 0x002A257Cu) [[unlikely]] return; }
L_002A257C:
    set32(c.r[5], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2588u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 132u, depth + 1u); else { c.pc = 0x00299350u; return; } if (c.pc != 0x002A2588u) [[unlikely]] return; }
L_002A2588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A2598; } }
L_002A2590:
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[17].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 2;
L_002A2598:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002A259C:
    c.r[3].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A24C0u | kUnwind; return; } goto L_002A24C0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A25D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002A25F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 80u)));  if (t) { goto L_002A275C; } }
L_002A25F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2600u); set32(c.r[16], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_0060(c, 326u, depth + 1u); else { c.pc = 0x002A3060u; return; } if (c.pc != 0x002A2600u) [[unlikely]] return; }
L_002A2600:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_002A2610; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002A2610:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 4;
L_002A2620:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A263C; } }
    set32(c.r[2], c.r[4].w[0] - 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002A264C; } }
L_002A263C:
    c.budget -= 2;
    if (c.r[4].sd[0] >= 0) { set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  goto L_002A2650; }
    set32(c.r[2], c.r[4].w[0] + 8u);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 2;
L_002A264C:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_002A2650:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 80u)));  goto L_002A267C; }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 480u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 96u)));  goto L_002A268C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002A2688; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_002A267C:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2620u | kUnwind; return; } goto L_002A2620; } }
L_002A2688:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_002A268C:
    set32(c.r[3], c.r[4].w[0] << 3);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A26B0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A26B0u) [[unlikely]] return; }
L_002A26B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.f[12] = 0u;
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A26DCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A26DCu) [[unlikely]] return; }
L_002A26DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[16], c.r[16].w[0] << 3);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A26F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 136u, depth + 1u); else { c.pc = 0x0020D320u; return; } if (c.pc != 0x002A26F8u) [[unlikely]] return; }
L_002A26F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.f[12] = ld32((c.r[17].w[0] + 356u));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2710u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 215u, depth + 1u); else { c.pc = 0x0029A500u; return; } if (c.pc != 0x002A2710u) [[unlikely]] return; }
L_002A2710:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2728u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 136u, depth + 1u); else { c.pc = 0x0020D320u; return; } if (c.pc != 0x002A2728u) [[unlikely]] return; }
L_002A2728:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.f[12] = ld32((c.r[17].w[0] + 356u));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2740u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_005E(c, 215u, depth + 1u); else { c.pc = 0x0029A500u; return; } if (c.pc != 0x002A2740u) [[unlikely]] return; }
L_002A2740:
    c.f[12] = 0u;
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2758u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x002A2758u) [[unlikely]] return; }
L_002A2758:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_002A275C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A2780:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 480u)));
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002A27D4; }
    c.f[12] = 0u;
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A27CCu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x002A27CCu) [[unlikely]] return; }
L_002A27CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A2B64; } }
L_002A27D4:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 116u)));  if (t) { goto L_002A29D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 9856u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0060[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A27F8:
    set32(c.r[25], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A280Cu); set32(c.r[5], 0u + 70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A280Cu) [[unlikely]] return; }
L_002A280C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    c.f[13] = 0u;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A283Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_005E(c, 209u, depth + 1u); else { c.pc = 0x0029A3C0u; return; } if (c.pc != 0x002A283Cu) [[unlikely]] return; }
L_002A283C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 96u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    c.f[13] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A286Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_005E(c, 209u, depth + 1u); else { c.pc = 0x0029A3C0u; return; } if (c.pc != 0x002A286Cu) [[unlikely]] return; }
L_002A286C:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    st32((c.r[19].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_002A29D8; } }
L_002A2880:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2898u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002A2898u) [[unlikely]] return; }
L_002A2898:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    c.f[13] = 0u;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A28C8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_005E(c, 209u, depth + 1u); else { c.pc = 0x0029A3C0u; return; } if (c.pc != 0x002A28C8u) [[unlikely]] return; }
L_002A28C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 96u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    c.f[13] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A28F8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_005E(c, 209u, depth + 1u); else { c.pc = 0x0029A3C0u; return; } if (c.pc != 0x002A28F8u) [[unlikely]] return; }
L_002A28F8:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[19].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_002A29D8; } }
L_002A290C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 24u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2924u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002A2924u) [[unlikely]] return; }
L_002A2924:
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2930u); set32(c.r[4], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002A2930u) [[unlikely]] return; }
L_002A2930:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], 0u + 5u);
    st32((c.r[19].w[0] + 76u), c.r[2].w[0]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 84u), c.f[0]);  if (t) { goto L_002A29D8; } }
L_002A2964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A296Cu); set32(c.r[4], c.r[5].w[0] + 2u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002A296Cu) [[unlikely]] return; }
L_002A296C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], 0u + 5u);
    st32((c.r[19].w[0] + 76u), c.r[2].w[0]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 84u), c.f[0]);  if (t) { goto L_002A29D8; } }
L_002A29A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A29A8u); set32(c.r[4], c.r[5].w[0] + 2u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002A29A8u) [[unlikely]] return; }
L_002A29A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], 0u + 5u);
    st32((c.r[19].w[0] + 76u), c.r[2].w[0]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 84u), c.f[0]);
    c.budget -= 12;
L_002A29D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A29E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 326u, depth + 1u); else { c.pc = 0x002A3060u; return; } if (c.pc != 0x002A29E0u) [[unlikely]] return; }
L_002A29E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A2B28; } }
L_002A29F0:
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[3].w[0] + 2u);  goto L_002A2A0C; }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] & 1ull;  goto L_002A2A74; }
    set32(c.r[4], c.r[3].w[0] + 2u);
    c.budget -= 1;
L_002A2A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A14u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002A2A14u) [[unlikely]] return; }
L_002A2A14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[6], c.r[17].w[0] << 2);
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u + 24u);
    set32(c.r[4], c.r[7].w[0] + 464u);
    c.f[0] = ld32((c.r[7].w[0] + 212u));
    c.f[1] = ld32((c.r[19].w[0] + 512u));
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), c.f[2]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A6Cu); st32((c.r[29].w[0] + 84u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002A2A6Cu) [[unlikely]] return; }
L_002A2A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] & 1ull;  if (t) { goto L_002A2B04; } }
L_002A2A74:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_002A2A88; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2A88; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_002A2A88:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  goto L_002A2AC0; }
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2AB8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A2AB8u) [[unlikely]] return; }
L_002A2AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A2B00; } }
L_002A2AC0:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0] + 480u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_002A2AE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 7u);  if (t) { goto L_002A2AE8; } }
L_002A2AE4:
    set32(c.r[5], 0u + 6u);
    c.budget -= 1;
L_002A2AE8:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2B00u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A2B00u) [[unlikely]] return; }
L_002A2B00:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 1;
L_002A2B04:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_002A2B18; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2B18; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_002A2B18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002A2B28; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002A2B28:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 80u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A29F0u | kUnwind; return; } goto L_002A29F0; }
    c.f[12] = 0u;
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2B4Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x002A2B4Cu) [[unlikely]] return; }
L_002A2B4C:
    set32(c.r[25], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2B60u); set32(c.r[5], 0u + 98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2B60u) [[unlikely]] return; }
L_002A2B60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A2B64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A2B80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A2D6C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 9968u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0060[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A2BC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2BD0u); set32(c.r[5], c.r[5].w[0] + 9888u);  if (depth < kMaxDepth) unit_005D(c, 16u, depth + 1u); else { c.pc = 0x002941A0u; return; } if (c.pc != 0x002A2BD0u) [[unlikely]] return; }
L_002A2BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002A2D70; } }
L_002A2BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2BE0u);  if (depth < kMaxDepth) unit_0060(c, 326u, depth + 1u); else { c.pc = 0x002A3060u; return; } if (c.pc != 0x002A2BE0u) [[unlikely]] return; }
L_002A2BE0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A2D38; } }
L_002A2BF0:
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[3].w[0] + 2u);  goto L_002A2C0C; }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] & 1ull;  goto L_002A2C7C; }
    set32(c.r[4], c.r[3].w[0] + 2u);
    c.budget -= 1;
L_002A2C0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2C14u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002A2C14u) [[unlikely]] return; }
L_002A2C14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], c.r[17].w[0] << 2);
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[6], 0u + 24u);
    set32(c.r[7], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[3].w[0] + 464u);
    c.f[1] = ld32((c.r[7].w[0] + 512u));
    c.f[0] = ld32((c.r[3].w[0] + 212u));
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 88u), c.f[2]);
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2C74u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002A2C74u) [[unlikely]] return; }
L_002A2C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] & 1ull;  if (t) { goto L_002A2D14; } }
L_002A2C7C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_002A2C90; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2C90; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_002A2C90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  goto L_002A2CCC; }
    set32(c.r[3], ld32((c.r[19].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = 0u;
    set32(c.r[4], c.r[17].w[0] << 2);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2CC4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_005E(c, 209u, depth + 1u); else { c.pc = 0x0029A3C0u; return; } if (c.pc != 0x002A2CC4u) [[unlikely]] return; }
L_002A2CC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A2D10; } }
L_002A2CCC:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0] + 480u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_002A2CF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_002A2CF4; } }
L_002A2CF0:
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_002A2CF4:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D10u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_005E(c, 209u, depth + 1u); else { c.pc = 0x0029A3C0u; return; } if (c.pc != 0x002A2D10u) [[unlikely]] return; }
L_002A2D10:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 1;
L_002A2D14:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_002A2D28; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2D28; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_002A2D28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002A2D38; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002A2D38:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 80u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2BF0u | kUnwind; return; } goto L_002A2BF0; }
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D50u); set32(c.r[4], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002A2D50u) [[unlikely]] return; }
L_002A2D50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 15u);
    c.f[1] = c.r[4].w[0];
    st32((c.r[19].w[0] + 76u), c.r[3].w[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 84u), c.f[0]);
    c.budget -= 7;
L_002A2D6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002A2D70:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A2D90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A2E48; } }
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002A2E4C; }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2DECu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A2DECu) [[unlikely]] return; }
L_002A2DEC:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.f[12] = 0u;
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2E18u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A2E18u) [[unlikely]] return; }
L_002A2E18:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A2E48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2E28u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 321u, depth + 1u); else { c.pc = 0x002C37E0u; return; } if (c.pc != 0x002A2E28u) [[unlikely]] return; }
L_002A2E28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A2E48; } }
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = 0u;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2E48u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x002A2E48u) [[unlikely]] return; }
L_002A2E48:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002A2E4C:
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002A2E64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2E60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 332u, depth + 1u); else { c.pc = 0x002A3190u; return; } if (c.pc != 0x002A2E60u) [[unlikely]] return; }
L_002A2E60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002A2E64:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A2E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 544u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 548u)));  goto L_002A2EB4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2EACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2EACu) [[unlikely]] return; }
L_002A2EAC:
    st32((c.r[16].w[0] + 544u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 548u)));
    c.budget -= 2;
L_002A2EB4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 552u)));  goto L_002A2ED4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2ECCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2ECCu) [[unlikely]] return; }
L_002A2ECC:
    st32((c.r[16].w[0] + 548u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 552u)));
    c.budget -= 2;
L_002A2ED4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 556u)));  goto L_002A2EF4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2EECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2EECu) [[unlikely]] return; }
L_002A2EEC:
    st32((c.r[16].w[0] + 552u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 556u)));
    c.budget -= 2;
L_002A2EF4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 560u)));  goto L_002A2F14; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2F0Cu) [[unlikely]] return; }
L_002A2F0C:
    st32((c.r[16].w[0] + 556u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 560u)));
    c.budget -= 2;
L_002A2F14:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002A2F34; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2F2Cu) [[unlikely]] return; }
L_002A2F2C:
    st32((c.r[16].w[0] + 560u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002A2F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F3Cu);  if (depth < kMaxDepth) unit_0060(c, 315u, depth + 1u); else { c.pc = 0x002A2F50u; return; } if (c.pc != 0x002A2F3Cu) [[unlikely]] return; }
L_002A2F3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2F50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002A2F74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F70u);  if (depth < kMaxDepth) unit_006A(c, 77u, depth + 1u); else { c.pc = 0x002C8C40u; return; } if (c.pc != 0x002A2F70u) [[unlikely]] return; }
L_002A2F70:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A2F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F7Cu);  if (depth < kMaxDepth) unit_005E(c, 280u, depth + 1u); else { c.pc = 0x0029AEF0u; return; } if (c.pc != 0x002A2F7Cu) [[unlikely]] return; }
L_002A2F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F84u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_005E(c, 280u, depth + 1u); else { c.pc = 0x0029AEF0u; return; } if (c.pc != 0x002A2F84u) [[unlikely]] return; }
L_002A2F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F8Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_005E(c, 280u, depth + 1u); else { c.pc = 0x0029AEF0u; return; } if (c.pc != 0x002A2F8Cu) [[unlikely]] return; }
L_002A2F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F94u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_005E(c, 280u, depth + 1u); else { c.pc = 0x0029AEF0u; return; } if (c.pc != 0x002A2F94u) [[unlikely]] return; }
L_002A2F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F9Cu); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_005E(c, 280u, depth + 1u); else { c.pc = 0x0029AEF0u; return; } if (c.pc != 0x002A2F9Cu) [[unlikely]] return; }
L_002A2F9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A2FB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A2FD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A2FE0; } }
L_002A2FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2FD8u);  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x002A2FD8u) [[unlikely]] return; }
L_002A2FD8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_002A2FE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A2FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002A3018; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A304C; } }
L_002A3018:
    set32(c.r[16], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A304C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A302Cu);  if (depth < kMaxDepth) unit_0060(c, 322u, depth + 1u); else { c.pc = 0x002A2FB0u; return; } if (c.pc != 0x002A302Cu) [[unlikely]] return; }
L_002A302C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3048; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 122u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002A3048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A304C; } }
L_002A3048:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A304C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3060:
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 10u);  goto L_002A307C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 16u);  goto L_002A307C; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_002A307C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3090:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A3178; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A30BCu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002A30BCu) [[unlikely]] return; }
L_002A30BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002A30D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 64u)));  if (t) { goto L_002A30E4; } }
L_002A30D0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A30E4; }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_002A30E4:
    st32((c.r[16].w[0] + 568u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 32u);  goto L_002A3110; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002A310C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A310Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002A310Cu) [[unlikely]] return; }
L_002A310C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_002A3110:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A311Cu); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002A311Cu) [[unlikely]] return; }
L_002A311C:
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002A3130; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_002A3144; } }
L_002A3130:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A3144; }
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_002A3144:
    st32((c.r[16].w[0] + 572u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_002A3170; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002A316C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A316Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002A316Cu) [[unlikely]] return; }
L_002A316C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002A3170:
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 2;
L_002A3178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A3190:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A3244; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 568u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A31CCu); st32((c.r[29].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002A31CCu) [[unlikely]] return; }
L_002A31CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 572u)));  goto L_002A31F4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002A31F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A31F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002A31F0u) [[unlikely]] return; }
L_002A31F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 572u)));
    c.budget -= 1;
L_002A31F4:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3210u); st32((c.r[29].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002A3210u) [[unlikely]] return; }
L_002A3210:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002A3238; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002A3234; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3234u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002A3234u) [[unlikely]] return; }
L_002A3234:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002A3238:
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002A3244:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A3260:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0AF0u | kUnwind; return; } goto L_002A0AF0; }
L_002A3270:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0BB0u | kUnwind; return; } goto L_002A0BB0; }
L_002A3280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 24848u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30320u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A32C4; } }
    set32(c.r[4], 0u + 13824u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A32B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x002A32B0u) [[unlikely]] return; }
L_002A32B0:
    st32((c.r[28].w[0] - 30316u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A32C4u); set32(c.r[6], 0u + 13824u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002A32C4u) [[unlikely]] return; }
L_002A32C4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30320u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 30320u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A32F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A3358; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 24848u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30320u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 30320u), c.r[2].w[0]);  if (t) { goto L_002A3340; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_002A3344; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A333Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002A333Cu) [[unlikely]] return; }
L_002A333C:
    st32((c.r[28].w[0] - 30316u), 0u);
    c.budget -= 1;
L_002A3340:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_002A3344:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002A335C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3358u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002A3358u) [[unlikely]] return; }
L_002A3358:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A335C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A3370:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A3384; }
    set32(c.r[2], ld32((c.r[2].w[0] + 1180u)));
    c.budget -= 1;
L_002A3384:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3390:
    set32(c.r[2], c.r[4].w[0] + 452u);
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 448u)));  goto L_002A33A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A33E4; } }
L_002A33A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002A33D4; } }
L_002A33AC:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002A33D4; }
    set32(c.r[3], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002A33D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A33E4; } }
L_002A33D0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002A33D4:
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A33ACu | kUnwind; return; } goto L_002A33AC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A33E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A33F0:
    set32(c.r[2], c.r[4].w[0] + 52u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A345C; }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 448u)));  goto L_002A3414; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A345C; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 448u)));
    c.budget -= 1;
L_002A3414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002A344C; } }
    set32(c.r[2], c.r[8].w[0] << 2);
    c.budget -= 1;
L_002A3420:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002A344C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002A3448; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002A345C; } }
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_002A3448:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002A344C:
    c.r[2].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3420u | kUnwind; return; } goto L_002A3420; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A345C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3470:
    set32(c.r[2], c.r[4].w[0] + 452u);
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 848u)));  goto L_002A3484; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A34C4; } }
L_002A3484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002A34B4; } }
L_002A348C:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 452u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002A34B4; }
    set32(c.r[3], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002A34B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A34C4; } }
L_002A34B0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002A34B4:
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A348Cu | kUnwind; return; } goto L_002A348C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A34C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A34D0:
    set32(c.r[2], c.r[4].w[0] + 452u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A353C; }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 848u)));  goto L_002A34F4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A353C; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 848u)));
    c.budget -= 1;
L_002A34F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002A352C; } }
    set32(c.r[2], c.r[8].w[0] << 2);
    c.budget -= 1;
L_002A3500:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 452u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002A352C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002A3528; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002A353C; } }
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_002A3528:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002A352C:
    c.r[2].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3500u | kUnwind; return; } goto L_002A3500; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A353C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3550:
    set32(c.r[3], c.r[4].w[0] + 452u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A3564; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 848u)));  goto L_002A356C; }
L_002A3564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A35A4; } }
L_002A356C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002A3598; } }
L_002A3574:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 452u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002A3598; }
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002A3594; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002A3594:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002A3598:
    c.r[3].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3574u | kUnwind; return; } goto L_002A3574; }
L_002A35A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A35B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A3624; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_002A35D8:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 852u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A35E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002A35E8u) [[unlikely]] return; }
L_002A35E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002A3624; }
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A3620; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A3620; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002A363C; }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_002A3620:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002A3624:
    set32(c.r[2], ld32((c.r[18].w[0] + 1248u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A35D8u | kUnwind; return; } goto L_002A35D8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_002A363C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A3650:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3674u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 363u, depth + 1u); else { c.pc = 0x002A36E0u; return; } if (c.pc != 0x002A3674u) [[unlikely]] return; }
L_002A3674:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A36A8; } }
L_002A3680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3688u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 356u, depth + 1u); else { c.pc = 0x002A35B0u; return; } if (c.pc != 0x002A3688u) [[unlikely]] return; }
L_002A3688:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002A36A8; }
    set32(c.r[2], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002A36A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A36B8; } }
L_002A36A4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002A36A8:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3680u | kUnwind; return; } goto L_002A3680; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002A36B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A36E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A3748; } }
L_002A3704:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 852u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3714u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002A3714u) [[unlikely]] return; }
L_002A3714:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002A3748; }
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A3744; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A3744; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002A3744:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002A3748:
    set32(c.r[2], ld32((c.r[18].w[0] + 1248u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3704u | kUnwind; return; } goto L_002A3704; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A3780:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A37DC; } }
L_002A37A8:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 452u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] + 452u);  if (t) { goto L_002A37D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A37C0u);  if (depth < kMaxDepth) unit_005A(c, 230u, depth + 1u); else { c.pc = 0x00289F50u; return; } if (c.pc != 0x002A37C0u) [[unlikely]] return; }
L_002A37C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002A37DC; }
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[4].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 4;
L_002A37D8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002A37DC:
    set32(c.r[3], ld32((c.r[18].w[0] + 848u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A37A8u | kUnwind; return; } goto L_002A37A8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002A380C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
L_002A380C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A3830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002A384C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3844u); set32(c.r[5], ld32((c.r[4].w[0] + 13272u)));  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002A3844u) [[unlikely]] return; }
L_002A3844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002A3858; } }
L_002A384C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3854u); set32(c.r[5], ld32((c.r[4].w[0] + 13276u)));  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002A3854u) [[unlikely]] return; }
L_002A3854:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002A3858:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A3860:
    set32(c.r[6], ld32((c.r[4].w[0] + 2912u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A3894; } }
L_002A386C:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 2916u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_002A3894; }
    set32(c.r[3], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002A3890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A38A4; } }
L_002A3890:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002A3894:
    c.r[3].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A386Cu | kUnwind; return; } goto L_002A386C; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002A38A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A38B0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002A38F8; } }
    set32(c.r[5], c.r[4].w[0] << 3);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002A38FC; } }
L_002A38F8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A38FC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], 0u + 1u);  goto L_002A390C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A390C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002A3A88; }
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3928u); set32(c.r[6], c.r[16].w[0] + 160u);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x002A3928u) [[unlikely]] return; }
L_002A3928:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3938u); set32(c.r[6], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002A3938u) [[unlikely]] return; }
L_002A3938:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 288u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[16].w[0] + 176u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3950u); st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x002A3950u) [[unlikely]] return; }
L_002A3950:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3960u); set32(c.r[6], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x002A3960u) [[unlikely]] return; }
L_002A3960:
    c.f[0] = ld32((c.r[29].w[0] + 324u));
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.f[2] = ld32((c.r[29].w[0] + 328u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 332u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 324u), c.f[3]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 328u), c.f[2]);
    st32((c.r[29].w[0] + 332u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3998u); st32((c.r[29].w[0] + 320u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002A3998u) [[unlikely]] return; }
L_002A3998:
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[2] = ld32((c.r[29].w[0] + 324u));
    set32(c.r[5], c.r[16].w[0] + 208u);
    c.f[1] = ld32((c.r[29].w[0] + 328u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 332u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 160u), c.f[3]);
    st32((c.r[29].w[0] + 164u), c.f[2]);
    st32((c.r[29].w[0] + 168u), c.f[1]);
    st32((c.r[29].w[0] + 172u), c.f[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A39D8u); st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x002A39D8u) [[unlikely]] return; }
L_002A39D8:
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A39E8u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x002A39E8u) [[unlikely]] return; }
L_002A39E8:
    c.f[13] = ld32((c.r[29].w[0] + 260u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A39F4u); c.f[12] = ld32((c.r[29].w[0] + 256u));  if (depth < kMaxDepth) unit_0005(c, 135u, depth + 1u); else { c.pc = 0x00137290u; return; } if (c.pc != 0x002A39F4u) [[unlikely]] return; }
L_002A39F4:
    c.f[1] = ld32((c.r[28].w[0] - 32192u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3A00u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002A3A00u) [[unlikely]] return; }
L_002A3A00:
    set32(c.r[6], 0u - c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    st32((c.r[17].w[0]), c.r[6].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3A14u); set32(c.r[5], c.r[16].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 243u, depth + 1u); else { c.pc = 0x0018FE00u; return; } if (c.pc != 0x002A3A14u) [[unlikely]] return; }
L_002A3A14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[0] = ld32((c.r[2].w[0] + 17280u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[3] = ld32((c.r[16].w[0] + 144u));
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 17284u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 17288u));
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 17292u));
    st32((c.r[29].w[0] + 136u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3A5Cu); st32((c.r[29].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002A3A5Cu) [[unlikely]] return; }
L_002A3A5C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3A68u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002A3A68u) [[unlikely]] return; }
L_002A3A68:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3A74u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x002A3A74u) [[unlikely]] return; }
L_002A3A74:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3A84u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x002A3A84u) [[unlikely]] return; }
L_002A3A84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002A3A88:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_002A3AA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], c.r[6].w[0] + 10048u);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A3AE0; } }
L_002A3ABC:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_002A3ADC; }
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A3AD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A3AF0; } }
L_002A3AD8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002A3ADC:
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 1;
L_002A3AE0:
    c.r[3].d[0] = c.r[2].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3ABCu | kUnwind; return; } goto L_002A3ABC; }
    set32(c.r[2], 0u + 26u);
    c.budget -= 1;
L_002A3AF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3B00:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[6].d[0]) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_002A3B30; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_002A3B1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A3B3C; } }
L_002A3B1C:
    c.r[3].d[0] = c.r[3].d[0] | 4097ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.r[6].w[0]);  if (t) { goto L_002A3B3C; } }
L_002A3B30:
    c.r[3].d[0] = c.r[3].d[0] | 4097ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[6].w[0]);
    c.budget -= 3;
L_002A3B3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3B50:
    c.budget -= 2;
    if (c.r[4].sd[0] <= 0) { c.r[2].d[0] = c.r[4].sd[0] < 100ll ? 1ull : 0ull;  goto L_002A3B70; }
    c.r[1].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A3B6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A3CBC; } }
L_002A3B6C:
    c.r[2].d[0] = c.r[4].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A3B70:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[4].sd[0] < 500ll ? 1ull : 0ull;  goto L_002A3B90; }
    c.r[1].d[0] = c.r[4].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A3B8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A3CBC; } }
L_002A3B8C:
    c.r[2].d[0] = c.r[4].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A3B90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[4].sd[0] < 1000ll ? 1ull : 0ull;  goto L_002A3BB0; }
    c.r[1].d[0] = c.r[4].sd[0] < 502ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A3BAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002A3CBC; } }
L_002A3BAC:
    c.r[2].d[0] = c.r[4].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A3BB0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[4].sd[0] < 10000ll ? 1ull : 0ull;  goto L_002A3BD0; }
    c.r[1].d[0] = c.r[4].sd[0] < 8002ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A3BCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002A3CBC; } }
L_002A3BCC:
    c.r[2].d[0] = c.r[4].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A3BD0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[4].sd[0] < 20000ll ? 1ull : 0ull;  goto L_002A3BF0; }
    c.r[1].d[0] = c.r[4].sd[0] < 10026ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A3BEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002A3CBC; } }
L_002A3BEC:
    c.r[2].d[0] = c.r[4].sd[0] < 20000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A3BF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[4].sd[0] < 30000ll ? 1ull : 0ull;  goto L_002A3C10; }
    c.r[1].d[0] = c.r[4].sd[0] < 20070ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A3C0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_002A3CBC; } }
L_002A3C0C:
    c.r[2].d[0] = c.r[4].sd[0] < 30000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A3C10:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull | 50001ull;  goto L_002A3C30; }
    c.r[1].d[0] = c.r[4].sd[0] < 30006ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A3C2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_002A3CBC; } }
L_002A3C2C:
    c.r[2].d[0] = 0ull | 50001ull;
    c.budget -= 1;
L_002A3C30:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_002A3C58; }
    c.r[1].d[0] = 0ull | 50008ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A3C54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_002A3CBC; } }
L_002A3C54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_002A3C58:
    c.r[2].d[0] = c.r[2].d[0] | 34464ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_002A3C88; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 34466ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A3C84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_002A3CBC; } }
L_002A3C84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_002A3C88:
    c.r[2].d[0] = c.r[3].d[0] | 14464ull;
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[3].d[0] | 14465ull;  goto L_002A3C9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_002A3CBC; } }
L_002A3C9C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[3].d[0] | 14466ull;  goto L_002A3CAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_002A3CBC; } }
L_002A3CAC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_002A3CBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_002A3CBC; } }
L_002A3CBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3CE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002A3CE4u) [[unlikely]] return; }
L_002A3CE4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002A3CF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A3FC8; } }
L_002A3CF4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_002A3D04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] - 92u);  if (t) { goto L_002A3FC8; } }
L_002A3D04:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 3u);  goto L_002A3D14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] - 476u);  if (t) { goto L_002A3FC8; } }
L_002A3D14:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 4u);  goto L_002A3F80; }
    c.r[2].d[0] = c.r[16].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].sd[0] < 2000ll ? 1ull : 0ull;  goto L_002A3E50; }
    c.r[1].d[0] = c.r[16].sd[0] < 1101ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A3E4C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 6u);  goto L_002A3D50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 45u);  if (t) { goto L_002A3FC8; } }
L_002A3D50:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] - 1000u);  goto L_002A3DE4; }
    set32(c.r[2], c.r[16].w[0] - 1000u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A3FC8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 10304u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0060[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A3D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_002A3FC8; } }
L_002A3D8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 34u);  if (t) { goto L_002A3FC8; } }
L_002A3D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_002A3FC8; } }
L_002A3D9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_002A3FC8; } }
L_002A3DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_002A3FC8; } }
L_002A3DAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 38u);  if (t) { goto L_002A3FC8; } }
L_002A3DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 39u);  if (t) { goto L_002A3FC8; } }
L_002A3DBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 40u);  if (t) { goto L_002A3FC8; } }
L_002A3DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 41u);  if (t) { goto L_002A3FC8; } }
L_002A3DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_002A3FC8; } }
L_002A3DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 44u);  if (t) { goto L_002A3FC8; } }
L_002A3DDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 43u);  if (t) { goto L_002A3FC8; } }
L_002A3DE4:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A3FC4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 10256u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0060[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A3E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 25u);  if (t) { goto L_002A3FC8; } }
L_002A3E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 26u);  if (t) { goto L_002A3FC8; } }
L_002A3E1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 27u);  if (t) { goto L_002A3FC8; } }
L_002A3E24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 28u);  if (t) { goto L_002A3FC8; } }
L_002A3E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 29u);  if (t) { goto L_002A3FC8; } }
L_002A3E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 30u);  if (t) { goto L_002A3FC8; } }
L_002A3E3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_002A3FC8; } }
L_002A3E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 43u);  if (t) { goto L_002A3FC8; } }
L_002A3E4C:
    c.r[2].d[0] = c.r[16].sd[0] < 2000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A3E50:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].sd[0] < 3000ll ? 1ull : 0ull;  goto L_002A3E70; }
    c.r[1].d[0] = c.r[16].sd[0] < 2011ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A3E6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] - 1954u);  if (t) { goto L_002A3FC8; } }
L_002A3E6C:
    c.r[2].d[0] = c.r[16].sd[0] < 3000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A3E70:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].sd[0] < 4000ll ? 1ull : 0ull;  goto L_002A3EE4; }
    c.r[1].d[0] = c.r[16].sd[0] < 3006ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A3EE0; } }
    set32(c.r[2], 0u + 3004u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 61u);  goto L_002A3FC8; }
    set32(c.r[2], 0u + 3003u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 60u);  goto L_002A3FC8; }
    set32(c.r[2], 0u + 3002u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 59u);  goto L_002A3FC8; }
    set32(c.r[2], 0u + 3001u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 58u);  goto L_002A3FC8; }
    set32(c.r[2], 0u + 3000u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));  goto L_002A3EC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A3FC4; } }
L_002A3EC8:
    set32(c.r[2], ld32((c.r[2].w[0] + 1200u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 57u);  goto L_002A3ED8; }
    set32(c.r[2], 0u + 56u);
    c.budget -= 1;
L_002A3ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002A3FCC; } }
L_002A3EE0:
    c.r[2].d[0] = c.r[16].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A3EE4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].sd[0] < 5000ll ? 1ull : 0ull;  goto L_002A3F04; }
    c.r[1].d[0] = c.r[16].sd[0] < 4024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A3F00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] - 3938u);  if (t) { goto L_002A3FC8; } }
L_002A3F00:
    c.r[2].d[0] = c.r[16].sd[0] < 5000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A3F04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].sd[0] < 6000ll ? 1ull : 0ull;  goto L_002A3F24; }
    c.r[1].d[0] = c.r[16].sd[0] < 5009ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A3F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] - 4916u);  if (t) { goto L_002A3FC8; } }
L_002A3F20:
    c.r[2].d[0] = c.r[16].sd[0] < 6000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A3F24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].sd[0] < 7000ll ? 1ull : 0ull;  goto L_002A3F44; }
    c.r[1].d[0] = c.r[16].sd[0] < 6004ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A3F40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] - 5908u);  if (t) { goto L_002A3FC8; } }
L_002A3F40:
    c.r[2].d[0] = c.r[16].sd[0] < 7000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A3F44:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].sd[0] < 8000ll ? 1ull : 0ull;  goto L_002A3F64; }
    c.r[1].d[0] = c.r[16].sd[0] < 7016ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A3F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] - 6905u);  if (t) { goto L_002A3FC8; } }
L_002A3F60:
    c.r[2].d[0] = c.r[16].sd[0] < 8000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A3F64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A3FC4; } }
    c.r[1].d[0] = c.r[16].sd[0] < 8002ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A3FC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] - 7890u);  if (t) { goto L_002A3FC8; } }
L_002A3F80:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 5u);  goto L_002A3F90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] - 9890u);  if (t) { goto L_002A3FC8; } }
L_002A3F90:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 6u);  goto L_002A3FA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] - 19865u);  if (t) { goto L_002A3FC8; } }
L_002A3FA0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 7u);  goto L_002A3FB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] - 29796u);  if (t) { goto L_002A3FC8; } }
L_002A3FB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002A3FC4; } }
    set32(c.r[2], c.r[16].w[0] - 32768u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 17028u);  if (t) { goto L_002A3FC8; } }
L_002A3FC4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A3FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002A3FCC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3FE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 20u), 0u);
    c.budget -= 8;
    [[clang::musttail]] return unit_0061(c, 1u, depth);
}

}
