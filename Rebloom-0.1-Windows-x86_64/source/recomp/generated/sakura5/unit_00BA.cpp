#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BA[4096] = {
    1, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0,
    0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105,
    0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 117,
    0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0,
    0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169,
    0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0,
    0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 193,
    0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0,
    0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0,
    0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302,
    0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0,
    0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0,
    0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0,
    0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0,
    371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0,
    0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0,
    381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0,
    0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395,
    0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0,
    0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0,
    0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 409, 0, 0, 410, 0, 0, 0, 0,
    411, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 419, 0, 0,
    420, 0, 421, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 428, 0, 0, 429,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0,
    0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0,
    0, 0, 440, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0,
    0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00BA(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00408000;
    case 2u: goto L_00408004;
    case 3u: goto L_00408014;
    case 4u: goto L_00408038;
    case 5u: goto L_00408058;
    case 6u: goto L_00408068;
    case 7u: goto L_00408070;
    case 8u: goto L_0040808C;
    case 9u: goto L_004080A0;
    case 10u: goto L_004080B0;
    case 11u: goto L_004080C0;
    case 12u: goto L_004080E0;
    case 13u: goto L_00408100;
    case 14u: goto L_00408120;
    case 15u: goto L_00408140;
    case 16u: goto L_00408160;
    case 17u: goto L_00408178;
    case 18u: goto L_004081EC;
    case 19u: goto L_0040820C;
    case 20u: goto L_0040822C;
    case 21u: goto L_0040824C;
    case 22u: goto L_00408258;
    case 23u: goto L_0040827C;
    case 24u: goto L_004082A0;
    case 25u: goto L_004082C4;
    case 26u: goto L_004082E8;
    case 27u: goto L_00408308;
    case 28u: goto L_00408328;
    case 29u: goto L_00408348;
    case 30u: goto L_00408368;
    case 31u: goto L_00408388;
    case 32u: goto L_004083B0;
    case 33u: goto L_0040840C;
    case 34u: goto L_00408410;
    case 35u: goto L_00408444;
    case 36u: goto L_00408468;
    case 37u: goto L_00408488;
    case 38u: goto L_00408498;
    case 39u: goto L_004084A0;
    case 40u: goto L_004084BC;
    case 41u: goto L_004084D0;
    case 42u: goto L_004084E0;
    case 43u: goto L_004084F0;
    case 44u: goto L_00408510;
    case 45u: goto L_00408530;
    case 46u: goto L_00408550;
    case 47u: goto L_00408570;
    case 48u: goto L_00408590;
    case 49u: goto L_004085A8;
    case 50u: goto L_0040861C;
    case 51u: goto L_0040863C;
    case 52u: goto L_0040865C;
    case 53u: goto L_0040867C;
    case 54u: goto L_00408688;
    case 55u: goto L_004086AC;
    case 56u: goto L_004086D0;
    case 57u: goto L_004086F4;
    case 58u: goto L_00408718;
    case 59u: goto L_00408738;
    case 60u: goto L_00408758;
    case 61u: goto L_00408778;
    case 62u: goto L_00408798;
    case 63u: goto L_004087B8;
    case 64u: goto L_004087E0;
    case 65u: goto L_0040883C;
    case 66u: goto L_00408840;
    case 67u: goto L_00408878;
    case 68u: goto L_00408890;
    case 69u: goto L_004088F0;
    case 70u: goto L_004088FC;
    case 71u: goto L_00408920;
    case 72u: goto L_00408934;
    case 73u: goto L_00408940;
    case 74u: goto L_00408944;
    case 75u: goto L_00408960;
    case 76u: goto L_0040898C;
    case 77u: goto L_004089B0;
    case 78u: goto L_004089D8;
    case 79u: goto L_004089EC;
    case 80u: goto L_004089F8;
    case 81u: goto L_00408A30;
    case 82u: goto L_00408A7C;
    case 83u: goto L_00408A9C;
    case 84u: goto L_00408ABC;
    case 85u: goto L_00408AD4;
    case 86u: goto L_00408AF8;
    case 87u: goto L_00408B10;
    case 88u: goto L_00408B30;
    case 89u: goto L_00408B54;
    case 90u: goto L_00408B64;
    case 91u: goto L_00408B78;
    case 92u: goto L_00408B8C;
    case 93u: goto L_00408C80;
    case 94u: goto L_00408C90;
    case 95u: goto L_00408CA0;
    case 96u: goto L_00408CD0;
    case 97u: goto L_00408D2C;
    case 98u: goto L_00408D3C;
    case 99u: goto L_00408DA8;
    case 100u: goto L_00408DCC;
    case 101u: goto L_00408DF0;
    case 102u: goto L_00408E14;
    case 103u: goto L_00408E28;
    case 104u: goto L_00408E40;
    case 105u: goto L_00408E7C;
    case 106u: goto L_00408E8C;
    case 107u: goto L_00408E9C;
    case 108u: goto L_00408EC4;
    case 109u: goto L_00408F1C;
    case 110u: goto L_00408F30;
    case 111u: goto L_00408FF4;
    case 112u: goto L_00409034;
    case 113u: goto L_0040903C;
    case 114u: goto L_00409054;
    case 115u: goto L_0040905C;
    case 116u: goto L_00409074;
    case 117u: goto L_0040907C;
    case 118u: goto L_00409090;
    case 119u: goto L_004090A0;
    case 120u: goto L_004090B4;
    case 121u: goto L_004090CC;
    case 122u: goto L_004090DC;
    case 123u: goto L_004090F4;
    case 124u: goto L_00409108;
    case 125u: goto L_00409120;
    case 126u: goto L_00409130;
    case 127u: goto L_0040917C;
    case 128u: goto L_004091B4;
    case 129u: goto L_004091E4;
    case 130u: goto L_004091F0;
    case 131u: goto L_00409204;
    case 132u: goto L_00409218;
    case 133u: goto L_00409320;
    case 134u: goto L_0040937C;
    case 135u: goto L_0040939C;
    case 136u: goto L_004093A8;
    case 137u: goto L_004093B0;
    case 138u: goto L_004093CC;
    case 139u: goto L_00409424;
    case 140u: goto L_00409444;
    case 141u: goto L_00409450;
    case 142u: goto L_00409458;
    case 143u: goto L_004094A8;
    case 144u: goto L_004094C8;
    case 145u: goto L_004094D4;
    case 146u: goto L_004094EC;
    case 147u: goto L_00409530;
    case 148u: goto L_00409550;
    case 149u: goto L_0040955C;
    case 150u: goto L_00409580;
    case 151u: goto L_004095B0;
    case 152u: goto L_004095C4;
    case 153u: goto L_004095DC;
    case 154u: goto L_004095F0;
    case 155u: goto L_00409614;
    case 156u: goto L_00409628;
    case 157u: goto L_00409650;
    case 158u: goto L_00409680;
    case 159u: goto L_004096A8;
    case 160u: goto L_004096D4;
    case 161u: goto L_00409708;
    case 162u: goto L_0040972C;
    case 163u: goto L_00409750;
    case 164u: goto L_00409780;
    case 165u: goto L_004097F4;
    case 166u: goto L_00409804;
    case 167u: goto L_0040982C;
    case 168u: goto L_00409848;
    case 169u: goto L_0040987C;
    case 170u: goto L_0040989C;
    case 171u: goto L_004098F0;
    case 172u: goto L_0040991C;
    case 173u: goto L_00409974;
    case 174u: goto L_00409998;
    case 175u: goto L_004099B8;
    case 176u: goto L_004099D4;
    case 177u: goto L_004099E8;
    case 178u: goto L_00409A04;
    case 179u: goto L_00409A10;
    case 180u: goto L_00409A68;
    case 181u: goto L_00409A74;
    case 182u: goto L_00409A88;
    case 183u: goto L_00409AB8;
    case 184u: goto L_00409AE0;
    case 185u: goto L_00409B00;
    case 186u: goto L_00409B30;
    case 187u: goto L_00409B60;
    case 188u: goto L_00409B78;
    case 189u: goto L_00409B90;
    case 190u: goto L_00409BC0;
    case 191u: goto L_00409BE0;
    case 192u: goto L_00409BF4;
    case 193u: goto L_00409BFC;
    case 194u: goto L_00409C10;
    case 195u: goto L_00409C20;
    case 196u: goto L_00409C30;
    case 197u: goto L_00409C38;
    case 198u: goto L_00409C44;
    case 199u: goto L_00409C50;
    case 200u: goto L_00409C60;
    case 201u: goto L_00409C68;
    case 202u: goto L_00409C80;
    case 203u: goto L_00409CA0;
    case 204u: goto L_00409CC8;
    case 205u: goto L_00409CD0;
    case 206u: goto L_00409CD8;
    case 207u: goto L_00409CF0;
    case 208u: goto L_00409D10;
    case 209u: goto L_00409D34;
    case 210u: goto L_00409D4C;
    case 211u: goto L_00409D5C;
    case 212u: goto L_00409D80;
    case 213u: goto L_00409DA4;
    case 214u: goto L_00409DAC;
    case 215u: goto L_00409DB4;
    case 216u: goto L_00409DD0;
    case 217u: goto L_00409DEC;
    case 218u: goto L_00409DF4;
    case 219u: goto L_00409E10;
    case 220u: goto L_00409E40;
    case 221u: goto L_00409E50;
    case 222u: goto L_00409E5C;
    case 223u: goto L_00409E80;
    case 224u: goto L_00409E90;
    case 225u: goto L_00409ED0;
    case 226u: goto L_00409EF4;
    case 227u: goto L_00409F34;
    case 228u: goto L_00409F50;
    case 229u: goto L_00409F5C;
    case 230u: goto L_00409F90;
    case 231u: goto L_00409F9C;
    case 232u: goto L_0040A010;
    case 233u: goto L_0040A040;
    case 234u: goto L_0040A058;
    case 235u: goto L_0040A0A0;
    case 236u: goto L_0040A0F0;
    case 237u: goto L_0040A104;
    case 238u: goto L_0040A118;
    case 239u: goto L_0040A130;
    case 240u: goto L_0040A180;
    case 241u: goto L_0040A1C0;
    case 242u: goto L_0040A1CC;
    case 243u: goto L_0040A210;
    case 244u: goto L_0040A250;
    case 245u: goto L_0040A278;
    case 246u: goto L_0040A28C;
    case 247u: goto L_0040A2B0;
    case 248u: goto L_0040A2F0;
    case 249u: goto L_0040A30C;
    case 250u: goto L_0040A32C;
    case 251u: goto L_0040A33C;
    case 252u: goto L_0040A348;
    case 253u: goto L_0040A350;
    case 254u: goto L_0040A3F0;
    case 255u: goto L_0040A3F8;
    case 256u: goto L_0040A448;
    case 257u: goto L_0040A450;
    case 258u: goto L_0040A480;
    case 259u: goto L_0040A49C;
    case 260u: goto L_0040A4C8;
    case 261u: goto L_0040A4E0;
    case 262u: goto L_0040A500;
    case 263u: goto L_0040A524;
    case 264u: goto L_0040A560;
    case 265u: goto L_0040A5D0;
    case 266u: goto L_0040A5FC;
    case 267u: goto L_0040A648;
    case 268u: goto L_0040A680;
    case 269u: goto L_0040A720;
    case 270u: goto L_0040A750;
    case 271u: goto L_0040A768;
    case 272u: goto L_0040A780;
    case 273u: goto L_0040A7CC;
    case 274u: goto L_0040A7F4;
    case 275u: goto L_0040A81C;
    case 276u: goto L_0040A840;
    case 277u: goto L_0040A85C;
    case 278u: goto L_0040A884;
    case 279u: goto L_0040A8AC;
    case 280u: goto L_0040A8D0;
    case 281u: goto L_0040A8E8;
    case 282u: goto L_0040A900;
    case 283u: goto L_0040A98C;
    case 284u: goto L_0040A99C;
    case 285u: goto L_0040A9B0;
    case 286u: goto L_0040A9C8;
    case 287u: goto L_0040AA10;
    case 288u: goto L_0040AA20;
    case 289u: goto L_0040AA3C;
    case 290u: goto L_0040AA48;
    case 291u: goto L_0040AA64;
    case 292u: goto L_0040AA7C;
    case 293u: goto L_0040AAB8;
    case 294u: goto L_0040AAF8;
    case 295u: goto L_0040AB0C;
    case 296u: goto L_0040AB28;
    case 297u: goto L_0040AB40;
    case 298u: goto L_0040AB94;
    case 299u: goto L_0040ABAC;
    case 300u: goto L_0040ABBC;
    case 301u: goto L_0040ABD0;
    case 302u: goto L_0040ABFC;
    case 303u: goto L_0040AC0C;
    case 304u: goto L_0040AC38;
    case 305u: goto L_0040AC48;
    case 306u: goto L_0040AC74;
    case 307u: goto L_0040AC8C;
    case 308u: goto L_0040ACE0;
    case 309u: goto L_0040AD1C;
    case 310u: goto L_0040AD30;
    case 311u: goto L_0040AD48;
    case 312u: goto L_0040ADA0;
    case 313u: goto L_0040ADB8;
    case 314u: goto L_0040ADD0;
    case 315u: goto L_0040ADE8;
    case 316u: goto L_0040AE00;
    case 317u: goto L_0040AE18;
    case 318u: goto L_0040AE2C;
    case 319u: goto L_0040AE44;
    case 320u: goto L_0040AE4C;
    case 321u: goto L_0040AE64;
    case 322u: goto L_0040AE9C;
    case 323u: goto L_0040AEF0;
    case 324u: goto L_0040AF04;
    case 325u: goto L_0040AF10;
    case 326u: goto L_0040AF1C;
    case 327u: goto L_0040AF30;
    case 328u: goto L_0040AF4C;
    case 329u: goto L_0040AF54;
    case 330u: goto L_0040B088;
    case 331u: goto L_0040B0A0;
    case 332u: goto L_0040B0B8;
    case 333u: goto L_0040B0C4;
    case 334u: goto L_0040B12C;
    case 335u: goto L_0040B174;
    case 336u: goto L_0040B18C;
    case 337u: goto L_0040B1A4;
    case 338u: goto L_0040B1C0;
    case 339u: goto L_0040B1CC;
    case 340u: goto L_0040B24C;
    case 341u: goto L_0040B264;
    case 342u: goto L_0040B270;
    case 343u: goto L_0040B2B0;
    case 344u: goto L_0040B304;
    case 345u: goto L_0040B32C;
    case 346u: goto L_0040B364;
    case 347u: goto L_0040B38C;
    case 348u: goto L_0040B3A4;
    case 349u: goto L_0040B3F0;
    case 350u: goto L_0040B474;
    case 351u: goto L_0040B484;
    case 352u: goto L_0040B49C;
    case 353u: goto L_0040B4B0;
    case 354u: goto L_0040B4C0;
    case 355u: goto L_0040B4CC;
    case 356u: goto L_0040B4D4;
    case 357u: goto L_0040B50C;
    case 358u: goto L_0040B520;
    case 359u: goto L_0040B55C;
    case 360u: goto L_0040B578;
    case 361u: goto L_0040B590;
    case 362u: goto L_0040B5D8;
    case 363u: goto L_0040B5EC;
    case 364u: goto L_0040B62C;
    case 365u: goto L_0040B638;
    case 366u: goto L_0040B644;
    case 367u: goto L_0040B650;
    case 368u: goto L_0040B65C;
    case 369u: goto L_0040B668;
    case 370u: goto L_0040B674;
    case 371u: goto L_0040B680;
    case 372u: goto L_0040B6C0;
    case 373u: goto L_0040B6F4;
    case 374u: goto L_0040B704;
    case 375u: goto L_0040B730;
    case 376u: goto L_0040B738;
    case 377u: goto L_0040B744;
    case 378u: goto L_0040B750;
    case 379u: goto L_0040B75C;
    case 380u: goto L_0040B768;
    case 381u: goto L_0040B780;
    case 382u: goto L_0040B7BC;
    case 383u: goto L_0040B7D0;
    case 384u: goto L_0040B7E0;
    case 385u: goto L_0040B7F8;
    case 386u: goto L_0040B820;
    case 387u: goto L_0040B850;
    case 388u: goto L_0040B888;
    case 389u: goto L_0040B8A0;
    case 390u: goto L_0040B8C0;
    case 391u: goto L_0040B8F8;
    case 392u: goto L_0040B908;
    case 393u: goto L_0040B930;
    case 394u: goto L_0040B970;
    case 395u: goto L_0040B97C;
    case 396u: goto L_0040B9A0;
    case 397u: goto L_0040B9B4;
    case 398u: goto L_0040B9F0;
    case 399u: goto L_0040BA04;
    case 400u: goto L_0040BA1C;
    case 401u: goto L_0040BA5C;
    case 402u: goto L_0040BA74;
    case 403u: goto L_0040BA88;
    case 404u: goto L_0040BA94;
    case 405u: goto L_0040BAAC;
    case 406u: goto L_0040BAC0;
    case 407u: goto L_0040BACC;
    case 408u: goto L_0040BAD8;
    case 409u: goto L_0040BAE0;
    case 410u: goto L_0040BAEC;
    case 411u: goto L_0040BB00;
    case 412u: goto L_0040BB0C;
    case 413u: goto L_0040BB18;
    case 414u: goto L_0040BB2C;
    case 415u: goto L_0040BB38;
    case 416u: goto L_0040BB44;
    case 417u: goto L_0040BB58;
    case 418u: goto L_0040BB64;
    case 419u: goto L_0040BB74;
    case 420u: goto L_0040BB80;
    case 421u: goto L_0040BB88;
    case 422u: goto L_0040BB94;
    case 423u: goto L_0040BBA8;
    case 424u: goto L_0040BBB4;
    case 425u: goto L_0040BBC0;
    case 426u: goto L_0040BBD4;
    case 427u: goto L_0040BBE0;
    case 428u: goto L_0040BBF0;
    case 429u: goto L_0040BBFC;
    case 430u: goto L_0040BC28;
    case 431u: goto L_0040BC78;
    case 432u: goto L_0040BC94;
    case 433u: goto L_0040BCA8;
    case 434u: goto L_0040BCC4;
    case 435u: goto L_0040BCE0;
    case 436u: goto L_0040BCE8;
    case 437u: goto L_0040BD10;
    case 438u: goto L_0040BD30;
    case 439u: goto L_0040BD70;
    case 440u: goto L_0040BD88;
    case 441u: goto L_0040BD90;
    case 442u: goto L_0040BDBC;
    case 443u: goto L_0040BE00;
    case 444u: goto L_0040BE0C;
    case 445u: goto L_0040BE40;
    case 446u: goto L_0040BE98;
    case 447u: goto L_0040BEA8;
    case 448u: goto L_0040BEB4;
    case 449u: goto L_0040BEBC;
    case 450u: goto L_0040BEE8;
    case 451u: goto L_0040BF2C;
    case 452u: goto L_0040BF38;
    case 453u: goto L_0040BF70;
    case 454u: goto L_0040BF94;
    case 455u: goto L_0040BF9C;
    case 456u: goto L_0040BFC8;
    default: bad_entry(c, 0x00408000u); return;
    }
