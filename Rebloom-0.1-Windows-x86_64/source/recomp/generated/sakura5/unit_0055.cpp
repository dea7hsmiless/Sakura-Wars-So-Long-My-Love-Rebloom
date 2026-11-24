#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0055[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0,
    0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20,
    0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0,
    0, 0, 0, 0, 52, 0, 53, 0, 0, 54, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0,
    0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0,
    94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0,
    0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0,
    0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 193, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 207, 0, 208,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0,
    0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0,
    0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0,
    0, 355, 0, 0, 356, 0, 0, 357, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0,
    0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 367, 0, 0, 368, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 375, 0, 376, 0, 0, 377, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0,
    0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0,
    0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0,
    0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432,
    0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0055(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00274000;
    case 2u: goto L_00274004;
    case 3u: goto L_00274020;
    case 4u: goto L_0027403C;
    case 5u: goto L_00274044;
    case 6u: goto L_0027404C;
    case 7u: goto L_00274074;
    case 8u: goto L_00274094;
    case 9u: goto L_002740C4;
    case 10u: goto L_00274100;
    case 11u: goto L_00274118;
    case 12u: goto L_00274124;
    case 13u: goto L_00274134;
    case 14u: goto L_00274154;
    case 15u: goto L_00274174;
    case 16u: goto L_0027418C;
    case 17u: goto L_0027419C;
    case 18u: goto L_002741AC;
    case 19u: goto L_002741EC;
    case 20u: goto L_002741FC;
    case 21u: goto L_00274214;
    case 22u: goto L_00274224;
    case 23u: goto L_00274234;
    case 24u: goto L_00274248;
    case 25u: goto L_00274260;
    case 26u: goto L_0027426C;
    case 27u: goto L_00274284;
    case 28u: goto L_00274298;
    case 29u: goto L_002742AC;
    case 30u: goto L_002742C0;
    case 31u: goto L_002742CC;
    case 32u: goto L_002742F8;
    case 33u: goto L_00274318;
    case 34u: goto L_00274378;
    case 35u: goto L_002743B4;
    case 36u: goto L_002743E4;
    case 37u: goto L_002743F8;
    case 38u: goto L_0027441C;
    case 39u: goto L_00274428;
    case 40u: goto L_00274434;
    case 41u: goto L_00274448;
    case 42u: goto L_0027445C;
    case 43u: goto L_00274468;
    case 44u: goto L_00274484;
    case 45u: goto L_002744A0;
    case 46u: goto L_002744CC;
    case 47u: goto L_00274538;
    case 48u: goto L_0027454C;
    case 49u: goto L_00274558;
    case 50u: goto L_00274564;
    case 51u: goto L_00274574;
    case 52u: goto L_00274590;
    case 53u: goto L_00274598;
    case 54u: goto L_002745A4;
    case 55u: goto L_002745A8;
    case 56u: goto L_002745C0;
    case 57u: goto L_002745D4;
    case 58u: goto L_00274630;
    case 59u: goto L_0027468C;
    case 60u: goto L_00274698;
    case 61u: goto L_002746B0;
    case 62u: goto L_002746D0;
    case 63u: goto L_002746E0;
    case 64u: goto L_002746F4;
    case 65u: goto L_00274750;
    case 66u: goto L_0027475C;
    case 67u: goto L_00274774;
    case 68u: goto L_00274790;
    case 69u: goto L_002747CC;
    case 70u: goto L_002747E8;
    case 71u: goto L_002747F4;
    case 72u: goto L_00274808;
    case 73u: goto L_00274820;
    case 74u: goto L_00274830;
    case 75u: goto L_00274848;
    case 76u: goto L_0027485C;
    case 77u: goto L_00274870;
    case 78u: goto L_00274884;
    case 79u: goto L_002748A0;
    case 80u: goto L_002748B0;
    case 81u: goto L_002748F8;
    case 82u: goto L_00274910;
    case 83u: goto L_00274924;
    case 84u: goto L_00274940;
    case 85u: goto L_0027499C;
    case 86u: goto L_002749A8;
    case 87u: goto L_002749C0;
    case 88u: goto L_002749E0;
    case 89u: goto L_002749F0;
    case 90u: goto L_00274A04;
    case 91u: goto L_00274A3C;
    case 92u: goto L_00274A64;
    case 93u: goto L_00274A6C;
    case 94u: goto L_00274A80;
    case 95u: goto L_00274A88;
    case 96u: goto L_00274AB0;
    case 97u: goto L_00274AC0;
    case 98u: goto L_00274AD0;
    case 99u: goto L_00274AE8;
    case 100u: goto L_00274B08;
    case 101u: goto L_00274B54;
    case 102u: goto L_00274B78;
    case 103u: goto L_00274B90;
    case 104u: goto L_00274BEC;
    case 105u: goto L_00274BF8;
    case 106u: goto L_00274C10;
    case 107u: goto L_00274C30;
    case 108u: goto L_00274C40;
    case 109u: goto L_00274C68;
    case 110u: goto L_00274C88;
    case 111u: goto L_00274CE4;
    case 112u: goto L_00274D20;
    case 113u: goto L_00274D50;
    case 114u: goto L_00274DB8;
    case 115u: goto L_00274DD4;
    case 116u: goto L_00274E38;
    case 117u: goto L_00274E94;
    case 118u: goto L_00274EE8;
    case 119u: goto L_00274F18;
    case 120u: goto L_00274F28;
    case 121u: goto L_00274F38;
    case 122u: goto L_00274F44;
    case 123u: goto L_00274F50;
    case 124u: goto L_00274F88;
    case 125u: goto L_00274FF0;
    case 126u: goto L_00275018;
    case 127u: goto L_00275080;
    case 128u: goto L_002750A0;
    case 129u: goto L_002750E4;
    case 130u: goto L_00275104;
    case 131u: goto L_00275130;
    case 132u: goto L_00275140;
    case 133u: goto L_0027515C;
    case 134u: goto L_002751B0;
    case 135u: goto L_002751C4;
    case 136u: goto L_002751F0;
    case 137u: goto L_00275200;
    case 138u: goto L_00275214;
    case 139u: goto L_00275234;
    case 140u: goto L_00275290;
    case 141u: goto L_002752A4;
    case 142u: goto L_002752C0;
    case 143u: goto L_00275300;
    case 144u: goto L_0027532C;
    case 145u: goto L_00275338;
    case 146u: goto L_00275350;
    case 147u: goto L_00275370;
    case 148u: goto L_00275380;
    case 149u: goto L_002753A4;
    case 150u: goto L_00275448;
    case 151u: goto L_00275458;
    case 152u: goto L_002754D0;
    case 153u: goto L_002754E4;
    case 154u: goto L_002754F0;
    case 155u: goto L_00275510;
    case 156u: goto L_0027553C;
    case 157u: goto L_0027554C;
    case 158u: goto L_00275558;
    case 159u: goto L_00275564;
    case 160u: goto L_0027559C;
    case 161u: goto L_002755A8;
    case 162u: goto L_002755C0;
    case 163u: goto L_002755E4;
    case 164u: goto L_00275600;
    case 165u: goto L_00275688;
    case 166u: goto L_002756A0;
    case 167u: goto L_002756B8;
    case 168u: goto L_00275714;
    case 169u: goto L_00275740;
    case 170u: goto L_00275820;
    case 171u: goto L_00275834;
    case 172u: goto L_00275848;
    case 173u: goto L_00275858;
    case 174u: goto L_00275868;
    case 175u: goto L_0027587C;
    case 176u: goto L_00275898;
    case 177u: goto L_002758C8;
    case 178u: goto L_002758F8;
    case 179u: goto L_00275904;
    case 180u: goto L_00275948;
    case 181u: goto L_0027595C;
    case 182u: goto L_00275970;
    case 183u: goto L_00275980;
    case 184u: goto L_0027599C;
    case 185u: goto L_002759C8;
    case 186u: goto L_002759E4;
    case 187u: goto L_002759F8;
    case 188u: goto L_00275A08;
    case 189u: goto L_00275A10;
    case 190u: goto L_00275A28;
    case 191u: goto L_00275A64;
    case 192u: goto L_00275A70;
    case 193u: goto L_00275A78;
    case 194u: goto L_00275A84;
    case 195u: goto L_00275AB0;
    case 196u: goto L_00275AC4;
    case 197u: goto L_00275AE4;
    case 198u: goto L_00275B10;
    case 199u: goto L_00275B48;
    case 200u: goto L_00275B84;
    case 201u: goto L_00275B98;
    case 202u: goto L_00275BAC;
    case 203u: goto L_00275BB8;
    case 204u: goto L_00275C24;
    case 205u: goto L_00275C54;
    case 206u: goto L_00275C60;
    case 207u: goto L_00275C74;
    case 208u: goto L_00275C7C;
    case 209u: goto L_00275CB4;
    case 210u: goto L_00275CF0;
    case 211u: goto L_00275CF8;
    case 212u: goto L_00275D38;
    case 213u: goto L_00275D74;
    case 214u: goto L_00275DA4;
    case 215u: goto L_00275DB4;
    case 216u: goto L_00275DE0;
    case 217u: goto L_00275E2C;
    case 218u: goto L_00275E44;
    case 219u: goto L_00275E68;
    case 220u: goto L_00275EB4;
    case 221u: goto L_00275EBC;
    case 222u: goto L_00275ED8;
    case 223u: goto L_00275F14;
    case 224u: goto L_00275F1C;
    case 225u: goto L_00275F6C;
    case 226u: goto L_00275FA8;
    case 227u: goto L_00275FB8;
    case 228u: goto L_00276054;
    case 229u: goto L_00276080;
    case 230u: goto L_0027608C;
    case 231u: goto L_002760AC;
    case 232u: goto L_0027610C;
    case 233u: goto L_00276180;
    case 234u: goto L_002761A0;
    case 235u: goto L_00276214;
    case 236u: goto L_00276224;
    case 237u: goto L_00276250;
    case 238u: goto L_00276260;
    case 239u: goto L_00276290;
    case 240u: goto L_002762B4;
    case 241u: goto L_002762D4;
    case 242u: goto L_0027634C;
    case 243u: goto L_00276370;
    case 244u: goto L_00276394;
    case 245u: goto L_002763C4;
    case 246u: goto L_00276454;
    case 247u: goto L_0027647C;
    case 248u: goto L_00276504;
    case 249u: goto L_00276538;
    case 250u: goto L_00276548;
    case 251u: goto L_0027655C;
    case 252u: goto L_00276584;
    case 253u: goto L_002765C0;
    case 254u: goto L_002765E4;
    case 255u: goto L_002765F8;
    case 256u: goto L_00276600;
    case 257u: goto L_00276640;
    case 258u: goto L_0027665C;
    case 259u: goto L_00276674;
    case 260u: goto L_002766CC;
    case 261u: goto L_002766DC;
    case 262u: goto L_002766F4;
    case 263u: goto L_00276708;
    case 264u: goto L_00276720;
    case 265u: goto L_00276730;
    case 266u: goto L_002767E4;
    case 267u: goto L_00276810;
    case 268u: goto L_0027684C;
    case 269u: goto L_00276880;
    case 270u: goto L_002768A0;
    case 271u: goto L_002768B0;
    case 272u: goto L_002768D0;
    case 273u: goto L_002768E8;
    case 274u: goto L_00276914;
    case 275u: goto L_0027691C;
    case 276u: goto L_00276960;
    case 277u: goto L_00276980;
    case 278u: goto L_002769B0;
    case 279u: goto L_00276A0C;
    case 280u: goto L_00276A18;
    case 281u: goto L_00276A30;
    case 282u: goto L_00276A50;
    case 283u: goto L_00276A60;
    case 284u: goto L_00276A70;
    case 285u: goto L_00276A84;
    case 286u: goto L_00276ABC;
    case 287u: goto L_00276AC8;
    case 288u: goto L_00276ADC;
    case 289u: goto L_00276B28;
    case 290u: goto L_00276B34;
    case 291u: goto L_00276B4C;
    case 292u: goto L_00276B58;
    case 293u: goto L_00276B94;
    case 294u: goto L_00276BA8;
    case 295u: goto L_00276BC0;
    case 296u: goto L_00276BE0;
    case 297u: goto L_00276BEC;
    case 298u: goto L_00276BF4;
    case 299u: goto L_00276C10;
    case 300u: goto L_00276C34;
    case 301u: goto L_00276C40;
    case 302u: goto L_00276C4C;
    case 303u: goto L_00276C54;
    case 304u: goto L_00276C70;
    case 305u: goto L_00276C8C;
    case 306u: goto L_00276C94;
    case 307u: goto L_00276CB0;
    case 308u: goto L_00276D00;
    case 309u: goto L_00276D3C;
    case 310u: goto L_00276D70;
    case 311u: goto L_00276D80;
    case 312u: goto L_00276D90;
    case 313u: goto L_00276DB4;
    case 314u: goto L_00276DD4;
    case 315u: goto L_00276E68;
    case 316u: goto L_00276E9C;
    case 317u: goto L_00276EFC;
    case 318u: goto L_00276F24;
    case 319u: goto L_00276F60;
    case 320u: goto L_00276FB8;
    case 321u: goto L_00276FE4;
    case 322u: goto L_0027701C;
    case 323u: goto L_00277054;
    case 324u: goto L_0027705C;
    case 325u: goto L_0027706C;
    case 326u: goto L_002770B4;
    case 327u: goto L_002770D8;
    case 328u: goto L_00277100;
    case 329u: goto L_00277124;
    case 330u: goto L_00277138;
    case 331u: goto L_00277188;
    case 332u: goto L_002771B4;
    case 333u: goto L_002771C8;
    case 334u: goto L_002771EC;
    case 335u: goto L_002771F4;
    case 336u: goto L_00277214;
    case 337u: goto L_00277250;
    case 338u: goto L_0027726C;
    case 339u: goto L_00277274;
    case 340u: goto L_002772C0;
    case 341u: goto L_00277300;
    case 342u: goto L_0027730C;
    case 343u: goto L_0027731C;
    case 344u: goto L_00277328;
    case 345u: goto L_00277334;
    case 346u: goto L_00277344;
    case 347u: goto L_00277350;
    case 348u: goto L_00277380;
    case 349u: goto L_002773BC;
    case 350u: goto L_002773DC;
    case 351u: goto L_00277428;
    case 352u: goto L_00277438;
    case 353u: goto L_00277468;
    case 354u: goto L_00277474;
    case 355u: goto L_00277484;
    case 356u: goto L_00277490;
    case 357u: goto L_0027749C;
    case 358u: goto L_002774AC;
    case 359u: goto L_002774B8;
    case 360u: goto L_002774DC;
    case 361u: goto L_00277514;
    case 362u: goto L_0027755C;
    case 363u: goto L_00277578;
    case 364u: goto L_00277594;
    case 365u: goto L_002775B4;
    case 366u: goto L_002775C0;
    case 367u: goto L_002775C8;
    case 368u: goto L_002775D4;
    case 369u: goto L_002775DC;
    case 370u: goto L_002775F0;
    case 371u: goto L_0027761C;
    case 372u: goto L_0027763C;
    case 373u: goto L_00277660;
    case 374u: goto L_00277680;
    case 375u: goto L_0027768C;
    case 376u: goto L_00277694;
    case 377u: goto L_002776A0;
    case 378u: goto L_002776A8;
    case 379u: goto L_002776BC;
    case 380u: goto L_002776D0;
    case 381u: goto L_00277740;
    case 382u: goto L_00277754;
    case 383u: goto L_00277770;
    case 384u: goto L_00277784;
    case 385u: goto L_002777A0;
    case 386u: goto L_002777D0;
    case 387u: goto L_0027783C;
    case 388u: goto L_002778B4;
    case 389u: goto L_002778C0;
    case 390u: goto L_002778CC;
    case 391u: goto L_002778E0;
    case 392u: goto L_002778F4;
    case 393u: goto L_00277924;
    case 394u: goto L_00277938;
    case 395u: goto L_00277954;
    case 396u: goto L_00277960;
    case 397u: goto L_00277990;
    case 398u: goto L_002779EC;
    case 399u: goto L_002779F8;
    case 400u: goto L_00277A10;
    case 401u: goto L_00277A30;
    case 402u: goto L_00277A40;
    case 403u: goto L_00277A54;
    case 404u: goto L_00277A90;
    case 405u: goto L_00277B1C;
    case 406u: goto L_00277B30;
    case 407u: goto L_00277B50;
    case 408u: goto L_00277B6C;
    case 409u: goto L_00277B78;
    case 410u: goto L_00277B90;
    case 411u: goto L_00277BB0;
    case 412u: goto L_00277BBC;
    case 413u: goto L_00277BD0;
    case 414u: goto L_00277BE0;
    case 415u: goto L_00277BF4;
    case 416u: goto L_00277C20;
    case 417u: goto L_00277CF4;
    case 418u: goto L_00277D0C;
    case 419u: goto L_00277D20;
    case 420u: goto L_00277D78;
    case 421u: goto L_00277D94;
    case 422u: goto L_00277DC4;
    case 423u: goto L_00277E28;
    case 424u: goto L_00277E48;
    case 425u: goto L_00277EA8;
    case 426u: goto L_00277EC8;
    case 427u: goto L_00277ED8;
    case 428u: goto L_00277EF0;
    case 429u: goto L_00277F20;
    case 430u: goto L_00277F4C;
    case 431u: goto L_00277F70;
    case 432u: goto L_00277F7C;
    case 433u: goto L_00277F88;
    case 434u: goto L_00277F9C;
    case 435u: goto L_00277FAC;
    case 436u: goto L_00277FBC;
    case 437u: goto L_00277FC8;
    default: bad_entry(c, 0x00274000u); return;
    }
