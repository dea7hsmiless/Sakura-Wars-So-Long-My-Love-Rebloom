#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0042[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0,
    4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0,
    0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0,
    29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 36, 0, 37, 0, 38, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45,
    0, 0, 0, 46, 47, 48, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 57, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76,
    0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 100,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 105, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0,
    0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0,
    160, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0,
    0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191,
    0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0,
    0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248,
    0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272,
    0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0,
    0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 308, 0, 0,
    0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0,
    0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 353, 0, 354, 0, 0, 0, 0, 355, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0,
    0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0,
    0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0,
    0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 376,
    0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0,
    0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0,
    0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0,
    397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0,
    0, 403, 0, 0, 0, 404, 0, 0, 405, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0,
    419, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0,
    426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0042(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00228000;
    case 2u: goto L_00228020;
    case 3u: goto L_00228074;
    case 4u: goto L_00228080;
    case 5u: goto L_00228094;
    case 6u: goto L_002280AC;
    case 7u: goto L_002280BC;
    case 8u: goto L_002280FC;
    case 9u: goto L_00228130;
    case 10u: goto L_00228194;
    case 11u: goto L_002281BC;
    case 12u: goto L_002281C4;
    case 13u: goto L_002281D0;
    case 14u: goto L_002281E4;
    case 15u: goto L_002281F8;
    case 16u: goto L_0022820C;
    case 17u: goto L_00228218;
    case 18u: goto L_00228224;
    case 19u: goto L_0022822C;
    case 20u: goto L_00228238;
    case 21u: goto L_00228240;
    case 22u: goto L_00228248;
    case 23u: goto L_00228258;
    case 24u: goto L_00228280;
    case 25u: goto L_00228290;
    case 26u: goto L_002282BC;
    case 27u: goto L_002282CC;
    case 28u: goto L_002282F4;
    case 29u: goto L_00228300;
    case 30u: goto L_00228314;
    case 31u: goto L_00228328;
    case 32u: goto L_0022833C;
    case 33u: goto L_00228348;
    case 34u: goto L_00228350;
    case 35u: goto L_00228358;
    case 36u: goto L_00228368;
    case 37u: goto L_00228370;
    case 38u: goto L_00228378;
    case 39u: goto L_00228390;
    case 40u: goto L_002283E4;
    case 41u: goto L_002283F0;
    case 42u: goto L_00228434;
    case 43u: goto L_00228468;
    case 44u: goto L_002284D4;
    case 45u: goto L_002284FC;
    case 46u: goto L_0022850C;
    case 47u: goto L_00228510;
    case 48u: goto L_00228514;
    case 49u: goto L_0022852C;
    case 50u: goto L_00228534;
    case 51u: goto L_00228544;
    case 52u: goto L_00228564;
    case 53u: goto L_00228580;
    case 54u: goto L_002285A8;
    case 55u: goto L_002285C0;
    case 56u: goto L_002285DC;
    case 57u: goto L_002285E0;
    case 58u: goto L_00228610;
    case 59u: goto L_00228654;
    case 60u: goto L_00228660;
    case 61u: goto L_002286C4;
    case 62u: goto L_002286D0;
    case 63u: goto L_002286E8;
    case 64u: goto L_00228704;
    case 65u: goto L_00228730;
    case 66u: goto L_0022874C;
    case 67u: goto L_00228764;
    case 68u: goto L_00228770;
    case 69u: goto L_00228798;
    case 70u: goto L_002287A8;
    case 71u: goto L_002287B0;
    case 72u: goto L_002287C0;
    case 73u: goto L_00228800;
    case 74u: goto L_00228820;
    case 75u: goto L_00228870;
    case 76u: goto L_0022887C;
    case 77u: goto L_00228894;
    case 78u: goto L_002288A4;
    case 79u: goto L_002288B0;
    case 80u: goto L_002288DC;
    case 81u: goto L_002288E8;
    case 82u: goto L_00228924;
    case 83u: goto L_00228940;
    case 84u: goto L_00228964;
    case 85u: goto L_00228980;
    case 86u: goto L_00228A24;
    case 87u: goto L_00228A40;
    case 88u: goto L_00228A7C;
    case 89u: goto L_00228A88;
    case 90u: goto L_00228A9C;
    case 91u: goto L_00228AA4;
    case 92u: goto L_00228AB0;
    case 93u: goto L_00228AD0;
    case 94u: goto L_00228AEC;
    case 95u: goto L_00228B04;
    case 96u: goto L_00228B24;
    case 97u: goto L_00228B2C;
    case 98u: goto L_00228B5C;
    case 99u: goto L_00228B70;
    case 100u: goto L_00228B7C;
    case 101u: goto L_00228B90;
    case 102u: goto L_00228BA4;
    case 103u: goto L_00228BCC;
    case 104u: goto L_00228BE0;
    case 105u: goto L_00228C04;
    case 106u: goto L_00228C10;
    case 107u: goto L_00228C18;
    case 108u: goto L_00228C4C;
    case 109u: goto L_00228C84;
    case 110u: goto L_00228CAC;
    case 111u: goto L_00228CD8;
    case 112u: goto L_00228CF8;
    case 113u: goto L_00228D18;
    case 114u: goto L_00228D30;
    case 115u: goto L_00228D44;
    case 116u: goto L_00228D88;
    case 117u: goto L_00228DC0;
    case 118u: goto L_00228DE4;
    case 119u: goto L_00228E1C;
    case 120u: goto L_00228E50;
    case 121u: goto L_00228E6C;
    case 122u: goto L_00228E90;
    case 123u: goto L_00228EA0;
    case 124u: goto L_00228ED0;
    case 125u: goto L_00228EE8;
    case 126u: goto L_00228F14;
    case 127u: goto L_00228F34;
    case 128u: goto L_00228F3C;
    case 129u: goto L_00228F4C;
    case 130u: goto L_00228F60;
    case 131u: goto L_00228FA8;
    case 132u: goto L_00228FC0;
    case 133u: goto L_00228FE0;
    case 134u: goto L_00228FF0;
    case 135u: goto L_0022901C;
    case 136u: goto L_00229034;
    case 137u: goto L_0022904C;
    case 138u: goto L_00229058;
    case 139u: goto L_00229070;
    case 140u: goto L_00229090;
    case 141u: goto L_002290C0;
    case 142u: goto L_002290EC;
    case 143u: goto L_0022910C;
    case 144u: goto L_0022912C;
    case 145u: goto L_0022914C;
    case 146u: goto L_0022916C;
    case 147u: goto L_00229184;
    case 148u: goto L_002291B0;
    case 149u: goto L_002291E0;
    case 150u: goto L_002291EC;
    case 151u: goto L_00229250;
    case 152u: goto L_002292A0;
    case 153u: goto L_002292E4;
    case 154u: goto L_00229320;
    case 155u: goto L_00229348;
    case 156u: goto L_00229374;
    case 157u: goto L_00229390;
    case 158u: goto L_002293E8;
    case 159u: goto L_002293F8;
    case 160u: goto L_00229400;
    case 161u: goto L_0022940C;
    case 162u: goto L_0022941C;
    case 163u: goto L_00229424;
    case 164u: goto L_0022942C;
    case 165u: goto L_0022945C;
    case 166u: goto L_002294B8;
    case 167u: goto L_002294D4;
    case 168u: goto L_002294EC;
    case 169u: goto L_00229508;
    case 170u: goto L_00229524;
    case 171u: goto L_00229544;
    case 172u: goto L_00229554;
    case 173u: goto L_00229578;
    case 174u: goto L_00229590;
    case 175u: goto L_002295A8;
    case 176u: goto L_002295C4;
    case 177u: goto L_002295E4;
    case 178u: goto L_002295F4;
    case 179u: goto L_00229618;
    case 180u: goto L_00229630;
    case 181u: goto L_00229648;
    case 182u: goto L_00229664;
    case 183u: goto L_00229674;
    case 184u: goto L_00229690;
    case 185u: goto L_002296A8;
    case 186u: goto L_002296C4;
    case 187u: goto L_002296E4;
    case 188u: goto L_00229704;
    case 189u: goto L_00229714;
    case 190u: goto L_00229730;
    case 191u: goto L_0022977C;
    case 192u: goto L_00229790;
    case 193u: goto L_0022979C;
    case 194u: goto L_002297AC;
    case 195u: goto L_002297C8;
    case 196u: goto L_002297E8;
    case 197u: goto L_002297F0;
    case 198u: goto L_00229804;
    case 199u: goto L_0022981C;
    case 200u: goto L_00229828;
    case 201u: goto L_00229840;
    case 202u: goto L_00229884;
    case 203u: goto L_002298A0;
    case 204u: goto L_002298D4;
    case 205u: goto L_002298F8;
    case 206u: goto L_0022990C;
    case 207u: goto L_00229944;
    case 208u: goto L_00229990;
    case 209u: goto L_002299A4;
    case 210u: goto L_002299B0;
    case 211u: goto L_002299C0;
    case 212u: goto L_00229AC0;
    case 213u: goto L_00229AD4;
    case 214u: goto L_00229AE0;
    case 215u: goto L_00229AEC;
    case 216u: goto L_00229B10;
    case 217u: goto L_00229C04;
    case 218u: goto L_00229C3C;
    case 219u: goto L_00229C68;
    case 220u: goto L_00229C7C;
    case 221u: goto L_00229C94;
    case 222u: goto L_00229CC4;
    case 223u: goto L_00229CD8;
    case 224u: goto L_00229D0C;
    case 225u: goto L_00229D34;
    case 226u: goto L_00229D5C;
    case 227u: goto L_00229DA0;
    case 228u: goto L_00229DCC;
    case 229u: goto L_00229DE0;
    case 230u: goto L_00229DF8;
    case 231u: goto L_00229E28;
    case 232u: goto L_00229E70;
    case 233u: goto L_00229E98;
    case 234u: goto L_00229EC0;
    case 235u: goto L_00229F08;
    case 236u: goto L_00229F18;
    case 237u: goto L_00229F34;
    case 238u: goto L_00229F54;
    case 239u: goto L_00229F70;
    case 240u: goto L_00229F8C;
    case 241u: goto L_00229FC8;
    case 242u: goto L_00229FD4;
    case 243u: goto L_00229FE8;
    case 244u: goto L_0022A08C;
    case 245u: goto L_0022A0D4;
    case 246u: goto L_0022A124;
    case 247u: goto L_0022A164;
    case 248u: goto L_0022A17C;
    case 249u: goto L_0022A198;
    case 250u: goto L_0022A1BC;
    case 251u: goto L_0022A1C8;
    case 252u: goto L_0022A210;
    case 253u: goto L_0022A22C;
    case 254u: goto L_0022A260;
    case 255u: goto L_0022A278;
    case 256u: goto L_0022A310;
    case 257u: goto L_0022A358;
    case 258u: goto L_0022A3A8;
    case 259u: goto L_0022A3D4;
    case 260u: goto L_0022A3FC;
    case 261u: goto L_0022A450;
    case 262u: goto L_0022A4E8;
    case 263u: goto L_0022A528;
    case 264u: goto L_0022A550;
    case 265u: goto L_0022A580;
    case 266u: goto L_0022A5B0;
    case 267u: goto L_0022A5C0;
    case 268u: goto L_0022A5DC;
    case 269u: goto L_0022A60C;
    case 270u: goto L_0022A638;
    case 271u: goto L_0022A644;
    case 272u: goto L_0022A67C;
    case 273u: goto L_0022A6A0;
    case 274u: goto L_0022A6F0;
    case 275u: goto L_0022A7D8;
    case 276u: goto L_0022A860;
    case 277u: goto L_0022A880;
    case 278u: goto L_0022A89C;
    case 279u: goto L_0022A8AC;
    case 280u: goto L_0022A8D0;
    case 281u: goto L_0022A8F4;
    case 282u: goto L_0022A910;
    case 283u: goto L_0022A920;
    case 284u: goto L_0022A958;
    case 285u: goto L_0022A9B8;
    case 286u: goto L_0022A9EC;
    case 287u: goto L_0022A9F4;
    case 288u: goto L_0022AA08;
    case 289u: goto L_0022AA18;
    case 290u: goto L_0022AAB0;
    case 291u: goto L_0022AAE0;
    case 292u: goto L_0022AB00;
    case 293u: goto L_0022AB1C;
    case 294u: goto L_0022AB38;
    case 295u: goto L_0022AB44;
    case 296u: goto L_0022AB68;
    case 297u: goto L_0022AB94;
    case 298u: goto L_0022AB9C;
    case 299u: goto L_0022ABAC;
    case 300u: goto L_0022ABB4;
    case 301u: goto L_0022AC30;
    case 302u: goto L_0022AC48;
    case 303u: goto L_0022AC64;
    case 304u: goto L_0022AC78;
    case 305u: goto L_0022ACA4;
    case 306u: goto L_0022ACD8;
    case 307u: goto L_0022ACE0;
    case 308u: goto L_0022ACF4;
    case 309u: goto L_0022AD04;
    case 310u: goto L_0022AD58;
    case 311u: goto L_0022AD8C;
    case 312u: goto L_0022ADB0;
    case 313u: goto L_0022AE18;
    case 314u: goto L_0022AE34;
    case 315u: goto L_0022AE48;
    case 316u: goto L_0022AE78;
    case 317u: goto L_0022AEAC;
    case 318u: goto L_0022AED0;
    case 319u: goto L_0022AEEC;
    case 320u: goto L_0022AF10;
    case 321u: goto L_0022AF40;
    case 322u: goto L_0022AF8C;
    case 323u: goto L_0022AFA0;
    case 324u: goto L_0022AFF8;
    case 325u: goto L_0022B010;
    case 326u: goto L_0022B040;
    case 327u: goto L_0022B074;
    case 328u: goto L_0022B098;
    case 329u: goto L_0022B0D0;
    case 330u: goto L_0022B108;
    case 331u: goto L_0022B138;
    case 332u: goto L_0022B184;
    case 333u: goto L_0022B1C0;
    case 334u: goto L_0022B1D4;
    case 335u: goto L_0022B20C;
    case 336u: goto L_0022B248;
    case 337u: goto L_0022B25C;
    case 338u: goto L_0022B294;
    case 339u: goto L_0022B2D0;
    case 340u: goto L_0022B2E4;
    case 341u: goto L_0022B31C;
    case 342u: goto L_0022B358;
    case 343u: goto L_0022B36C;
    case 344u: goto L_0022B3BC;
    case 345u: goto L_0022B3E0;
    case 346u: goto L_0022B3F0;
    case 347u: goto L_0022B424;
    case 348u: goto L_0022B45C;
    case 349u: goto L_0022B510;
    case 350u: goto L_0022B52C;
    case 351u: goto L_0022B540;
    case 352u: goto L_0022B554;
    case 353u: goto L_0022B55C;
    case 354u: goto L_0022B564;
    case 355u: goto L_0022B578;
    case 356u: goto L_0022B5A0;
    case 357u: goto L_0022B5EC;
    case 358u: goto L_0022B5F8;
    case 359u: goto L_0022B618;
    case 360u: goto L_0022B648;
    case 361u: goto L_0022B668;
    case 362u: goto L_0022B688;
    case 363u: goto L_0022B6A8;
    case 364u: goto L_0022B6C8;
    case 365u: goto L_0022B6E8;
    case 366u: goto L_0022B708;
    case 367u: goto L_0022B718;
    case 368u: goto L_0022B730;
    case 369u: goto L_0022B750;
    case 370u: goto L_0022B774;
    case 371u: goto L_0022B7A4;
    case 372u: goto L_0022B7B8;
    case 373u: goto L_0022B7D0;
    case 374u: goto L_0022B7E0;
    case 375u: goto L_0022B7EC;
    case 376u: goto L_0022B7FC;
    case 377u: goto L_0022B808;
    case 378u: goto L_0022B820;
    case 379u: goto L_0022B82C;
    case 380u: goto L_0022B83C;
    case 381u: goto L_0022B854;
    case 382u: goto L_0022B864;
    case 383u: goto L_0022B874;
    case 384u: goto L_0022B88C;
    case 385u: goto L_0022B898;
    case 386u: goto L_0022B8EC;
    case 387u: goto L_0022B90C;
    case 388u: goto L_0022B914;
    case 389u: goto L_0022B92C;
    case 390u: goto L_0022B938;
    case 391u: goto L_0022B95C;
    case 392u: goto L_0022B97C;
    case 393u: goto L_0022B994;
    case 394u: goto L_0022B9A0;
    case 395u: goto L_0022B9B4;
    case 396u: goto L_0022B9E4;
    case 397u: goto L_0022BA00;
    case 398u: goto L_0022BA20;
    case 399u: goto L_0022BA38;
    case 400u: goto L_0022BA44;
    case 401u: goto L_0022BA50;
    case 402u: goto L_0022BA6C;
    case 403u: goto L_0022BA84;
    case 404u: goto L_0022BA94;
    case 405u: goto L_0022BAA0;
    case 406u: goto L_0022BAA8;
    case 407u: goto L_0022BABC;
    case 408u: goto L_0022BACC;
    case 409u: goto L_0022BAE0;
    case 410u: goto L_0022BAEC;
    case 411u: goto L_0022BB14;
    case 412u: goto L_0022BB28;
    case 413u: goto L_0022BB44;
    case 414u: goto L_0022BB60;
    case 415u: goto L_0022BB88;
    case 416u: goto L_0022BB90;
    case 417u: goto L_0022BD5C;
    case 418u: goto L_0022BD70;
    case 419u: goto L_0022BD80;
    case 420u: goto L_0022BDA4;
    case 421u: goto L_0022BDB4;
    case 422u: goto L_0022BDC8;
    case 423u: goto L_0022BDD0;
    case 424u: goto L_0022BDE0;
    case 425u: goto L_0022BDF0;
    case 426u: goto L_0022BE00;
    case 427u: goto L_0022BE18;
    case 428u: goto L_0022BE28;
    case 429u: goto L_0022BE3C;
    case 430u: goto L_0022BE48;
    case 431u: goto L_0022BE54;
    case 432u: goto L_0022BE98;
    case 433u: goto L_0022BEC0;
    case 434u: goto L_0022BEFC;
    case 435u: goto L_0022BF24;
    case 436u: goto L_0022BF30;
    case 437u: goto L_0022BF48;
    case 438u: goto L_0022BF54;
    case 439u: goto L_0022BF5C;
    case 440u: goto L_0022BF64;
    case 441u: goto L_0022BF6C;
    case 442u: goto L_0022BF74;
    case 443u: goto L_0022BF9C;
    case 444u: goto L_0022BFAC;
    case 445u: goto L_0022BFB8;
    case 446u: goto L_0022BFC8;
    case 447u: goto L_0022BFE0;
    default: bad_entry(c, 0x00228000u); return;
    }