L_00408000:
    st32((c.r[16].w[0] + 696u), c.r[2].w[0]);
    c.budget -= 1;
L_00408004:
    set32(c.r[6], ld32((c.r[16].w[0] + 696u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408014u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B9(c, 358u, depth + 1u); else { c.pc = 0x00407850u; return; } if (c.pc != 0x00408014u) [[unlikely]] return; }
L_00408014:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_0040803C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00408038u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00408038u) [[unlikely]] return; }
L_00408038:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_0040803C:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 88u)));  goto L_0040805C; }
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408058u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408058u) [[unlikely]] return; }
L_00408058:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_0040805C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00408940; } }
L_00408068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408070u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00408070u) [[unlikely]] return; }
L_00408070:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 4098ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040808Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x0040808Cu) [[unlikely]] return; }
L_0040808C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004080A0u); c.r[6].d[0] = c.r[2].d[0] | 4101ull;  if (depth < kMaxDepth) unit_002B(c, 435u, depth + 1u); else { c.pc = 0x001CFFF0u; return; } if (c.pc != 0x004080A0u) [[unlikely]] return; }
L_004080A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00408940; } }
L_004080B0:
    set32(c.r[2], 0u - 16385u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004080C0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 363u, depth + 1u); else { c.pc = 0x00407930u; return; } if (c.pc != 0x004080C0u) [[unlikely]] return; }
L_004080C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_004080E4; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004080E0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004080E0u) [[unlikely]] return; }
L_004080E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_004080E4:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_00408104; }
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408100u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408100u) [[unlikely]] return; }
L_00408100:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_00408104:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_00408124; }
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408120u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408120u) [[unlikely]] return; }
L_00408120:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_00408124:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_00408144; }
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408140u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408140u) [[unlikely]] return; }
L_00408140:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_00408144:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);  goto L_00408164; }
    set32(c.r[5], 0u + 23u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408160u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408160u) [[unlikely]] return; }
L_00408160:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 1;
L_00408164:
    st32((c.r[16].w[0] + 712u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00408940; } }
L_00408178:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_00408190; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004081A8; } }
L_00408190:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_004081A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_00408940; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 156u)));  goto L_004081F0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004081ECu); set32(c.r[5], 0u + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004081ECu) [[unlikely]] return; }
L_004081EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_004081F0:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 156u)));  goto L_00408210; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040820Cu); set32(c.r[5], 0u + 21u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040820Cu) [[unlikely]] return; }
L_0040820C:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_00408210:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 156u)));  goto L_00408230; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040822Cu); set32(c.r[5], 0u + 22u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040822Cu) [[unlikely]] return; }
L_0040822C:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_00408230:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00408250; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040824Cu); set32(c.r[5], 0u + 23u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040824Cu) [[unlikely]] return; }
L_0040824C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00408250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408258u);  if (depth < kMaxDepth) unit_00B9(c, 357u, depth + 1u); else { c.pc = 0x00407830u; return; } if (c.pc != 0x00408258u) [[unlikely]] return; }
L_00408258:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_00408280; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 20u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040827Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040827Cu) [[unlikely]] return; }
L_0040827C:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_00408280:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_004082A4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 21u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004082A0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004082A0u) [[unlikely]] return; }
L_004082A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_004082A4:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_004082C8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004082C4u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004082C4u) [[unlikely]] return; }
L_004082C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_004082C8:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_004082EC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 23u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004082E8u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004082E8u) [[unlikely]] return; }
L_004082E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_004082EC:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_0040830C; }
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408308u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408308u) [[unlikely]] return; }
L_00408308:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_0040830C:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_0040832C; }
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408328u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408328u) [[unlikely]] return; }
L_00408328:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_0040832C:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_0040834C; }
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408348u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408348u) [[unlikely]] return; }
L_00408348:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_0040834C:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_0040836C; }
    set32(c.r[5], 0u + 23u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408368u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408368u) [[unlikely]] return; }
L_00408368:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_0040836C:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 712u));  goto L_0040838C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00408388u); set32(c.r[5], 0u + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00408388u) [[unlikely]] return; }
L_00408388:
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.budget -= 1;
L_0040838C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 712u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00408940; } }
L_004083B0:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_004083C8; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004083E0; } }
L_004083C8:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_004083E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407F40u | kUnwind; return; } [[clang::musttail]] return unit_00B9(c, 402u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408940; } }
L_0040840C:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_00408410:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 696u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 696u)));  goto L_00408438; }
    st32((c.r[16].w[0] + 696u), 0u);
    set32(c.r[6], ld32((c.r[16].w[0] + 696u)));
    c.budget -= 2;
L_00408438:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408444u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B9(c, 358u, depth + 1u); else { c.pc = 0x00407850u; return; } if (c.pc != 0x00408444u) [[unlikely]] return; }
L_00408444:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_0040846C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 11u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00408468u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00408468u) [[unlikely]] return; }
L_00408468:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_0040846C:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 88u)));  goto L_0040848C; }
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408488u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408488u) [[unlikely]] return; }
L_00408488:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_0040848C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00408940; } }
L_00408498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004084A0u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x004084A0u) [[unlikely]] return; }
L_004084A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 4098ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004084BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x004084BCu) [[unlikely]] return; }
L_004084BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004084D0u); c.r[6].d[0] = c.r[2].d[0] | 4101ull;  if (depth < kMaxDepth) unit_002B(c, 435u, depth + 1u); else { c.pc = 0x001CFFF0u; return; } if (c.pc != 0x004084D0u) [[unlikely]] return; }
L_004084D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00408940; } }
L_004084E0:
    set32(c.r[2], 0u - 16385u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004084F0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 363u, depth + 1u); else { c.pc = 0x00407930u; return; } if (c.pc != 0x004084F0u) [[unlikely]] return; }