L_00274000:
    set32(c.r[5], 0u + 35u);
    c.budget -= 1;
L_00274004:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00274014; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_00274014:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274020u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x00274020u) [[unlikely]] return; }
L_00274020:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027403Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0027403Cu) [[unlikely]] return; }
L_0027403C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274044u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 457u, depth + 1u); else { c.pc = 0x00273D20u; return; } if (c.pc != 0x00274044u) [[unlikely]] return; }
L_00274044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002745A4; } }
L_0027404C:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002745A4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5088u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00274000u < 16384u) { entry = entries_0055[(t - 0x00274000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00274074:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], 0u + 15u);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[7], 0u + 10800u);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274094u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 361u, depth + 1u); else { c.pc = 0x002A7D10u; return; } if (c.pc != 0x00274094u) [[unlikely]] return; }
L_00274094:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002740A8; }
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 344u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
L_002740A8:
    set32(c.r[6], 0u + 16u);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[7], 0u + 10800u);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002740C4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 361u, depth + 1u); else { c.pc = 0x002A7D10u; return; } if (c.pc != 0x002740C4u) [[unlikely]] return; }
L_002740C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_002740D8; }
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 344u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
L_002740D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002740E4; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_002740E4:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 34u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274100u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x00274100u) [[unlikely]] return; }
L_00274100:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.f[12] = ld32((c.r[2].w[0] + 440u));
    c.f[13] = ld32((c.r[2].w[0] + 444u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274118u); set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));  if (depth < kMaxDepth) unit_0056(c, 389u, depth + 1u); else { c.pc = 0x0027B3D0u; return; } if (c.pc != 0x00274118u) [[unlikely]] return; }
L_00274118:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_00274124:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274134u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_005C(c, 46u, depth + 1u); else { c.pc = 0x00290810u; return; } if (c.pc != 0x00274134u) [[unlikely]] return; }
L_00274134:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_002742D0; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002742CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274154u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00274154u) [[unlikely]] return; }
L_00274154:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 100u), c.r[4].w[0]);  goto L_0027417C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274174u); set32(c.r[6], c.r[6].w[0] - 5112u);  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x00274174u) [[unlikely]] return; }
L_00274174:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 100u), c.r[4].w[0]);
    c.budget -= 2;
L_0027417C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002745A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027418Cu);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0027418Cu) [[unlikely]] return; }
L_0027418C:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027419Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x0027419Cu) [[unlikely]] return; }
L_0027419C:
    st32((c.r[17].w[0] + 104u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 4;
L_002741AC:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002745A4; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002745A4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002741ECu); set32(c.r[5], 0u + 10800u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002741ECu) [[unlikely]] return; }
L_002741EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002741FCu); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002741FCu) [[unlikely]] return; }
L_002741FC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 76u)));  goto L_0027423C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274214u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00274214u) [[unlikely]] return; }
L_00274214:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274224u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00274224u) [[unlikely]] return; }
L_00274224:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274234u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 56u, depth + 1u); else { c.pc = 0x00208610u; return; } if (c.pc != 0x00274234u) [[unlikely]] return; }
L_00274234:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 2;
L_0027423C:
    set32(c.r[4], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274248u); st32((c.r[2].w[0] + 592u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x00274248u) [[unlikely]] return; }
L_00274248:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 76u)));  goto L_00274274; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274260u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00274260u) [[unlikely]] return; }
L_00274260:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027426Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x0027426Cu) [[unlikely]] return; }
L_0027426C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 2;
L_00274274:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274284u); st32((c.r[2].w[0] + 604u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00274284u) [[unlikely]] return; }
L_00274284:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 604u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274298u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x00274298u) [[unlikely]] return; }
L_00274298:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 592u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002742ACu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_003A(c, 317u, depth + 1u); else { c.pc = 0x0020B090u; return; } if (c.pc != 0x002742ACu) [[unlikely]] return; }
L_002742AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 604u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002742C0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_003A(c, 323u, depth + 1u); else { c.pc = 0x0020B310u; return; } if (c.pc != 0x002742C0u) [[unlikely]] return; }
L_002742C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_002742CC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002742D0:
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 76u)));  goto L_002742FC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002742F8u); set32(c.r[5], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_006C(c, 345u, depth + 1u); else { c.pc = 0x002D3A70u; return; } if (c.pc != 0x002742F8u) [[unlikely]] return; }
L_002742F8:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002742FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00274310; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00274368; } }
L_00274310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274318u); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00274318u) [[unlikely]] return; }
L_00274318:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00274338; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00274348; } }
L_00274338:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00274348:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00274368; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00274360; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00274360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274368; } }
L_00274368:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], 0u + 50u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274378u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00274378u) [[unlikely]] return; }
L_00274378:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_0027438C; }
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 344u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
L_0027438C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00274398; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_00274398:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[6], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 35u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002743B4u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x002743B4u) [[unlikely]] return; }
L_002743B4:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 608u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 1492u);  if (t) { goto L_002743D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 164u)));  if (t) { goto L_002743D4; } }
L_002743D0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002743D4:
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.f[12] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002743E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 367u, depth + 1u); else { c.pc = 0x002C3F00u; return; } if (c.pc != 0x002743E4u) [[unlikely]] return; }
L_002743E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], 0u + 244u);
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002743F8u); set32(c.r[16], c.r[2].w[0] + 281u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002743F8u) [[unlikely]] return; }
L_002743F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  goto L_00274420; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027440C; } }
    set32(c.r[6], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_0027440C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027441Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 153u, depth + 1u); else { c.pc = 0x002C2090u; return; } if (c.pc != 0x0027441Cu) [[unlikely]] return; }