L_00228000:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228020u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00228020u) [[unlikely]] return; }
L_00228020:
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00228038; }
    c.f[0] = ld32((c.r[29].w[0] + 288u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022804C; } }
L_00228038:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00228048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 288u));  if (t) { goto L_0022804C; } }
L_00228048:
    c.f[0] = 0u;
    c.budget -= 1;
L_0022804C:
    st32((c.r[20].w[0] + 156u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 1348u);  goto L_00228078; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00228074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228074u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00228074u) [[unlikely]] return; }
L_00228074:
    set32(c.r[4], 0u + 1348u);
    c.budget -= 1;
L_00228078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228080u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00228080u) [[unlikely]] return; }
L_00228080:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 264u), c.r[2].w[0]);  goto L_00228098; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228094u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 266u, depth + 1u); else { c.pc = 0x004069C0u; return; } if (c.pc != 0x00228094u) [[unlikely]] return; }
L_00228094:
    st32((c.r[20].w[0] + 264u), c.r[2].w[0]);
    c.budget -= 1;
L_00228098:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002280ACu); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x002280ACu) [[unlikely]] return; }
L_002280AC:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_002285DC; } }
L_002280BC:
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_002280D4; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002280EC; } }
L_002280D4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_002280EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002280FCu); c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 339u, depth + 1u); else { c.pc = 0x001E2D40u; return; } if (c.pc != 0x002280FCu) [[unlikely]] return; }
L_002280FC:
    c.f[2] = ld32((c.r[20].w[0] + 156u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 156u), c.f[0]);  if (t) { goto L_00228120; } }
    st32((c.r[20].w[0] + 156u), c.f[1]);
    c.budget -= 1;
L_00228120:
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228130u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00228130u) [[unlikely]] return; }
L_00228130:
    set32(c.r[4], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00228148; }
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022815C; } }
L_00228148:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00228158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 256u));  if (t) { goto L_0022815C; } }
L_00228158:
    c.f[1] = 0u;
    c.budget -= 1;
L_0022815C:
    c.f[0] = ld32((c.r[20].w[0] + 156u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 148u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[20].w[0] + 156u));  goto L_00228198; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00228194; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228194u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00228194u) [[unlikely]] return; }
L_00228194:
    c.f[1] = ld32((c.r[20].w[0] + 156u));
    c.budget -= 1;
L_00228198:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002285DC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_002285DC; } }
L_002281BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002281C4u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x002281C4u) [[unlikely]] return; }
L_002281C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002281D0u); set32(c.r[4], 0u + 132u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002281D0u) [[unlikely]] return; }
L_002281D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);  goto L_00228200; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002281E4u);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x002281E4u) [[unlikely]] return; }
L_002281E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002281F8u); c.r[7].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B7(c, 182u, depth + 1u); else { c.pc = 0x003FE040u; return; } if (c.pc != 0x002281F8u) [[unlikely]] return; }
L_002281F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 2;
L_00228200:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022820Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 187u, depth + 1u); else { c.pc = 0x003FE0E0u; return; } if (c.pc != 0x0022820Cu) [[unlikely]] return; }
L_0022820C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228218u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 89u, depth + 1u); else { c.pc = 0x003FCD40u; return; } if (c.pc != 0x00228218u) [[unlikely]] return; }
L_00228218:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228224u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 79u, depth + 1u); else { c.pc = 0x003FCC30u; return; } if (c.pc != 0x00228224u) [[unlikely]] return; }
L_00228224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022822Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 82u, depth + 1u); else { c.pc = 0x003FCC70u; return; } if (c.pc != 0x0022822Cu) [[unlikely]] return; }
L_0022822C:
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
L_00228238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228240u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00228240u) [[unlikely]] return; }
L_00228240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228248u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 86u, depth + 1u); else { c.pc = 0x003FCCD0u; return; } if (c.pc != 0x00228248u) [[unlikely]] return; }
L_00228248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002285DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228258u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00228258u) [[unlikely]] return; }
L_00228258:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[5].d[0] = c.r[3].d[0] | 4097ull;
    c.r[3].d[0] = c.r[4].d[0] | 32768ull;
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228280u); set32(c.r[4], ld32((c.r[20].w[0] + 264u)));  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00228280u) [[unlikely]] return; }
L_00228280:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_002285DC; } }
L_00228290:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002285DC; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 261u);  goto L_002282C4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002282BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002282BCu) [[unlikely]] return; }
L_002282BC:
    st32((c.r[20].w[0] + 264u), 0u);
    set32(c.r[4], 0u + 261u);
    c.budget -= 2;
L_002282C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002282CCu);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002282CCu) [[unlikely]] return; }
L_002282CC:
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[3], 0u - 129u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002282F4u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x002282F4u) [[unlikely]] return; }
L_002282F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228300u); set32(c.r[4], 0u + 132u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00228300u) [[unlikely]] return; }
L_00228300:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);  goto L_00228330; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228314u);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x00228314u) [[unlikely]] return; }
L_00228314:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228328u); c.r[7].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B7(c, 182u, depth + 1u); else { c.pc = 0x003FE040u; return; } if (c.pc != 0x00228328u) [[unlikely]] return; }
L_00228328:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 2;
L_00228330:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022833Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 187u, depth + 1u); else { c.pc = 0x003FE0E0u; return; } if (c.pc != 0x0022833Cu) [[unlikely]] return; }
L_0022833C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228348u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 89u, depth + 1u); else { c.pc = 0x003FCD40u; return; } if (c.pc != 0x00228348u) [[unlikely]] return; }
L_00228348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228350u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 82u, depth + 1u); else { c.pc = 0x003FCC70u; return; } if (c.pc != 0x00228350u) [[unlikely]] return; }
L_00228350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228358u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 84u, depth + 1u); else { c.pc = 0x003FCCA0u; return; } if (c.pc != 0x00228358u) [[unlikely]] return; }
L_00228358:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_002285DC; } }
L_00228368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228370u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00228370u) [[unlikely]] return; }
L_00228370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228378u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 86u, depth + 1u); else { c.pc = 0x003FCCD0u; return; } if (c.pc != 0x00228378u) [[unlikely]] return; }
L_00228378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002285DC; } }
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228390u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00228390u) [[unlikely]] return; }
L_00228390:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002283A8; }
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002283BC; } }
L_002283A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002283B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 224u));  if (t) { goto L_002283BC; } }
L_002283B8:
    c.f[0] = 0u;
    c.budget -= 1;
L_002283BC:
    st32((c.r[20].w[0] + 156u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 88u)));  goto L_002283E8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002283E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002283E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002283E4u) [[unlikely]] return; }
L_002283E4:
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    c.budget -= 1;
L_002283E8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_002283F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0022840C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00228424; } }
L_0022840C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_00228424:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228434u); c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 339u, depth + 1u); else { c.pc = 0x001E2D40u; return; } if (c.pc != 0x00228434u) [[unlikely]] return; }
L_00228434:
    c.f[2] = ld32((c.r[20].w[0] + 156u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 156u), c.f[0]);  if (t) { goto L_00228458; } }
    st32((c.r[20].w[0] + 156u), c.f[1]);
    c.budget -= 1;
L_00228458:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228468u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00228468u) [[unlikely]] return; }
L_00228468:
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00228480; }
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00228494; } }
L_00228480:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00228490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[29].w[0] + 192u));  if (t) { goto L_00228494; } }
L_00228490:
    c.f[2] = 0u;
    c.budget -= 1;
L_00228494:
    c.f[1] = ld32((c.r[20].w[0] + 156u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 148u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 10;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[20].w[0] + 156u));  goto L_002284D8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002284D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002284D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002284D4u) [[unlikely]] return; }
L_002284D4:
    c.f[1] = ld32((c.r[20].w[0] + 156u));
    c.budget -= 1;
L_002284D8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002285DC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 4;
L_002284FC:
    set32(c.r[3], 0u - 16385u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00227208u | kUnwind; return; } [[clang::musttail]] return unit_0041(c, 365u, depth); } }
L_0022850C:
    set32(c.r[2], 0u + 40u);
    c.budget -= 1;
L_00228510:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00228514:
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 180u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022852Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0041(c, 205u, depth + 1u); else { c.pc = 0x00225D60u; return; } if (c.pc != 0x0022852Cu) [[unlikely]] return; }
L_0022852C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228534u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 208u, depth + 1u); else { c.pc = 0x00225DD0u; return; } if (c.pc != 0x00228534u) [[unlikely]] return; }
L_00228534:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 180u)));
    c.budget -= 4;
L_00228544:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002285DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01120000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228564u); c.r[5].d[0] = c.r[2].d[0] | 4099ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00228564u) [[unlikely]] return; }
L_00228564:
    set32(c.r[2], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[29].w[0] + 776u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228580u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00228580u) [[unlikely]] return; }
L_00228580:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 268u), 0u);  goto L_00228598; }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 268u), 0u);
    c.budget -= 4;
L_00228598:
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  goto L_002285C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002285A8u);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x002285A8u) [[unlikely]] return; }
L_002285A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002285C0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002285C0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 292u, depth + 1u); else { c.pc = 0x001FBA50u; return; } if (c.pc != 0x002285C0u) [[unlikely]] return; }
L_002285C0:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002285C4:
    set32(c.r[2], 0u - 7u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 272u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002285DCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x002285DCu) [[unlikely]] return; }