L_004084F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_00408514; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408510u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408510u) [[unlikely]] return; }
L_00408510:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_00408514:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_00408534; }
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408530u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408530u) [[unlikely]] return; }
L_00408530:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_00408534:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_00408554; }
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408550u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408550u) [[unlikely]] return; }
L_00408550:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_00408554:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_00408574; }
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408570u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408570u) [[unlikely]] return; }
L_00408570:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_00408574:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);  goto L_00408594; }
    set32(c.r[5], 0u + 23u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408590u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408590u) [[unlikely]] return; }
L_00408590:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 1;
L_00408594:
    st32((c.r[16].w[0] + 712u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00408940; } }
L_004085A8:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_004085C0; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004085D8; } }
L_004085C0:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_004085D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_00408940; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 156u)));  goto L_00408620; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040861Cu); set32(c.r[5], 0u + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040861Cu) [[unlikely]] return; }
L_0040861C:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_00408620:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 156u)));  goto L_00408640; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040863Cu); set32(c.r[5], 0u + 21u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040863Cu) [[unlikely]] return; }
L_0040863C:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_00408640:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 156u)));  goto L_00408660; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040865Cu); set32(c.r[5], 0u + 22u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040865Cu) [[unlikely]] return; }
L_0040865C:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_00408660:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00408680; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040867Cu); set32(c.r[5], 0u + 23u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040867Cu) [[unlikely]] return; }
L_0040867C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00408680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408688u);  if (depth < kMaxDepth) unit_00B9(c, 357u, depth + 1u); else { c.pc = 0x00407830u; return; } if (c.pc != 0x00408688u) [[unlikely]] return; }
L_00408688:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_004086B0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 20u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004086ACu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004086ACu) [[unlikely]] return; }
L_004086AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_004086B0:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_004086D4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 21u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004086D0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004086D0u) [[unlikely]] return; }
L_004086D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_004086D4:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_004086F8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004086F4u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004086F4u) [[unlikely]] return; }
L_004086F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_004086F8:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_0040871C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 23u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00408718u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00408718u) [[unlikely]] return; }
L_00408718:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_0040871C:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_0040873C; }
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408738u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408738u) [[unlikely]] return; }
L_00408738:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_0040873C:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_0040875C; }
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408758u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408758u) [[unlikely]] return; }
L_00408758:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_0040875C:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_0040877C; }
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408778u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408778u) [[unlikely]] return; }
L_00408778:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_0040877C:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 156u)));  goto L_0040879C; }
    set32(c.r[5], 0u + 23u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408798u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408798u) [[unlikely]] return; }
L_00408798:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_0040879C:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 712u));  goto L_004087BC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004087B8u); set32(c.r[5], 0u + 11u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004087B8u) [[unlikely]] return; }
L_004087B8:
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.budget -= 1;
L_004087BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 712u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00408940; } }
L_004087E0:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_004087F8; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00408810; } }
L_004087F8:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_00408810:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407F40u | kUnwind; return; } [[clang::musttail]] return unit_00B9(c, 402u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408940; } }
L_0040883C:
    set32(c.r[4], 0u + 50u);
    c.budget -= 1;
L_00408840:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[16].w[0] + 88u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 16383ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 10;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);  goto L_0040887C; }
    set32(c.r[5], 0u + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408878u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00408878u) [[unlikely]] return; }
L_00408878:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_0040887C:
    st32((c.r[16].w[0] + 712u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00408940; } }
L_00408890:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_004088AC; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004088C4; } }
L_004088AC:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_004088C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_00408940; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004088F0u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x004088F0u) [[unlikely]] return; }
L_004088F0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004088FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 79u, depth + 1u); else { c.pc = 0x003FCC30u; return; } if (c.pc != 0x004088FCu) [[unlikely]] return; }
L_004088FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 692u)));  goto L_00408928; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 156u), 0u);  goto L_00408924; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00408920u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00408920u) [[unlikely]] return; }
L_00408920:
    st32((c.r[16].w[0] + 156u), 0u);
    c.budget -= 1;
L_00408924:
    set32(c.r[4], ld32((c.r[16].w[0] + 692u)));
    c.budget -= 1;
L_00408928:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408934u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_004F(c, 276u, depth + 1u); else { c.pc = 0x0025EE30u; return; } if (c.pc != 0x00408934u) [[unlikely]] return; }
L_00408934:
    set32(c.r[5], ld32((c.r[16].w[0] + 696u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408940u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00408940u) [[unlikely]] return; }
L_00408940:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00408944:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00408960:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040898Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 249u, depth + 1u); else { c.pc = 0x003FF310u; return; } if (c.pc != 0x0040898Cu) [[unlikely]] return; }
L_0040898C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 14416u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 152u), 0u);
    c.budget -= 7;
    { const bool t = c.r[17].sd[0] > 0; st32((c.r[16].w[0] + 188u), 0u);  if (t) { goto L_004089C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004089B0u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x004089B0u) [[unlikely]] return; }
L_004089B0:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_004089EC; } }
L_004089C8:
    st32((c.r[16].w[0] + 168u), c.r[17].w[0]);
    set32(c.r[17], c.r[17].w[0] << 4);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004089D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x004089D8u) [[unlikely]] return; }
L_004089D8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004089ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x004089ECu) [[unlikely]] return; }
L_004089EC:
    set32(c.r[4], 0u + 261u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004089F8u); st32((c.r[16].w[0] + 156u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x004089F8u) [[unlikely]] return; }
L_004089F8:
    st32((c.r[16].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[3], 0u + 255u);
    st32((c.r[16].w[0] + 172u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 176u), 0u);
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00408A30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00408B10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 14416u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_00408A84; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 152u), 0u);  goto L_00408A80; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00408A7Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00408A7Cu) [[unlikely]] return; }
L_00408A7C:
    st32((c.r[17].w[0] + 152u), 0u);
    c.budget -= 1;
L_00408A80:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_00408A84:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 188u)));  goto L_00408AA4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00408A9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00408A9Cu) [[unlikely]] return; }
L_00408A9C:
    st32((c.r[17].w[0] + 148u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 2;
L_00408AA4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 164u)));  goto L_00408AC4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00408ABCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00408ABCu) [[unlikely]] return; }
L_00408ABC:
    st32((c.r[17].w[0] + 188u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 2;
L_00408AC4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00408AD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408AD4u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00408AD4u) [[unlikely]] return; }
L_00408AD4:
    st32((c.r[17].w[0] + 164u), 0u);
    c.budget -= 1;
L_00408AD8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00408AFC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13568u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408AF8u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x00408AF8u) [[unlikely]] return; }
L_00408AF8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00408AFC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00408B14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408B10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00408B10u) [[unlikely]] return; }
L_00408B10:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00408B14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00408B30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00408BBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408B54u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x00408B54u) [[unlikely]] return; }
L_00408B54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[16].w[0] + 180u));  goto L_00408B98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408B64u); set32(c.r[4], 0u + 2048u);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x00408B64u) [[unlikely]] return; }
L_00408B64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00408B94; } }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408B78u); c.r[4].d[0] = c.r[2].d[0] << 32;  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x00408B78u) [[unlikely]] return; }
L_00408B78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00408B94; } }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408B8Cu); c.r[4].d[0] = c.r[2].d[0] << 32;  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x00408B8Cu) [[unlikely]] return; }
L_00408B8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 180u));  goto L_00408BC0; }
L_00408B94:
    c.f[1] = ld32((c.r[16].w[0] + 180u));
    c.budget -= 1;
L_00408B98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41CC0000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 180u), c.r[3].w[0]);  if (t) { goto L_00408BE4; } }
L_00408BBC:
    c.f[1] = ld32((c.r[16].w[0] + 180u));
    c.budget -= 1;
L_00408BC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41CC0000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    c.budget -= 9;
L_00408BE4:
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.r[1].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00408BF8; } }
    set32(c.r[3], 0u + 255u);
    c.budget -= 1;
L_00408BF8:
    c.budget -= 2;
    if (c.r[3].sd[0] >= 0) { st32((c.r[16].w[0] + 180u), c.r[3].w[0]);  goto L_00408C08; }
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    c.budget -= 2;
L_00408C08:
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00408C70; }
    set32(c.r[3], ld32((c.r[5].w[0] + 160u)));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 180u));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 172u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 23;
L_00408C70:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00408C80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00408C90:
    set32(c.r[6], ld32((c.r[4].w[0] + 168u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00408CBC; } }
L_00408CA0:
    set32(c.r[5], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00408CBC; }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_00408CBC:
    c.r[3].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 164u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00408CA0u | kUnwind; return; } goto L_00408CA0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00408CD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 172u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 156u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.budget -= 18;
    if (c.r[5].sd[0] > 0) { set32(c.r[4], ld32((c.r[17].w[0] + 160u)));  goto L_00408D20; }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 2;
L_00408D20:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408D2Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 320u, depth + 1u); else { c.pc = 0x001CAA60u; return; } if (c.pc != 0x00408D2Cu) [[unlikely]] return; }
L_00408D2C:
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408D3Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x00408D3Cu) [[unlikely]] return; }
L_00408D3C:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[6].d[0] = c.r[3].d[0] | 4100ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 184u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], 0u - c.r[7].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[8].w[0] + 208u), c.f[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[8].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 184u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 212u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408DA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x00408DA8u) [[unlikely]] return; }
L_00408DA8:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    if (c.r[8].sd[0] <= 0) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_00408DD0; }
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    set32(c.r[7], 0u - 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408DCCu); c.r[6].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002C(c, 9u, depth + 1u); else { c.pc = 0x001D00F0u; return; } if (c.pc != 0x00408DCCu) [[unlikely]] return; }
L_00408DCC:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00408DD0:
    set32(c.r[3], 0u - 16385u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00408DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[2].d[0] | 4098ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408E14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x00408E14u) [[unlikely]] return; }
L_00408E14:
    set32(c.r[5], ld32((c.r[16].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408E28u); c.r[6].d[0] = c.r[2].d[0] | 4101ull;  if (depth < kMaxDepth) unit_002B(c, 435u, depth + 1u); else { c.pc = 0x001CFFF0u; return; } if (c.pc != 0x00408E28u) [[unlikely]] return; }
L_00408E28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00408E40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_00408EDC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 432u);  goto L_00408E94; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u - 1u);  goto L_00408E80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00408F20; } }
L_00408E7C:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_00408E80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408E8Cu); st32((c.r[16].w[0] + 88u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00408E8Cu) [[unlikely]] return; }
L_00408E8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408F1C; } }
L_00408E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408E9Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00408E9Cu) [[unlikely]] return; }
L_00408E9C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), c.r[4].w[0]);  goto L_00408ECC; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 31872u);
    set32(c.r[7], c.r[7].w[0] + 31888u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408EC4u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 289u, depth + 1u); else { c.pc = 0x00207460u; return; } if (c.pc != 0x00408EC4u) [[unlikely]] return; }
L_00408EC4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 148u), c.r[4].w[0]);
    c.budget -= 2;
L_00408ECC:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 4;
L_00408EDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00408F1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408E7Cu | kUnwind; return; } goto L_00408E7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408E7Cu | kUnwind; return; } goto L_00408E7C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408F1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00408F1Cu) [[unlikely]] return; }
L_00408F1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00408F20:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00408F30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 51u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004095D4; } }
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 50u);  goto L_00409548; }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 188u)));  goto L_00409504; }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 30u);  goto L_0040946C; }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 10u);  goto L_00409094; }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 20u);  goto L_004093C4; }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00409090; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 15u);  goto L_00409318; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00409090; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0040906C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0040904C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 56u)));  goto L_00408FD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004095E0; } }
L_00408FD8:
    set32(c.r[2], 0u + 255u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 172u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408FF4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 347u, depth + 1u); else { c.pc = 0x00207BE0u; return; } if (c.pc != 0x00408FF4u) [[unlikely]] return; }