L_0027441C:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_00274420:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_00274428:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274434u); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x00274434u) [[unlikely]] return; }
L_00274434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002745A4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_00274448:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 51u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027445Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x0027445Cu) [[unlikely]] return; }
L_0027445C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274468u); set32(c.r[5], 0u + 51u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x00274468u) [[unlikely]] return; }
L_00274468:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_00274488; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274484u); set32(c.r[5], ld32((c.r[2].w[0] + 144u)));  if (depth < kMaxDepth) unit_0058(c, 429u, depth + 1u); else { c.pc = 0x00283F70u; return; } if (c.pc != 0x00274484u) [[unlikely]] return; }
L_00274484:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_00274488:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00274494; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_00274494:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002744A0u); set32(c.r[5], 0u + 35u);  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x002744A0u) [[unlikely]] return; }
L_002744A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002744B0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_002744B0:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 36u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002744CCu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x002744CCu) [[unlikely]] return; }
L_002744CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 116u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 122u)));
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_002744F4; }
L_002744F4:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274538u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x00274538u) [[unlikely]] return; }
L_00274538:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027454Cu); set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));  if (depth < kMaxDepth) unit_0056(c, 389u, depth + 1u); else { c.pc = 0x0027B3D0u; return; } if (c.pc != 0x0027454Cu) [[unlikely]] return; }
L_0027454C:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_00274558:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274564u); set32(c.r[5], 0u + 51u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x00274564u) [[unlikely]] return; }
L_00274564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002745A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274574u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 12u, depth + 1u); else { c.pc = 0x0028C120u; return; } if (c.pc != 0x00274574u) [[unlikely]] return; }
L_00274574:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274590u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x00274590u) [[unlikely]] return; }
L_00274590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274598u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 457u, depth + 1u); else { c.pc = 0x00273D20u; return; } if (c.pc != 0x00274598u) [[unlikely]] return; }
L_00274598:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_002745A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002745A8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002745C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002745D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 194u, depth + 1u); else { c.pc = 0x00289A80u; return; } if (c.pc != 0x002745D4u) [[unlikely]] return; }
L_002745D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0027461C; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0027460C; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0027460C:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_0027461C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00274630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002746B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22448u);
    set32(c.r[2], c.r[2].w[0] + 22504u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00274698; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027468Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0027468Cu) [[unlikely]] return; }
L_0027468C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274698u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00274698u) [[unlikely]] return; }
L_00274698:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002746B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002746B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002746B0u) [[unlikely]] return; }
L_002746B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002746B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002746D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00274630u | kUnwind; return; } goto L_00274630; }
L_002746E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002746F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x002746F4u) [[unlikely]] return; }
L_002746F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 22544u);
    set32(c.r[3], c.r[3].w[0] + 22600u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44520000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21831ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 13;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 504u)));  goto L_0027472C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027472C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274750u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00274750u) [[unlikely]] return; }
L_00274750:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027475Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_005A(c, 335u, depth + 1u); else { c.pc = 0x0028B6D0u; return; } if (c.pc != 0x0027475Cu) [[unlikely]] return; }
L_0027475C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274774u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x00274774u) [[unlikely]] return; }
L_00274774:
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 546u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274790u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x00274790u) [[unlikely]] return; }
L_00274790:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 72u)));  goto L_002747D0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002747B0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_002747B0:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 23u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002747CCu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x002747CCu) [[unlikely]] return; }
L_002747CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_002747D0:
    c.r[2].d[0] = c.r[2].d[0] & 257ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002747EC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002747E8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x002747E8u) [[unlikely]] return; }
L_002747E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002747EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002747F4u);  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x002747F4u) [[unlikely]] return; }
L_002747F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00274808u); set32(c.r[5], 0u + 39u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00274808u) [[unlikely]] return; }
L_00274808:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00274820:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_005A(c, 191u, depth); }
L_00274830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274848u); set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 82u, depth + 1u); else { c.pc = 0x0028CF00u; return; } if (c.pc != 0x00274848u) [[unlikely]] return; }
L_00274848:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027485Cu); set32(c.r[5], 0u + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027485Cu) [[unlikely]] return; }
L_0027485C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00274870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274884u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x00274884u) [[unlikely]] return; }
L_00274884:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002748FC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002748A0u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x002748A0u) [[unlikely]] return; }
L_002748A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002748F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002748B0u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002748B0u) [[unlikely]] return; }
L_002748B0:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002748F0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 176u)));  goto L_002748DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002748E4; } }
L_002748DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_002748E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002748F8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002748F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002748F8u);  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x002748F8u) [[unlikely]] return; }
L_002748F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002748FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00274910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274924u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x00274924u) [[unlikely]] return; }
L_00274924:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00274940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002749C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22544u);
    set32(c.r[2], c.r[2].w[0] + 22600u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002749A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027499Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0027499Cu) [[unlikely]] return; }
L_0027499C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002749A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002749A8u) [[unlikely]] return; }
L_002749A8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002749C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002749C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002749C0u) [[unlikely]] return; }
L_002749C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002749C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002749E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00274940u | kUnwind; return; } goto L_00274940; }
L_002749F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x00274A04u) [[unlikely]] return; }
L_00274A04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 22640u);
    set32(c.r[3], c.r[3].w[0] + 22696u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x59410000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21587ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A3Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00274A3Cu) [[unlikely]] return; }
L_00274A3C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 608u)));
    c.f[1] = ld32((c.r[2].w[0] + 2032u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00274A94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A64u); set32(c.r[4], ld32((c.r[3].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x00274A64u) [[unlikely]] return; }
L_00274A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A6Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00274A6Cu) [[unlikely]] return; }
L_00274A6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[2].w[0] + 496u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A80u); set32(c.r[4], ld32((c.r[2].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 154u, depth + 1u); else { c.pc = 0x00158F30u; return; } if (c.pc != 0x00274A80u) [[unlikely]] return; }
L_00274A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A88u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00274A88u) [[unlikely]] return; }
L_00274A88:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[2].w[0] + 504u), c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00274A94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00274AB0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_005A(c, 191u, depth); }
L_00274AC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00274AD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274AE8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x00274AE8u) [[unlikely]] return; }
L_00274AE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00274B7C; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B08u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00274B08u) [[unlikely]] return; }
L_00274B08:
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00274B1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00274B30; } }
L_00274B1C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_00274B30; }
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 3;
L_00274B30:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00274B54; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00274B54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00274B54u) [[unlikely]] return; }
L_00274B54:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00274B78; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B78u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00289AC0u; return; } if (c.pc != 0x00274B78u) [[unlikely]] return; }
L_00274B78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00274B7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00274B90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00274C10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22640u);
    set32(c.r[2], c.r[2].w[0] + 22696u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00274BF8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274BECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00274BECu) [[unlikely]] return; }
L_00274BEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274BF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00274BF8u) [[unlikely]] return; }
L_00274BF8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00274C14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00274C10u) [[unlikely]] return; }
L_00274C10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00274C14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00274C30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00274B90u | kUnwind; return; } goto L_00274B90; }
L_00274C40:
    set32(c.r[29], c.r[29].w[0] - 496u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[21]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C68u); st32((c.r[29].w[0] + 16u), c.f[20]);  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x00274C68u) [[unlikely]] return; }
L_00274C68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22736u);
    set32(c.r[2], c.r[2].w[0] + 22792u);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C88u); st32((c.r[18].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 121u, depth + 1u); else { c.pc = 0x00181080u; return; } if (c.pc != 0x00274C88u) [[unlikely]] return; }
L_00274C88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x504D0000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 21834ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_00274CBC; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00274CAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_00274CD0; } }
L_00274CAC:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.f[0] = ld32((c.r[2].w[0] + 452u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 140u), c.f[0]);  if (t) { goto L_00274CCC; } }
L_00274CBC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.f[0] = ld32((c.r[2].w[0] + 456u));
    st32((c.r[18].w[0] + 140u), c.f[0]);
    c.budget -= 4;
L_00274CCC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00274CD0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[5], c.r[3].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274CE4u); set32(c.r[6], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00274CE4u) [[unlikely]] return; }
L_00274CE4:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[16] = c.f[12];
    c.f[17] = c.f[12];
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[3]);
    st32((c.r[29].w[0]), 0u);
    c.f[18] = c.f[12];
    c.f[13] = ld32((c.r[2].w[0] + 192u));
    set32(c.r[16], c.r[2].w[0] + 192u);
    c.f[14] = ld32((c.r[2].w[0] + 196u));
    c.f[15] = ld32((c.r[2].w[0] + 200u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D20u); c.f[19] = c.f[12];  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x00274D20u) [[unlikely]] return; }
L_00274D20:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { st32((c.r[29].w[0]), 0u);  goto L_00274E40; }
    c.f[20] = ld32((c.r[29].w[0] + 484u));
    c.f[5] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[5]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = c.f[20];  goto L_00274D48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), 0u);  if (t) { goto L_00274D64; } }
L_00274D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D50u);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x00274D50u) [[unlikely]] return; }
L_00274D50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[5] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0]), 0u);
    c.budget -= 5;
L_00274D64:
    c.f[16] = 0u;
    c.f[1] = ld32((c.r[16].w[0]));
    set32(c.r[4], c.r[29].w[0] + 216u);
    c.f[3] = ld32((c.r[28].w[0] - 32148u));
    c.f[2] = ld32((c.r[29].w[0] + 480u));
    c.facc = fp::ee::add(c.fcr31, c.f[16], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[13] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.f[4] = ld32((c.r[18].w[0] + 140u));
    c.facc = fp::ee::add(c.fcr31, c.f[16], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[3]);
    c.f[14] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[12] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    c.f[21] = ld32((c.r[29].w[0] + 488u));
    c.facc = fp::ee::add(c.fcr31, c.f[16], c.f[0]);
    c.f[17] = c.f[16];
    c.f[18] = c.f[16];
    c.f[19] = c.f[16];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274DB8u); c.f[15] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[3]);  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x00274DB8u) [[unlikely]] return; }
L_00274DB8:
    c.f[5] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[5]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00274DE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274DD4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x00274DD4u) [[unlikely]] return; }
L_00274DD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[5] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 4;
L_00274DE4:
    st32((c.r[29].w[0]), 0u);
    c.f[16] = 0u;
    c.f[1] = ld32((c.r[16].w[0]));
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.f[2] = ld32((c.r[29].w[0] + 480u));
    c.f[3] = ld32((c.r[28].w[0] - 32144u));
    c.facc = fp::ee::add(c.fcr31, c.f[16], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[13] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.f[4] = ld32((c.r[18].w[0] + 140u));
    c.facc = fp::ee::add(c.fcr31, c.f[16], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[3]);
    c.f[14] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[12] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[16], c.f[0]);
    c.f[17] = c.f[16];
    c.f[18] = c.f[16];
    c.f[19] = c.f[16];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274E38u); c.f[15] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[3]);  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x00274E38u) [[unlikely]] return; }
L_00274E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_00274EEC; } }
L_00274E40:
    c.f[16] = 0u;
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[3] = ld32((c.r[28].w[0] - 32148u));
    set32(c.r[4], c.r[29].w[0] + 216u);
    c.f[2] = ld32((c.r[29].w[0] + 480u));
    c.facc = fp::ee::add(c.fcr31, c.f[16], c.f[0]);
    c.f[4] = ld32((c.r[18].w[0] + 140u));
    c.f[13] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[12] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    c.f[20] = ld32((c.r[29].w[0] + 488u));
    c.facc = fp::ee::add(c.fcr31, c.f[16], c.f[0]);
    c.f[14] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[17] = c.f[16];
    c.f[18] = c.f[16];
    c.f[19] = c.f[16];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274E94u); c.f[15] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[3]);  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x00274E94u) [[unlikely]] return; }
L_00274E94:
    st32((c.r[29].w[0]), 0u);
    c.f[16] = 0u;
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = ld32((c.r[29].w[0] + 480u));
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.f[3] = ld32((c.r[28].w[0] - 32144u));
    c.facc = fp::ee::add(c.fcr31, c.f[16], c.f[0]);
    c.f[4] = ld32((c.r[18].w[0] + 140u));
    c.f[13] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[12] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[16], c.f[0]);
    c.f[14] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[17] = c.f[16];
    c.f[18] = c.f[16];
    c.f[19] = c.f[16];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274EE8u); c.f[15] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[3]);  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x00274EE8u) [[unlikely]] return; }
L_00274EE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00274EEC:
    c.f[16] = 0u;
    set32(c.r[4], c.r[29].w[0] + 392u);
    c.f[17] = c.f[16];
    st32((c.r[29].w[0]), 0u);
    c.f[18] = c.f[16];
    c.f[12] = ld32((c.r[18].w[0] + 140u));
    c.f[13] = ld32((c.r[2].w[0] + 128u));
    c.f[14] = ld32((c.r[2].w[0] + 132u));
    c.f[15] = ld32((c.r[2].w[0] + 136u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F18u); c.f[19] = c.f[16];  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x00274F18u) [[unlikely]] return; }