L_002285DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_002285E0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 848u);  c.pc = t; return; }
L_00228610:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00228668; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022864C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0022866C; } }
L_0022864C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228654u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x00228654u) [[unlikely]] return; }
L_00228654:
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228660u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x00228660u) [[unlikely]] return; }
L_00228660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0022866C; } }
L_00228668:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022866C:
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], 0u + 30u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 30u);  goto L_002287CC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 200u)));  goto L_00228790; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 200u)));  goto L_00228728; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_002286A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00228804; } }
L_002286A4:
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 200u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002286C4u); st32((c.r[18].w[0] + 272u), 0u);  if (depth < kMaxDepth) unit_0025(c, 529u, depth + 1u); else { c.pc = 0x001B7F40u; return; } if (c.pc != 0x002286C4u) [[unlikely]] return; }
L_002286C4:
    st32((c.r[18].w[0] + 200u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002286D0u); set32(c.r[4], 0u + 279u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002286D0u) [[unlikely]] return; }
L_002286D0:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002286E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002286E8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 301u, depth + 1u); else { c.pc = 0x001CE6A0u; return; } if (c.pc != 0x002286E8u) [[unlikely]] return; }
L_002286E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 88u)));  goto L_0022871C; }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 204u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228704u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 249u, depth + 1u); else { c.pc = 0x001E68A0u; return; } if (c.pc != 0x00228704u) [[unlikely]] return; }
L_00228704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00228718; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_00228718:
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 1;
L_0022871C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 200u)));
    c.budget -= 3;
L_00228728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228730u);  if (depth < kMaxDepth) unit_0025(c, 532u, depth + 1u); else { c.pc = 0x001B7F90u; return; } if (c.pc != 0x00228730u) [[unlikely]] return; }
L_00228730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00228800; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 200u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 52u)));  goto L_00228750; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022874Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 531u, depth + 1u); else { c.pc = 0x001B7F70u; return; } if (c.pc != 0x0022874Cu) [[unlikely]] return; }
L_0022874C:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 1;
L_00228750:
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[18].w[0] + 160u), 0u);  goto L_00228780; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228764u); set32(c.r[4], ld32((c.r[18].w[0] + 192u)));  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x00228764u) [[unlikely]] return; }
L_00228764:
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228770u); set32(c.r[4], ld32((c.r[18].w[0] + 192u)));  if (depth < kMaxDepth) unit_003B(c, 314u, depth + 1u); else { c.pc = 0x0020FC40u; return; } if (c.pc != 0x00228770u) [[unlikely]] return; }
L_00228770:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 160u), 0u);
    c.budget -= 4;
L_00228780:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00228800; } }
L_00228790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228798u);  if (depth < kMaxDepth) unit_0025(c, 533u, depth + 1u); else { c.pc = 0x001B7FA0u; return; } if (c.pc != 0x00228798u) [[unlikely]] return; }
L_00228798:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002287B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002287A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 208u, depth + 1u); else { c.pc = 0x00225DD0u; return; } if (c.pc != 0x002287A8u) [[unlikely]] return; }
L_002287A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002287B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 205u, depth + 1u); else { c.pc = 0x00225D60u; return; } if (c.pc != 0x002287B0u) [[unlikely]] return; }
L_002287B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002287C8; } }
L_002287B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002287C0u);  if (depth < kMaxDepth) unit_0041(c, 199u, depth + 1u); else { c.pc = 0x00225BD0u; return; } if (c.pc != 0x002287C0u) [[unlikely]] return; }
L_002287C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00228800; } }
L_002287C8:
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_002287CC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_002287E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
L_002287E0:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 2u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228800u); st32((c.r[18].w[0] + 268u), 0u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00228800u) [[unlikely]] return; }
L_00228800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00228804:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00228820:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00228998; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  goto L_00228900; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_00228858; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00228A28; } }
L_00228858:
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] & 16ull;  goto L_00228884; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228870u); set32(c.r[5], c.r[5].w[0] - 32434u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00228870u) [[unlikely]] return; }
L_00228870:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022887Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0022887Cu) [[unlikely]] return; }
L_0022887C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00228A24; } }
L_00228884:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002288B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002288B8; } }
    goto L_00228898;
L_00228894:
    c.budget -= 1;
L_00228898:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002288A4u); set32(c.r[5], c.r[5].w[0] - 32415u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x002288A4u) [[unlikely]] return; }
L_002288A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002288B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x002288B0u) [[unlikely]] return; }
L_002288B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00228A24; } }
L_002288B8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_002288F4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002288F0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002288DCu); set32(c.r[5], c.r[5].w[0] - 32415u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x002288DCu) [[unlikely]] return; }
L_002288DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002288E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x002288E8u) [[unlikely]] return; }
L_002288E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00228A24; } }
L_002288F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_002288F4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
L_00228900:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 164u)));  goto L_0022894C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228924u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00228924u) [[unlikely]] return; }
L_00228924:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228940u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00228940u) [[unlikely]] return; }
L_00228940:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 156u), c.r[3].w[0]);  if (t) { goto L_00228988; } }
L_0022894C:
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228964u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00228964u) [[unlikely]] return; }
L_00228964:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[4], c.r[29].w[0] + 40u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228980u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00228980u) [[unlikely]] return; }
L_00228980:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[16].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 2;
L_00228988:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00228A24; } }
L_00228998:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_002289B4; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002289CC; } }
L_002289B4:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_002289CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[16].w[0] + 156u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 156u), c.f[1]);  if (t) { goto L_00228A24; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_00228A10; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00228A18; } }
L_00228A10:
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00228A18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228A24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00228A24u) [[unlikely]] return; }
L_00228A24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00228A28:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00228A40:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    st32((c.r[4].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228A7Cu); set32(c.r[4], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x00228A7Cu) [[unlikely]] return; }
L_00228A7C:
    set32(c.r[5], ld32((c.r[20].w[0] + 172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228A88u); set32(c.r[4], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0022(c, 92u, depth + 1u); else { c.pc = 0x001A8E80u; return; } if (c.pc != 0x00228A88u) [[unlikely]] return; }
L_00228A88:
    set32(c.r[6], ld32((c.r[28].w[0] - 31748u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228A9Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x00228A9Cu) [[unlikely]] return; }
L_00228A9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_00228AE4; } }
L_00228AA4:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228AB0u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x00228AB0u) [[unlikely]] return; }
L_00228AB0:
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 240u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 192u);  goto L_00228AFC; }
    set32(c.r[6], ld32((c.r[28].w[0] - 31748u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228AD0u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0022(c, 125u, depth + 1u); else { c.pc = 0x001A9410u; return; } if (c.pc != 0x00228AD0u) [[unlikely]] return; }
L_00228AD0:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 5;
L_00228AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228AECu);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x00228AECu) [[unlikely]] return; }
L_00228AEC:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[28].w[0] - 31740u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00228AA4u | kUnwind; return; } goto L_00228AA4; }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_00228AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228B04u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x00228B04u) [[unlikely]] return; }
L_00228B04:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_00228B2C; }
    set32(c.r[6], ld32((c.r[20].w[0] + 240u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228B24u); set32(c.r[5], c.r[5].w[0] - 32403u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00228B24u) [[unlikely]] return; }
L_00228B24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00228D9C; } }
L_00228B2C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 112u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228B2Cu | kUnwind; return; } goto L_00228B2C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 31744u)));
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228B5Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x00228B5Cu) [[unlikely]] return; }
L_00228B5C:
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 196u), c.r[2].w[0]);  if (t) { goto L_00228D28; } }
L_00228B70:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228B7Cu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x00228B7Cu) [[unlikely]] return; }
L_00228B7C:
    set32(c.r[6], ld32((c.r[28].w[0] - 31736u)));
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[21], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228B90u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x00228B90u) [[unlikely]] return; }
L_00228B90:
    set32(c.r[6], ld32((c.r[28].w[0] - 31732u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[17], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228BA4u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x00228BA4u) [[unlikely]] return; }
L_00228BA4:
    c.budget -= 2;
    if (c.r[17].sd[0] <= 0) { set32(c.r[6], ld32((c.r[20].w[0] + 240u)));  goto L_00228BBC; }
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 164u)));  goto L_00228BD4; }
    set32(c.r[6], ld32((c.r[20].w[0] + 240u)));
    c.budget -= 1;
L_00228BBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228BCCu); set32(c.r[5], c.r[5].w[0] - 32377u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00228BCCu) [[unlikely]] return; }
L_00228BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00228D9C; } }
L_00228BD4:
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228BE0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0033(c, 402u, depth + 1u); else { c.pc = 0x001EF7E0u; return; } if (c.pc != 0x00228BE0u) [[unlikely]] return; }
L_00228BE0:
    set32(c.r[4], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_00228BFC; }
    set32(c.r[18], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 1;
L_00228BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228C04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 98u, depth + 1u); else { c.pc = 0x003C4F10u; return; } if (c.pc != 0x00228C04u) [[unlikely]] return; }
L_00228C04:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00228C24; } }
L_00228C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228C18u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 131u, depth + 1u); else { c.pc = 0x003C5540u; return; } if (c.pc != 0x00228C18u) [[unlikely]] return; }
L_00228C18:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_00228C30; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00228C24:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00228C10u | kUnwind; return; } goto L_00228C10; }
L_00228C30:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[16].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_00228C54; }
    set32(c.r[6], ld32((c.r[20].w[0] + 240u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228C4Cu); set32(c.r[5], c.r[5].w[0] - 32377u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00228C4Cu) [[unlikely]] return; }
L_00228C4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_00228CFC; } }
L_00228C54:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 32640u);
    set32(c.r[4], c.r[29].w[0] + 236u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228C84u); set32(c.r[6], 0u + 261u);  if (depth < kMaxDepth) unit_0033(c, 325u, depth + 1u); else { c.pc = 0x001EEC50u; return; } if (c.pc != 0x00228C84u) [[unlikely]] return; }
L_00228C84:
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 164u)));  goto L_00228CBC; }
    set32(c.r[2], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[4], c.r[29].w[0] + 232u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228CACu); set32(c.r[6], 0u + 262u);  if (depth < kMaxDepth) unit_0033(c, 325u, depth + 1u); else { c.pc = 0x001EEC50u; return; } if (c.pc != 0x00228CACu) [[unlikely]] return; }
L_00228CAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00228CF8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 164u)));
    c.budget -= 1;
L_00228CBC:
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 228u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228CD8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00228CD8u) [[unlikely]] return; }
L_00228CD8:
    set32(c.r[2], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[4], c.r[29].w[0] + 220u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228CF8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00228CF8u) [[unlikely]] return; }
L_00228CF8:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_00228CFC:
    set32(c.r[6], ld32((c.r[28].w[0] - 31744u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 136u);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228D18u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0022(c, 125u, depth + 1u); else { c.pc = 0x001A9410u; return; } if (c.pc != 0x00228D18u) [[unlikely]] return; }
L_00228D18:
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 4;
L_00228D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228D30u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x00228D30u) [[unlikely]] return; }
L_00228D30:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[28].w[0] - 31740u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00228B70u | kUnwind; return; } goto L_00228B70; }
    set32(c.r[16], 0u + 1u);
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 2;
L_00228D44:
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00228D8C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] - 32640u);
    set32(c.r[5], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 212u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228D88u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00228D88u) [[unlikely]] return; }
L_00228D88:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00228D8C:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00228D44u | kUnwind; return; } goto L_00228D44; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00228D9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00228DC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00228E20; } }
L_00228DE4:
    c.r[7].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 32640u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228E1Cu); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00228E1Cu) [[unlikely]] return; }
L_00228E1C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00228E20:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00228DE4u | kUnwind; return; } goto L_00228DE4; }
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 240u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00228E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228E6Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 205u, depth + 1u); else { c.pc = 0x00225D60u; return; } if (c.pc != 0x00228E6Cu) [[unlikely]] return; }
L_00228E6C:
    st32((c.r[17].w[0] + 268u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00228E90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228EA0u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00228EA0u) [[unlikely]] return; }
L_00228EA0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 180u)));  goto L_00228EB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00228EC0; } }
L_00228EB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00228EC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 976u)));  if (t) { goto L_00228EC0; } }
L_00228EC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00228ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 4100u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228EE8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x00228EE8u) [[unlikely]] return; }
L_00228EE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[2], c.r[2].w[0] + 18992u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[4], c.r[16].w[0] + 160u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 28704u);
    set32(c.r[6], c.r[6].w[0] - 28832u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228F14u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_0008(c, 147u, depth + 1u); else { c.pc = 0x00141CB0u; return; } if (c.pc != 0x00228F14u) [[unlikely]] return; }
L_00228F14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[4], c.r[16].w[0] + 188u);
    set32(c.r[5], c.r[5].w[0] - 28704u);
    set32(c.r[6], c.r[6].w[0] - 28832u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228F34u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_0008(c, 147u, depth + 1u); else { c.pc = 0x00141CB0u; return; } if (c.pc != 0x00228F34u) [[unlikely]] return; }
L_00228F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228F3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 140u, depth + 1u); else { c.pc = 0x00229090u; return; } if (c.pc != 0x00228F3Cu) [[unlikely]] return; }
L_00228F3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228F4Cu); set32(c.r[5], c.r[5].w[0] - 32304u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x00228F4Cu) [[unlikely]] return; }
L_00228F4C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00228F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00228FC0; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00228FAC; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00228FA8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00228FA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228FA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00228FA8u) [[unlikely]] return; }
L_00228FA8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00228FAC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00228FC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228FC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00228FC0u) [[unlikely]] return; }
L_00228FC0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00228FC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00228FE0:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00228FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00229070; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18992u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022901Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0042(c, 141u, depth + 1u); else { c.pc = 0x002290C0u; return; } if (c.pc != 0x0022901Cu) [[unlikely]] return; }
L_0022901C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[4], c.r[17].w[0] + 188u);
    set32(c.r[5], c.r[5].w[0] - 28832u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229034u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x00229034u) [[unlikely]] return; }