L_00408FF4:
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[2].w[0] + 280u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[3], 0u + 16u);
    st32((c.r[2].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409034u); st32((c.r[3].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 96u, depth + 1u); else { c.pc = 0x00408CD0u; return; } if (c.pc != 0x00409034u) [[unlikely]] return; }
L_00409034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040903Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 101u, depth + 1u); else { c.pc = 0x00408DF0u; return; } if (c.pc != 0x0040903Cu) [[unlikely]] return; }
L_0040903C:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004095DC; } }
L_0040904C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409054u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00409054u) [[unlikely]] return; }
L_00409054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040905Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 84u, depth + 1u); else { c.pc = 0x003FCCA0u; return; } if (c.pc != 0x0040905Cu) [[unlikely]] return; }
L_0040905C:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004095DC; } }
L_0040906C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409074u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00409074u) [[unlikely]] return; }
L_00409074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040907Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 86u, depth + 1u); else { c.pc = 0x003FCCD0u; return; } if (c.pc != 0x0040907Cu) [[unlikely]] return; }
L_0040907C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004095DC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_00409090:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_00409094:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004090A0u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 94u, depth + 1u); else { c.pc = 0x00408C90u; return; } if (c.pc != 0x004090A0u) [[unlikely]] return; }
L_004090A0:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], 0u + 16u);  goto L_00409100; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004090B4u); c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x004090B4u) [[unlikely]] return; }
L_004090B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull | 32768ull;  goto L_004090D4; }
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004090CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004090CCu) [[unlikely]] return; }
L_004090CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004093C0; } }
L_004090D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004090DCu); c.r[4].d[0] = c.r[2].d[0] << 16;  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x004090DCu) [[unlikely]] return; }
L_004090DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004090FC; } }
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004090F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004090F4u) [[unlikely]] return; }
L_004090F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409314; } }
L_004090FC:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_00409100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409108u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00409108u) [[unlikely]] return; }
L_00409108:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 32u);  goto L_00409128; }
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409120u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00409120u) [[unlikely]] return; }
L_00409120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409544; } }
L_00409128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409130u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00409130u) [[unlikely]] return; }
L_00409130:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 256u);  goto L_004091E8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004091E4; } }
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040917Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0040917Cu) [[unlikely]] return; }
L_0040917C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  goto L_004091BC; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[6].d[0] = c.r[2].d[0] | 4096ull;
    set32(c.r[7], 0u - 1u);
    c.r[2].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004091B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 9u, depth + 1u); else { c.pc = 0x001D00F0u; return; } if (c.pc != 0x004091B4u) [[unlikely]] return; }
L_004091B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004091E4; } }
L_004091BC:
    set32(c.r[3], 0u - 16385u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    set32(c.r[7], 0u - 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004091E4u); c.r[6].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002C(c, 9u, depth + 1u); else { c.pc = 0x001D00F0u; return; } if (c.pc != 0x004091E4u) [[unlikely]] return; }
L_004091E4:
    set32(c.r[4], 0u + 256u);
    c.budget -= 1;
L_004091E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004091F0u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x004091F0u) [[unlikely]] return; }
L_004091F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00409468; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409204u); set32(c.r[4], ld32((c.r[17].w[0] + 160u)));  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x00409204u) [[unlikely]] return; }
L_00409204:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409218u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 335u, depth + 1u); else { c.pc = 0x001CEF20u; return; } if (c.pc != 0x00409218u) [[unlikely]] return; }
L_00409218:
    c.f[4] = ld32((c.r[29].w[0] + 76u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[4]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[6], ld32((c.r[16].w[0] + 184u)));  goto L_00409244; }
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004095DC; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 1;
L_00409244:
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    set32(c.r[3], ld32((c.r[16].w[0] + 200u)));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[6].w[0] + 212u));
    set32(c.r[4], c.r[3].w[0] + 160u);
    c.f[3] = ld32((c.r[6].w[0] + 208u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 172u)));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_00409280; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_00409280:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));  goto L_004092A8; }
    c.f[3] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.budget -= 2;
L_004092A8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.f[1] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004092C4; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_004092C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[6].w[0] + 208u), c.f[3]);  goto L_004092EC; }
    c.f[2] = c.f[0];
    st32((c.r[6].w[0] + 208u), c.f[3]);
    c.budget -= 2;
L_004092EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[6].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    st32((c.r[4].w[0] + 212u), c.f[2]);
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_004095DC; } }
L_00409314:
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_00409318:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 2;
L_00409320:
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 172u)));  goto L_00409340; }
    st32((c.r[17].w[0] + 172u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 2;
L_00409340:
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00409320u | kUnwind; return; } goto L_00409320; }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_00409380; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040937Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040937Cu) [[unlikely]] return; }
L_0040937C:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_00409380:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004093A0; }
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040939Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040939Cu) [[unlikely]] return; }
L_0040939C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004093A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004093A8u);  if (depth < kMaxDepth) unit_00BA(c, 96u, depth + 1u); else { c.pc = 0x00408CD0u; return; } if (c.pc != 0x004093A8u) [[unlikely]] return; }
L_004093A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004093B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 101u, depth + 1u); else { c.pc = 0x00408DF0u; return; } if (c.pc != 0x004093B0u) [[unlikely]] return; }
L_004093B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004095DC; } }
L_004093C0:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_004093C4:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 2;
L_004093CC:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 172u), c.r[2].w[0]);  if (t) { goto L_004093E4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 3;
L_004093E4:
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004093CCu | kUnwind; return; } goto L_004093CC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_00409428; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00409424u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00409424u) [[unlikely]] return; }
L_00409424:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_00409428:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00409448; }
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409444u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00409444u) [[unlikely]] return; }
L_00409444:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00409448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409450u);  if (depth < kMaxDepth) unit_00BA(c, 96u, depth + 1u); else { c.pc = 0x00408CD0u; return; } if (c.pc != 0x00409450u) [[unlikely]] return; }
L_00409450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409458u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 101u, depth + 1u); else { c.pc = 0x00408DF0u; return; } if (c.pc != 0x00409458u) [[unlikely]] return; }
L_00409458:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004095DC; } }
L_00409468:
    set32(c.r[3], 0u + 30u);
    c.budget -= 1;
L_0040946C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 10;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_004094AC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004094A8u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004094A8u) [[unlikely]] return; }
L_004094A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_004094AC:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 132u);  goto L_004094CC; }
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004094C8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004094C8u) [[unlikely]] return; }
L_004094C8:
    set32(c.r[4], 0u + 132u);
    c.budget -= 1;
L_004094CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004094D4u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x004094D4u) [[unlikely]] return; }
L_004094D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 188u), c.r[4].w[0]);  goto L_004094F4; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004094ECu); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_00BF(c, 90u, depth + 1u); else { c.pc = 0x0041C9D0u; return; } if (c.pc != 0x004094ECu) [[unlikely]] return; }
L_004094EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 188u), c.r[4].w[0]);
    c.budget -= 2;
L_004094F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004095DC; } }
L_00409504:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004095DC; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_00409538; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00409530u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00409530u) [[unlikely]] return; }
L_00409530:
    st32((c.r[17].w[0] + 188u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_00409538:
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409090u | kUnwind; return; } goto L_00409090; } }
L_00409544:
    set32(c.r[2], 0u + 50u);
    c.budget -= 1;
L_00409548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409550u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00409550u) [[unlikely]] return; }
L_00409550:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040955Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 79u, depth + 1u); else { c.pc = 0x003FCC30u; return; } if (c.pc != 0x0040955Cu) [[unlikely]] return; }
L_0040955C:
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  goto L_00409588; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 152u), 0u);  goto L_00409584; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00409580u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00409580u) [[unlikely]] return; }
L_00409580:
    st32((c.r[17].w[0] + 152u), 0u);
    c.budget -= 1;
L_00409584:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00409588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 32767ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004095B0u); c.r[6].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x004095B0u) [[unlikely]] return; }
L_004095B0:
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004095C4u); c.r[6].d[0] = c.r[2].d[0] | 4101ull;  if (depth < kMaxDepth) unit_002B(c, 435u, depth + 1u); else { c.pc = 0x001CFFF0u; return; } if (c.pc != 0x004095C4u) [[unlikely]] return; }
L_004095C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004095DC; } }
L_004095D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004095DCu); set32(c.r[5], ld32((c.r[17].w[0] + 172u)));  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x004095DCu) [[unlikely]] return; }
L_004095DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004095E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004095F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409614u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00409614u) [[unlikely]] return; }
L_00409614:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409628u); st32((c.r[18].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 157u, depth + 1u); else { c.pc = 0x00409650u; return; } if (c.pc != 0x00409628u) [[unlikely]] return; }
L_00409628:
    st32((c.r[18].w[0] + 52u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 60u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 64u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00409650:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x53520000u);
    c.r[3].d[0] = c.r[3].d[0] | 17484ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 80u), 0u);  c.pc = t; return; }
L_00409680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00409710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004096E4; } }
L_004096A8:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004096E4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 68u)));  goto L_004096D8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004096D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004096D4u) [[unlikely]] return; }
L_004096D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 1;
L_004096D8:
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_004096E4:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 68u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004096A8u | kUnwind; return; } goto L_004096A8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 72u), 0u);  goto L_00409710; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409708u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00409708u) [[unlikely]] return; }
L_00409708:
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 72u), 0u);
    c.budget -= 2;
L_00409710:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  goto L_00409738; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 80u), 0u);  goto L_00409734; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040972Cu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0040972Cu) [[unlikely]] return; }
L_0040972C:
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 80u), 0u);
    c.budget -= 2;
L_00409734:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_00409738:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_00409758; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00409750u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00409750u) [[unlikely]] return; }
L_00409750:
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 2;
L_00409758:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00409780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004098E0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004098DC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_004098C4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 56u)));  goto L_0040985C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  goto L_004097DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004098DC; } }
L_004097DC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 360u);  goto L_004097FC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004097F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004097F4u) [[unlikely]] return; }
L_004097F4:
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[4], 0u + 360u);
    c.budget -= 2;
L_004097FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409804u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00409804u) [[unlikely]] return; }
L_00409804:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), c.r[4].w[0]);  goto L_00409834; }
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 64u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040982Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x0040982Cu) [[unlikely]] return; }
L_0040982C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 2;
L_00409834:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  goto L_00409850; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409848u); set32(c.r[4], c.r[4].w[0] + 31904u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00409848u) [[unlikely]] return; }
L_00409848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), 0u);  if (t) { goto L_004098DC; } }
L_00409850:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
L_0040985C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);  goto L_00409884; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040987Cu); set32(c.r[4], c.r[4].w[0] + 31953u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0040987Cu) [[unlikely]] return; }
L_0040987C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), 0u);  if (t) { goto L_004098DC; } }
L_00409884:
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004098DC; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040989Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 171u, depth + 1u); else { c.pc = 0x004098F0u; return; } if (c.pc != 0x0040989Cu) [[unlikely]] return; }
L_0040989C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  goto L_004098B8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_004098DC; } }
L_004098B8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
L_004098C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 6;
L_004098DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004098E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004098F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0040999C; } }
L_0040991C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20545ull;
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
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 80u)));  goto L_00409988; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[2].d[0] = c.r[2].d[0] | 17473ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040996C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409990; } }
L_0040996C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409974u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x00409974u) [[unlikely]] return; }
L_00409974:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_00409990; } }
L_00409988:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 2;
L_00409990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409998u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x00409998u) [[unlikely]] return; }
L_00409998:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0040999C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040991Cu | kUnwind; return; } goto L_0040991C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 80u)));  goto L_004099D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004099B8u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x004099B8u) [[unlikely]] return; }
L_004099B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_00409AF4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004099D4u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x004099D4u) [[unlikely]] return; }
L_004099D4:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 1;
L_004099D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_00409A08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004099E8u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x004099E8u) [[unlikely]] return; }
L_004099E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_00409AF4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409A04u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00409A04u) [[unlikely]] return; }
L_00409A04:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00409A08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00409AE4; } }
L_00409A10:
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
    c.budget -= 14;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 76u)));  goto L_00409AC4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[2].d[0] = c.r[2].d[0] | 17473ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00409A60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00409AD8; } }
L_00409A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409A68u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x00409A68u) [[unlikely]] return; }
L_00409A68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409A74u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x00409A74u) [[unlikely]] return; }
L_00409A74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 68u)));  goto L_00409A8C; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409A88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x00409A88u) [[unlikely]] return; }
L_00409A88:
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 1;
L_00409A8C:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00409AF4; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409AB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x00409AB8u) [[unlikely]] return; }
L_00409AB8:
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00409AD4; } }
L_00409AC4:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 4;
L_00409AD4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00409AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409AE0u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x00200F00u; return; } if (c.pc != 0x00409AE0u) [[unlikely]] return; }
L_00409AE0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00409AE4:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[6], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00409A10u | kUnwind; return; } goto L_00409A10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00409B04; } }
L_00409AF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409B00u); set32(c.r[4], c.r[4].w[0] + 31988u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00409B00u) [[unlikely]] return; }
L_00409B00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00409B04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00409B30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00409B78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409B60u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00409B60u) [[unlikely]] return; }
L_00409B60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00409B7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409B78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00409B78u) [[unlikely]] return; }
L_00409B78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00409B7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00409B90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_00409BB4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_00409BAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00409BB8; } }
L_00409BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 32032u);  if (t) { goto L_00409BB8; } }
L_00409BB4:
    set32(c.r[2], c.r[2].w[0] + 32368u);
    c.budget -= 1;