L_00274F18:
    set32(c.r[4], c.r[18].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F28u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0018(c, 130u, depth + 1u); else { c.pc = 0x00181230u; return; } if (c.pc != 0x00274F28u) [[unlikely]] return; }
L_00274F28:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F38u); set32(c.r[5], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_006C(c, 345u, depth + 1u); else { c.pc = 0x002D3A70u; return; } if (c.pc != 0x00274F38u) [[unlikely]] return; }
L_00274F38:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F44u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00274F44u) [[unlikely]] return; }
L_00274F44:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F50u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00274F50u) [[unlikely]] return; }
L_00274F50:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00274FF8; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00274F80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00274FD8; } }
L_00274F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F88u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00274F88u) [[unlikely]] return; }
L_00274F88:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00274FA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00274FB8; } }
L_00274FA8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00274FB8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00274FD8; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00274FD0; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00274FD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274FD8; } }
L_00274FD8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00275084; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[6], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274FF0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00274FF0u) [[unlikely]] return; }
L_00274FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00275084; } }
L_00274FF8:
    set32(c.r[17], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00275010; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00275068; } }
L_00275010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275018u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00275018u) [[unlikely]] return; }
L_00275018:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00275038; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00275048; } }
L_00275038:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00275048:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00275068; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00275060; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00275060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275068; } }
L_00275068:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00275084; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[6], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275080u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00275080u) [[unlikely]] return; }
L_00275080:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00275084:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 72u)));  goto L_002750A4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002750A0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002750A0u) [[unlikely]] return; }
L_002750A0:
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 1;
L_002750A4:
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00275108; }
    c.f[1] = ld32((c.r[29].w[0] + 484u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_002750EC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002750E4u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002750E4u) [[unlikely]] return; }
L_002750E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275104; } }
L_002750EC:
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00275104u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00275104u) [[unlikely]] return; }
L_00275104:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00275108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_00275130:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_005A(c, 191u, depth); }
L_00275140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027515Cu); set32(c.r[5], 0u + 210u);  if (depth < kMaxDepth) unit_0062(c, 78u, depth + 1u); else { c.pc = 0x002A8A10u; return; } if (c.pc != 0x0027515Cu) [[unlikely]] return; }
L_0027515C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    st32((c.r[5].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 132u));
    st32((c.r[5].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    st32((c.r[5].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 140u));
    st32((c.r[5].w[0] + 204u), c.f[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002751B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002751C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x002751C4u) [[unlikely]] return; }
L_002751C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002751F4; }
    c.f[1] = ld32((c.r[16].w[0] + 92u));
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002751F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002751F0u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x002751F0u) [[unlikely]] return; }
L_002751F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002751F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00275200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275214u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x00275214u) [[unlikely]] return; }
L_00275214:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00275278; }
    c.f[12] = ld32((c.r[16].w[0] + 92u));
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275234u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0018(c, 142u, depth + 1u); else { c.pc = 0x00181A10u; return; } if (c.pc != 0x00275234u) [[unlikely]] return; }
L_00275234:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[5].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[5].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[5].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[5].w[0] + 204u), c.f[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 17;
L_00275278:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00275290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002752A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x002752A4u) [[unlikely]] return; }
L_002752A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002752C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00275350; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22736u);
    set32(c.r[2], c.r[2].w[0] + 22792u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 96u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275300u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0018(c, 126u, depth + 1u); else { c.pc = 0x00181170u; return; } if (c.pc != 0x00275300u) [[unlikely]] return; }
L_00275300:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_0027533C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027532Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0027532Cu) [[unlikely]] return; }
L_0027532C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275338u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00275338u) [[unlikely]] return; }
L_00275338:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_0027533C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00275354; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275350u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00275350u) [[unlikely]] return; }
L_00275350:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00275354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00275370:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002752C0u | kUnwind; return; } goto L_002752C0; }
L_00275380:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002753A4u); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x002753A4u) [[unlikely]] return; }
L_002753A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 22832u);
    set32(c.r[3], c.r[3].w[0] + 22888u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E4F0000u);
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17228ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 96u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 100u), 0u);
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 108u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    st32((c.r[4].w[0] + 248u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1100u)));
    c.budget -= 28;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00275450; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00275440; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027543C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027543C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  if (t) { goto L_0027545C; } }
L_0027543C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00275440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275448u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 198u, depth + 1u); else { c.pc = 0x00275B10u; return; } if (c.pc != 0x00275448u) [[unlikely]] return; }
L_00275448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275458; } }
L_00275450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275458u);  if (depth < kMaxDepth) unit_0055(c, 253u, depth + 1u); else { c.pc = 0x002765C0u; return; } if (c.pc != 0x00275458u) [[unlikely]] return; }
L_00275458:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_0027545C:
    set32(c.r[2], 0u + 24u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1184u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 176u)));  goto L_002754B4; }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002754B0; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002754B0; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002754B0; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002754B0; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002754B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_002754C8; } }
L_002754B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 1;
L_002754B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_002754D0; } }
L_002754C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002754D0u);  if (depth < kMaxDepth) unit_005A(c, 335u, depth + 1u); else { c.pc = 0x0028B6D0u; return; } if (c.pc != 0x002754D0u) [[unlikely]] return; }
L_002754D0:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002754E4u); set32(c.r[5], 0u + 28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002754E4u) [[unlikely]] return; }
L_002754E4:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002754F0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 253u, depth + 1u); else { c.pc = 0x002F3B20u; return; } if (c.pc != 0x002754F0u) [[unlikely]] return; }
L_002754F0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00275510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_00275544; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027553Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027553Cu) [[unlikely]] return; }
L_0027553C:
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_00275544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027554Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0027554Cu) [[unlikely]] return; }
L_0027554C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275558u); set32(c.r[5], 0u + 10900u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00275558u) [[unlikely]] return; }
L_00275558:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275564u); set32(c.r[5], 0u + 500u);  if (depth < kMaxDepth) unit_0062(c, 78u, depth + 1u); else { c.pc = 0x002A8A10u; return; } if (c.pc != 0x00275564u) [[unlikely]] return; }
L_00275564:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], 0u + 15u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1180u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002755A0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027559C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027559C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027559Cu);  if (depth < kMaxDepth) unit_0067(c, 301u, depth + 1u); else { c.pc = 0x002BF0A0u; return; } if (c.pc != 0x0027559Cu) [[unlikely]] return; }
L_0027559C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002755A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002755A8u);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00289A00u; return; } if (c.pc != 0x002755A8u) [[unlikely]] return; }
L_002755A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002755C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002755E4u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002755E4u) [[unlikely]] return; }
L_002755E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002755F4; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_002755F4:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275600u); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002C2E20u; return; } if (c.pc != 0x00275600u) [[unlikely]] return; }
L_00275600:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00275610; }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_00275610:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_0027562C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 5;
L_0027562C:
    set32(c.r[2], 0u + 14u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1180u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_00275678; }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00275674; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00275674; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00275674; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00275674; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[2].w[0] + 3024u), 0u);
    c.budget -= 2;
L_00275674:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00275678:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00275688u); set32(c.r[5], 0u + 29u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00275688u) [[unlikely]] return; }
L_00275688:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002756A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002756B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x002756B8u) [[unlikely]] return; }
L_002756B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00275960; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_00275744; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00275740; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00275714u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00275714u) [[unlikely]] return; }
L_00275714:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00275724; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_00275724:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275740u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x00275740u) [[unlikely]] return; }
L_00275740:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_00275744:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00275750; }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_00275750:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  goto L_002757BC; }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1104u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_0027579C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_002757A0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_002757A0; }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[16].d[0] = c.r[5].d[0] + 0ull;  goto L_002757A0; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002757A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002757A0; } }
L_0027579C:
    set32(c.r[16], 0u + 6u);
    c.budget -= 1;
L_002757A0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002757B8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[4].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 100u), c.r[16].w[0]);
    c.budget -= 4;
L_002757B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002757BC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1100u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00275850; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  goto L_002757F8; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002757F4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002757F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[17].w[0] + 16u)));  if (t) { goto L_0027585C; } }
L_002757F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_002757F8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 88u)));  goto L_00275818; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 3424u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00275858; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_00275818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275820u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 198u, depth + 1u); else { c.pc = 0x00275B10u; return; } if (c.pc != 0x00275820u) [[unlikely]] return; }
L_00275820:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00275834u); set32(c.r[5], 0u + 29u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00275834u) [[unlikely]] return; }
L_00275834:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00275848u); set32(c.r[5], 0u + 28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00275848u) [[unlikely]] return; }
L_00275848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), 0u);  if (t) { goto L_00275858; } }
L_00275850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275858u);  if (depth < kMaxDepth) unit_0055(c, 253u, depth + 1u); else { c.pc = 0x002765C0u; return; } if (c.pc != 0x00275858u) [[unlikely]] return; }
L_00275858:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_0027585C:
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00275868u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00275868u) [[unlikely]] return; }
L_00275868:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));  goto L_0027592C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027587Cu); set32(c.r[5], 0u + 10900u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0027587Cu) [[unlikely]] return; }
L_0027587C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 9u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00275910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275898u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00275898u) [[unlikely]] return; }
L_00275898:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00275910; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[5].w[0] + 1104u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00275910; } }
    set32(c.r[5], c.r[5].w[0] + 1008u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002758C8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002758C8u) [[unlikely]] return; }
L_002758C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.f[0] = ld32((c.r[2].w[0] + 16204u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002758F8u); st32((c.r[29].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x002758F8u) [[unlikely]] return; }
L_002758F8:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275904u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00275904u) [[unlikely]] return; }
L_00275904:
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 3;
L_00275910:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00275928; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 308u)));
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 4;
L_00275928:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 1;
L_0027592C:
    set32(c.r[5], ld32((c.r[3].w[0] + 644u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0027595C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275948u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00275948u) [[unlikely]] return; }
L_00275948:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027595C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027595Cu);  if (depth < kMaxDepth) unit_0074(c, 265u, depth + 1u); else { c.pc = 0x002F3E60u; return; } if (c.pc != 0x0027595Cu) [[unlikely]] return; }
L_0027595C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00275960:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00275970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00275980:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027599Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x0027599Cu) [[unlikely]] return; }
L_0027599C:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00275A98; }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00275A94; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002759C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002759C8u) [[unlikely]] return; }
L_002759C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275A94; } }
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002759E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002759E4u) [[unlikely]] return; }
L_002759E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[3], 0u + 6000u);
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002759F8u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x002759F8u) [[unlikely]] return; }
L_002759F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A08u); set32(c.r[5], c.r[2].w[0] + 1008u);  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x00275A08u) [[unlikely]] return; }
L_00275A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A10u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00275A10u) [[unlikely]] return; }
L_00275A10:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 104u)));  goto L_00275A68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A28u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x00275A28u) [[unlikely]] return; }
L_00275A28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 16176u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 16184u));
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 16188u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[29].w[0] + 68u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A64u); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x00275A64u) [[unlikely]] return; }
L_00275A64:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 1;
L_00275A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A70u);  if (depth < kMaxDepth) unit_000E(c, 216u, depth + 1u); else { c.pc = 0x00159970u; return; } if (c.pc != 0x00275A70u) [[unlikely]] return; }
L_00275A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A78u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x00275A78u) [[unlikely]] return; }
L_00275A78:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00275A84u) [[unlikely]] return; }
L_00275A84:
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st16((c.r[3].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_00275A94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00275A98:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00275AB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275AC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 194u, depth + 1u); else { c.pc = 0x00289A80u; return; } if (c.pc != 0x00275AC4u) [[unlikely]] return; }
L_00275AC4:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00275B00; }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00275AE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00275AE4u) [[unlikely]] return; }
L_00275AE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275AFC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_00275AFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00275B00:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00275B10:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B48u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0055(c, 276u, depth + 1u); else { c.pc = 0x00276960u; return; } if (c.pc != 0x00275B48u) [[unlikely]] return; }
L_00275B48:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1100u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], 0u + 18u);  goto L_00275BA0; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], 0u + 17u);  goto L_00275B8C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], 0u + 16u);  goto L_00275B78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (t) { goto L_00275BB0; } }
L_00275B78:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B84u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00275B84u) [[unlikely]] return; }
L_00275B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275BAC; } }
L_00275B8C:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B98u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00275B98u) [[unlikely]] return; }
L_00275B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275BAC; } }
L_00275BA0:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275BACu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00275BACu) [[unlikely]] return; }
L_00275BAC:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00275BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275BB8u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00275BB8u) [[unlikely]] return; }
L_00275BB8:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_00275BE0; }
    set32(c.r[5], ld32((c.r[20].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 6;
L_00275BE0:
    st32((c.r[3].w[0] + 3024u), 0u);
    set32(c.r[3], c.r[3].w[0] + 112u);
    set32(c.r[17], c.r[3].w[0] + 2912u);
    set32(c.r[16], c.r[3].w[0] + 2916u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[3].w[0] + 3424u), c.r[19].w[0]);  if (t) { goto L_00276584; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00275C64; }
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275C60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C24u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00275C24u) [[unlikely]] return; }
L_00275C24:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[19].w[0])));  goto L_00275C4C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1304u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00275C60; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_00275C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C54u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00275C54u) [[unlikely]] return; }
L_00275C54:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C60u); set32(c.r[5], c.r[18].w[0] + 736u);  if (depth < kMaxDepth) unit_006C(c, 345u, depth + 1u); else { c.pc = 0x002D3A70u; return; } if (c.pc != 0x00275C60u) [[unlikely]] return; }
L_00275C60:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00275C64:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00275C74u) [[unlikely]] return; }
L_00275C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C7Cu); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 5u, depth + 1u); else { c.pc = 0x00288060u; return; } if (c.pc != 0x00275C7Cu) [[unlikely]] return; }
L_00275C7C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275CB4u); set32(c.r[18], 0u - 1u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00275CB4u) [[unlikely]] return; }
L_00275CB4:
    c.r[3].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00275CCC; }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 2;