L_00229034:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[4], c.r[17].w[0] + 160u);
    set32(c.r[5], c.r[5].w[0] - 28832u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022904Cu); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x0022904Cu) [[unlikely]] return; }
L_0022904C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229058u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x00229058u) [[unlikely]] return; }
L_00229058:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00229074; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229070u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00229070u) [[unlikely]] return; }
L_00229070:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00229074:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00229090:
    st32((c.r[4].w[0] + 148u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[4].w[0] + 152u), 0u);
    st32((c.r[4].w[0] + 228u), 0u);
    st32((c.r[4].w[0] + 232u), 0u);
    st32((c.r[4].w[0] + 236u), 0u);
    st32((c.r[4].w[0] + 240u), 0u);
    st32((c.r[4].w[0] + 244u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_002290C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_002290F4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002290ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002290ECu) [[unlikely]] return; }
L_002290EC:
    st32((c.r[16].w[0] + 148u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 2;
L_002290F4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 228u)));  goto L_00229114; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022910Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022910Cu) [[unlikely]] return; }
L_0022910C:
    st32((c.r[16].w[0] + 152u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 2;
L_00229114:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 232u)));  goto L_00229134; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022912Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022912Cu) [[unlikely]] return; }
L_0022912C:
    st32((c.r[16].w[0] + 228u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 232u)));
    c.budget -= 2;
L_00229134:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 236u)));  goto L_00229154; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022914Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022914Cu) [[unlikely]] return; }
L_0022914C:
    st32((c.r[16].w[0] + 232u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 236u)));
    c.budget -= 2;
L_00229154:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 240u)));  goto L_00229174; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022916Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022916Cu) [[unlikely]] return; }
L_0022916C:
    st32((c.r[16].w[0] + 236u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 2;
L_00229174:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0022918C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229184u);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x001B81D0u; return; } if (c.pc != 0x00229184u) [[unlikely]] return; }
L_00229184:
    st32((c.r[16].w[0] + 240u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_0022918C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002291B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002292E8; } }
L_002291E0:
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002291ECu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002291ECu) [[unlikely]] return; }
L_002291EC:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[20], c.f[0]);
    c.budget -= 5;
    if (c.r[16].d[0] == c.r[20].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002292E8; }
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[19], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[29].w[0] + 120u), c.r[4].w[0]);  goto L_00229224; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 120u), c.r[4].w[0]);
    c.budget -= 4;
L_00229224:
    set32(c.r[21], c.r[19].w[0] + 4u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.r[3].w[0]);  if (t) { goto L_00229250; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00229250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229250u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00229250u) [[unlikely]] return; }
L_00229250:
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[20], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0]), c.r[4].w[0]);  goto L_00229274; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    c.budget -= 4;
L_00229274:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[20].w[0] + 4u);  if (t) { goto L_002292A0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002292A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002292A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002292A0u) [[unlikely]] return; }
L_002292A0:
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0]), c.r[4].w[0]);  goto L_002292BC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[20].w[0]), c.r[4].w[0]);
    c.budget -= 4;
L_002292BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_002292E4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002292E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002292E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002292E4u) [[unlikely]] return; }
L_002292E4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002292E8:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] - c.r[16].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002291E0u | kUnwind; return; } goto L_002291E0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00229320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    c.f[21] = c.f[12];
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229348u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00229348u) [[unlikely]] return; }
L_00229348:
    st32((c.r[2].w[0] + 208u), c.f[21]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 292u)));
    set32(c.r[4], 0u + 4096u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 212u), c.f[20]);
    set32(c.r[3], ld32((c.r[2].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229374u); st32((c.r[2].w[0] + 292u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00229374u) [[unlikely]] return; }
L_00229374:
    st32((c.r[2].w[0] + 248u), c.f[21]);
    st32((c.r[2].w[0] + 252u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00229390:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00229744; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 432u);  goto L_002294CC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_00229474; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00229414; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u - 1u);  goto L_002293EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0022982C; } }
L_002293E8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002293EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002293F8u); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0042(c, 141u, depth + 1u); else { c.pc = 0x002290C0u; return; } if (c.pc != 0x002293F8u) [[unlikely]] return; }
L_002293F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229400u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 140u, depth + 1u); else { c.pc = 0x00229090u; return; } if (c.pc != 0x00229400u) [[unlikely]] return; }
L_00229400:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022940Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0022940Cu) [[unlikely]] return; }
L_0022940C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229828; } }
L_00229414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022941Cu);  if (depth < kMaxDepth) unit_0042(c, 141u, depth + 1u); else { c.pc = 0x002290C0u; return; } if (c.pc != 0x0022941Cu) [[unlikely]] return; }
L_0022941C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229424u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 140u, depth + 1u); else { c.pc = 0x00229090u; return; } if (c.pc != 0x00229424u) [[unlikely]] return; }
L_00229424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022942Cu); set32(c.r[4], 0u + 360u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0022942Cu) [[unlikely]] return; }
L_0022942C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 152u), c.r[4].w[0]);  goto L_00229464; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 32015u);
    set32(c.r[7], c.r[7].w[0] - 32002u);
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022945Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x0022945Cu) [[unlikely]] return; }
L_0022945C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 152u), c.r[4].w[0]);
    c.budget -= 2;
L_00229464:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 4;
L_00229474:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00229828; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002294A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_002294C0; }
L_002294A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002294B8u); set32(c.r[5], c.r[5].w[0] - 31988u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x002294B8u) [[unlikely]] return; }
L_002294B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002293E8u | kUnwind; return; } goto L_002293E8; } }
L_002294C0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], 0u + 432u);
    c.budget -= 3;
L_002294CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002294D4u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002294D4u) [[unlikely]] return; }
L_002294D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), c.r[2].w[0]);  goto L_002294F0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002294ECu); set32(c.r[6], 0u + 19u);  if (depth < kMaxDepth) unit_0033(c, 344u, depth + 1u); else { c.pc = 0x001EEF40u; return; } if (c.pc != 0x002294ECu) [[unlikely]] return; }
L_002294EC:
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 1;
L_002294F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[5].d[0] = c.r[2].d[0] | 20562ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229508u); set32(c.r[4], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00229508u) [[unlikely]] return; }
L_00229508:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229524u); c.r[5].d[0] = c.r[2].d[0] | 17752ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00229524u) [[unlikely]] return; }
L_00229524:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00229534; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 60u);  goto L_0022954C; }
L_00229534:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229544u); set32(c.r[5], c.r[5].w[0] - 31973u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00229544u) [[unlikely]] return; }
L_00229544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002293E8u | kUnwind; return; } goto L_002293E8; } }
L_0022954C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229554u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00229554u) [[unlikely]] return; }
L_00229554:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = c.r[2].d[0] + 0ull;  goto L_0022957C; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229578u); set32(c.r[8], c.r[8].w[0] - 32016u);  if (depth < kMaxDepth) unit_0034(c, 57u, depth + 1u); else { c.pc = 0x001F08A0u; return; } if (c.pc != 0x00229578u) [[unlikely]] return; }
L_00229578:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0022957C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229590u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 397u, depth + 1u); else { c.pc = 0x001EF710u; return; } if (c.pc != 0x00229590u) [[unlikely]] return; }
L_00229590:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295A8u); c.r[5].d[0] = c.r[2].d[0] | 17473ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x002295A8u) [[unlikely]] return; }
L_002295A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295C4u); c.r[5].d[0] = c.r[2].d[0] | 21075ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x002295C4u) [[unlikely]] return; }
L_002295C4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002295D4; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 60u);  goto L_002295EC; }
L_002295D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295E4u); set32(c.r[5], c.r[5].w[0] - 31973u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x002295E4u) [[unlikely]] return; }
L_002295E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002293E8u | kUnwind; return; } goto L_002293E8; } }
L_002295EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295F4u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002295F4u) [[unlikely]] return; }
L_002295F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = c.r[2].d[0] + 0ull;  goto L_0022961C; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229618u); set32(c.r[8], c.r[8].w[0] - 32016u);  if (depth < kMaxDepth) unit_0034(c, 7u, depth + 1u); else { c.pc = 0x001F00E0u; return; } if (c.pc != 0x00229618u) [[unlikely]] return; }
L_00229618:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0022961C:
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229630u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 397u, depth + 1u); else { c.pc = 0x001EF710u; return; } if (c.pc != 0x00229630u) [[unlikely]] return; }
L_00229630:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47540000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229648u); c.r[5].d[0] = c.r[2].d[0] | 20545ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00229648u) [[unlikely]] return; }
L_00229648:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 64u);  goto L_0022966C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229664u); set32(c.r[5], c.r[5].w[0] - 31973u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00229664u) [[unlikely]] return; }
L_00229664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002293E8u | kUnwind; return; } goto L_002293E8; } }
L_0022966C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229674u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00229674u) [[unlikely]] return; }
L_00229674:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = c.r[2].d[0] + 0ull;  goto L_00229694; }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229690u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0034(c, 100u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x00229690u) [[unlikely]] return; }
L_00229690:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00229694:
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002296A8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 397u, depth + 1u); else { c.pc = 0x001EF710u; return; } if (c.pc != 0x002296A8u) [[unlikely]] return; }
L_002296A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[5].d[0] = c.r[2].d[0] | 20562ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002296C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 285u, depth + 1u); else { c.pc = 0x00202DF0u; return; } if (c.pc != 0x002296C4u) [[unlikely]] return; }
L_002296C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002296E4u); c.r[5].d[0] = c.r[2].d[0] | 17752ull;  if (depth < kMaxDepth) unit_0038(c, 285u, depth + 1u); else { c.pc = 0x00202DF0u; return; } if (c.pc != 0x002296E4u) [[unlikely]] return; }
L_002296E4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002296F4; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 92u);  goto L_0022970C; }
L_002296F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229704u); set32(c.r[5], c.r[5].w[0] - 31973u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00229704u) [[unlikely]] return; }
L_00229704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002293E8u | kUnwind; return; } goto L_002293E8; } }
L_0022970C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229714u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00229714u) [[unlikely]] return; }
L_00229714:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 236u), c.r[4].w[0]);  goto L_00229738; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229730u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 74u, depth + 1u); else { c.pc = 0x0020CA00u; return; } if (c.pc != 0x00229730u) [[unlikely]] return; }
L_00229730:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 236u), c.r[4].w[0]);
    c.budget -= 2;
L_00229738:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_00229744:
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00229828; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00229828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022977Cu); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0022977Cu) [[unlikely]] return; }
L_0022977C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 232u), c.r[2].w[0]);  goto L_00229794; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229790u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 10u, depth + 1u); else { c.pc = 0x0025C2A0u; return; } if (c.pc != 0x00229790u) [[unlikely]] return; }
L_00229790:
    st32((c.r[16].w[0] + 232u), c.r[2].w[0]);
    c.budget -= 1;
L_00229794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022979Cu); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0022979Cu) [[unlikely]] return; }
L_0022979C:
    set32(c.r[4], ld32((c.r[16].w[0] + 232u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 236u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002297ACu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 20u, depth + 1u); else { c.pc = 0x0025C3E0u; return; } if (c.pc != 0x002297ACu) [[unlikely]] return; }
L_002297AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_002297D0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002297C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002297C8u) [[unlikely]] return; }
L_002297C8:
    st32((c.r[16].w[0] + 152u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 2;
L_002297D0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[6], c.r[6].w[0] + 7008u);
    set32(c.r[7], 0u + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002297E8u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 359u, depth + 1u); else { c.pc = 0x001EF0E0u; return; } if (c.pc != 0x002297E8u) [[unlikely]] return; }
L_002297E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002297F0u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002297F0u) [[unlikely]] return; }
L_002297F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 228u), c.r[2].w[0]);  goto L_00229808; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229804u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 307u, depth + 1u); else { c.pc = 0x0025BD20u; return; } if (c.pc != 0x00229804u) [[unlikely]] return; }
L_00229804:
    st32((c.r[16].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 1;
L_00229808:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022981Cu); set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_004E(c, 318u, depth + 1u); else { c.pc = 0x0025BE60u; return; } if (c.pc != 0x0022981Cu) [[unlikely]] return; }
L_0022981C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229828u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00229828u) [[unlikely]] return; }
L_00229828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0022982C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00229840:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00229960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00229950; } }
L_00229884:
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 140u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002298A0u); set32(c.r[6], 0u + 259u);  if (depth < kMaxDepth) unit_0033(c, 325u, depth + 1u); else { c.pc = 0x001EEC50u; return; } if (c.pc != 0x002298A0u) [[unlikely]] return; }
L_002298A0:
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[28].w[0] - 31912u)));  goto L_002298B8; }
    set32(c.r[7], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_002298B8:
    set32(c.r[2], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002298D4u); set32(c.r[6], 0u + 257u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x002298D4u) [[unlikely]] return; }
L_002298D4:
    set32(c.r[2], ld32((c.r[20].w[0] + 148u)));
    c.r[7].d[0] = c.r[21].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002298F8u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x002298F8u) [[unlikely]] return; }
L_002298F8:
    set32(c.r[2], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022990Cu); set32(c.r[4], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x0022990Cu) [[unlikely]] return; }
L_0022990C:
    set32(c.r[7], ld32((c.r[20].w[0] + 184u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[2], c.r[2].w[0] + 7552u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] - 12u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229944u); set32(c.r[6], 0u + 258u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00229944u) [[unlikely]] return; }
L_00229944:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0] + 272u), c.r[3].w[0]);
    c.budget -= 3;