L_00409BB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00409BC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 22u);  goto L_00409BD8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 42u);  goto L_00409BD8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00409BD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00409BE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409BF4u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 189u, depth + 1u); else { c.pc = 0x00409B90u; return; } if (c.pc != 0x00409BF4u) [[unlikely]] return; }
L_00409BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409BFCu); c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 190u, depth + 1u); else { c.pc = 0x00409BC0u; return; } if (c.pc != 0x00409BFCu) [[unlikely]] return; }
L_00409BFC:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409C10u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 230u, depth + 1u); else { c.pc = 0x00409F90u; return; } if (c.pc != 0x00409C10u) [[unlikely]] return; }
L_00409C10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00409C20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409C30u);  if (depth < kMaxDepth) unit_00BA(c, 189u, depth + 1u); else { c.pc = 0x00409B90u; return; } if (c.pc != 0x00409C30u) [[unlikely]] return; }
L_00409C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409C38u); c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 190u, depth + 1u); else { c.pc = 0x00409BC0u; return; } if (c.pc != 0x00409C38u) [[unlikely]] return; }
L_00409C38:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409C44u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 228u, depth + 1u); else { c.pc = 0x00409F50u; return; } if (c.pc != 0x00409C44u) [[unlikely]] return; }
L_00409C44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00409C50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409C60u);  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x00409C20u; return; } if (c.pc != 0x00409C60u) [[unlikely]] return; }
L_00409C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409C68u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 261u, depth + 1u); else { c.pc = 0x0040A4E0u; return; } if (c.pc != 0x00409C68u) [[unlikely]] return; }
L_00409C68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00409C80:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 12u);  goto L_00409C98; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 16u);  goto L_00409C98; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00409C98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00409CA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409CC8u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 189u, depth + 1u); else { c.pc = 0x00409B90u; return; } if (c.pc != 0x00409CC8u) [[unlikely]] return; }
L_00409CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409CD0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 190u, depth + 1u); else { c.pc = 0x00409BC0u; return; } if (c.pc != 0x00409CD0u) [[unlikely]] return; }
L_00409CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409CD8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x00409C20u; return; } if (c.pc != 0x00409CD8u) [[unlikely]] return; }
L_00409CD8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409CF0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 235u, depth + 1u); else { c.pc = 0x0040A0A0u; return; } if (c.pc != 0x00409CF0u) [[unlikely]] return; }
L_00409CF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00409D10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409D34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x00409C20u; return; } if (c.pc != 0x00409D34u) [[unlikely]] return; }
L_00409D34:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409D4Cu); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00BA(c, 191u, depth + 1u); else { c.pc = 0x00409BE0u; return; } if (c.pc != 0x00409D4Cu) [[unlikely]] return; }
L_00409D4C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409D5Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00BA(c, 244u, depth + 1u); else { c.pc = 0x0040A250u; return; } if (c.pc != 0x00409D5Cu) [[unlikely]] return; }
L_00409D5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00409D80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409DA4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00BA(c, 189u, depth + 1u); else { c.pc = 0x00409B90u; return; } if (c.pc != 0x00409DA4u) [[unlikely]] return; }
L_00409DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409DACu); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 190u, depth + 1u); else { c.pc = 0x00409BC0u; return; } if (c.pc != 0x00409DACu) [[unlikely]] return; }
L_00409DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409DB4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x00409C20u; return; } if (c.pc != 0x00409DB4u) [[unlikely]] return; }
L_00409DB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409DD0u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_00BA(c, 235u, depth + 1u); else { c.pc = 0x0040A0A0u; return; } if (c.pc != 0x00409DD0u) [[unlikely]] return; }
L_00409DD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00409DE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00409E18; } }
L_00409DE0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409DECu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00BA(c, 232u, depth + 1u); else { c.pc = 0x0040A010u; return; } if (c.pc != 0x00409DECu) [[unlikely]] return; }
L_00409DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409DF4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 221u, depth + 1u); else { c.pc = 0x00409E50u; return; } if (c.pc != 0x00409DF4u) [[unlikely]] return; }
L_00409DF4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409E10u); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00BA(c, 235u, depth + 1u); else { c.pc = 0x0040A0A0u; return; } if (c.pc != 0x00409E10u) [[unlikely]] return; }
L_00409E10:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00409E18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00409E40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 32544u);  c.pc = t; return; }
L_00409E50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00409E68; } }
L_00409E5C:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 3;
L_00409E68:
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409E5Cu | kUnwind; return; } goto L_00409E5C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00409E80:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00409EBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[5].w[0] - 1u);  if (t) { goto L_00409EB4; } }
L_00409E90:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);  goto L_00409EAC; }
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00409EB0; } }
L_00409EAC:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 1;
L_00409EB0:
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 1;
L_00409EB4:
    c.budget -= 2;
    if (c.r[8].sd[0] >= 0) { set32(c.r[3], c.r[8].w[0] - c.r[6].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00409E90u | kUnwind; return; } goto L_00409E90; }
L_00409EBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00409ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[6].w[0])));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 9;
L_00409EF4:
    c.r[1].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] << 8);  if (t) { goto L_00409F0C; } }
    set32(c.r[2], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
L_00409F0C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00409EF4u | kUnwind; return; } goto L_00409EF4; }
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409F34u); set32(c.r[17], c.r[3].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 221u, depth + 1u); else { c.pc = 0x00409E50u; return; } if (c.pc != 0x00409F34u) [[unlikely]] return; }
L_00409F34:
    set32(c.r[3], c.r[16].w[0] >> (c.r[17].w[0] & 31u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00409F50:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00409F6C; } }
L_00409F5C:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00409F6C:
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00409F5Cu | kUnwind; return; } goto L_00409F5C; }
    set32(c.r[2], c.r[6].w[0] + 7u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 3);  c.pc = t; return; }
L_00409F90:
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00409FF4; } }
L_00409F9C:
    set32(c.r[9], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[9].w[0])));
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[9].w[0] + 4u)));  goto L_00409FEC; }
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[7], c.r[7].w[0] - 1u);  goto L_00409FE8; }
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0040A004; }
    set32(c.r[3], c.r[10].w[0] >> 3);
    c.r[2].d[0] = c.r[10].d[0] & 7ull;
    st32((c.r[8].w[0]), c.r[3].w[0]);
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[8].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[9].w[0] + 4u)));
    st32((c.r[8].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040A004; } }
L_00409FE8:
    set32(c.r[2], ld32((c.r[9].w[0] + 4u)));
    c.budget -= 1;
L_00409FEC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00409FF4:
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00409F9Cu | kUnwind; return; } goto L_00409F9C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040A004:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040A010:
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
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 12;
L_0040A040:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A058u); set32(c.r[8], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00BA(c, 230u, depth + 1u); else { c.pc = 0x00409F90u; return; } if (c.pc != 0x0040A058u) [[unlikely]] return; }
L_0040A058:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040A078; }
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A040u | kUnwind; return; } goto L_0040A040; } }
L_0040A078:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0040A0A0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A0F0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 232u, depth + 1u); else { c.pc = 0x0040A010u; return; } if (c.pc != 0x0040A0F0u) [[unlikely]] return; }
L_0040A0F0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] != 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_0040A140; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040A14C; } }
L_0040A104:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A118u); set32(c.r[8], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00BA(c, 230u, depth + 1u); else { c.pc = 0x00409F90u; return; } if (c.pc != 0x0040A118u) [[unlikely]] return; }
L_0040A118:
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A130u); set32(c.r[21], c.r[21].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 225u, depth + 1u); else { c.pc = 0x00409ED0u; return; } if (c.pc != 0x0040A130u) [[unlikely]] return; }
L_0040A130:
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], c.r[22].w[0] << (c.r[3].w[0] & 31u));
    c.r[22].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 4;
L_0040A140:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A104u | kUnwind; return; } goto L_0040A104; }
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_0040A14C:
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
L_0040A180:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0040A1F8; } }
L_0040A1C0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A1CCu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00BA(c, 225u, depth + 1u); else { c.pc = 0x00409ED0u; return; } if (c.pc != 0x0040A1CCu) [[unlikely]] return; }
L_0040A1CC:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[29].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_0040A1F8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 5;
L_0040A1F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A1C0u | kUnwind; return; } goto L_0040A1C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A210u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BA(c, 221u, depth + 1u); else { c.pc = 0x00409E50u; return; } if (c.pc != 0x0040A210u) [[unlikely]] return; }
L_0040A210:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[16].w[0] >> (c.r[5].w[0] & 31u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[4].w[0] >> (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0040A250:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A278u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 221u, depth + 1u); else { c.pc = 0x00409E50u; return; } if (c.pc != 0x0040A278u) [[unlikely]] return; }
L_0040A278:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A28Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 240u, depth + 1u); else { c.pc = 0x0040A180u; return; } if (c.pc != 0x0040A28Cu) [[unlikely]] return; }
L_0040A28C:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040A2B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[16].d[0] != 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0040A2E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040A454; } }
L_0040A2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A2F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0040A2F0u) [[unlikely]] return; }
L_0040A2F0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[20], c.r[16].w[0] << 2);  goto L_0040A304; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040A454; } }
L_0040A304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A30Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0040A30Cu) [[unlikely]] return; }
L_0040A30C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[5].d[0] = c.r[21].d[0] + 0ull;  goto L_0040A320; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040A454; } }
L_0040A320:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A32Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0040A32Cu) [[unlikely]] return; }
L_0040A32C:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A33Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0040A33Cu) [[unlikely]] return; }
L_0040A33C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[16].w[0] - 1u);
    c.budget -= 3;
L_0040A348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0040A37C; } }
L_0040A350:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[4].w[0]));  goto L_0040A370; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] + 10u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
L_0040A370:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] >> 1);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0040A37C:
    c.r[3].d[0] = c.r[5].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A350u | kUnwind; return; } goto L_0040A350; }
    set32(c.r[6], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[18].w[0] + c.r[8].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[4], c.r[4].w[0] >> 1);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_0040A3BC; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0040A3BC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A348u | kUnwind; return; } goto L_0040A348; } }
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));  if (t) { goto L_0040A3D8; } }
    set32(c.r[3], c.r[4].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_0040A3D8:
    set32(c.r[16], c.r[3].w[0] + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[16].w[0] - 1u);
    c.r[5].d[0] = 0ull & 255ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0040A438; } }
L_0040A3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040A420; } }
L_0040A3F8:
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { goto L_0040A414; } }
    set32(c.r[3], c.r[4].w[0] << (c.r[9].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
L_0040A414:
    c.budget -= 2;
    if (c.r[8].d[0] == c.r[2].d[0]) { set32(c.r[3], c.r[19].w[0] + c.r[6].w[0]);  goto L_0040A430; }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0040A420:
    c.r[3].d[0] = c.r[9].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] + c.r[8].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A3F8u | kUnwind; return; } goto L_0040A3F8; }
    set32(c.r[3], c.r[19].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_0040A430:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 2;
L_0040A438:
    c.budget -= 2;
    if (c.r[6].sd[0] >= 0) { c.r[9].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A3F0u | kUnwind; return; } goto L_0040A3F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A448u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0040A448u) [[unlikely]] return; }
L_0040A448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A450u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0040A450u) [[unlikely]] return; }
L_0040A450:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0040A454:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0040A480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A49Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 247u, depth + 1u); else { c.pc = 0x0040A2B0u; return; } if (c.pc != 0x0040A49Cu) [[unlikely]] return; }
L_0040A49C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;  goto L_0040A4AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040A4CC; } }
L_0040A4AC:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0040A4CC; }
    set32(c.r[6], c.r[16].w[0] - c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A4C8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 223u, depth + 1u); else { c.pc = 0x00409E80u; return; } if (c.pc != 0x0040A4C8u) [[unlikely]] return; }
L_0040A4C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0040A4CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040A4E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 32560u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_0040A500:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0040A5C4; } }
    set32(c.r[13], ld32((c.r[6].w[0] + 8u)));
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[12], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[10], 0u + 1u);
    set32(c.r[7], 0u + 9u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[13].d[0] & 1ull;  if (t) { goto L_0040A5B8; } }