L_00275CCC:
    set32(c.r[3], ld32((c.r[4].w[0] + 1072u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00275CE8; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 1104u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_00276588; }
L_00275CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275CF0u);  if (depth < kMaxDepth) unit_0013(c, 259u, depth + 1u); else { c.pc = 0x0016EEB0u; return; } if (c.pc != 0x00275CF0u) [[unlikely]] return; }
L_00275CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275CF8u); c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 257u, depth + 1u); else { c.pc = 0x0016EE90u; return; } if (c.pc != 0x00275CF8u) [[unlikely]] return; }
L_00275CF8:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[23], 0u + 99u);  goto L_00275D18; }
    set32(c.r[23], 0u + 1u);
    c.budget -= 1;
L_00275D18:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 960u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] + 452u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_00275E9C; } }
L_00275D38:
    set32(c.r[4], c.r[22].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[21].d[0]) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_00275E9C; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00275E98; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00275D74u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00275D74u) [[unlikely]] return; }
L_00275D74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275E98; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1072u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 164u)));  goto L_00275E50; }
    set32(c.r[6], ld32((c.r[3].w[0] + 420u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1008u);  goto L_00275DAC; }
    set32(c.r[5], c.r[3].w[0] + 1008u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275DA4u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x00275DA4u) [[unlikely]] return; }
L_00275DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (t) { goto L_00275DB8; } }
L_00275DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275DB4u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00275DB4u) [[unlikely]] return; }
L_00275DB4:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00275DB8:
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1100u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 76u)));  goto L_00275E30; }
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00275E2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275DE0u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00275DE0u) [[unlikely]] return; }
L_00275DE0:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275E2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 16212u));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.f[1] = ld32((c.r[3].w[0] + 16216u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 16220u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 212u), c.f[2]);
    st32((c.r[29].w[0] + 216u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E2Cu); st32((c.r[29].w[0] + 220u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00275E2Cu) [[unlikely]] return; }
L_00275E2C:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00275E30:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 1072u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E44u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0059(c, 441u, depth + 1u); else { c.pc = 0x00287D90u; return; } if (c.pc != 0x00275E44u) [[unlikely]] return; }
L_00275E44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275E98; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 164u)));
    c.budget -= 1;
L_00275E50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] >= 0; st32((c.r[21].w[0] + 164u), c.r[2].w[0]);  if (t) { goto L_00275E7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E68u); set32(c.r[4], ld32((c.r[21].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00275E68u) [[unlikely]] return; }
L_00275E68:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00275E80; }
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00275E7C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00275E80:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_00275E98:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_00275E9C:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00275D38u | kUnwind; return; } goto L_00275D38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275EB4u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 258u, depth + 1u); else { c.pc = 0x0016EEA0u; return; } if (c.pc != 0x00275EB4u) [[unlikely]] return; }
L_00275EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275EBCu); set32(c.r[4], ld32((c.r[29].w[0] + 204u)));  if (depth < kMaxDepth) unit_0013(c, 256u, depth + 1u); else { c.pc = 0x0016EE80u; return; } if (c.pc != 0x00275EBCu) [[unlikely]] return; }
L_00275EBC:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00275FE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275ED8u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00275ED8u) [[unlikely]] return; }
L_00275ED8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275FE0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1104u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_00275FE0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00275FE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0])));  if (t) { goto L_00275F4C; } }
L_00275F14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275F1Cu); set32(c.r[4], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x00275F1Cu) [[unlikely]] return; }
L_00275F1C:
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 12;
L_00275F4C:
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] - c.r[19].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00275F14u | kUnwind; return; } goto L_00275F14; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_00275F84; } }
L_00275F6C:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 6;
L_00275F84:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00275F6Cu | kUnwind; return; } goto L_00275F6C; }
    set32(c.r[2], 0u + 3u);
    set32(c.r[18], 0u - 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00275FD0; } }
L_00275FA8:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275FB8u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00275FB8u) [[unlikely]] return; }
L_00275FB8:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00275FD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00275FE0; } }
L_00275FD0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00275FA8u | kUnwind; return; } goto L_00275FA8; }
L_00275FE0:
    c.budget -= 2;
    if (c.r[18].sd[0] <= 0) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00276004; }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 7;
L_00276004:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00276034; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_00276034:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00276040; }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_00276040:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_002760A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00276090; } }
L_00276054:
    set32(c.r[21], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[21].d[0] == c.r[18].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00276090; }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027608C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276080u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00276080u) [[unlikely]] return; }
L_00276080:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027608Cu); set32(c.r[5], c.r[21].w[0] + 736u);  if (depth < kMaxDepth) unit_006C(c, 345u, depth + 1u); else { c.pc = 0x002D3A70u; return; } if (c.pc != 0x0027608Cu) [[unlikely]] return; }
L_0027608C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00276090:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00276054u | kUnwind; return; } goto L_00276054; }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_002760A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002760ACu); set32(c.r[5], 0u + 10900u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002760ACu) [[unlikely]] return; }
L_002760AC:
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1104u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00276378; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 580u)));  goto L_002762BC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0027621C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 580u)));  goto L_00276188; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 580u)));  goto L_002760F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276458; } }
L_002760F4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00276104; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0027615C; } }
L_00276104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027610Cu); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0027610Cu) [[unlikely]] return; }
L_0027610C:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0027612C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0027613C; } }
L_0027612C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0027613C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0027615C; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_00276154; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00276154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027615C; } }
L_0027615C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00276458; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00276458; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10900u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276180u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00276180u) [[unlikely]] return; }
L_00276180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00276458; } }
L_00276188:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00276198; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002761F0; } }
L_00276198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002761A0u); set32(c.r[5], 0u + 43u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002761A0u) [[unlikely]] return; }
L_002761A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002761C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002761D0; } }
L_002761C0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_002761D0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002761F0; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_002761E8; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002761E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002761F0; } }
L_002761F0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00276458; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00276458; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10900u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276214u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00276214u) [[unlikely]] return; }
L_00276214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00276458; } }
L_0027621C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276224u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x00276224u) [[unlikely]] return; }
L_00276224:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00276258; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], 0u + 22u);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[7], 0u + 10900u);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276250u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 361u, depth + 1u); else { c.pc = 0x002A7D10u; return; } if (c.pc != 0x00276250u) [[unlikely]] return; }
L_00276250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00276458; } }
L_00276258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276260u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x00276260u) [[unlikely]] return; }
L_00276260:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00276298; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], 0u + 29u);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[7], 0u + 10900u);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276290u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 361u, depth + 1u); else { c.pc = 0x002A7D10u; return; } if (c.pc != 0x00276290u) [[unlikely]] return; }
L_00276290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00276458; } }
L_00276298:
    set32(c.r[6], 0u + 30u);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[7], 0u + 10900u);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002762B4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 361u, depth + 1u); else { c.pc = 0x002A7D10u; return; } if (c.pc != 0x002762B4u) [[unlikely]] return; }
L_002762B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00276458; } }
L_002762BC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002762CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00276330; } }
L_002762CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002762D4u); set32(c.r[5], 0u + 43u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002762D4u) [[unlikely]] return; }
L_002762D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002762F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00276304; } }
L_002762F4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00276304:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00276330; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_00276324; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00276328; } }
L_00276324:
    set32(c.r[16], c.r[3].w[0] + 12u);
    c.budget -= 1;
L_00276328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276330; } }
L_00276330:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00276458; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00276458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027634Cu); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0027634Cu) [[unlikely]] return; }
L_0027634C:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00276458; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 10900u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276370u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00276370u) [[unlikely]] return; }
L_00276370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00276458; } }
L_00276378:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002763A4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276394u); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_005C(c, 251u, depth + 1u); else { c.pc = 0x002921E0u; return; } if (c.pc != 0x00276394u) [[unlikely]] return; }
L_00276394:
    c.r[3].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[18], ld32((c.r[20].w[0] + 76u)));  goto L_002763A8; }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_002763A4:
    set32(c.r[18], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_002763A8:
    set32(c.r[3], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002763BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00276430; } }
L_002763BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002763C4u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002763C4u) [[unlikely]] return; }
L_002763C4:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002763E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002763F4; } }
L_002763E4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_002763F4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00276430; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_00276418; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00276428; } }
L_00276418:
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00276428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276430; } }
L_00276430:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00276458; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00276458; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10900u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276454u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00276454u) [[unlikely]] return; }
L_00276454:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00276458:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[6], ld32((c.r[20].w[0] + 76u)));  goto L_00276494; }
    set32(c.r[2], ld32((c.r[17].w[0] + 308u)));
    set32(c.r[4], c.r[17].w[0] + 352u);
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[17].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027647Cu); set32(c.r[5], c.r[2].w[0] + 1008u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0027647Cu) [[unlikely]] return; }
L_0027647C:
    set32(c.r[3], ld32((c.r[17].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[17].w[0] + 308u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[17].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 6;
L_00276494:
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], ld32((c.r[6].w[0] + 1100u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 76u)));  goto L_00276510; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30344u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027650C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027650C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 1104u)));  goto L_002764D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_002764EC; } }
L_002764D8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[6].w[0] + 608u)));  goto L_002764E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2450u);  if (t) { goto L_002764EC; } }
L_002764E8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 640u)));
    c.budget -= 1;
L_002764EC:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0027650C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276504u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 299u, depth + 1u); else { c.pc = 0x002BEF10u; return; } if (c.pc != 0x00276504u) [[unlikely]] return; }
L_00276504:
    set32(c.r[3], 0u + 1u);
    st32((c.r[20].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_0027650C:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00276510:
    set32(c.r[3], ld32((c.r[3].w[0] + 1076u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00276584; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 352u);  goto L_00276540; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00276538u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00276538u) [[unlikely]] return; }
L_00276538:
    st32((c.r[20].w[0] + 104u), 0u);
    set32(c.r[4], 0u + 352u);
    c.budget -= 2;
L_00276540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276548u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00276548u) [[unlikely]] return; }
L_00276548:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 104u), c.r[4].w[0]);  goto L_00276564; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027655Cu);  if (depth < kMaxDepth) unit_000E(c, 95u, depth + 1u); else { c.pc = 0x00158830u; return; } if (c.pc != 0x0027655Cu) [[unlikely]] return; }
L_0027655C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 104u), c.r[4].w[0]);
    c.budget -= 2;