L_00229950:
    set32(c.r[3], ld32((c.r[20].w[0] + 184u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 148u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00229884u | kUnwind; return; } goto L_00229884; }
L_00229960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00229990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002299A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 141u, depth + 1u); else { c.pc = 0x002290C0u; return; } if (c.pc != 0x002299A4u) [[unlikely]] return; }
L_002299A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002299B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x002299B0u) [[unlikely]] return; }
L_002299B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002299C0:
    set32(c.r[29], c.r[29].w[0] - 416u);
    set32(c.r[3], 0u + 33u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 13;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0022AD1C; }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 148u)));  goto L_0022AC88; }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0022ABCC; }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 30u);  goto L_0022AABC; }
    set32(c.r[3], 0u + 23u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0022AA30; }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 148u)));  goto L_0022A99C; }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0022A938; }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 20u);  goto L_0022A83C; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[19].w[0] + 212u));  goto L_0022A5D0; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 10u);  goto L_0022A4F4; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0022A478; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0022A288; }
    set32(c.r[17], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[17].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0022A1CC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0022A0A4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00229F2C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_00229AE8; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[19].w[0] + 88u), c.r[3].w[0]);  goto L_00229AB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0022AD90; } }
L_00229AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229AC0u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00229AC0u) [[unlikely]] return; }
L_00229AC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229AD4u); c.r[5].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x00229AD4u) [[unlikely]] return; }
L_00229AD4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229AE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00229AE0u) [[unlikely]] return; }
L_00229AE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022AD8C; } }
L_00229AE8:
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 1;
L_00229AEC:
    c.r[7].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 404u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229B10u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00229B10u) [[unlikely]] return; }
L_00229B10:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 148u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00229AECu | kUnwind; return; } goto L_00229AEC; }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u - 129u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 52u)));  goto L_00229B50; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 31961u);
    st32((c.r[19].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 4;
L_00229B50:
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 52u)));  goto L_00229B64; }
    st32((c.r[19].w[0] + 68u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 2;
L_00229B64:
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 52u)));  goto L_00229B80; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 31944u);
    st32((c.r[19].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 4;
L_00229B80:
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 52u)));  goto L_00229B94; }
    st32((c.r[19].w[0] + 76u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 2;
L_00229B94:
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 52u)));  goto L_00229BB0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 31927u);
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 4;
L_00229BB0:
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 52u)));  goto L_00229BC4; }
    st32((c.r[19].w[0] + 84u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 2;
L_00229BC4:
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;  goto L_00229BD8; }
    set32(c.r[18], 0u + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 2;
L_00229BD8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;  goto L_00229BE8; }
    set32(c.r[18], 0u + 2u);
    c.r[2].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 2;
L_00229BE8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0] + 184u), 0u);  goto L_00229BF8; }
    set32(c.r[18], 0u + 3u);
    st32((c.r[19].w[0] + 184u), 0u);
    c.budget -= 2;
L_00229BF8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 156u), 0u);  if (t) { goto L_00229EE0; } }
L_00229C04:
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], ld32((c.r[3].w[0] + 64u)));  goto L_00229D7C; }
    set32(c.r[20], ld32((c.r[3].w[0] + 64u)));
    c.r[2].d[0] = 0ull < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229C2C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00229C2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00229C68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229C3Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00229C3Cu) [[unlikely]] return; }
L_00229C3C:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00229C68; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_00229C58; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229C68; } }
L_00229C58:
    set32(c.r[4], c.r[29].w[0] + 396u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229C68u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x00229C68u) [[unlikely]] return; }
L_00229C68:
    st32((c.r[29].w[0] + 396u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 392u);
    set32(c.r[5], c.r[29].w[0] + 396u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229C7Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 68u, depth + 1u); else { c.pc = 0x001E0820u; return; } if (c.pc != 0x00229C7Cu) [[unlikely]] return; }
L_00229C7C:
    set32(c.r[2], ld32((c.r[29].w[0] + 392u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_00229C8C; }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00229C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229C94u); set32(c.r[4], c.r[29].w[0] + 388u);  if (depth < kMaxDepth) unit_0042(c, 329u, depth + 1u); else { c.pc = 0x0022B0D0u; return; } if (c.pc != 0x00229C94u) [[unlikely]] return; }
L_00229C94:
    set32(c.r[2], ld32((c.r[19].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[20], c.r[2].w[0] + 160u);  if (t) { goto L_00229CC4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00229CC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229CC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00229CC4u) [[unlikely]] return; }
L_00229CC4:
    set32(c.r[3], ld32((c.r[29].w[0] + 388u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 388u)));  goto L_00229CE0; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_00229CD8:
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 388u)));
    c.budget -= 2;
L_00229CE0:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 388u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 392u)));  goto L_00229D10; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00229D0C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 388u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229D0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00229D0Cu) [[unlikely]] return; }
L_00229D0C:
    set32(c.r[3], ld32((c.r[29].w[0] + 392u)));
    c.budget -= 1;
L_00229D10:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 396u)));  goto L_00229D38; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00229D34; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 392u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229D34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00229D34u) [[unlikely]] return; }
L_00229D34:
    set32(c.r[3], ld32((c.r[29].w[0] + 396u)));
    c.budget -= 1;
L_00229D38:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 156u)));  goto L_00229D60; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00229D5C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 396u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229D5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00229D5Cu) [[unlikely]] return; }
L_00229D5C:
    set32(c.r[2], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 1;
L_00229D60:
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 164u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_00229EDC; } }
L_00229D7C:
    c.r[2].d[0] = 0ull < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229D90; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00229D90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00229DCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229DA0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00229DA0u) [[unlikely]] return; }
L_00229DA0:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00229DCC; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_00229DBC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229DCC; } }
L_00229DBC:
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229DCCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x00229DCCu) [[unlikely]] return; }
L_00229DCC:
    st32((c.r[29].w[0] + 384u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 380u);
    set32(c.r[5], c.r[29].w[0] + 384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229DE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 68u, depth + 1u); else { c.pc = 0x001E0820u; return; } if (c.pc != 0x00229DE0u) [[unlikely]] return; }
L_00229DE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_00229DF0; }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00229DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229DF8u); set32(c.r[4], c.r[29].w[0] + 376u);  if (depth < kMaxDepth) unit_0042(c, 329u, depth + 1u); else { c.pc = 0x0022B0D0u; return; } if (c.pc != 0x00229DF8u) [[unlikely]] return; }
L_00229DF8:
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[20], c.r[2].w[0] + 188u);  if (t) { goto L_00229E28; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00229E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229E28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00229E28u) [[unlikely]] return; }
L_00229E28:
    set32(c.r[3], ld32((c.r[29].w[0] + 376u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 376u)));  goto L_00229E44; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 376u)));
    c.budget -= 4;
L_00229E44:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 376u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 380u)));  goto L_00229E74; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00229E70; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 376u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229E70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00229E70u) [[unlikely]] return; }
L_00229E70:
    set32(c.r[3], ld32((c.r[29].w[0] + 380u)));
    c.budget -= 1;
L_00229E74:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 384u)));  goto L_00229E9C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00229E98; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 380u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229E98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00229E98u) [[unlikely]] return; }
L_00229E98:
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    c.budget -= 1;
L_00229E9C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 184u)));  goto L_00229EC4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00229EC0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229EC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00229EC0u) [[unlikely]] return; }
L_00229EC0:
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    c.budget -= 1;
L_00229EC4:
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 192u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 6;
L_00229EDC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00229EE0:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00229C04u | kUnwind; return; } goto L_00229C04; }
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 244u), 0u);  goto L_00229F1C; }
    set32(c.r[6], ld32((c.r[19].w[0] + 156u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229F08u); set32(c.r[5], c.r[19].w[0] + 160u);  if (depth < kMaxDepth) unit_0042(c, 148u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00229F08u) [[unlikely]] return; }
L_00229F08:
    set32(c.r[6], ld32((c.r[19].w[0] + 184u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229F18u); set32(c.r[5], c.r[19].w[0] + 188u);  if (depth < kMaxDepth) unit_0042(c, 148u, depth + 1u); else { c.pc = 0x002291B0u; return; } if (c.pc != 0x00229F18u) [[unlikely]] return; }
L_00229F18:
    st32((c.r[19].w[0] + 244u), 0u);
    c.budget -= 1;
L_00229F1C:
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
L_00229F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229F34u);  if (depth < kMaxDepth) unit_0042(c, 201u, depth + 1u); else { c.pc = 0x00229840u; return; } if (c.pc != 0x00229F34u) [[unlikely]] return; }
L_00229F34:
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 372u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229F54u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00229F54u) [[unlikely]] return; }
L_00229F54:
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 360u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229F70u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00229F70u) [[unlikely]] return; }
L_00229F70:
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229F8Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00229F8Cu) [[unlikely]] return; }
L_00229F8C:
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[4], 0u + 4096u);  goto L_00229FCC; }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 344u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - 32228u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229FC8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00229FC8u) [[unlikely]] return; }
L_00229FC8:
    set32(c.r[4], 0u + 4096u);
    c.budget -= 1;
L_00229FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229FD4u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00229FD4u) [[unlikely]] return; }
L_00229FD4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229FE8u); c.r[5].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x00229FE8u) [[unlikely]] return; }
L_00229FE8:
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    set32(c.r[3], ld32((c.r[19].w[0] + 228u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 56u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 228u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 13;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0022A02C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 164u)));  goto L_0022A028; }
    set32(c.r[16], ld32((c.r[19].w[0] + 192u)));
    c.budget -= 1;
L_0022A028:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0022A02C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0022A044; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 164u)));  goto L_0022A040; }
    set32(c.r[16], ld32((c.r[19].w[0] + 192u)));
    c.budget -= 1;
L_0022A040:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0022A044:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 232u)));  goto L_0022A064; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 200u)));  goto L_0022A060; }
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 3;
L_0022A060:
    set32(c.r[3], ld32((c.r[19].w[0] + 232u)));
    c.budget -= 1;
L_0022A064:
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[4], 0u + 17u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 68u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 24576ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A08Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0022A08Cu) [[unlikely]] return; }
L_0022A08C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[19].w[0] + 216u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0022AD8C; } }
L_0022A0A4:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.f[2] = ld32((c.r[19].w[0] + 216u));  if (t) { goto L_0022A0BC; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022A0D8; } }
L_0022A0BC:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
L_0022A0D4:
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 1;
L_0022A0D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.f[2] = ld32((c.r[19].w[0] + 216u));
    c.f[3] = ld32((c.r[3].w[0] + 27140u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[3]);
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[19].w[0] + 216u), c.f[0]);  if (t) { goto L_0022A124; } }
    c.f[0] = ld32((c.r[19].w[0] + 216u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[19].w[0] + 216u));  goto L_0022A128; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A124u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_003D(c, 37u, depth + 1u); else { c.pc = 0x00214580u; return; } if (c.pc != 0x0022A124u) [[unlikely]] return; }
L_0022A124:
    c.f[1] = ld32((c.r[19].w[0] + 216u));
    c.budget -= 1;
L_0022A128:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[19].w[0] + 216u));  goto L_0022A19C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022A198; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A164u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0022A164u) [[unlikely]] return; }
L_0022A164:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A17Cu); c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0022A17Cu) [[unlikely]] return; }
L_0022A17C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[13] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A198u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0042(c, 154u, depth + 1u); else { c.pc = 0x00229320u; return; } if (c.pc != 0x0022A198u) [[unlikely]] return; }
L_0022A198:
    c.f[0] = ld32((c.r[19].w[0] + 216u));
    c.budget -= 1;
L_0022A19C:
    c.f[12] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022AD8C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A1BCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0042(c, 154u, depth + 1u); else { c.pc = 0x00229320u; return; } if (c.pc != 0x0022A1BCu) [[unlikely]] return; }
L_0022A1BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
L_0022A1C8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0022A1CC:
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022A4F0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] - 32208u);
    set32(c.r[4], c.r[29].w[0] + 328u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A210u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0022A210u) [[unlikely]] return; }
L_0022A210:
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[29].w[0] + 316u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A22Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022A22Cu) [[unlikely]] return; }
L_0022A22C:
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] - 32192u);
    set32(c.r[4], c.r[29].w[0] + 308u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A260u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0022A260u) [[unlikely]] return; }
L_0022A260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[19].w[0] + 216u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A278u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0022A278u) [[unlikely]] return; }
L_0022A278:
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0022AD8C; } }
L_0022A288:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0022A2A0; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022A2B8; } }
L_0022A2A0:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0022A2B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[19].w[0] + 216u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[19].w[0] + 216u), c.f[1]);  if (t) { goto L_0022AD8C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[3].w[0] << 3);  goto L_0022A380; }
    set32(c.r[4], ld32((c.r[19].w[0] + 204u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 196u)));  goto L_0022A314; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0022A310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A310u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0022A310u) [[unlikely]] return; }
L_0022A310:
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 1;
L_0022A314:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[19].w[0] + 204u), c.r[3].w[0]);  goto L_0022A32C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 204u), c.r[3].w[0]);
    c.budget -= 4;
L_0022A32C:
    set32(c.r[2], ld32((c.r[19].w[0] + 200u)));
    st32((c.r[19].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 160u)));  goto L_0022A35C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0022A358; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A358u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0022A358u) [[unlikely]] return; }
L_0022A358:
    set32(c.r[3], ld32((c.r[19].w[0] + 160u)));
    c.budget -= 1;
L_0022A35C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[19].w[0] + 196u), c.r[3].w[0]);  goto L_0022A374; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 196u), c.r[3].w[0]);
    c.budget -= 4;
L_0022A374:
    set32(c.r[2], ld32((c.r[19].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 200u), c.r[2].w[0]);  if (t) { goto L_0022A3CC; } }