L_0040A524:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull; c.r[14].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0040A53C; } }
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    mmi::divu(c, 0, c.r[6].w[0], c.r[12].w[0]);
    c.r[14].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0040A53C:
    set32(c.r[9], c.r[4].w[0] + c.r[3].w[0]);
    c.r[15].d[0] = c.r[10].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[9].w[0]));
    mmi::mult(c, 0, c.r[6].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::divu(c, 0, c.r[6].w[0], c.r[12].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[10].w[0] << (c.r[15].w[0] & 31u));
    c.budget -= 9;
L_0040A560:
    c.r[6].d[0] = c.r[13].d[0] & c.r[6].d[0];
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { mmi::mult(c, 0, c.r[8].w[0], c.r[8].w[0]); c.r[8].d[0] = c.lo.d[0];  goto L_0040A584; }
    mmi::mult(c, 0, c.r[14].w[0], c.r[8].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::divu(c, 0, c.r[6].w[0], c.r[12].w[0]);
    c.r[14].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.budget -= 6;
L_0040A584:
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.r[6].d[0] = c.r[15].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    mmi::divu(c, 0, c.r[8].w[0], c.r[12].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    c.budget -= 6;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], c.r[10].w[0] << (c.r[15].w[0] & 31u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A560u | kUnwind; return; } goto L_0040A560; }
    mmi::divu(c, 0, c.r[14].w[0], c.r[12].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 4;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] - 1u);  goto L_0040A5B0; }
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_0040A5B0:
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_0040A5B8:
    c.r[6].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A524u | kUnwind; return; } goto L_0040A524; } }
L_0040A5C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040A5D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A5FCu); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 433u, depth + 1u); else { c.pc = 0x00423030u; return; } if (c.pc != 0x0040A5FCu) [[unlikely]] return; }
L_0040A5FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43530000u);
    set32(c.r[3], c.r[3].w[0] + 14560u);
    c.r[2].d[0] = c.r[2].d[0] | 22867ull;
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 176u), 0u);
    st32((c.r[19].w[0] + 180u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 184u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 88u), 0u);
    st32((c.r[19].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 104u), 0u);
    c.budget -= 19;
L_0040A648:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 108u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A648u | kUnwind; return; } goto L_0040A648; } }
    st32((c.r[19].w[0] + 120u), 0u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 128u), 0u);  if (t) { goto L_0040A678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 132u), c.r[16].w[0]);  if (t) { goto L_0040A688; } }
L_0040A678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A680u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0040A680u) [[unlikely]] return; }
L_0040A680:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0] + 132u), c.r[16].w[0]);
    c.budget -= 2;
L_0040A688:
    set32(c.r[7], 0u + 1u);
    st32((c.r[19].w[0] + 144u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[19].w[0] + 148u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[19].w[0] + 152u), c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[19].w[0] + 156u), c.r[17].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[19].w[0] + 160u), 0u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 164u), 0u);
    st32((c.r[19].w[0] + 168u), 0u);
    st32((c.r[19].w[0] + 172u), 0u);
    st32((c.r[19].w[0] + 136u), 0u);
    st32((c.r[19].w[0] + 140u), 0u);
    st32((c.r[19].w[0] + 124u), 0u);
    st32((c.r[19].w[0] + 188u), c.r[7].w[0]);
    st32((c.r[19].w[0] + 192u), c.r[7].w[0]);
    st32((c.r[19].w[0] + 196u), c.r[7].w[0]);
    st32((c.r[19].w[0] + 64u), c.r[7].w[0]);
    c.f[2] = ld32((c.r[5].w[0] + 16256u));
    c.f[1] = ld32((c.r[4].w[0] + 16260u));
    c.f[0] = ld32((c.r[3].w[0] + 16264u));
    st32((c.r[19].w[0] + 52u), c.f[2]);
    st32((c.r[19].w[0] + 56u), c.f[1]);
    st32((c.r[19].w[0] + 60u), c.f[0]);
    st32((c.r[19].w[0] + 76u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0040A720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040A768; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A750u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0040A750u) [[unlikely]] return; }
L_0040A750:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040A76C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A768u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0040A768u) [[unlikely]] return; }
L_0040A768:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040A76C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040A780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040A8E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 14560u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 172u)));  goto L_0040A7D4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 144u), 0u);  goto L_0040A7D0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A7CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040A7CCu) [[unlikely]] return; }
L_0040A7CC:
    st32((c.r[17].w[0] + 144u), 0u);
    c.budget -= 1;
L_0040A7D0:
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 1;
L_0040A7D4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 168u)));  goto L_0040A7FC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 172u), 0u);  goto L_0040A7F8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A7F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040A7F4u) [[unlikely]] return; }
L_0040A7F4:
    st32((c.r[17].w[0] + 172u), 0u);
    c.budget -= 1;
L_0040A7F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 1;
L_0040A7FC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 132u)));  goto L_0040A824; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 168u), 0u);  goto L_0040A820; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A81Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040A81Cu) [[unlikely]] return; }
L_0040A81C:
    st32((c.r[17].w[0] + 168u), 0u);
    c.budget -= 1;
L_0040A820:
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 1;
L_0040A824:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 132u), 0u);  goto L_0040A848; }
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0040A844; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A840u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x0040A840u) [[unlikely]] return; }
L_0040A840:
    st32((c.r[17].w[0] + 160u), 0u);
    c.budget -= 1;
L_0040A844:
    st32((c.r[17].w[0] + 132u), 0u);
    c.budget -= 1;
L_0040A848:
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 128u)));  goto L_0040A864; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A85Cu);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0040A85Cu) [[unlikely]] return; }
L_0040A85C:
    st32((c.r[17].w[0] + 164u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 2;
L_0040A864:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 104u)));  goto L_0040A88C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 128u), 0u);  goto L_0040A888; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A884u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040A884u) [[unlikely]] return; }
L_0040A884:
    st32((c.r[17].w[0] + 128u), 0u);
    c.budget -= 1;
L_0040A888:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 1;
L_0040A88C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040A8B0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 104u), 0u);  goto L_0040A8B0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A8ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040A8ACu) [[unlikely]] return; }
L_0040A8AC:
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_0040A8B0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0040A8D4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A8D0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0040A8D0u) [[unlikely]] return; }
L_0040A8D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0040A8D4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040A8EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A8E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0040A8E8u) [[unlikely]] return; }
L_0040A8E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040A8EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040A900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 201u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  goto L_0040AC58; }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  goto L_0040ABE4; }
    set32(c.r[3], 0u + 103u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  goto L_0040AB38; }
    set32(c.r[3], 0u + 102u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  goto L_0040AADC; }
    set32(c.r[3], 0u + 101u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  goto L_0040AA74; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  goto L_0040A9F0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  goto L_0040A96C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0040ACC8; } }
L_0040A96C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 872u);  goto L_0040A994; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 128u), 0u);  goto L_0040A990; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A98Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040A98Cu) [[unlikely]] return; }
L_0040A98C:
    st32((c.r[16].w[0] + 128u), 0u);
    c.budget -= 1;
L_0040A990:
    set32(c.r[4], 0u + 872u);
    c.budget -= 1;
L_0040A994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A99Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0040A99Cu) [[unlikely]] return; }
L_0040A99C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 128u), c.r[2].w[0]);  goto L_0040A9B4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A9B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 421u, depth + 1u); else { c.pc = 0x001B6BB0u; return; } if (c.pc != 0x0040A9B0u) [[unlikely]] return; }
L_0040A9B0:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 1;
L_0040A9B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A9C8u); st32((c.r[2].w[0] + 52u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 489u, depth + 1u); else { c.pc = 0x00423AD0u; return; } if (c.pc != 0x0040A9C8u) [[unlikely]] return; }
L_0040A9C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    st32((c.r[3].w[0] + 752u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 100u);  goto L_0040A9E8; }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040ACC4; } }
L_0040A9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040ACC4; } }
L_0040A9F0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 16u);  goto L_0040AA18; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 144u), 0u);  goto L_0040AA14; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AA10u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040AA10u) [[unlikely]] return; }
L_0040AA10:
    st32((c.r[16].w[0] + 144u), 0u);
    c.budget -= 1;
L_0040AA14:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_0040AA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AA20u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0040AA20u) [[unlikely]] return; }
L_0040AA20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 144u), c.r[2].w[0]);  goto L_0040AA40; }
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AA3Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 87u, depth + 1u); else { c.pc = 0x001809E0u; return; } if (c.pc != 0x0040AA3Cu) [[unlikely]] return; }
L_0040AA3C:
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 1;
L_0040AA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AA48u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x0040AA48u) [[unlikely]] return; }
L_0040AA48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  goto L_0040AA5C; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040ACC4; } }
L_0040AA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AA64u);  if (depth < kMaxDepth) unit_0018(c, 108u, depth + 1u); else { c.pc = 0x00180D10u; return; } if (c.pc != 0x0040AA64u) [[unlikely]] return; }
L_0040AA64:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040ACC4; } }
L_0040AA74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AA7Cu);  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x0040AA7Cu) [[unlikely]] return; }
L_0040AA7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  goto L_0040AA90; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040ACC4; } }
L_0040AA90:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0040AAA8; }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_0040AAA8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040ACC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AAB8u);  if (depth < kMaxDepth) unit_0018(c, 116u, depth + 1u); else { c.pc = 0x00180DD0u; return; } if (c.pc != 0x0040AAB8u) [[unlikely]] return; }
L_0040AAB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_0040AACC; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040ACC4; } }
L_0040AACC:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040ACC4; } }
L_0040AADC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  goto L_0040AB00; }
    set32(c.r[5], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0040AAFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AAF8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x0040AAF8u) [[unlikely]] return; }
L_0040AAF8:
    st32((c.r[16].w[0] + 160u), 0u);
    c.budget -= 1;
L_0040AAFC:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 1;
L_0040AB00:
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AB0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x0040AB0Cu) [[unlikely]] return; }
L_0040AB0C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_0040ACC4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AB28u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x00180D40u; return; } if (c.pc != 0x0040AB28u) [[unlikely]] return; }
L_0040AB28:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040ACC4; } }
L_0040AB38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AB40u);  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x0040AB40u) [[unlikely]] return; }
L_0040AB40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  goto L_0040AB54; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040ACC4; } }
L_0040AB54:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0040AB6C; }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_0040AB6C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040ACC4; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 164u)));  goto L_0040AB9C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 144u), 0u);  goto L_0040AB98; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AB94u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040AB94u) [[unlikely]] return; }
L_0040AB94:
    st32((c.r[16].w[0] + 144u), 0u);
    c.budget -= 1;
L_0040AB98:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_0040AB9C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 8u);  goto L_0040ABB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ABACu);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0040ABACu) [[unlikely]] return; }
L_0040ABAC:
    st32((c.r[16].w[0] + 164u), 0u);
    set32(c.r[4], 0u + 8u);
    c.budget -= 2;
L_0040ABB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ABBCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0040ABBCu) [[unlikely]] return; }
L_0040ABBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 164u), c.r[4].w[0]);  goto L_0040ABD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ABD0u); set32(c.r[5], ld32((c.r[16].w[0] + 160u)));  if (depth < kMaxDepth) unit_003A(c, 178u, depth + 1u); else { c.pc = 0x00209830u; return; } if (c.pc != 0x0040ABD0u) [[unlikely]] return; }
L_0040ABD0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 164u), c.r[4].w[0]);
    c.budget -= 2;
L_0040ABD8:
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040ACC4; } }
L_0040ABE4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 124u);  goto L_0040AC04; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ABFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040ABFCu) [[unlikely]] return; }
L_0040ABFC:
    st32((c.r[16].w[0] + 136u), 0u);
    set32(c.r[4], 0u + 124u);
    c.budget -= 2;