L_00276564:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00276584; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1076u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00276584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276584u); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_000E(c, 140u, depth + 1u); else { c.pc = 0x00158D80u; return; } if (c.pc != 0x00276584u) [[unlikely]] return; }
L_00276584:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00276588:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
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
L_002765C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002765E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 276u, depth + 1u); else { c.pc = 0x00276960u; return; } if (c.pc != 0x002765E4u) [[unlikely]] return; }
L_002765E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 16u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002765F8u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x002765F8u) [[unlikely]] return; }
L_002765F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276600u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00276600u) [[unlikely]] return; }
L_00276600:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  goto L_00276628; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 6;
L_00276628:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00276648; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00276640u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00276640u) [[unlikely]] return; }
L_00276640:
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_00276648:
    st32((c.r[2].w[0] + 3024u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[2].w[0] + 3424u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027665Cu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 5u, depth + 1u); else { c.pc = 0x00288060u; return; } if (c.pc != 0x0027665Cu) [[unlikely]] return; }
L_0027665C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 960u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + 452u);  if (t) { goto L_00276774; } }
L_00276674:
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 3024u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(99ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], ld32((c.r[4].w[0])));  if (t) { goto L_00276770; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 1296u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1296u)));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_002766C0; }
    set32(c.r[5], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[3], 0u + 2000u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002766BC; } }
    set32(c.r[3], 0u + 2001u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_00276774; }
L_002766BC:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_002766C0:
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002766CCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002766CCu) [[unlikely]] return; }
L_002766CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002766DCu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002766DCu) [[unlikely]] return; }
L_002766DC:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00276718; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002766F4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002766F4u) [[unlikely]] return; }
L_002766F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], c.r[19].w[0] + 688u);
    set32(c.r[2], ld32((c.r[2].w[0] + 140u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276708u); set32(c.r[4], c.r[2].w[0] + 13296u);  if (depth < kMaxDepth) unit_0016(c, 254u, depth + 1u); else { c.pc = 0x0017B7B0u; return; } if (c.pc != 0x00276708u) [[unlikely]] return; }
L_00276708:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 164u)));  goto L_0027673C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276770; } }
L_00276718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276720u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00276720u) [[unlikely]] return; }
L_00276720:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[19].w[0] + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276730u); set32(c.r[4], c.r[2].w[0] + 13488u);  if (depth < kMaxDepth) unit_0017(c, 21u, depth + 1u); else { c.pc = 0x0017C2C0u; return; } if (c.pc != 0x00276730u) [[unlikely]] return; }
L_00276730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276770; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    c.budget -= 1;
L_0027673C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[3].w[0] + 112u);
    set32(c.r[3], ld32((c.r[3].w[0] + 3024u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 2916u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 3024u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 3024u), c.r[3].w[0]);
    c.budget -= 13;
L_00276770:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00276774:
    c.r[3].d[0] = c.r[20].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00276674u | kUnwind; return; } goto L_00276674; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    set32(c.r[17], c.r[3].w[0] + 2916u);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], ld32((c.r[4].w[0] + 3024u)));  if (t) { goto L_002767C0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002767C4; } }
L_002767C0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002767C4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002767D0; }
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_002767D0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00276860; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00276850; } }
L_002767E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_00276850; }
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027684C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276810u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x00276810u) [[unlikely]] return; }
L_00276810:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 76u)));  goto L_00276840; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0027683C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027683C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027684C; } }
L_0027683C:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00276840:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027684Cu); set32(c.r[5], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_006C(c, 345u, depth + 1u); else { c.pc = 0x002D3A70u; return; } if (c.pc != 0x0027684Cu) [[unlikely]] return; }
L_0027684C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00276850:
    c.r[3].d[0] = c.r[20].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002767E4u | kUnwind; return; } goto L_002767E4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00276860:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00276880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 30u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00276898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002768A4; } }
L_00276898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002768A0u);  if (depth < kMaxDepth) unit_0055(c, 271u, depth + 1u); else { c.pc = 0x002768B0u; return; } if (c.pc != 0x002768A0u) [[unlikely]] return; }
L_002768A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002768A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002768B0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { set32(c.r[5], 0u + 10900u);  [[clang::musttail]] return unit_0062(c, 7u, depth); }
L_002768D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002768E8u); set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x002768E8u) [[unlikely]] return; }
L_002768E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));  goto L_002768F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027694C; } }
L_002768F8:
    set32(c.r[5], ld32((c.r[2].w[0] + 644u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 92u));  goto L_00276930; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276914u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00276914u) [[unlikely]] return; }
L_00276914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027691Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 274u, depth + 1u); else { c.pc = 0x002F3F90u; return; } if (c.pc != 0x0027691Cu) [[unlikely]] return; }
L_0027691C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027692C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027694C; } }
L_0027692C:
    c.f[1] = ld32((c.r[16].w[0] + 92u));
    c.budget -= 1;
L_00276930:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0027694C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027694C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00276960:
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[5].w[0] + 960u)));
    set32(c.r[3], c.r[5].w[0] + 112u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + 452u);  if (t) { goto L_00276998; } }
L_00276980:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 6;
L_00276998:
    c.r[3].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00276980u | kUnwind; return; } goto L_00276980; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002769B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00276A30; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22832u);
    set32(c.r[2], c.r[2].w[0] + 22888u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00276A18; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276A0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00276A0Cu) [[unlikely]] return; }
L_00276A0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276A18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00276A18u) [[unlikely]] return; }
L_00276A18:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00276A34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276A30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00276A30u) [[unlikely]] return; }
L_00276A30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00276A34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00276A50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002769B0u | kUnwind; return; } goto L_002769B0; }
L_00276A60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00276880u | kUnwind; return; } goto L_00276880; }
L_00276A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276A84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x00276A84u) [[unlikely]] return; }
L_00276A84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 22928u);
    set32(c.r[3], c.r[3].w[0] + 22984u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45560000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 20301ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[28].w[0] - 30392u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276ABCu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00276ABCu) [[unlikely]] return; }
L_00276ABC:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276AC8u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00276AC8u) [[unlikely]] return; }
L_00276AC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276ADCu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00276ADCu) [[unlikely]] return; }
L_00276ADC:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[2], 0u + 24u);
    set32(c.r[4], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1184u)));
    c.budget -= 10;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 176u)));  goto L_00276B0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_00276B20; } }
L_00276B0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_00276B28; } }
L_00276B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276B28u);  if (depth < kMaxDepth) unit_005A(c, 335u, depth + 1u); else { c.pc = 0x0028B6D0u; return; } if (c.pc != 0x00276B28u) [[unlikely]] return; }
L_00276B28:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276B34u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x00276B34u) [[unlikely]] return; }
L_00276B34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_00276B50; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276B4Cu); set32(c.r[5], c.r[5].w[0] + 30624u);  if (depth < kMaxDepth) unit_0059(c, 52u, depth + 1u); else { c.pc = 0x002845E0u; return; } if (c.pc != 0x00276B4Cu) [[unlikely]] return; }
L_00276B4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00276B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276B58u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00276B58u) [[unlikely]] return; }
L_00276B58:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_00276B98; }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00276B94; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00276B94u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00276B94u) [[unlikely]] return; }
L_00276B94:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00276B98:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00276BA8u); set32(c.r[5], 0u + 41u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00276BA8u) [[unlikely]] return; }
L_00276BA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00276BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[28].w[0] - 30392u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276BE0u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0061(c, 373u, depth + 1u); else { c.pc = 0x002A7F80u; return; } if (c.pc != 0x00276BE0u) [[unlikely]] return; }
L_00276BE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276BECu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0061(c, 373u, depth + 1u); else { c.pc = 0x002A7F80u; return; } if (c.pc != 0x00276BECu) [[unlikely]] return; }
L_00276BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276BF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00289A00u; return; } if (c.pc != 0x00276BF4u) [[unlikely]] return; }
L_00276BF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00276C10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00276C34u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00276C34u) [[unlikely]] return; }
L_00276C34:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276C40u); set32(c.r[5], 0u + 200u);  if (depth < kMaxDepth) unit_0062(c, 78u, depth + 1u); else { c.pc = 0x002A8A10u; return; } if (c.pc != 0x00276C40u) [[unlikely]] return; }
L_00276C40:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276C4Cu); set32(c.r[5], 0u + 210u);  if (depth < kMaxDepth) unit_0062(c, 78u, depth + 1u); else { c.pc = 0x002A8A10u; return; } if (c.pc != 0x00276C4Cu) [[unlikely]] return; }
L_00276C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276C54u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00276C54u) [[unlikely]] return; }
L_00276C54:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 76u)));  goto L_00276CBC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276C70u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00276C70u) [[unlikely]] return; }
L_00276C70:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00276CB8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276C8Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x00276C8Cu) [[unlikely]] return; }
L_00276C8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276CB0; } }
L_00276C94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 332u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276CB0u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0062(c, 76u, depth + 1u); else { c.pc = 0x002A89C0u; return; } if (c.pc != 0x00276CB0u) [[unlikely]] return; }
L_00276CB0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[2].w[0] + 324u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00276C94u | kUnwind; return; } goto L_00276C94; }
L_00276CB8:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00276CBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 244u)));
    st32((c.r[5].w[0] + 240u), 0u);
    st32((c.r[5].w[0] + 244u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 248u), 0u);
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00276D00:
    set32(c.r[29], c.r[29].w[0] - 624u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[23], ld32((c.r[29].w[0] + 572u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276D3Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x00276D3Cu) [[unlikely]] return; }
L_00276D3C:
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_00277708; }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00277704; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00276D70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00276D70u) [[unlikely]] return; }
L_00276D70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00276D9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276D80u); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x00276D80u) [[unlikely]] return; }
L_00276D80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00276DC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276D90u);  if (depth < kMaxDepth) unit_0052(c, 139u, depth + 1u); else { c.pc = 0x00269B20u; return; } if (c.pc != 0x00276D90u) [[unlikely]] return; }
L_00276D90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00276DBC; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00276D9C:
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00276DBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276DB4u);  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x00276DB4u) [[unlikely]] return; }
L_00276DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277704; } }
L_00276DBC:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00276DC0:
    set32(c.r[22], 0u + 1u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 608u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276DD4u); set32(c.r[16], c.r[2].w[0] + 784u);  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x00276DD4u) [[unlikely]] return; }
L_00276DD4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));  goto L_00276E8C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.f[1] = ld32((c.r[2].w[0] + 13728u));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.f[0] = ld32((c.r[2].w[0] + 3176u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[20].w[0] + 76u)));  goto L_00276E00; }
    c.r[19].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 2;
L_00276E00:
    set32(c.r[2], 0u + 10u);
    st32((c.r[3].w[0] + 492u), c.f[1]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.f[0] = ld32((c.r[4].w[0] + 13728u));
    st32((c.r[3].w[0] + 500u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 476u)));
    c.budget -= 10;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[1] = ld32((c.r[16].w[0] + 4u));  goto L_00276E2C; }
    c.f[1] = ld32((c.r[16].w[0]));
    c.budget -= 1;
L_00276E2C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[4].w[0] + 80u));  goto L_00276E54; }
    c.f[0] = 0u;
    c.budget -= 1;
L_00276E54:
    c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276E68u); set32(c.r[5], c.r[2].w[0] + 13744u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x00276E68u) [[unlikely]] return; }