L_0022A380:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 188u);  if (t) { goto L_0022A3A8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0022A3A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A3A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0022A3A8u) [[unlikely]] return; }
L_0022A3A8:
    set32(c.r[3], ld32((c.r[19].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[3].w[0]);  goto L_0022A3C4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0022A3C4:
    set32(c.r[2], ld32((c.r[19].w[0] + 164u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0022A3CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_0022A424; } }
L_0022A3D4:
    set32(c.r[17], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 152u);  if (t) { goto L_0022A3FC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0022A3FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A3FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0022A3FCu) [[unlikely]] return; }
L_0022A3FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[3].w[0]);  goto L_0022A418; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0022A418:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 3;
L_0022A424:
    set32(c.r[3], ld32((c.r[19].w[0] + 156u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022A3D4u | kUnwind; return; } goto L_0022A3D4; }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A450u); st32((c.r[19].w[0] + 184u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0042(c, 201u, depth + 1u); else { c.pc = 0x00229840u; return; } if (c.pc != 0x0022A450u) [[unlikely]] return; }
L_0022A450:
    c.f[1] = ld32((c.r[19].w[0] + 216u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 216u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0022AD8C; } }
L_0022A478:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0022A490; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022A4A8; } }
L_0022A490:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0022A4A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[19].w[0] + 216u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[19].w[0] + 216u), c.f[1]);  if (t) { goto L_0022AD8C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[29].w[0] + 296u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A4E8u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022A4E8u) [[unlikely]] return; }
L_0022A4E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022A1C8u | kUnwind; return; } goto L_0022A1C8; } }
L_0022A4F0:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_0022A4F4:
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 216u), 0u);
    st32((c.r[19].w[0] + 220u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0022A518; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 212u), 0u);  if (t) { goto L_0022A51C; } }
L_0022A518:
    st32((c.r[19].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 1;
L_0022A51C:
    set32(c.r[5], ld32((c.r[19].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A528u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 312u, depth + 1u); else { c.pc = 0x0022ADB0u; return; } if (c.pc != 0x0022A528u) [[unlikely]] return; }
L_0022A528:
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[7], 0u + 1u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[6], 0u + 2u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A550u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 337u, depth + 1u); else { c.pc = 0x001EEE30u; return; } if (c.pc != 0x0022A550u) [[unlikely]] return; }
L_0022A550:
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 268u);
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[29].w[0] + 264u), c.f[20]);
    set32(c.r[7], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A580u); set32(c.r[6], 0u + 257u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022A580u) [[unlikely]] return; }
L_0022A580:
    st32((c.r[19].w[0] + 224u), 0u);
    set32(c.r[4], 0u + 19u);
    set32(c.r[3], ld32((c.r[19].w[0] + 228u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 60u), 0u);
    st32((c.r[3].w[0] + 68u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A5B0u); st32((c.r[3].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0022A5B0u) [[unlikely]] return; }
L_0022A5B0:
    c.f[12] = c.f[20];
    st32((c.r[19].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A5C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 27u, depth + 1u); else { c.pc = 0x001B81F0u; return; } if (c.pc != 0x0022A5C0u) [[unlikely]] return; }
L_0022A5C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 212u));
    c.budget -= 4;
L_0022A5D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A5DCu); c.f[20] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x0022A5DCu) [[unlikely]] return; }
L_0022A5DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);  goto L_0022A604; }
    c.f[1] = ld32((c.r[19].w[0] + 220u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022A838; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_0022A604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A60Cu);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x0022A60Cu) [[unlikely]] return; }
L_0022A60C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);  goto L_0022A63C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0022A638; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], 0u + 7u);
    st32((c.r[19].w[0] + 212u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A638u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0022A638u) [[unlikely]] return; }
L_0022A638:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 1;
L_0022A63C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A644u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x0022A644u) [[unlikely]] return; }
L_0022A644:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 212u)));  goto L_0022A680; }
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022A67C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 7u);
    st32((c.r[19].w[0] + 212u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A67Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0022A67Cu) [[unlikely]] return; }
L_0022A67C:
    set32(c.r[5], ld32((c.r[19].w[0] + 212u)));
    c.budget -= 1;
L_0022A680:
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[19].w[0] + 56u));  goto L_0022A6A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A6A0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 312u, depth + 1u); else { c.pc = 0x0022ADB0u; return; } if (c.pc != 0x0022A6A0u) [[unlikely]] return; }
L_0022A6A0:
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    c.budget -= 1;
L_0022A6A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[6], ld32((c.r[19].w[0] + 228u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[5], c.r[5].w[0] - 32336u);
    set32(c.r[3], ld32((c.r[6].w[0] + 64u)));
    set32(c.r[4], c.r[29].w[0] + 260u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 256u), c.f[20]);
    set32(c.r[7], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A6F0u); set32(c.r[6], 0u + 257u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022A6F0u) [[unlikely]] return; }
L_0022A6F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0022A70C; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022A724; } }
L_0022A70C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0022A724:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[19].w[0] + 220u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[19].w[0] + 220u), c.f[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 11;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0022A75C; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022A774; } }
L_0022A75C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0022A774:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.f[1] = ld32((c.r[19].w[0] + 224u));
    c.f[0] = 0u;
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[19].w[0] + 224u), c.f[1]);  if (t) { goto L_0022A7F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[4], c.r[29].w[0] + 252u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], 0u + 3u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 224u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 244u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + 10u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A7D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022A7D8u) [[unlikely]] return; }
L_0022A7D8:
    set32(c.r[3], ld32((c.r[19].w[0] + 244u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 244u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 228u)));  goto L_0022A7F8; }
    st32((c.r[19].w[0] + 244u), 0u);
    c.budget -= 1;
L_0022A7F4:
    set32(c.r[4], ld32((c.r[19].w[0] + 228u)));
    c.budget -= 1;
L_0022A7F8:
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_0022A810; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022A810:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022AAB8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022AD8C; } }
    st32((c.r[4].w[0] + 68u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 60u), c.f[0]);  if (t) { goto L_0022AAB8; } }
L_0022A838:
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
L_0022A83C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[19].w[0] + 88u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 228u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A860u); set32(c.r[4], ld32((c.r[19].w[0] + 240u)));  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x001B81D0u; return; } if (c.pc != 0x0022A860u) [[unlikely]] return; }
L_0022A860:
    st32((c.r[19].w[0] + 240u), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 244u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A880u); set32(c.r[6], 0u + 257u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022A880u) [[unlikely]] return; }
L_0022A880:
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[7], 0u + 5u);
    set32(c.r[4], c.r[29].w[0] + 236u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A89Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022A89Cu) [[unlikely]] return; }
L_0022A89C:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], 0u + 5u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 4;
L_0022A8AC:
    c.r[7].d[0] = c.r[18].d[0] << 32;
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 228u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A8D0u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022A8D0u) [[unlikely]] return; }
L_0022A8D0:
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    c.r[7].d[0] = c.r[20].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 220u);
    set32(c.r[6], 0u + 260u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A8F4u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022A8F4u) [[unlikely]] return; }
L_0022A8F4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 148u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022A8ACu | kUnwind; return; } goto L_0022A8AC; }
    set32(c.r[5], ld32((c.r[19].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A910u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 321u, depth + 1u); else { c.pc = 0x0022AF40u; return; } if (c.pc != 0x0022A910u) [[unlikely]] return; }
L_0022A910:
    set32(c.r[4], 0u + 15u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A920u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0022A920u) [[unlikely]] return; }
L_0022A920:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st32((c.r[19].w[0] + 216u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0022AD8C; } }
L_0022A938:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0022A950; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022A968; } }
L_0022A950:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 2;
L_0022A958:
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 4;
L_0022A968:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[19].w[0] + 216u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[19].w[0] + 216u), c.f[1]);  if (t) { goto L_0022AD8C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 4;
L_0022A99C:
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], c.r[29].w[0] + 212u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A9B8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0022A9B8u) [[unlikely]] return; }
L_0022A9B8:
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] - 32180u);
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A9ECu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0022A9ECu) [[unlikely]] return; }
L_0022A9EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A9F4u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0022A9F4u) [[unlikely]] return; }
L_0022A9F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA08u); c.r[5].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x0022AA08u) [[unlikely]] return; }
L_0022AA08:
    set32(c.r[4], 0u + 18u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA18u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0022AA18u) [[unlikely]] return; }
L_0022AA18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[19].w[0] + 216u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0022AD8C; } }
L_0022AA30:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0022AA48; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022AA60; } }
L_0022AA48:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0022AA60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[19].w[0] + 216u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[19].w[0] + 216u), c.f[1]);  if (t) { goto L_0022AD8C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u - 129u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AAB0u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0022AAB0u) [[unlikely]] return; }
L_0022AAB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022AD8C; } }
L_0022AAB8:
    set32(c.r[3], 0u + 30u);
    c.budget -= 1;
L_0022AABC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[19].w[0] + 88u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 228u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AAE0u); set32(c.r[4], ld32((c.r[19].w[0] + 240u)));  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x001B81D0u; return; } if (c.pc != 0x0022AAE0u) [[unlikely]] return; }
L_0022AAE0:
    st32((c.r[19].w[0] + 240u), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 180u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB00u); set32(c.r[6], 0u + 257u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022AB00u) [[unlikely]] return; }
L_0022AB00:
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], c.r[29].w[0] + 172u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB1Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022AB1Cu) [[unlikely]] return; }
L_0022AB1C:
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 164u);
    set32(c.r[6], 0u + 256u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB38u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022AB38u) [[unlikely]] return; }
L_0022AB38:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u + 4u);
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 3;
L_0022AB44:
    c.r[7].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 156u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB68u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022AB68u) [[unlikely]] return; }
L_0022AB68:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 148u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022AB44u | kUnwind; return; } goto L_0022AB44; }
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 148u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB94u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022AB94u) [[unlikely]] return; }
L_0022AB94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB9Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 323u, depth + 1u); else { c.pc = 0x0022AFA0u; return; } if (c.pc != 0x0022AB9Cu) [[unlikely]] return; }
L_0022AB9C:
    set32(c.r[4], 0u + 20u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ABACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0022ABACu) [[unlikely]] return; }
L_0022ABAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ABB4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_003D(c, 37u, depth + 1u); else { c.pc = 0x00214580u; return; } if (c.pc != 0x0022ABB4u) [[unlikely]] return; }
L_0022ABB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42960000u);
    st32((c.r[19].w[0] + 216u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0022AD8C; } }
L_0022ABCC:
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0022ABE4; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022ABFC; } }
L_0022ABE4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 6;
L_0022ABFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[19].w[0] + 216u));
    c.f[12] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[19].w[0] + 216u), c.f[0]);  if (t) { goto L_0022AC6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC30u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0022AC30u) [[unlikely]] return; }
L_0022AC30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC48u); c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0022AC48u) [[unlikely]] return; }
L_0022AC48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[13] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC64u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0042(c, 154u, depth + 1u); else { c.pc = 0x00229320u; return; } if (c.pc != 0x0022AC64u) [[unlikely]] return; }
L_0022AC64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022AD8C; } }
L_0022AC6C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC78u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0042(c, 154u, depth + 1u); else { c.pc = 0x00229320u; return; } if (c.pc != 0x0022AC78u) [[unlikely]] return; }
L_0022AC78:
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 4;
L_0022AC88:
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ACA4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0022ACA4u) [[unlikely]] return; }
L_0022ACA4:
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] - 32164u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ACD8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0022ACD8u) [[unlikely]] return; }
L_0022ACD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ACE0u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0022ACE0u) [[unlikely]] return; }
L_0022ACE0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ACF4u); c.r[5].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x0022ACF4u) [[unlikely]] return; }
L_0022ACF4:
    set32(c.r[4], 0u + 18u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AD04u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0022AD04u) [[unlikely]] return; }
L_0022AD04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[19].w[0] + 216u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0022AD8C; } }
L_0022AD1C:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0022AD34; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022AD4C; } }
L_0022AD34:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0022AD4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[19].w[0] + 216u));
    c.f[0] = 0u;
    c.budget -= 3;
L_0022AD58:
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[19].w[0] + 216u), c.f[1]);  if (t) { goto L_0022AD8C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u - 129u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AD8Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0022AD8Cu) [[unlikely]] return; }
L_0022AD8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0022AD90:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_0022ADB0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 32156u);
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[7], ld32((c.r[4].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE18u); set32(c.r[4], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022AE18u) [[unlikely]] return; }
L_0022AE18:
    set32(c.r[2], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 148u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE34u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022AE34u) [[unlikely]] return; }
L_0022AE34:
    set32(c.r[2], ld32((c.r[20].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0022AEE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0022AED4; } }
L_0022AE48:
    set32(c.r[2], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 140u);
    set32(c.r[17], ld32((c.r[3].w[0] + 192u)));
    set32(c.r[6], 0u + 261u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[16], c.r[17].w[0] << 2);
    c.r[7].d[0] = c.r[17].d[0] ^ c.r[19].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE78u); c.r[7].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022AE78u) [[unlikely]] return; }
L_0022AE78:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[28].w[0] - 31912u)));  goto L_0022AE90; }
    set32(c.r[7], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0022AE90:
    set32(c.r[2], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 132u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AEACu); set32(c.r[6], 0u + 257u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022AEACu) [[unlikely]] return; }
L_0022AEAC:
    set32(c.r[2], ld32((c.r[20].w[0] + 148u)));
    c.r[7].d[0] = c.r[21].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 124u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AED0u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022AED0u) [[unlikely]] return; }
L_0022AED0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0022AED4:
    set32(c.r[2], ld32((c.r[20].w[0] + 184u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022AE48u | kUnwind; return; } goto L_0022AE48; }
L_0022AEE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AEECu); set32(c.r[4], 0u + 4098u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0022AEECu) [[unlikely]] return; }
L_0022AEEC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 212u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10020000u);
    c.r[5].d[0] = c.r[2].d[0] | 4100ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AF10u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x0022AF10u) [[unlikely]] return; }
L_0022AF10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0022AF40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[7], c.r[7].w[0] - 32108u);
    set32(c.r[9], ld32((c.r[4].w[0] + 184u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], c.r[9].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AF8Cu); set32(c.r[4], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0022AF8Cu) [[unlikely]] return; }