L_0040AC04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AC0Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0040AC0Cu) [[unlikely]] return; }
L_0040AC0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 136u), c.r[2].w[0]);  goto L_0040AC3C; }
    set32(c.r[6], ld32((c.r[16].w[0] + 132u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 32632u);
    set32(c.r[8], c.r[8].w[0] + 32648u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AC38u); set32(c.r[9], 0u + 3u);  if (depth < kMaxDepth) unit_008B(c, 355u, depth + 1u); else { c.pc = 0x0034F160u; return; } if (c.pc != 0x0040AC38u) [[unlikely]] return; }
L_0040AC38:
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 1;
L_0040AC3C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AC48u); c.r[5].d[0] = 0ull | 64535ull;  if (depth < kMaxDepth) unit_008B(c, 497u, depth + 1u); else { c.pc = 0x0034FE20u; return; } if (c.pc != 0x0040AC48u) [[unlikely]] return; }
L_0040AC48:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040ACC4; } }
L_0040AC58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040ACC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AC74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 480u, depth + 1u); else { c.pc = 0x0034FBF0u; return; } if (c.pc != 0x0040AC74u) [[unlikely]] return; }
L_0040AC74:
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AC8Cu); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040AC8Cu) [[unlikely]] return; }
L_0040AC8C:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 1056u);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 14;
L_0040ACC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040ACC8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040ACE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040B298; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 32640u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00BA[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040AD1C:
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_0040AD3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD30u);  if (depth < kMaxDepth) unit_00BA(c, 358u, depth + 1u); else { c.pc = 0x0040B520u; return; } if (c.pc != 0x0040AD30u) [[unlikely]] return; }
L_0040AD30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
L_0040AD3C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040B298; } }
L_0040AD48:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_0040AD94; }
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0040AD90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 1056u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0040B298; } }
L_0040AD90:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0040AD94:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040B298; } }
L_0040ADA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_0040AE0C; }
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ADB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 361u, depth + 1u); else { c.pc = 0x0040B590u; return; } if (c.pc != 0x0040ADB8u) [[unlikely]] return; }
L_0040ADB8:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0040ADDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ADD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 386u, depth + 1u); else { c.pc = 0x0040B820u; return; } if (c.pc != 0x0040ADD0u) [[unlikely]] return; }
L_0040ADD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_0040AE08; } }
L_0040ADDC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ADE8u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_00BA(c, 361u, depth + 1u); else { c.pc = 0x0040B590u; return; } if (c.pc != 0x0040ADE8u) [[unlikely]] return; }
L_0040ADE8:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0040AE08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AE00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 389u, depth + 1u); else { c.pc = 0x0040B8A0u; return; } if (c.pc != 0x0040AE00u) [[unlikely]] return; }
L_0040AE00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 2;
L_0040AE08:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0040AE0C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040B298; } }
L_0040AE18:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_0040AE38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AE2Cu);  if (depth < kMaxDepth) unit_00BA(c, 372u, depth + 1u); else { c.pc = 0x0040B6C0u; return; } if (c.pc != 0x0040AE2Cu) [[unlikely]] return; }
L_0040AE2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
L_0040AE38:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040B298; } }
L_0040AE44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AE4Cu);  if (depth < kMaxDepth) unit_00BA(c, 393u, depth + 1u); else { c.pc = 0x0040B930u; return; } if (c.pc != 0x0040AE4Cu) [[unlikely]] return; }
L_0040AE4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040B298; } }
L_0040AE64:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040AE80; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040AE80:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 80u)));  goto L_0040AEC8; }
    set32(c.r[6], ld32((c.r[16].w[0] + 84u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AE9Cu); set32(c.r[5], c.r[5].w[0] + 32672u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0040AE9Cu) [[unlikely]] return; }
L_0040AE9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 1056u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0040B298; } }
L_0040AEC8:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_0040AF24; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 32672u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00BA[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040AEF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[6], 0u + 22u);
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AF04u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 187u, depth + 1u); else { c.pc = 0x00209A00u; return; } if (c.pc != 0x0040AF04u) [[unlikely]] return; }
L_0040AF04:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 124u), c.r[3].w[0]);  if (t) { goto L_0040AF20; } }
L_0040AF10:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 124u), c.r[3].w[0]);  if (t) { goto L_0040AF20; } }
L_0040AF1C:
    st32((c.r[16].w[0] + 124u), 0u);
    c.budget -= 1;
L_0040AF20:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0040AF24:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040B298; } }
L_0040AF30:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 128u)));  goto L_0040AF6C; }
    set32(c.r[6], ld32((c.r[16].w[0] + 84u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AF4Cu); set32(c.r[5], c.r[5].w[0] + 32704u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0040AF4Cu) [[unlikely]] return; }
L_0040AF4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AF54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 439u, depth + 1u); else { c.pc = 0x0040BD70u; return; } if (c.pc != 0x0040AF54u) [[unlikely]] return; }
L_0040AF54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040B298; } }
L_0040AF6C:
    c.r[5].d[0] = ld64((c.r[3].w[0] + 72u));
    c.r[4].d[0] = c.r[5].d[0] & 8192ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  goto L_0040AFE4; }
    c.r[4].d[0] = c.r[5].d[0] & 4096ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040AFE0; } }
    c.r[4].d[0] = c.r[5].d[0] & 1024ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040AFE0; } }
    c.r[4].d[0] = c.r[5].d[0] & 2048ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040AFE0; } }
    set32(c.r[4], 0u + 256u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040AFE0; } }
    set32(c.r[4], 0u + 512u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0040B29C; }
L_0040AFE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 1;
L_0040AFE4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = ld64((c.r[3].w[0] + 80u));  goto L_0040B0E0; }
    c.r[5].d[0] = ld64((c.r[3].w[0] + 80u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040B0DC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040B020; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040B020:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0040B050; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040B04C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[16].w[0] + 120u), c.r[2].w[0]);  goto L_0040B054; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 120u)));  if (t) { goto L_0040B058; } }
L_0040B04C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0040B050:
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 1;
L_0040B054:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 1;
L_0040B058:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 84u)));  goto L_0040B090; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 84u)));  goto L_0040B078; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 84u)));  if (t) { goto L_0040B0A8; } }
L_0040B078:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B088u); set32(c.r[5], c.r[5].w[0] + 32736u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0040B088u) [[unlikely]] return; }
L_0040B088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0040B0BC; } }
L_0040B090:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0A0u); set32(c.r[5], c.r[5].w[0] - 32768u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0040B0A0u) [[unlikely]] return; }
L_0040B0A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040B0B8; } }
L_0040B0A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0B8u); set32(c.r[5], c.r[5].w[0] - 32736u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0040B0B8u) [[unlikely]] return; }
L_0040B0B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0040B0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0C4u);  if (depth < kMaxDepth) unit_00BA(c, 439u, depth + 1u); else { c.pc = 0x0040BD70u; return; } if (c.pc != 0x0040B0C4u) [[unlikely]] return; }
L_0040B0C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040B298; } }
L_0040B0DC:
    c.r[5].d[0] = ld64((c.r[3].w[0] + 80u));
    c.budget -= 1;
L_0040B0E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[3].w[0] + 96u));  goto L_0040B1E4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040B114; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0040B130; } }
L_0040B114:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0040B124; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040B12C; } }
L_0040B124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B12Cu);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0040B12Cu) [[unlikely]] return; }
L_0040B12C:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_0040B130:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 120u), c.r[3].w[0]);  if (t) { goto L_0040B1AC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 84u)));  goto L_0040B194; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 84u)));  goto L_0040B17C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 84u)));  goto L_0040B164; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 84u)));  if (t) { goto L_0040B1B0; } }
L_0040B164:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B174u); set32(c.r[5], c.r[5].w[0] + 32736u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0040B174u) [[unlikely]] return; }
L_0040B174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0040B1C4; } }
L_0040B17C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B18Cu); set32(c.r[5], c.r[5].w[0] - 32768u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0040B18Cu) [[unlikely]] return; }
L_0040B18C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040B1C0; } }
L_0040B194:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B1A4u); set32(c.r[5], c.r[5].w[0] - 32704u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0040B1A4u) [[unlikely]] return; }
L_0040B1A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040B1C0; } }
L_0040B1AC:
    set32(c.r[6], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_0040B1B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B1C0u); set32(c.r[5], c.r[5].w[0] - 32736u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0040B1C0u) [[unlikely]] return; }
L_0040B1C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0040B1C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B1CCu);  if (depth < kMaxDepth) unit_00BA(c, 445u, depth + 1u); else { c.pc = 0x0040BE40u; return; } if (c.pc != 0x0040B1CCu) [[unlikely]] return; }
L_0040B1CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040B298; } }
L_0040B1E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0040B1FC; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 1;
L_0040B1FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  goto L_0040B218; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 2;
L_0040B218:
    set32(c.r[6], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040B230; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040B230:
    c.r[3].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040B298; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0040B298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B24Cu); set32(c.r[17], ld32((c.r[4].w[0] + 28u)));  if (depth < kMaxDepth) unit_00C0(c, 460u, depth + 1u); else { c.pc = 0x00423620u; return; } if (c.pc != 0x0040B24Cu) [[unlikely]] return; }
L_0040B24C:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);  goto L_0040B268; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B264u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 453u, depth + 1u); else { c.pc = 0x0040BF70u; return; } if (c.pc != 0x0040B264u) [[unlikely]] return; }
L_0040B264:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 1;
L_0040B268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_0040B298; } }
L_0040B270:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 1056u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_0040B298:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0040B29C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040B2B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040B3B4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 168u)));  goto L_0040B344; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 88u)));  goto L_0040B31C; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 168u)));  goto L_0040B2F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0040B3E0; } }
L_0040B2F4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_0040B310; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B304u);  if (depth < kMaxDepth) unit_00BA(c, 358u, depth + 1u); else { c.pc = 0x0040B520u; return; } if (c.pc != 0x0040B304u) [[unlikely]] return; }
L_0040B304:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
L_0040B310:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040B3DC; } }
L_0040B31C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_0040B338; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B32Cu);  if (depth < kMaxDepth) unit_00BA(c, 386u, depth + 1u); else { c.pc = 0x0040B820u; return; } if (c.pc != 0x0040B32Cu) [[unlikely]] return; }
L_0040B32C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
L_0040B338:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040B3DC; } }
L_0040B344:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 172u)));  goto L_0040B36C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 168u), 0u);  goto L_0040B368; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B364u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040B364u) [[unlikely]] return; }
L_0040B364:
    st32((c.r[16].w[0] + 168u), 0u);
    c.budget -= 1;
L_0040B368:
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 1;
L_0040B36C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  goto L_0040B394; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 172u), 0u);  goto L_0040B390; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B38Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040B38Cu) [[unlikely]] return; }
L_0040B38C:
    st32((c.r[16].w[0] + 172u), 0u);
    c.budget -= 1;
L_0040B390:
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 1;
L_0040B394:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B3A4u); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040B3A4u) [[unlikely]] return; }
L_0040B3A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040B3DC; } }
L_0040B3B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 1056u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_0040B3DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040B3E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040B3F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 9;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0040B510; }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040B430; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040B430:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 188u);  goto L_0040B450; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 196u);  goto L_0040B450; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 224u);  goto L_0040B450; }
L_0040B450:
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 160u);  goto L_0040B47C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 168u), 0u);  goto L_0040B478; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B474u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040B474u) [[unlikely]] return; }
L_0040B474:
    st32((c.r[17].w[0] + 168u), 0u);
    c.budget -= 1;
L_0040B478:
    set32(c.r[4], 0u + 160u);
    c.budget -= 1;
L_0040B47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B484u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0040B484u) [[unlikely]] return; }
L_0040B484:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 168u), c.r[2].w[0]);  goto L_0040B4A0; }
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B49Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 216u, depth + 1u); else { c.pc = 0x0020DFF0u; return; } if (c.pc != 0x0040B49Cu) [[unlikely]] return; }
L_0040B49C:
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 1;
L_0040B4A0:
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B4B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x0040B4B0u) [[unlikely]] return; }
L_0040B4B0:
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B4C0u); set32(c.r[4], ld32((c.r[17].w[0] + 168u)));  if (depth < kMaxDepth) unit_003C(c, 100u, depth + 1u); else { c.pc = 0x00211210u; return; } if (c.pc != 0x0040B4C0u) [[unlikely]] return; }
L_0040B4C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B4CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 27u, depth + 1u); else { c.pc = 0x002104F0u; return; } if (c.pc != 0x0040B4CCu) [[unlikely]] return; }
L_0040B4CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B4D4u); set32(c.r[4], ld32((c.r[17].w[0] + 168u)));  if (depth < kMaxDepth) unit_003B(c, 246u, depth + 1u); else { c.pc = 0x0020E6A0u; return; } if (c.pc != 0x0040B4D4u) [[unlikely]] return; }
L_0040B4D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.f[1] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B50Cu); set32(c.r[4], ld32((c.r[17].w[0] + 168u)));  if (depth < kMaxDepth) unit_003C(c, 100u, depth + 1u); else { c.pc = 0x00211210u; return; } if (c.pc != 0x0040B50Cu) [[unlikely]] return; }
L_0040B50C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0040B510:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040B520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040B578; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 168u)));  goto L_0040B564; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 172u), 0u);  goto L_0040B560; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B55Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040B55Cu) [[unlikely]] return; }
L_0040B55C:
    st32((c.r[16].w[0] + 172u), 0u);
    c.budget -= 1;