L_00276E68:
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.f[2] = ld32((c.r[29].w[0] + 208u));
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    st32((c.r[29].w[0] + 616u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    st32((c.r[29].w[0] + 608u), c.f[2]);
    st32((c.r[29].w[0] + 612u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 620u), c.f[0]);  if (t) { goto L_00277008; } }
L_00276E8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00276EBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276E9Cu);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x00276E9Cu) [[unlikely]] return; }
L_00276E9C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));  goto L_00276EB0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276EBC; } }
L_00276EB0:
    c.r[2].d[0] = ld64((c.r[2].w[0] + 144u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00276EBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00276ED8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.f[20] = ld32((c.r[2].w[0] + 464u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_00276EDC; } }
L_00276ED8:
    c.f[20] = c.r[2].w[0];
    c.budget -= 1;
L_00276EDC:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    st32((c.r[2].w[0] + 492u), c.f[20]);
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    st32((c.r[2].w[0] + 500u), c.f[20]);
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[4], c.r[2].w[0] + 1328u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276EFCu); set32(c.r[5], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x00276EFCu) [[unlikely]] return; }
L_00276EFC:
    c.f[21] = c.f[0];
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[21]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));  goto L_00276F7C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1316u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276F24u); set32(c.r[5], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_0063(c, 265u, depth + 1u); else { c.pc = 0x002AEF60u; return; } if (c.pc != 0x00276F24u) [[unlikely]] return; }
L_00276F24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276F68; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.f[0] = ld32((c.r[29].w[0] + 576u));
    st32((c.r[2].w[0] + 1328u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 580u));
    st32((c.r[2].w[0] + 1332u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 584u));
    st32((c.r[2].w[0] + 1336u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 588u));
    st32((c.r[2].w[0] + 1340u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[4], c.r[2].w[0] + 1328u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276F60u); set32(c.r[5], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x00276F60u) [[unlikely]] return; }
L_00276F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276F78; } }
L_00276F68:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[20] = c.f[21];  goto L_00276F74; }
L_00276F74:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00276F78:
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_00276F7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[4].w[0] + 80u));  goto L_00276FA0; }
    c.f[0] = 0u;
    c.budget -= 1;
L_00276FA0:
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[2].w[0] + 1328u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276FB8u); set32(c.r[6], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00276FB8u) [[unlikely]] return; }
L_00276FB8:
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    set32(c.r[4], c.r[29].w[0] + 608u);
    c.f[2] = ld32((c.r[29].w[0] + 192u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[29].w[0] + 616u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    st32((c.r[29].w[0] + 608u), c.f[2]);
    st32((c.r[29].w[0] + 612u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276FE4u); st32((c.r[29].w[0] + 620u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x00276FE4u) [[unlikely]] return; }
L_00276FE4:
    c.f[2] = ld32((c.r[29].w[0] + 608u));
    c.f[1] = ld32((c.r[29].w[0] + 612u));
    c.f[0] = ld32((c.r[29].w[0] + 616u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 608u), c.f[2]);
    st32((c.r[29].w[0] + 612u), c.f[1]);
    st32((c.r[29].w[0] + 616u), c.f[0]);
    c.budget -= 9;
L_00277008:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027701Cu); set32(c.r[5], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0027701Cu) [[unlikely]] return; }
L_0027701C:
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    set32(c.r[5], c.r[29].w[0] + 592u);
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[29].w[0] + 600u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[29].w[0] + 592u), c.f[2]);
    st32((c.r[29].w[0] + 596u), c.f[1]);
    st32((c.r[29].w[0] + 604u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], c.r[4].w[0] + 1280u);
    set32(c.r[7], c.r[4].w[0] + 1264u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277054u); set32(c.r[8], c.r[4].w[0] + 1200u);  if (depth < kMaxDepth) unit_006C(c, 273u, depth + 1u); else { c.pc = 0x002D2D70u; return; } if (c.pc != 0x00277054u) [[unlikely]] return; }
L_00277054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027705Cu); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x0027705Cu) [[unlikely]] return; }
L_0027705C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00277130; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027706Cu); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x0027706Cu) [[unlikely]] return; }
L_0027706C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027712C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.f[0] = ld32((c.r[3].w[0] + 13728u));
    c.f[1] = ld32((c.r[2].w[0] + 3180u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027712C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_002770E4; }
    set32(c.r[5], c.r[29].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002770B4u); set32(c.r[6], c.r[29].w[0] + 608u);  if (depth < kMaxDepth) unit_006C(c, 170u, depth + 1u); else { c.pc = 0x002D1C10u; return; } if (c.pc != 0x002770B4u) [[unlikely]] return; }
L_002770B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002770E0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002770D8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00289AC0u; return; } if (c.pc != 0x002770D8u) [[unlikely]] return; }
L_002770D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277704; } }
L_002770E0:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_002770E4:
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027712C; } }
    set32(c.r[5], c.r[29].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277100u); set32(c.r[6], c.r[29].w[0] + 608u);  if (depth < kMaxDepth) unit_006C(c, 228u, depth + 1u); else { c.pc = 0x002D2630u; return; } if (c.pc != 0x00277100u) [[unlikely]] return; }
L_00277100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027712C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277124u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00289AC0u; return; } if (c.pc != 0x00277124u) [[unlikely]] return; }
L_00277124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277704; } }
L_0027712C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00277130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277138u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x00277138u) [[unlikely]] return; }
L_00277138:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 76u)));  goto L_00277178; }
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.f[1] = ld32((c.r[29].w[0] + 592u));
    c.f[2] = ld32((c.r[29].w[0] + 600u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[3].w[0] + 192u));
    c.f[3] = ld32((c.r[3].w[0] + 200u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 1120u), c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[3].w[0] + 1124u), 0u);
    st32((c.r[3].w[0] + 1128u), c.f[2]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1132u), c.r[2].w[0]);  if (t) { goto L_002771AC; } }
L_00277178:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277188u); set32(c.r[6], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00277188u) [[unlikely]] return; }
L_00277188:
    c.f[3] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.f[2] = ld32((c.r[29].w[0] + 168u));
    c.f[1] = ld32((c.r[29].w[0] + 172u));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[2].w[0] + 1120u), c.f[0]);
    st32((c.r[2].w[0] + 1124u), c.f[3]);
    st32((c.r[2].w[0] + 1128u), c.f[2]);
    st32((c.r[2].w[0] + 1132u), c.f[1]);
    c.budget -= 9;
L_002771AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002771B4u); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x002771B4u) [[unlikely]] return; }
L_002771B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_002771E4; }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002771C8u); set32(c.r[5], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_005A(c, 254u, depth + 1u); else { c.pc = 0x0028A3D0u; return; } if (c.pc != 0x002771C8u) [[unlikely]] return; }
L_002771C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002771E0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_002771E0:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_002771E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002771ECu); set32(c.r[5], c.r[4].w[0] + 1120u);  if (depth < kMaxDepth) unit_006C(c, 128u, depth + 1u); else { c.pc = 0x002D1520u; return; } if (c.pc != 0x002771ECu) [[unlikely]] return; }
L_002771EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002771F4u); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002771F4u) [[unlikely]] return; }
L_002771F4:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00277240; }
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.f[13] = ld32((c.r[29].w[0] + 616u));
    set32(c.r[16], ld32((c.r[2].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277214u); c.f[12] = ld32((c.r[29].w[0] + 608u));  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x00277214u) [[unlikely]] return; }
L_00277214:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[4].w[0] + 244u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 248u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_00277508; } }
L_00277240:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 76u)));  goto L_0027725C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277250u); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x00277250u) [[unlikely]] return; }
L_00277250:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_00277418; }
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_0027725C:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 608u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027726Cu); set32(c.r[6], c.r[2].w[0] + 1264u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0027726Cu) [[unlikely]] return; }
L_0027726C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277274u); c.f[12] = ld32((c.r[29].w[0] + 548u));  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x00277274u) [[unlikely]] return; }
L_00277274:
    c.f[1] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[29].w[0] + 548u));  goto L_00277290; }
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 244u)));  if (t) { goto L_00277304; } }
L_00277290:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[18], 0u + 1u);  if (t) { goto L_002772A8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002772A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 528u);
    set32(c.r[6], c.r[6].w[0] + 11056u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002772C0u); set32(c.r[5], c.r[2].w[0] + 1264u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x002772C0u) [[unlikely]] return; }
L_002772C0:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.f[12] = ld32((c.r[29].w[0] + 528u));  goto L_002772F8; }
    c.f[0] = ld32((c.r[29].w[0] + 532u));
    c.f[2] = ld32((c.r[29].w[0] + 536u));
    c.f[1] = ld32((c.r[29].w[0] + 540u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 528u));
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 532u), c.f[3]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 536u), c.f[2]);
    st32((c.r[29].w[0] + 540u), c.f[1]);
    st32((c.r[29].w[0] + 528u), c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 528u));
    c.budget -= 12;
L_002772F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277300u); c.f[13] = ld32((c.r[29].w[0] + 536u));  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x00277300u) [[unlikely]] return; }
L_00277300:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00277304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027730Cu); set32(c.r[4], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0027730Cu) [[unlikely]] return; }
L_0027730C:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027731Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0027731Cu) [[unlikely]] return; }
L_0027731C:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277328u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00277328u) [[unlikely]] return; }
L_00277328:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277334u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x00277334u) [[unlikely]] return; }
L_00277334:
    set32(c.r[4], c.r[29].w[0] + 512u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277344u); set32(c.r[6], c.r[29].w[0] + 608u);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x00277344u) [[unlikely]] return; }
L_00277344:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277350u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x00277350u) [[unlikely]] return; }
L_00277350:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 608u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[21], c.r[3].w[0] + 784u);  if (t) { goto L_002773C4; } }
    c.f[2] = ld32((c.r[21].w[0] + 8u));
    c.f[1] = ld32((c.r[29].w[0] + 516u));
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277380u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x00277380u) [[unlikely]] return; }
L_00277380:
    c.f[1] = ld32((c.r[29].w[0] + 520u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[21].w[0] + 12u));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull; c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_002773A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_002773B0; } }
L_002773A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 3;
L_002773B0:
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002773BCu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002773BCu) [[unlikely]] return; }
L_002773BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (t) { goto L_002773E8; } }
L_002773C4:
    c.f[1] = ld32((c.r[21].w[0] + 8u));
    c.f[2] = ld32((c.r[29].w[0] + 520u));
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002773DCu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002773DCu) [[unlikely]] return; }
L_002773DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
L_002773E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[4].w[0] + 240u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 244u), c.r[17].w[0]);
    st32((c.r[4].w[0] + 248u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 252u), c.r[23].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_00277508; } }
L_00277418:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_0027750C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277428u); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x00277428u) [[unlikely]] return; }
L_00277428:
    ld128((c.r[2].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277438u); st128((c.r[29].w[0] + 432u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x00277438u) [[unlikely]] return; }
L_00277438:
    set32(c.r[2], ld32((c.r[2].w[0] + 336u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[29].w[0] + 432u));  goto L_00277460; }
    c.f[1] = ld32((c.r[29].w[0] + 440u));
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 440u), c.f[1]);
    st32((c.r[29].w[0] + 432u), c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 432u));
    c.budget -= 7;
L_00277460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277468u); c.f[13] = ld32((c.r[29].w[0] + 440u));  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x00277468u) [[unlikely]] return; }
L_00277468:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277474u); set32(c.r[4], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00277474u) [[unlikely]] return; }
L_00277474:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277484u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x00277484u) [[unlikely]] return; }
L_00277484:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277490u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00277490u) [[unlikely]] return; }
L_00277490:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027749Cu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x0027749Cu) [[unlikely]] return; }
L_0027749C:
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002774ACu); set32(c.r[6], c.r[29].w[0] + 608u);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x002774ACu) [[unlikely]] return; }
L_002774AC:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002774B8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x002774B8u) [[unlikely]] return; }
L_002774B8:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.f[1] = ld32((c.r[29].w[0] + 420u));
    c.f[0] = ld32((c.r[28].w[0] - 32688u));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    c.f[2] = ld32((c.r[2].w[0] + 792u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002774DCu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x002774DCu) [[unlikely]] return; }
L_002774DC:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[4].w[0] + 240u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 244u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 248u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 11;
L_00277508:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_0027750C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277514u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x00277514u) [[unlikely]] return; }
L_00277514:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 76u)));  goto L_002776D4; }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 176u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002776D0; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 96u)));  goto L_00277624; }
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00277560; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027755Cu); set32(c.r[5], 0u + 43u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027755Cu) [[unlikely]] return; }
L_0027755C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00277560:
    set32(c.r[5], 0u + 12u);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 476u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277578u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00277578u) [[unlikely]] return; }