L_0022AF8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022AFA0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 32060u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[6], 0u + 2u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AFF8u); set32(c.r[4], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0022AFF8u) [[unlikely]] return; }
L_0022AFF8:
    set32(c.r[3], ld32((c.r[19].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0022B0AC; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0022B09C; } }
L_0022B010:
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.r[20].d[0] << 32;
    set32(c.r[17], ld32((c.r[3].w[0] + 192u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[6], 0u + 261u);
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B040u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022B040u) [[unlikely]] return; }
L_0022B040:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[28].w[0] - 31912u)));  goto L_0022B058; }
    set32(c.r[7], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0022B058:
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B074u); set32(c.r[6], 0u + 257u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022B074u) [[unlikely]] return; }
L_0022B074:
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    c.r[7].d[0] = c.r[21].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B098u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0022B098u) [[unlikely]] return; }
L_0022B098:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0022B09C:
    set32(c.r[3], ld32((c.r[19].w[0] + 184u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B010u | kUnwind; return; } goto L_0022B010; }
L_0022B0AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0022B0D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022B0F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0022B0F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0022B144; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B108u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x0022B108u) [[unlikely]] return; }
L_0022B108:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0022B138; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_0022B128; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022B138; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022B128:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B138u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x0022B138u) [[unlikely]] return; }
L_0022B138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0022B148; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022B144:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_0022B148:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0022B15C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_0022B15C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022B15C:
    c.r[1].d[0] = c.r[3].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;  goto L_0022B1E8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 31910u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[2].d[0] << 32;  goto L_0022B37C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B184u); set32(c.r[4], c.r[4].w[0] - 31910u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x0022B184u) [[unlikely]] return; }
L_0022B184:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], c.r[6].w[0] - 31910u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_0022B1D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0022B1A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.r[5].w[0]);  if (t) { goto L_0022B1DC; } }
L_0022B1A4:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 60u);  goto L_0022B1CC; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B1C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x0022B1C0u) [[unlikely]] return; }
L_0022B1C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0022B1D8; } }
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 1;
L_0022B1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B1D4u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x0022B1D4u) [[unlikely]] return; }
L_0022B1D4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0022B1D8:
    st32((c.r[29].w[0] + 60u), c.r[5].w[0]);
    c.budget -= 1;
L_0022B1DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022B378; } }
    c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 1;
L_0022B1E8:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[3].sd[0] < 21ll ? 1ull : 0ull;  goto L_0022B270; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 31905u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022B378; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B20Cu); set32(c.r[4], c.r[4].w[0] - 31905u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x0022B20Cu) [[unlikely]] return; }
L_0022B20C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], c.r[6].w[0] - 31905u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_0022B260; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0022B22C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.r[5].w[0]);  if (t) { goto L_0022B264; } }
L_0022B22C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 60u);  goto L_0022B254; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B248u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x0022B248u) [[unlikely]] return; }
L_0022B248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0022B260; } }
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 1;
L_0022B254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B25Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x0022B25Cu) [[unlikely]] return; }
L_0022B25C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0022B260:
    st32((c.r[29].w[0] + 60u), c.r[5].w[0]);
    c.budget -= 1;
L_0022B264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022B378; } }
    c.r[1].d[0] = c.r[3].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 1;
L_0022B270:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[3].sd[0] < 25ll ? 1ull : 0ull;  goto L_0022B2F8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 31901u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022B378; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B294u); set32(c.r[4], c.r[4].w[0] - 31901u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x0022B294u) [[unlikely]] return; }
L_0022B294:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], c.r[6].w[0] - 31901u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_0022B2E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0022B2B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.r[5].w[0]);  if (t) { goto L_0022B2EC; } }
L_0022B2B4:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 60u);  goto L_0022B2DC; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B2D0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x0022B2D0u) [[unlikely]] return; }
L_0022B2D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0022B2E8; } }
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 1;
L_0022B2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B2E4u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x0022B2E4u) [[unlikely]] return; }
L_0022B2E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0022B2E8:
    st32((c.r[29].w[0] + 60u), c.r[5].w[0]);
    c.budget -= 1;
L_0022B2EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022B378; } }
    c.r[1].d[0] = c.r[3].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 1;
L_0022B2F8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022B378; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 31898u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022B378; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B31Cu); set32(c.r[4], c.r[4].w[0] - 31898u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x0022B31Cu) [[unlikely]] return; }
L_0022B31C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], c.r[6].w[0] - 31898u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_0022B370; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0022B33C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.r[5].w[0]);  if (t) { goto L_0022B374; } }
L_0022B33C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 60u);  goto L_0022B364; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B358u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x0022B358u) [[unlikely]] return; }
L_0022B358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0022B370; } }
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 1;
L_0022B364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B36Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x0022B36Cu) [[unlikely]] return; }
L_0022B36C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0022B370:
    st32((c.r[29].w[0] + 60u), c.r[5].w[0]);
    c.budget -= 1;
L_0022B374:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0022B378:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0022B37C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[3].w[0]);  goto L_0022B398; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0022B398:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0022B3C0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0022B3BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B3BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0022B3BCu) [[unlikely]] return; }
L_0022B3BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0022B3C0:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0022B3E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022B3F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B424u); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0022B424u) [[unlikely]] return; }
L_0022B424:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x50500000u);
    set32(c.r[3], c.r[3].w[0] + 19056u);
    c.r[2].d[0] = c.r[2].d[0] | 19777ull;
    st32((c.r[20].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 52u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 100u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 104u), 0u);
    st32((c.r[20].w[0] + 108u), 0u);
    st32((c.r[20].w[0] + 56u), 0u);
    st32((c.r[20].w[0] + 64u), 0u);
    st32((c.r[20].w[0] + 88u), 0u);
    c.budget -= 14;
L_0022B45C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 68u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B45Cu | kUnwind; return; } goto L_0022B45C; } }
    st32((c.r[20].w[0] + 92u), 0u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[20].w[0] + 60u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 96u), 0u);
    set32(c.r[2], 0u + 6u);
    st32((c.r[20].w[0] + 112u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    st32((c.r[20].w[0] + 124u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[20].w[0] + 116u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 120u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[20].w[0] + 140u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 144u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 128u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 208u), 0u);
    st32((c.r[20].w[0] + 212u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 148u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 180u), 0u);
    st32((c.r[20].w[0] + 184u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 188u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 192u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 196u), 0u);
    st32((c.r[20].w[0] + 200u), 0u);
    st32((c.r[20].w[0] + 204u), 0u);
    st32((c.r[20].w[0] + 216u), 0u);
    st32((c.r[20].w[0] + 220u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 156u), 0u);
    st32((c.r[20].w[0] + 160u), 0u);
    st32((c.r[20].w[0] + 164u), 0u);
    st32((c.r[20].w[0] + 132u), 0u);
    st32((c.r[20].w[0] + 136u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 36;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[20].w[0] + 272u), 0u);  goto L_0022B514; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B510u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_004C(c, 11u, depth + 1u); else { c.pc = 0x00250560u; return; } if (c.pc != 0x0022B510u) [[unlikely]] return; }
L_0022B510:
    st32((c.r[20].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 1;
L_0022B514:
    st32((c.r[20].w[0] + 168u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B52Cu); c.r[6].d[0] = c.r[2].d[0] & 2ull;  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0022B52Cu) [[unlikely]] return; }
L_0022B52C:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B540u); c.r[6].d[0] = c.r[2].d[0] & 128ull;  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0022B540u) [[unlikely]] return; }
L_0022B540:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B554u); c.r[6].d[0] = c.r[2].d[0] & 1024ull;  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0022B554u) [[unlikely]] return; }
L_0022B554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B55Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 308u, depth + 1u); else { c.pc = 0x0022DC40u; return; } if (c.pc != 0x0022B55Cu) [[unlikely]] return; }
L_0022B55C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B564u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0022B564u) [[unlikely]] return; }
L_0022B564:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 96u), c.r[2].w[0]);  goto L_0022B57C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B578u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 2u, depth + 1u); else { c.pc = 0x00248010u; return; } if (c.pc != 0x0022B578u) [[unlikely]] return; }
L_0022B578:
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_0022B57C:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0022B5A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022B730; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 19056u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0022B5F4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B5ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022B5ECu) [[unlikely]] return; }
L_0022B5EC:
    st32((c.r[18].w[0] + 96u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0022B5F4:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0022B5F8:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 68u);  if (t) { goto L_0022B61C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B618u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022B618u) [[unlikely]] return; }
L_0022B618:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_0022B61C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B5F8u | kUnwind; return; } goto L_0022B5F8; }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 108u)));  goto L_0022B650; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B648u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022B648u) [[unlikely]] return; }
L_0022B648:
    st32((c.r[18].w[0] + 104u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 2;
L_0022B650:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  goto L_0022B670; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B668u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022B668u) [[unlikely]] return; }
L_0022B668:
    st32((c.r[18].w[0] + 108u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 2;
L_0022B670:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 64u)));  goto L_0022B690; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B688u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022B688u) [[unlikely]] return; }
L_0022B688:
    st32((c.r[18].w[0] + 88u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 2;
L_0022B690:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 56u)));  goto L_0022B6B0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B6A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022B6A8u) [[unlikely]] return; }
L_0022B6A8:
    st32((c.r[18].w[0] + 64u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 2;
L_0022B6B0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 92u)));  goto L_0022B6D0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B6C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022B6C8u) [[unlikely]] return; }
L_0022B6C8:
    st32((c.r[18].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 2;
L_0022B6D0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 60u)));  goto L_0022B6F0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B6E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022B6E8u) [[unlikely]] return; }
L_0022B6E8:
    st32((c.r[18].w[0] + 92u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 2;
L_0022B6F0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0022B710; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B708u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022B708u) [[unlikely]] return; }
L_0022B708:
    st32((c.r[18].w[0] + 60u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0022B710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B718u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0022B718u) [[unlikely]] return; }
L_0022B718:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0022B734; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B730u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0022B730u) [[unlikely]] return; }
L_0022B730:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0022B734:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022B750:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B774u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0043(c, 130u, depth + 1u); else { c.pc = 0x0022CAF0u; return; } if (c.pc != 0x0022B774u) [[unlikely]] return; }
L_0022B774:
    set32(c.r[3], ld32((c.r[20].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  goto L_0022B7A8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 31024u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00228000u < 16384u) { entry = entries_0042[(t - 0x00228000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022B7A4:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_0022B7A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0022BE98; } }
L_0022B7B8:
    set32(c.r[3], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 4;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0022B9F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B7D0u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0022B7D0u) [[unlikely]] return; }
L_0022B7D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 104u), c.r[2].w[0]);  goto L_0022B7E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B7E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 402u, depth + 1u); else { c.pc = 0x0015B500u; return; } if (c.pc != 0x0022B7E0u) [[unlikely]] return; }
L_0022B7E0:
    st32((c.r[20].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_0022B7E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B7ECu); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0022B7ECu) [[unlikely]] return; }
L_0022B7EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 108u), c.r[2].w[0]);  goto L_0022B800; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B7FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 402u, depth + 1u); else { c.pc = 0x0015B500u; return; } if (c.pc != 0x0022B7FCu) [[unlikely]] return; }
L_0022B7FC:
    st32((c.r[20].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 1;
L_0022B800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B808u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0022B808u) [[unlikely]] return; }
L_0022B808:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], 0u + 80u);  goto L_0022B834; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B820u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0022B820u) [[unlikely]] return; }
L_0022B820:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B82Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 248u, depth + 1u); else { c.pc = 0x00166140u; return; } if (c.pc != 0x0022B82Cu) [[unlikely]] return; }
L_0022B82C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 80u);
    c.budget -= 2;
L_0022B834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B83Cu); st32((c.r[20].w[0] + 56u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0022B83Cu) [[unlikely]] return; }
L_0022B83C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], 0u + 176u);  goto L_0022B86C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B854u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0022B854u) [[unlikely]] return; }
L_0022B854:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B864u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0015D3D0u; return; } if (c.pc != 0x0022B864u) [[unlikely]] return; }
L_0022B864:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 176u);
    c.budget -= 2;
L_0022B86C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B874u); st32((c.r[20].w[0] + 64u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0022B874u) [[unlikely]] return; }
L_0022B874:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 60u), c.r[16].w[0]);  goto L_0022B8A0; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B88Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0022B88Cu) [[unlikely]] return; }
L_0022B88C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B898u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 248u, depth + 1u); else { c.pc = 0x00166140u; return; } if (c.pc != 0x0022B898u) [[unlikely]] return; }
L_0022B898:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 60u), c.r[16].w[0]);
    c.budget -= 2;
L_0022B8A0:
    set32(c.r[2], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022B8DC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022B8DC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022B8DC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022B8DC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 124u)));  goto L_0022B8F4; }
L_0022B8DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B8ECu); set32(c.r[5], c.r[5].w[0] - 30960u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0022B8ECu) [[unlikely]] return; }
L_0022B8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022B9F4; } }
L_0022B8F4:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], 0u + 3u);  goto L_0022B904; }
    set32(c.r[16], 0u + 5u);
    c.budget -= 1;
L_0022B904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0022B968; } }
L_0022B90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B914u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0022B914u) [[unlikely]] return; }
L_0022B914:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  goto L_0022B940; }
    set32(c.r[5], c.r[18].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B92Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0022B92Cu) [[unlikely]] return; }
L_0022B92C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B938u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 278u, depth + 1u); else { c.pc = 0x00166630u; return; } if (c.pc != 0x0022B938u) [[unlikely]] return; }
L_0022B938:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 2;
L_0022B940:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[2].w[0] + 68u), c.r[17].w[0]);  if (t) { goto L_0022B964; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B95Cu); set32(c.r[5], c.r[5].w[0] - 30930u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0022B95Cu) [[unlikely]] return; }
L_0022B95C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022B9F4; } }
L_0022B964:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0022B968:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B90Cu | kUnwind; return; } goto L_0022B90C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B97Cu); set32(c.r[4], 0u + 352u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0022B97Cu) [[unlikely]] return; }
L_0022B97C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 88u), c.r[2].w[0]);  goto L_0022B998; }
    set32(c.r[5], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B994u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 107u, depth + 1u); else { c.pc = 0x001589C0u; return; } if (c.pc != 0x0022B994u) [[unlikely]] return; }