L_0040B560:
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 1;
L_0040B564:
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 168u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B578u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003B(c, 318u, depth + 1u); else { c.pc = 0x0020FCD0u; return; } if (c.pc != 0x0040B578u) [[unlikely]] return; }
L_0040B578:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040B590:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0040B688; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 32528u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00BA[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040B5D8:
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B5ECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 187u, depth + 1u); else { c.pc = 0x00209A00u; return; } if (c.pc != 0x0040B5ECu) [[unlikely]] return; }
L_0040B5EC:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], ld32((c.r[18].w[0] + 84u)));  goto L_0040B61C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 32560u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00BA[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040B61C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B62Cu); set32(c.r[5], c.r[5].w[0] - 32608u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0040B62Cu) [[unlikely]] return; }
L_0040B62C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0040B688; } }
L_0040B638:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0040B688; } }
L_0040B644:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_0040B688; } }
L_0040B650:
    set32(c.r[6], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0040B688; } }
L_0040B65C:
    set32(c.r[6], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0040B688; } }
L_0040B668:
    set32(c.r[6], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_0040B688; } }
L_0040B674:
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0040B688; } }
L_0040B680:
    set32(c.r[6], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0040B688:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0040B694; } }
    st32((c.r[17].w[0]), c.r[6].w[0]);
    c.budget -= 1;
L_0040B694:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0040B6A4; }
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_0040B6A4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040B6C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040B800; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B6F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0040B6F4u) [[unlikely]] return; }
L_0040B6F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B704u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 361u, depth + 1u); else { c.pc = 0x0040B590u; return; } if (c.pc != 0x0040B704u) [[unlikely]] return; }
L_0040B704:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0040B774; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 32496u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00BA[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040B730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_0040B770; } }
L_0040B738:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_0040B770; } }
L_0040B744:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_0040B770; } }
L_0040B750:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_0040B770; } }
L_0040B75C:
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_0040B770; } }
L_0040B768:
    set32(c.r[2], 0u + 31u);
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_0040B770:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040B774:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B780u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_00BA(c, 361u, depth + 1u); else { c.pc = 0x0040B590u; return; } if (c.pc != 0x0040B780u) [[unlikely]] return; }
L_0040B780:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 10u);  goto L_0040B7A4; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0040B7A4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0040B7A4; }
L_0040B7A4:
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B7BCu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040B7BCu) [[unlikely]] return; }
L_0040B7BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B7D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040B7D0u) [[unlikely]] return; }
L_0040B7D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B7E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 361u, depth + 1u); else { c.pc = 0x0040B590u; return; } if (c.pc != 0x0040B7E0u) [[unlikely]] return; }
L_0040B7E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B7F8u); st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 361u, depth + 1u); else { c.pc = 0x0040B590u; return; } if (c.pc != 0x0040B7F8u) [[unlikely]] return; }
L_0040B7F8:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_0040B800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040B820:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040B888; } }
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B850u); st32((c.r[17].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0040B850u) [[unlikely]] return; }
L_0040B850:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 12u);  goto L_0040B874; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 4u);  goto L_0040B874; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 5u);  goto L_0040B874; }
L_0040B874:
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B888u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040B888u) [[unlikely]] return; }
L_0040B888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040B8A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 60u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B8C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00BA(c, 361u, depth + 1u); else { c.pc = 0x0040B590u; return; } if (c.pc != 0x0040B8C0u) [[unlikely]] return; }
L_0040B8C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 11u);  goto L_0040B8E4; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 7u);  goto L_0040B8E4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 8u);  goto L_0040B8E4; }
L_0040B8E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B8F8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040B8F8u) [[unlikely]] return; }
L_0040B8F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B908u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_00BA(c, 361u, depth + 1u); else { c.pc = 0x0040B590u; return; } if (c.pc != 0x0040B908u) [[unlikely]] return; }
L_0040B908:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040B930:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 10;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0040B978; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 104u), 0u);  goto L_0040B974; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B970u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040B970u) [[unlikely]] return; }
L_0040B970:
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_0040B974:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040B978:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0040B97C:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 108u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B97Cu | kUnwind; return; } goto L_0040B97C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B9A0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0040B9A0u) [[unlikely]] return; }
L_0040B9A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  goto L_0040B9B8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B9B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x0040B9B4u) [[unlikely]] return; }
L_0040B9B4:
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_0040B9B8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 36u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 80u)));  goto L_0040BC00; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 32384u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00BA[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040B9F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[6], 0u + 21u);
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BA04u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 187u, depth + 1u); else { c.pc = 0x00209A00u; return; } if (c.pc != 0x0040BA04u) [[unlikely]] return; }
L_0040BA04:
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BA1Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 187u, depth + 1u); else { c.pc = 0x00209A00u; return; } if (c.pc != 0x0040BA1Cu) [[unlikely]] return; }
L_0040BA1C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0040BA60; } }
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[6], ld32((c.r[17].w[0] + 84u)));  goto L_0040BA44; }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0040BA60; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_0040BA44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 32464u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BA5Cu); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0040BA5Cu) [[unlikely]] return; }
L_0040BA5C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040BA60:
    c.budget -= 2;
    if (c.r[19].sd[0] <= 0) { c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;  goto L_0040BA98; }
    set32(c.r[18], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BA74u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0040BA74u) [[unlikely]] return; }
L_0040BA74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0040BA8C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BA88u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x0040BA88u) [[unlikely]] return; }
L_0040BA88:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0040BA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BA94u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x0040BA94u) [[unlikely]] return; }
L_0040BA94:
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_0040BA98:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 104u)));  goto L_0040BAD0; }
    set32(c.r[18], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BAACu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0040BAACu) [[unlikely]] return; }
L_0040BAAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0040BAC4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BAC0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x0040BAC0u) [[unlikely]] return; }
L_0040BAC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0040BAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BACCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x0040BACCu) [[unlikely]] return; }
L_0040BACC:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 1;
L_0040BAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BAD8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 458u, depth + 1u); else { c.pc = 0x004234F0u; return; } if (c.pc != 0x0040BAD8u) [[unlikely]] return; }
L_0040BAD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040BBFC; } }
L_0040BAE0:
    set32(c.r[16], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BAECu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0040BAECu) [[unlikely]] return; }
L_0040BAEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0040BB04; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BB00u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x0040BB00u) [[unlikely]] return; }
L_0040BB00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0040BB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BB0Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x0040BB0Cu) [[unlikely]] return; }
L_0040BB0C:
    set32(c.r[16], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BB18u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0040BB18u) [[unlikely]] return; }
L_0040BB18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0040BB30; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BB2Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x0040BB2Cu) [[unlikely]] return; }
L_0040BB2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0040BB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BB38u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x0040BB38u) [[unlikely]] return; }
L_0040BB38:
    set32(c.r[16], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BB44u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0040BB44u) [[unlikely]] return; }
L_0040BB44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0040BB5C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BB58u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x0040BB58u) [[unlikely]] return; }
L_0040BB58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0040BB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BB64u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x0040BB64u) [[unlikely]] return; }
L_0040BB64:
    set32(c.r[16], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BB74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 467u, depth + 1u); else { c.pc = 0x00423820u; return; } if (c.pc != 0x0040BB74u) [[unlikely]] return; }
L_0040BB74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BB80u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 458u, depth + 1u); else { c.pc = 0x004234F0u; return; } if (c.pc != 0x0040BB80u) [[unlikely]] return; }
L_0040BB80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040BBFC; } }
L_0040BB88:
    set32(c.r[16], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BB94u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0040BB94u) [[unlikely]] return; }
L_0040BB94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0040BBAC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BBA8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x0040BBA8u) [[unlikely]] return; }
L_0040BBA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0040BBAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BBB4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x0040BBB4u) [[unlikely]] return; }
L_0040BBB4:
    set32(c.r[16], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BBC0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0040BBC0u) [[unlikely]] return; }
L_0040BBC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0040BBD8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BBD4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x0040BBD4u) [[unlikely]] return; }
L_0040BBD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0040BBD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BBE0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x0040BBE0u) [[unlikely]] return; }
L_0040BBE0:
    set32(c.r[16], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BBF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 467u, depth + 1u); else { c.pc = 0x00423820u; return; } if (c.pc != 0x0040BBF0u) [[unlikely]] return; }
L_0040BBF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BBFCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 458u, depth + 1u); else { c.pc = 0x004234F0u; return; } if (c.pc != 0x0040BBFCu) [[unlikely]] return; }
L_0040BBFC:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 1;
L_0040BC00:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0040BCD8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 32416u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00BA[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040BC28:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040BC44; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040BC44:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  goto L_0040BC6C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0040BC64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040BCD4; } }
L_0040BC64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_0040BCD4; } }
L_0040BC6C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_0040BCD4; } }
L_0040BC78:
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], 0u + 7u);
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[17].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), c.r[2].w[0]);  if (t) { goto L_0040BCD4; } }
L_0040BC94:
    set32(c.r[3], 0u + 41u);
    set32(c.r[2], 0u + 42u);
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_0040BCD4; } }
L_0040BCA8:
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], 0u + 7u);
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[17].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), c.r[2].w[0]);  if (t) { goto L_0040BCD4; } }
L_0040BCC4:
    set32(c.r[3], 0u + 21u);
    set32(c.r[2], 0u + 22u);
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 4;
L_0040BCD4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040BCD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BCE0u);  if (depth < kMaxDepth) unit_00BA(c, 349u, depth + 1u); else { c.pc = 0x0040B3F0u; return; } if (c.pc != 0x0040BCE0u) [[unlikely]] return; }
L_0040BCE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0040BD34; } }
L_0040BCE8:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[18].sd[0] < 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0040BD34; }
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD10u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040BD10u) [[unlikely]] return; }
L_0040BD10:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[7].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD30u); c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040BD30u) [[unlikely]] return; }
L_0040BD30:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0040BD34:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0040BD48; }
L_0040BD48:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BCE8u | kUnwind; return; } goto L_0040BCE8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0040BD70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD88u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00BA(c, 358u, depth + 1u); else { c.pc = 0x0040B520u; return; } if (c.pc != 0x0040BD88u) [[unlikely]] return; }
L_0040BD88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0040BDC0; } }
L_0040BD90:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[5].sd[0] < 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0040BDC0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[7], 0u + 5u);  goto L_0040BDB0; }
    set32(c.r[7], 0u + 6u);
    c.budget -= 1;
L_0040BDB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BDBCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040BDBCu) [[unlikely]] return; }
L_0040BDBC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0040BDC0:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0040BDD4; }
L_0040BDD4:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BD90u | kUnwind; return; } goto L_0040BD90; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0040BE08; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 104u), 0u);  goto L_0040BE04; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BE00u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040BE00u) [[unlikely]] return; }
L_0040BE00:
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_0040BE04:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040BE08:
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_0040BE0C:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 108u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BE0Cu | kUnwind; return; } goto L_0040BE0C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040BE40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 120u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 9;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 104u)));  goto L_0040BE6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040BE7C; } }
L_0040BE6C:
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 4;
L_0040BE7C:
    c.r[2].d[0] = 0ull | 40001ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0040BEA0; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BE98u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 494u, depth + 1u); else { c.pc = 0x00423B70u; return; } if (c.pc != 0x0040BE98u) [[unlikely]] return; }
L_0040BE98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0040BEAC; } }
L_0040BEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BEA8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0040BEA8u) [[unlikely]] return; }
L_0040BEA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040BEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BEB4u);  if (depth < kMaxDepth) unit_00BA(c, 358u, depth + 1u); else { c.pc = 0x0040B520u; return; } if (c.pc != 0x0040BEB4u) [[unlikely]] return; }
L_0040BEB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0040BEEC; } }
L_0040BEBC:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[5].sd[0] < 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0040BEEC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[7], 0u + 5u);  goto L_0040BEDC; }
    set32(c.r[7], 0u + 4u);
    c.budget -= 1;
L_0040BEDC:
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BEE8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040BEE8u) [[unlikely]] return; }
L_0040BEE8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0040BEEC:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0040BF00; }
L_0040BF00:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BEBCu | kUnwind; return; } goto L_0040BEBC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0040BF34; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 104u), 0u);  goto L_0040BF30; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BF2Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040BF2Cu) [[unlikely]] return; }
L_0040BF2C:
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_0040BF30:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040BF34:
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_0040BF38:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 108u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BF38u | kUnwind; return; } goto L_0040BF38; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040BF70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BF94u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0040BF94u) [[unlikely]] return; }
L_0040BF94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0040BFCC; } }
L_0040BF9C:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[5].sd[0] < 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0040BFCC; }
    set32(c.r[2], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[7], 0u + 3u);  goto L_0040BFBC; }
    set32(c.r[7], 0u + 2u);
    c.budget -= 1;
L_0040BFBC:
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BFC8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040BFC8u) [[unlikely]] return; }
L_0040BFC8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0040BFCC:
    set32(c.r[6], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0040BFE0; }
L_0040BFE0:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BF9Cu | kUnwind; return; } goto L_0040BF9C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
}

}