L_00277578:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002776D0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277594u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00277594u) [[unlikely]] return; }
L_00277594:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002775B4u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_005A(c, 335u, depth + 1u); else { c.pc = 0x0028B6D0u; return; } if (c.pc != 0x002775B4u) [[unlikely]] return; }
L_002775B4:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002775C0u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x002775C0u) [[unlikely]] return; }
L_002775C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002775DC; } }
L_002775C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002775D4u); set32(c.r[5], c.r[5].w[0] + 30624u);  if (depth < kMaxDepth) unit_0059(c, 52u, depth + 1u); else { c.pc = 0x002845E0u; return; } if (c.pc != 0x002775D4u) [[unlikely]] return; }
L_002775D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002775DCu); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_0062(c, 76u, depth + 1u); else { c.pc = 0x002A89C0u; return; } if (c.pc != 0x002775DCu) [[unlikely]] return; }
L_002775DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002775C8u | kUnwind; return; } goto L_002775C8; }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002775F0u); set32(c.r[5], 0u + 200u);  if (depth < kMaxDepth) unit_0062(c, 78u, depth + 1u); else { c.pc = 0x002A8A10u; return; } if (c.pc != 0x002775F0u) [[unlikely]] return; }
L_002775F0:
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002776D0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027761Cu); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027761Cu) [[unlikely]] return; }
L_0027761C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002776D0; } }
L_00277624:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[20].w[0] + 96u), 0u);  goto L_00277640; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027763Cu); set32(c.r[5], 0u + 42u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027763Cu) [[unlikely]] return; }
L_0027763C:
    st32((c.r[20].w[0] + 96u), 0u);
    c.budget -= 1;
L_00277640:
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 476u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002776D0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277660u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00277660u) [[unlikely]] return; }
L_00277660:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277680u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_005A(c, 335u, depth + 1u); else { c.pc = 0x0028B6D0u; return; } if (c.pc != 0x00277680u) [[unlikely]] return; }
L_00277680:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027768Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0027768Cu) [[unlikely]] return; }
L_0027768C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002776A8; } }
L_00277694:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002776A0u); set32(c.r[5], c.r[5].w[0] + 30624u);  if (depth < kMaxDepth) unit_0059(c, 52u, depth + 1u); else { c.pc = 0x002845E0u; return; } if (c.pc != 0x002776A0u) [[unlikely]] return; }
L_002776A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002776A8u); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_0062(c, 76u, depth + 1u); else { c.pc = 0x002A89C0u; return; } if (c.pc != 0x002776A8u) [[unlikely]] return; }
L_002776A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00277694u | kUnwind; return; } goto L_00277694; }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002776BCu); set32(c.r[5], 0u + 210u);  if (depth < kMaxDepth) unit_0062(c, 78u, depth + 1u); else { c.pc = 0x002A8A10u; return; } if (c.pc != 0x002776BCu) [[unlikely]] return; }
L_002776BC:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002776D0u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002776D0u) [[unlikely]] return; }
L_002776D0:
    set32(c.r[5], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_002776D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 8;
    { const bool t = c.r[22].d[0] != 0ull; st32((c.r[5].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_00277704; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_00277704:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00277708:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 624u);  c.pc = t; return; }
L_00277740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277754u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x00277754u) [[unlikely]] return; }
L_00277754:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00277770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277784u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x00277784u) [[unlikely]] return; }
L_00277784:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002777A0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 316u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002777D0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002777D0u) [[unlikely]] return; }
L_002777D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00277978; }
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00277974; } }
    c.r[3].d[0] = 0ull | 50006ull;
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30392u)));  goto L_00277804; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277974; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30392u)));
    c.budget -= 1;
L_00277804:
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 11u);  goto L_0027781C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 13u);  if (t) { goto L_0027781C; } }
    set32(c.r[5], 0u + 11u);
    c.budget -= 1;
L_0027781C:
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00277834; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0027789C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00277834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027783Cu);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0027783Cu) [[unlikely]] return; }
L_0027783C:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00277860; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00277870; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_00277860:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00277870:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0027789C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[17], ld32((c.r[3].w[0] + 4u)));  goto L_00277890; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00277890; } }
    set32(c.r[17], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_00277890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027789C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027789C:
    set32(c.r[4], ld32((c.r[16].w[0] + 464u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_002778EC; }
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002778B4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x00158FC0u; return; } if (c.pc != 0x002778B4u) [[unlikely]] return; }
L_002778B4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002778C0u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002778C0u) [[unlikely]] return; }
L_002778C0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002778CCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x002778CCu) [[unlikely]] return; }
L_002778CC:
    c.r[6].d[0] = c.r[19].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002778E0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x002778E0u) [[unlikely]] return; }
L_002778E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30392u)));  if (t) { goto L_002778F8; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_002778EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002778F4u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002778F4u) [[unlikely]] return; }
L_002778F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30392u)));
    c.budget -= 1;
L_002778F8:
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00277928; }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00277924u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00277924u) [[unlikely]] return; }
L_00277924:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00277928:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277938u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00277938u) [[unlikely]] return; }
L_00277938:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00277974; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277954u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00277954u) [[unlikely]] return; }
L_00277954:
    set32(c.r[4], c.r[17].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277960u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00277960u) [[unlikely]] return; }
L_00277960:
    set32(c.r[3], ld32((c.r[17].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[17].w[0] + 308u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[17].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 5;
L_00277974:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00277978:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00277990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00277A10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22928u);
    set32(c.r[2], c.r[2].w[0] + 22984u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002779F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002779ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002779ECu) [[unlikely]] return; }
L_002779EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002779F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002779F8u) [[unlikely]] return; }
L_002779F8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00277A14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277A10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00277A10u) [[unlikely]] return; }
L_00277A10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00277A14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00277A30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00277990u | kUnwind; return; } goto L_00277990; }
L_00277A40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277A54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x00277A54u) [[unlikely]] return; }
L_00277A54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 23024u);
    set32(c.r[3], c.r[3].w[0] + 23080u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], 0u + 9u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54530000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21581ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[28].w[0] - 30388u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277A90u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00277A90u) [[unlikely]] return; }
L_00277A90:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[2], 0u + 24u);
    set32(c.r[4], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1184u)));
    c.budget -= 10;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 176u)));  goto L_00277B00; }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00277AFC; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00277AFC; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00277AFC; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00277AFC; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00277AFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_00277B14; } }
L_00277AFC:
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 1;
L_00277B00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_00277B1C; } }
L_00277B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277B1Cu);  if (depth < kMaxDepth) unit_005A(c, 335u, depth + 1u); else { c.pc = 0x0028B6D0u; return; } if (c.pc != 0x00277B1Cu) [[unlikely]] return; }
L_00277B1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00277B30u); set32(c.r[5], 0u + 65u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00277B30u) [[unlikely]] return; }
L_00277B30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00277B50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277B6Cu); set32(c.r[5], 0u + 55u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00277B6Cu) [[unlikely]] return; }
L_00277B6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277B78u); st32((c.r[28].w[0] - 30388u), 0u);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00289A00u; return; } if (c.pc != 0x00277B78u) [[unlikely]] return; }
L_00277B78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00277B90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 10000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277BB0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0062(c, 52u, depth + 1u); else { c.pc = 0x002A8600u; return; } if (c.pc != 0x00277BB0u) [[unlikely]] return; }
L_00277BB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277BBCu); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_0062(c, 78u, depth + 1u); else { c.pc = 0x002A8A10u; return; } if (c.pc != 0x00277BBCu) [[unlikely]] return; }
L_00277BBC:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00277BD0u); set32(c.r[5], 0u + 66u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00277BD0u) [[unlikely]] return; }
L_00277BD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00277BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277BF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x00277BF4u) [[unlikely]] return; }
L_00277BF4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00277D10; }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00277D0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277C20u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x00277C20u) [[unlikely]] return; }
L_00277C20:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00277C48; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00277C44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_00277CE0; } }
L_00277C44:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00277C48:
    set32(c.r[4], ld32((c.r[3].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[3].w[0] + 240u);  if (t) { goto L_00277C60; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00277CDC; } }
L_00277C60:
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { set32(c.r[4], 0u - c.r[4].w[0]);  goto L_00277C68; }
L_00277C68:
    c.budget -= 2;
    if (c.r[4].sd[0] >= 0) { set32(c.r[4], ld32((c.r[5].w[0])));  goto L_00277C78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), 0u);  if (t) { goto L_00277C8C; } }
L_00277C78:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_00277C88; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_00277C88:
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00277C8C:
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[3], 0u - c.r[3].w[0]);  goto L_00277C98; }
L_00277C98:
    c.budget -= 2;
    if (c.r[3].sd[0] >= 0) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  goto L_00277CA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), 0u);  if (t) { goto L_00277CBC; } }
L_00277CA8:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_00277CB8; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_00277CB8:
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_00277CBC:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 8;
L_00277CDC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00277CE0:
    set32(c.r[3], ld32((c.r[3].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  goto L_00277CF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277CF4u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x00277CF4u) [[unlikely]] return; }
L_00277CF4:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_00277CF8:
    c.r[3].d[0] = c.r[3].d[0] & 9ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00277D0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 419u, depth + 1u); else { c.pc = 0x00277D20u; return; } if (c.pc != 0x00277D0Cu) [[unlikely]] return; }
L_00277D0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00277D10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00277D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 13;
    if (!(c.fcr31 & kFpuCondition)) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00277EDC; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 148u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00277ED8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00277ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D78u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x00277D78u) [[unlikely]] return; }
L_00277D78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277ED8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D94u); set32(c.r[17], ld32((c.r[3].w[0] + 608u)));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00277D94u) [[unlikely]] return; }
L_00277D94:
    c.f[1] = ld32((c.r[17].w[0] + 2036u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00277ED8; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00277DBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00277E14; } }
L_00277DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277DC4u); set32(c.r[5], 0u + 55u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00277DC4u) [[unlikely]] return; }
L_00277DC4:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00277DE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00277DF4; } }
L_00277DE4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00277DF4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00277E14; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_00277E0C; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00277E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E14; } }
L_00277E14:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00277ED8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277E28u); set32(c.r[5], 0u + 55u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00277E28u) [[unlikely]] return; }
L_00277E28:
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00277E40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00277E98; } }
L_00277E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277E48u); set32(c.r[5], 0u + 55u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00277E48u) [[unlikely]] return; }
L_00277E48:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00277E68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00277E78; } }
L_00277E68:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00277E78:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00277E98; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00277E90; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00277E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E98; } }
L_00277E98:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[6], 0u + 55u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277EA8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00277EA8u) [[unlikely]] return; }
L_00277EA8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00277ED8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277EC8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00277EC8u) [[unlikely]] return; }
L_00277EC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277ED8u); set32(c.r[5], c.r[5].w[0] + 32496u);  if (depth < kMaxDepth) unit_0059(c, 52u, depth + 1u); else { c.pc = 0x002845E0u; return; } if (c.pc != 0x00277ED8u) [[unlikely]] return; }
L_00277ED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00277EDC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00277EF0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 316u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277F20u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x00277F20u) [[unlikely]] return; }
L_00277F20:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  [[clang::musttail]] return unit_0056(c, 4u, depth); }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    set32(c.r[7], 0u + 10000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277F4Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 361u, depth + 1u); else { c.pc = 0x002A7D10u; return; } if (c.pc != 0x00277F4Cu) [[unlikely]] return; }
L_00277F4C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 3u, depth); } }
    set32(c.r[4], ld32((c.r[16].w[0] + 464u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_00277FA4; }
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277F70u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x00158FC0u; return; } if (c.pc != 0x00277F70u) [[unlikely]] return; }
L_00277F70:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277F7Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00277F7Cu) [[unlikely]] return; }
L_00277F7C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277F88u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x00277F88u) [[unlikely]] return; }
L_00277F88:
    c.r[6].d[0] = c.r[19].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277F9Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x00277F9Cu) [[unlikely]] return; }
L_00277F9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 144u)));  if (t) { goto L_00277FB0; } }
L_00277FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277FACu);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00277FACu) [[unlikely]] return; }
L_00277FAC:
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 1;
L_00277FB0:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277FBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00277FBCu) [[unlikely]] return; }
L_00277FBC:
    set32(c.r[4], c.r[17].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277FC8u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00277FC8u) [[unlikely]] return; }
L_00277FC8:
    set32(c.r[3], ld32((c.r[17].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[17].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30388u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 3u, depth); } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 2u, depth); } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_0056(c, 1u, depth);
}

}