L_0022B994:
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_0022B998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B9A0u); set32(c.r[4], 0u + 352u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0022B9A0u) [[unlikely]] return; }
L_0022B9A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 92u), c.r[4].w[0]);  goto L_0022B9BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B9B4u); set32(c.r[5], ld32((c.r[20].w[0] + 60u)));  if (depth < kMaxDepth) unit_000E(c, 99u, depth + 1u); else { c.pc = 0x00158890u; return; } if (c.pc != 0x0022B9B4u) [[unlikely]] return; }
L_0022B9B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 92u), c.r[4].w[0]);
    c.budget -= 2;
L_0022B9BC:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022B9D4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0022B9EC; }
L_0022B9D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B9E4u); set32(c.r[5], c.r[5].w[0] - 30900u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0022B9E4u) [[unlikely]] return; }
L_0022B9E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022B9F4; } }
L_0022B9EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_0022BE98; } }
L_0022B9F4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0022B9F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_0022BE98; } }
L_0022BA00:
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0022BE9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BA20u); set32(c.r[4], ld32((c.r[20].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 88u, depth + 1u); else { c.pc = 0x002356E0u; return; } if (c.pc != 0x0022BA20u) [[unlikely]] return; }
L_0022BA20:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0022BA48; }
    set32(c.r[5], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BA38u); set32(c.r[4], ld32((c.r[20].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 196u, depth + 1u); else { c.pc = 0x002366B0u; return; } if (c.pc != 0x0022BA38u) [[unlikely]] return; }
L_0022BA38:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BA44u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 127u, depth + 1u); else { c.pc = 0x0022CAC0u; return; } if (c.pc != 0x0022BA44u) [[unlikely]] return; }
L_0022BA44:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0022BA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BA50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 105u, depth + 1u); else { c.pc = 0x0022C890u; return; } if (c.pc != 0x0022BA50u) [[unlikely]] return; }
L_0022BA50:
    set32(c.r[3], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0022BA88; }
    set32(c.r[5], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BA6Cu); set32(c.r[4], ld32((c.r[20].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 196u, depth + 1u); else { c.pc = 0x002366B0u; return; } if (c.pc != 0x0022BA6Cu) [[unlikely]] return; }
L_0022BA6C:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BA84u); c.r[7].d[0] = c.r[2].d[0] & 1024ull;  if (depth < kMaxDepth) unit_0043(c, 63u, depth + 1u); else { c.pc = 0x0022C510u; return; } if (c.pc != 0x0022BA84u) [[unlikely]] return; }
L_0022BA84:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0022BA88:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BA94u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0022BA94u) [[unlikely]] return; }
L_0022BA94:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_0022BE98; } }
L_0022BAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BAA8u); set32(c.r[4], ld32((c.r[20].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 88u, depth + 1u); else { c.pc = 0x002356E0u; return; } if (c.pc != 0x0022BAA8u) [[unlikely]] return; }
L_0022BAA8:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0022BE98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BABCu); set32(c.r[4], ld32((c.r[20].w[0] + 52u)));  if (depth < kMaxDepth) unit_0044(c, 498u, depth + 1u); else { c.pc = 0x00233940u; return; } if (c.pc != 0x0022BABCu) [[unlikely]] return; }
L_0022BABC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022BE98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BACCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 71u, depth + 1u); else { c.pc = 0x0022C5D0u; return; } if (c.pc != 0x0022BACCu) [[unlikely]] return; }
L_0022BACC:
    st32((c.r[20].w[0] + 196u), 0u);
    set32(c.r[3], 0u + 4u);
    st32((c.r[20].w[0] + 200u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_0022BE98; } }
L_0022BAE0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BAECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022BAECu) [[unlikely]] return; }
L_0022BAEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022BE98; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[20].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_0022BB08; } }
    st32((c.r[20].w[0] + 160u), 0u);
    c.budget -= 1;
L_0022BB08:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BB14u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022BB14u) [[unlikely]] return; }
L_0022BB14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 128u)));  goto L_0022BB48; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BB28u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022BB28u) [[unlikely]] return; }
L_0022BB28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022BB44; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0022BB44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BB44u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 300u, depth + 1u); else { c.pc = 0x0022DAB0u; return; } if (c.pc != 0x0022BB44u) [[unlikely]] return; }
L_0022BB44:
    set32(c.r[2], ld32((c.r[20].w[0] + 128u)));
    c.budget -= 1;
L_0022BB48:
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 116u)));  goto L_0022BD48; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BB60u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0043(c, 169u, depth + 1u); else { c.pc = 0x0022CF30u; return; } if (c.pc != 0x0022BB60u) [[unlikely]] return; }
L_0022BB60:
    set32(c.r[2], ld32((c.r[20].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022BD44; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 272u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BB88u); st32((c.r[20].w[0] + 276u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0022BB88u) [[unlikely]] return; }
L_0022BB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BB90u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_004C(c, 15u, depth + 1u); else { c.pc = 0x002505E0u; return; } if (c.pc != 0x0022BB90u) [[unlikely]] return; }
L_0022BB90:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[20].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_0022BBA4; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 276u)));
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[3], ld32((c.r[20].w[0] + 116u)));  goto L_0022BBBC; }
L_0022BBA4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[5], ld32((c.r[20].w[0] + 276u)));  goto L_0022BC5C; }
    set32(c.r[5], ld32((c.r[20].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0022BC58; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 1;
L_0022BBBC:
    set32(c.r[4], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 124u)));  goto L_0022BBF8; }
    c.r[1].d[0] = c.r[4].sd[0] < 1501ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].d[0] = c.r[4].sd[0] < -1500ll ? 1ull : 0ull;  goto L_0022BBE4; }
    set32(c.r[2], c.r[5].w[0] + 1500u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_0022BD0C; } }
L_0022BBE4:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 272u)));  goto L_0022BD10; }
    set32(c.r[2], c.r[5].w[0] - 1500u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_0022BD0C; } }
L_0022BBF8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[1].d[0] = c.r[4].sd[0] < 4001ll ? 1ull : 0ull;  goto L_0022BC30; }
    c.r[1].d[0] = c.r[4].sd[0] < 2001ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].d[0] = c.r[4].sd[0] < -2000ll ? 1ull : 0ull;  goto L_0022BC1C; }
    set32(c.r[2], c.r[5].w[0] + 2000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_0022BD0C; } }
L_0022BC1C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022BD0C; } }
    set32(c.r[2], c.r[5].w[0] - 2000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_0022BD0C; } }
L_0022BC30:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].d[0] = c.r[4].sd[0] < -4000ll ? 1ull : 0ull;  goto L_0022BC44; }
    set32(c.r[2], c.r[5].w[0] + 4000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_0022BD0C; } }
L_0022BC44:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022BD0C; } }
    set32(c.r[2], c.r[5].w[0] - 4000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_0022BD0C; } }
L_0022BC58:
    set32(c.r[5], ld32((c.r[20].w[0] + 276u)));
    c.budget -= 1;
L_0022BC5C:
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { c.r[3].d[0] = 0ull | 65534ull;  goto L_0022BCBC; }
    set32(c.r[4], c.r[5].w[0] + 32767u);
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 32767u);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  goto L_0022BC9C; }
    c.r[1].d[0] = c.r[2].sd[0] < 4001ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022BC98; } }
    set32(c.r[2], c.r[5].w[0] - 4000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_0022BD0C; } }
L_0022BC98:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0022BC9C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022BD0C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 4001ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022BD0C; } }
    set32(c.r[2], c.r[5].w[0] + 4000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_0022BD0C; } }
L_0022BCBC:
    set32(c.r[4], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  goto L_0022BCF0; }
    c.r[1].d[0] = c.r[4].sd[0] < 4001ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022BCEC; } }
    set32(c.r[2], c.r[5].w[0] - 4000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_0022BD0C; } }
L_0022BCEC:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0022BCF0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022BD0C; } }
    c.r[1].d[0] = c.r[2].sd[0] < 4001ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022BD0C; } }
    set32(c.r[2], c.r[5].w[0] + 4000u);
    st32((c.r[20].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 2;
L_0022BD0C:
    set32(c.r[3], ld32((c.r[20].w[0] + 272u)));
    c.budget -= 1;
L_0022BD10:
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[1].d[0] = c.r[3].sd[0] < -32767ll ? 1ull : 0ull;  goto L_0022BD30; }
    set32(c.r[2], c.r[3].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] - 32767u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_0022BD44; } }
L_0022BD30:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022BD44; } }
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[20].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 3;
L_0022BD44:
    set32(c.r[3], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 1;
L_0022BD48:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0022BE40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BD5Cu); set32(c.r[4], ld32((c.r[20].w[0] + 96u)));  if (depth < kMaxDepth) unit_004A(c, 40u, depth + 1u); else { c.pc = 0x00248820u; return; } if (c.pc != 0x0022BD5Cu) [[unlikely]] return; }
L_0022BD5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022BE3C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BD70u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022BD70u) [[unlikely]] return; }
L_0022BD70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0022BE08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BD80u); set32(c.r[4], ld32((c.r[20].w[0] + 96u)));  if (depth < kMaxDepth) unit_004A(c, 37u, depth + 1u); else { c.pc = 0x002487E0u; return; } if (c.pc != 0x0022BD80u) [[unlikely]] return; }
L_0022BD80:
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022BDE8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BDA4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 63u, depth + 1u); else { c.pc = 0x0022C510u; return; } if (c.pc != 0x0022BDA4u) [[unlikely]] return; }
L_0022BDA4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BDB4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0022BDB4u) [[unlikely]] return; }
L_0022BDB4:
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BDC8u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0045(c, 312u, depth + 1u); else { c.pc = 0x00237650u; return; } if (c.pc != 0x0022BDC8u) [[unlikely]] return; }
L_0022BDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BDD0u); set32(c.r[4], ld32((c.r[20].w[0] + 96u)));  if (depth < kMaxDepth) unit_004A(c, 37u, depth + 1u); else { c.pc = 0x002487E0u; return; } if (c.pc != 0x0022BDD0u) [[unlikely]] return; }
L_0022BDD0:
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BDE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 296u, depth + 1u); else { c.pc = 0x002373F0u; return; } if (c.pc != 0x0022BDE0u) [[unlikely]] return; }
L_0022BDE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BE3C; } }
L_0022BDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BDF0u);  if (depth < kMaxDepth) unit_004A(c, 37u, depth + 1u); else { c.pc = 0x002487E0u; return; } if (c.pc != 0x0022BDF0u) [[unlikely]] return; }
L_0022BDF0:
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BE00u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 296u, depth + 1u); else { c.pc = 0x002373F0u; return; } if (c.pc != 0x0022BE00u) [[unlikely]] return; }
L_0022BE00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BE3C; } }
L_0022BE08:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BE18u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 63u, depth + 1u); else { c.pc = 0x0022C510u; return; } if (c.pc != 0x0022BE18u) [[unlikely]] return; }
L_0022BE18:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BE28u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0022BE28u) [[unlikely]] return; }
L_0022BE28:
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BE3Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0045(c, 312u, depth + 1u); else { c.pc = 0x00237650u; return; } if (c.pc != 0x0022BE3Cu) [[unlikely]] return; }
L_0022BE3C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0022BE40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BE48u);  if (depth < kMaxDepth) unit_0043(c, 146u, depth + 1u); else { c.pc = 0x0022CC50u; return; } if (c.pc != 0x0022BE48u) [[unlikely]] return; }
L_0022BE48:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BE54u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022BE54u) [[unlikely]] return; }
L_0022BE54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022BE98; } }
    c.f[2] = ld32((c.r[20].w[0] + 220u));
    c.f[1] = ld32((c.r[28].w[0] - 32328u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 220u), c.f[1]);  if (t) { goto L_0022BE98; } }
    st32((c.r[20].w[0] + 220u), c.f[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[20].w[0] + 124u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BE98u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0022BE98u) [[unlikely]] return; }
L_0022BE98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0022BE9C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0022BEC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0043(c, 57u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BEFCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0022BEFCu) [[unlikely]] return; }
L_0022BEFC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 128u)));  goto L_0022BF10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { [[clang::musttail]] return unit_0043(c, 58u, depth); } }
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 1;
L_0022BF10:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BF24u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x0022BF24u) [[unlikely]] return; }
L_0022BF24:
    c.f[12] = ld32((c.r[17].w[0] + 208u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BF30u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x0022BF30u) [[unlikely]] return; }
L_0022BF30:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BF48u); set32(c.r[4], ld32((c.r[17].w[0] + 92u)));  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x0022BF48u) [[unlikely]] return; }
L_0022BF48:
    c.f[12] = ld32((c.r[17].w[0] + 208u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BF54u); set32(c.r[4], ld32((c.r[17].w[0] + 92u)));  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x0022BF54u) [[unlikely]] return; }
L_0022BF54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BF5Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x0022BF5Cu) [[unlikely]] return; }
L_0022BF5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BF64u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x0022BF64u) [[unlikely]] return; }
L_0022BF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BF6Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x0022BF6Cu) [[unlikely]] return; }
L_0022BF6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BF74u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0022BF74u) [[unlikely]] return; }
L_0022BF74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[20] = ld32((c.r[3].w[0] + 7648u));
    c.f[21] = ld32((c.r[2].w[0] + 7652u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[22] = ld32((c.r[3].w[0] + 7656u));
    c.f[23] = ld32((c.r[2].w[0] + 7660u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BF9Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0022BF9Cu) [[unlikely]] return; }
L_0022BF9C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BFACu); set32(c.r[6], c.r[17].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0022BFACu) [[unlikely]] return; }
L_0022BFAC:
    set32(c.r[18], ld32((c.r[17].w[0] + 272u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BFB8u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0022BFB8u) [[unlikely]] return; }
L_0022BFB8:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BFC8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0022BFC8u) [[unlikely]] return; }
L_0022BFC8:
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[13] = ld32((c.r[17].w[0] + 188u));  [[clang::musttail]] return unit_0043(c, 3u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BFE0u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0022BFE0u) [[unlikely]] return; }
L_0022BFE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 7776u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 7780u));
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 7788u));
    c.budget -= 8;
    [[clang::musttail]] return unit_0043(c, 1u, depth);
}

}
