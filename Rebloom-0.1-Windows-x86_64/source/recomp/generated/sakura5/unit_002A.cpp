#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149,
    0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156,
    0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172,
    0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212,
    0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0,
    0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235,
    0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285,
    0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 296, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 302, 0, 0, 0, 0, 0, 303, 0, 304, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0,
    309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0,
    316, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0,
    0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 348,
    0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0,
    0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 376, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0,
    0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0,
    385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0,
    390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 396,
    0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0,
    401, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 413,
    0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0,
    0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0,
    0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0,
    0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0,
    0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0,
    0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0,
    0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 461,
    0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0,
    466, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0,
    472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0,
    0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0,
    0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0,
    486, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 495,
    0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0,
};

void unit_002A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001C8000;
    case 2u: goto L_001C8028;
    case 3u: goto L_001C8038;
    case 4u: goto L_001C8058;
    case 5u: goto L_001C8090;
    case 6u: goto L_001C80B0;
    case 7u: goto L_001C80D0;
    case 8u: goto L_001C80FC;
    case 9u: goto L_001C8120;
    case 10u: goto L_001C8148;
    case 11u: goto L_001C8170;
    case 12u: goto L_001C8198;
    case 13u: goto L_001C81C0;
    case 14u: goto L_001C81D0;
    case 15u: goto L_001C81E8;
    case 16u: goto L_001C8200;
    case 17u: goto L_001C8230;
    case 18u: goto L_001C8248;
    case 19u: goto L_001C8260;
    case 20u: goto L_001C8290;
    case 21u: goto L_001C82B8;
    case 22u: goto L_001C82E0;
    case 23u: goto L_001C82F0;
    case 24u: goto L_001C8308;
    case 25u: goto L_001C832C;
    case 26u: goto L_001C8340;
    case 27u: goto L_001C8370;
    case 28u: goto L_001C83A4;
    case 29u: goto L_001C83C0;
    case 30u: goto L_001C8410;
    case 31u: goto L_001C843C;
    case 32u: goto L_001C8450;
    case 33u: goto L_001C845C;
    case 34u: goto L_001C8490;
    case 35u: goto L_001C849C;
    case 36u: goto L_001C84D0;
    case 37u: goto L_001C84F8;
    case 38u: goto L_001C8508;
    case 39u: goto L_001C8518;
    case 40u: goto L_001C8520;
    case 41u: goto L_001C8540;
    case 42u: goto L_001C8574;
    case 43u: goto L_001C8584;
    case 44u: goto L_001C85A0;
    case 45u: goto L_001C8610;
    case 46u: goto L_001C8620;
    case 47u: goto L_001C8634;
    case 48u: goto L_001C8650;
    case 49u: goto L_001C8670;
    case 50u: goto L_001C8710;
    case 51u: goto L_001C8720;
    case 52u: goto L_001C8754;
    case 53u: goto L_001C877C;
    case 54u: goto L_001C8790;
    case 55u: goto L_001C87C4;
    case 56u: goto L_001C87F8;
    case 57u: goto L_001C8814;
    case 58u: goto L_001C8840;
    case 59u: goto L_001C885C;
    case 60u: goto L_001C888C;
    case 61u: goto L_001C889C;
    case 62u: goto L_001C88CC;
    case 63u: goto L_001C88DC;
    case 64u: goto L_001C890C;
    case 65u: goto L_001C891C;
    case 66u: goto L_001C894C;
    case 67u: goto L_001C895C;
    case 68u: goto L_001C898C;
    case 69u: goto L_001C899C;
    case 70u: goto L_001C89CC;
    case 71u: goto L_001C89DC;
    case 72u: goto L_001C8A0C;
    case 73u: goto L_001C8A1C;
    case 74u: goto L_001C8A4C;
    case 75u: goto L_001C8A5C;
    case 76u: goto L_001C8A8C;
    case 77u: goto L_001C8A9C;
    case 78u: goto L_001C8AA8;
    case 79u: goto L_001C8AB4;
    case 80u: goto L_001C8AC8;
    case 81u: goto L_001C8AD4;
    case 82u: goto L_001C8ADC;
    case 83u: goto L_001C8B04;
    case 84u: goto L_001C8B38;
    case 85u: goto L_001C8B54;
    case 86u: goto L_001C8B84;
    case 87u: goto L_001C8B94;
    case 88u: goto L_001C8BC4;
    case 89u: goto L_001C8BD4;
    case 90u: goto L_001C8C04;
    case 91u: goto L_001C8C14;
    case 92u: goto L_001C8C44;
    case 93u: goto L_001C8C54;
    case 94u: goto L_001C8C84;
    case 95u: goto L_001C8CA8;
    case 96u: goto L_001C8CDC;
    case 97u: goto L_001C8CEC;
    case 98u: goto L_001C8D20;
    case 99u: goto L_001C8D3C;
    case 100u: goto L_001C8D6C;
    case 101u: goto L_001C8D7C;
    case 102u: goto L_001C8DAC;
    case 103u: goto L_001C8DC0;
    case 104u: goto L_001C8DF0;
    case 105u: goto L_001C8E04;
    case 106u: goto L_001C8E40;
    case 107u: goto L_001C8EB0;
    case 108u: goto L_001C8F10;
    case 109u: goto L_001C8F20;
    case 110u: goto L_001C8F30;
    case 111u: goto L_001C8F44;
    case 112u: goto L_001C8F4C;
    case 113u: goto L_001C8F58;
    case 114u: goto L_001C8F70;
    case 115u: goto L_001C8FB0;
    case 116u: goto L_001C8FE4;
    case 117u: goto L_001C8FEC;
    case 118u: goto L_001C8FFC;
    case 119u: goto L_001C9028;
    case 120u: goto L_001C9044;
    case 121u: goto L_001C9060;
    case 122u: goto L_001C9074;
    case 123u: goto L_001C9090;
    case 124u: goto L_001C90A4;
    case 125u: goto L_001C90C0;
    case 126u: goto L_001C90D4;
    case 127u: goto L_001C90F0;
    case 128u: goto L_001C9104;
    case 129u: goto L_001C9120;
    case 130u: goto L_001C9134;
    case 131u: goto L_001C9150;
    case 132u: goto L_001C9164;
    case 133u: goto L_001C9180;
    case 134u: goto L_001C9194;
    case 135u: goto L_001C91B0;
    case 136u: goto L_001C91C4;
    case 137u: goto L_001C91E4;
    case 138u: goto L_001C9200;
    case 139u: goto L_001C9218;
    case 140u: goto L_001C9234;
    case 141u: goto L_001C924C;
    case 142u: goto L_001C9268;
    case 143u: goto L_001C9280;
    case 144u: goto L_001C9290;
    case 145u: goto L_001C92B0;
    case 146u: goto L_001C92C0;
    case 147u: goto L_001C92D0;
    case 148u: goto L_001C92E8;
    case 149u: goto L_001C92FC;
    case 150u: goto L_001C9308;
    case 151u: goto L_001C9314;
    case 152u: goto L_001C9324;
    case 153u: goto L_001C9340;
    case 154u: goto L_001C9350;
    case 155u: goto L_001C936C;
    case 156u: goto L_001C937C;
    case 157u: goto L_001C9398;
    case 158u: goto L_001C93A8;
    case 159u: goto L_001C93C4;
    case 160u: goto L_001C93D4;
    case 161u: goto L_001C940C;
    case 162u: goto L_001C9420;
    case 163u: goto L_001C9438;
    case 164u: goto L_001C9454;
    case 165u: goto L_001C9478;
    case 166u: goto L_001C948C;
    case 167u: goto L_001C9498;
    case 168u: goto L_001C94A4;
    case 169u: goto L_001C94B4;
    case 170u: goto L_001C94D0;
    case 171u: goto L_001C94E0;
    case 172u: goto L_001C94FC;
    case 173u: goto L_001C9504;
    case 174u: goto L_001C9530;
    case 175u: goto L_001C9554;
    case 176u: goto L_001C9564;
    case 177u: goto L_001C9584;
    case 178u: goto L_001C959C;
    case 179u: goto L_001C95C4;
    case 180u: goto L_001C95F0;
    case 181u: goto L_001C965C;
    case 182u: goto L_001C9680;
    case 183u: goto L_001C9710;
    case 184u: goto L_001C9734;
    case 185u: goto L_001C9784;
    case 186u: goto L_001C9794;
    case 187u: goto L_001C97BC;
    case 188u: goto L_001C97C4;
    case 189u: goto L_001C97E0;
    case 190u: goto L_001C9810;
    case 191u: goto L_001C9820;
    case 192u: goto L_001C9830;
    case 193u: goto L_001C9860;
    case 194u: goto L_001C9884;
    case 195u: goto L_001C98A8;
    case 196u: goto L_001C98B4;
    case 197u: goto L_001C998C;
    case 198u: goto L_001C99A0;
    case 199u: goto L_001C99C4;
    case 200u: goto L_001C99D0;
    case 201u: goto L_001C9A2C;
    case 202u: goto L_001C9A64;
    case 203u: goto L_001C9A9C;
    case 204u: goto L_001C9ABC;
    case 205u: goto L_001C9AEC;
    case 206u: goto L_001C9B08;
    case 207u: goto L_001C9B14;
    case 208u: goto L_001C9B2C;
    case 209u: goto L_001C9B44;
    case 210u: goto L_001C9B54;
    case 211u: goto L_001C9B70;
    case 212u: goto L_001C9B7C;
    case 213u: goto L_001C9B84;
    case 214u: goto L_001C9B9C;
    case 215u: goto L_001C9BAC;
    case 216u: goto L_001C9BD4;
    case 217u: goto L_001C9C04;
    case 218u: goto L_001C9C34;
    case 219u: goto L_001C9C3C;
    case 220u: goto L_001C9C54;
    case 221u: goto L_001C9C64;
    case 222u: goto L_001C9C84;
    case 223u: goto L_001C9C98;
    case 224u: goto L_001C9CC8;
    case 225u: goto L_001C9CE0;
    case 226u: goto L_001C9CF0;
    case 227u: goto L_001C9D08;
    case 228u: goto L_001C9D24;
    case 229u: goto L_001C9D2C;
    case 230u: goto L_001C9D48;
    case 231u: goto L_001C9D78;
    case 232u: goto L_001C9D88;
    case 233u: goto L_001C9DC0;
    case 234u: goto L_001C9DE0;
    case 235u: goto L_001C9DFC;
    case 236u: goto L_001C9E08;
    case 237u: goto L_001C9E20;
    case 238u: goto L_001C9E3C;
    case 239u: goto L_001C9E48;
    case 240u: goto L_001C9E60;
    case 241u: goto L_001C9E98;
    case 242u: goto L_001C9EA0;
    case 243u: goto L_001C9EB4;
    case 244u: goto L_001C9EC4;
    case 245u: goto L_001C9EE8;
    case 246u: goto L_001C9F00;
    case 247u: goto L_001C9FD4;
    case 248u: goto L_001CA000;
    case 249u: goto L_001CA058;
    case 250u: goto L_001CA070;
    case 251u: goto L_001CA090;
    case 252u: goto L_001CA0A0;
    case 253u: goto L_001CA110;
    case 254u: goto L_001CA214;
    case 255u: goto L_001CA258;
    case 256u: goto L_001CA260;
    case 257u: goto L_001CA324;
    case 258u: goto L_001CA360;
    case 259u: goto L_001CA368;
    case 260u: goto L_001CA3CC;
    case 261u: goto L_001CA43C;
    case 262u: goto L_001CA470;
    case 263u: goto L_001CA49C;
    case 264u: goto L_001CA4A4;
    case 265u: goto L_001CA4B0;
    case 266u: goto L_001CA4C0;
    case 267u: goto L_001CA4F0;
    case 268u: goto L_001CA51C;
    case 269u: goto L_001CA524;
    case 270u: goto L_001CA530;
    case 271u: goto L_001CA540;
    case 272u: goto L_001CA570;
    case 273u: goto L_001CA590;
    case 274u: goto L_001CA5A4;
    case 275u: goto L_001CA5D4;
    case 276u: goto L_001CA600;
    case 277u: goto L_001CA620;
    case 278u: goto L_001CA630;
    case 279u: goto L_001CA63C;
    case 280u: goto L_001CA6B8;
    case 281u: goto L_001CA734;
    case 282u: goto L_001CA73C;
    case 283u: goto L_001CA750;
    case 284u: goto L_001CA768;
    case 285u: goto L_001CA77C;
    case 286u: goto L_001CA784;
    case 287u: goto L_001CA794;
    case 288u: goto L_001CA7A4;
    case 289u: goto L_001CA7B0;
    case 290u: goto L_001CA7E8;
    case 291u: goto L_001CA800;
    case 292u: goto L_001CA810;
    case 293u: goto L_001CA83C;
    case 294u: goto L_001CA858;
    case 295u: goto L_001CA864;
    case 296u: goto L_001CA870;
    case 297u: goto L_001CA888;
    case 298u: goto L_001CA8A0;
    case 299u: goto L_001CA8BC;
    case 300u: goto L_001CA8CC;
    case 301u: goto L_001CA8F0;
    case 302u: goto L_001CA904;
    case 303u: goto L_001CA91C;
    case 304u: goto L_001CA924;
    case 305u: goto L_001CA92C;
    case 306u: goto L_001CA934;
    case 307u: goto L_001CA950;
    case 308u: goto L_001CA978;
    case 309u: goto L_001CA980;
    case 310u: goto L_001CA998;
    case 311u: goto L_001CA9B4;
    case 312u: goto L_001CA9C4;
    case 313u: goto L_001CA9D8;
    case 314u: goto L_001CA9E8;
    case 315u: goto L_001CA9F8;
    case 316u: goto L_001CAA00;
    case 317u: goto L_001CAA08;
    case 318u: goto L_001CAA18;
    case 319u: goto L_001CAA34;
    case 320u: goto L_001CAA60;
    case 321u: goto L_001CAA94;
    case 322u: goto L_001CAAC4;
    case 323u: goto L_001CAAD4;
    case 324u: goto L_001CAAE0;
    case 325u: goto L_001CAB10;
    case 326u: goto L_001CAB38;
    case 327u: goto L_001CAB60;
    case 328u: goto L_001CAB7C;
    case 329u: goto L_001CABB0;
    case 330u: goto L_001CABD0;
    case 331u: goto L_001CABD8;
    case 332u: goto L_001CABF4;
    case 333u: goto L_001CAC20;
    case 334u: goto L_001CAC50;
    case 335u: goto L_001CAC5C;
    case 336u: goto L_001CACA8;
    case 337u: goto L_001CACD0;
    case 338u: goto L_001CACDC;
    case 339u: goto L_001CAD10;
    case 340u: goto L_001CAD1C;
    case 341u: goto L_001CAD50;
    case 342u: goto L_001CAD70;
    case 343u: goto L_001CAD78;
    case 344u: goto L_001CAD98;
    case 345u: goto L_001CADC0;
    case 346u: goto L_001CADE0;
    case 347u: goto L_001CADE8;
    case 348u: goto L_001CADFC;
    case 349u: goto L_001CAE20;
    case 350u: goto L_001CAE48;
    case 351u: goto L_001CAE50;
    case 352u: goto L_001CAE98;
    case 353u: goto L_001CAEF4;
    case 354u: goto L_001CAF14;
    case 355u: goto L_001CAF24;
    case 356u: goto L_001CAF4C;
    case 357u: goto L_001CAF58;
    case 358u: goto L_001CAF70;
    case 359u: goto L_001CAF80;
    case 360u: goto L_001CAF9C;
    case 361u: goto L_001CAFA4;
    case 362u: goto L_001CAFAC;
    case 363u: goto L_001CAFBC;
    case 364u: goto L_001CAFE0;
    case 365u: goto L_001CB014;
    case 366u: goto L_001CB048;
    case 367u: goto L_001CB064;
    case 368u: goto L_001CB090;
    case 369u: goto L_001CB0AC;
    case 370u: goto L_001CB0DC;
    case 371u: goto L_001CB0EC;
    case 372u: goto L_001CB11C;
    case 373u: goto L_001CB12C;
    case 374u: goto L_001CB15C;
    case 375u: goto L_001CB16C;
    case 376u: goto L_001CB174;
    case 377u: goto L_001CB1A4;
    case 378u: goto L_001CB1B0;
    case 379u: goto L_001CB1C8;
    case 380u: goto L_001CB1E4;
    case 381u: goto L_001CB204;
    case 382u: goto L_001CB240;
    case 383u: goto L_001CB26C;
    case 384u: goto L_001CB274;
    case 385u: goto L_001CB280;
    case 386u: goto L_001CB290;
    case 387u: goto L_001CB2C0;
    case 388u: goto L_001CB2EC;
    case 389u: goto L_001CB2F4;
    case 390u: goto L_001CB300;
    case 391u: goto L_001CB310;
    case 392u: goto L_001CB340;
    case 393u: goto L_001CB350;
    case 394u: goto L_001CB360;
    case 395u: goto L_001CB374;
    case 396u: goto L_001CB37C;
    case 397u: goto L_001CB388;
    case 398u: goto L_001CB3A0;
    case 399u: goto L_001CB3D4;
    case 400u: goto L_001CB3DC;
    case 401u: goto L_001CB400;
    case 402u: goto L_001CB40C;
    case 403u: goto L_001CB420;
    case 404u: goto L_001CB43C;
    case 405u: goto L_001CB450;
    case 406u: goto L_001CB46C;
    case 407u: goto L_001CB494;
    case 408u: goto L_001CB49C;
    case 409u: goto L_001CB4B4;
    case 410u: goto L_001CB4CC;
    case 411u: goto L_001CB4E0;
    case 412u: goto L_001CB4F0;
    case 413u: goto L_001CB4FC;
    case 414u: goto L_001CB520;
    case 415u: goto L_001CB534;
    case 416u: goto L_001CB54C;
    case 417u: goto L_001CB570;
    case 418u: goto L_001CB580;
    case 419u: goto L_001CB60C;
    case 420u: goto L_001CB624;
    case 421u: goto L_001CB62C;
    case 422u: goto L_001CB650;
    case 423u: goto L_001CB660;
    case 424u: goto L_001CB684;
    case 425u: goto L_001CB6A0;
    case 426u: goto L_001CB718;
    case 427u: goto L_001CB730;
    case 428u: goto L_001CB738;
    case 429u: goto L_001CB758;
    case 430u: goto L_001CB768;
    case 431u: goto L_001CB78C;
    case 432u: goto L_001CB7A0;
    case 433u: goto L_001CB808;
    case 434u: goto L_001CB810;
    case 435u: goto L_001CB82C;
    case 436u: goto L_001CB848;
    case 437u: goto L_001CB854;
    case 438u: goto L_001CB85C;
    case 439u: goto L_001CB8B0;
    case 440u: goto L_001CB8CC;
    case 441u: goto L_001CB8EC;
    case 442u: goto L_001CB910;
    case 443u: goto L_001CB920;
    case 444u: goto L_001CB944;
    case 445u: goto L_001CB94C;
    case 446u: goto L_001CB974;
    case 447u: goto L_001CB984;
    case 448u: goto L_001CB9AC;
    case 449u: goto L_001CB9CC;
    case 450u: goto L_001CB9D8;
    case 451u: goto L_001CB9F8;
    case 452u: goto L_001CBA10;
    case 453u: goto L_001CBA98;
    case 454u: goto L_001CBAB4;
    case 455u: goto L_001CBAC0;
    case 456u: goto L_001CBAD4;
    case 457u: goto L_001CBAEC;
    case 458u: goto L_001CBB10;
    case 459u: goto L_001CBB5C;
    case 460u: goto L_001CBB74;
    case 461u: goto L_001CBB7C;
    case 462u: goto L_001CBB8C;
    case 463u: goto L_001CBB9C;
    case 464u: goto L_001CBBC0;
    case 465u: goto L_001CBBE0;
    case 466u: goto L_001CBC00;
    case 467u: goto L_001CBC08;
    case 468u: goto L_001CBC24;
    case 469u: goto L_001CBC34;
    case 470u: goto L_001CBC48;
    case 471u: goto L_001CBC60;
    case 472u: goto L_001CBC80;
    case 473u: goto L_001CBCB8;
    case 474u: goto L_001CBCC0;
    case 475u: goto L_001CBCD4;
    case 476u: goto L_001CBCE4;
    case 477u: goto L_001CBD08;
    case 478u: goto L_001CBD20;
    case 479u: goto L_001CBD38;
    case 480u: goto L_001CBD4C;
    case 481u: goto L_001CBD70;
    case 482u: goto L_001CBD90;
    case 483u: goto L_001CBDB0;
    case 484u: goto L_001CBDDC;
    case 485u: goto L_001CBDE8;
    case 486u: goto L_001CBE00;
    case 487u: goto L_001CBE20;
    case 488u: goto L_001CBE54;
    case 489u: goto L_001CBE80;
    case 490u: goto L_001CBEAC;
    case 491u: goto L_001CBEC0;
    case 492u: goto L_001CBED0;
    case 493u: goto L_001CBEE0;
    case 494u: goto L_001CBEF4;
    case 495u: goto L_001CBEFC;
    case 496u: goto L_001CBF08;
    case 497u: goto L_001CBF20;
    case 498u: goto L_001CBF48;
    case 499u: goto L_001CBF7C;
    case 500u: goto L_001CBFF0;
    default: bad_entry(c, 0x001C8000u); return;
    }
L_001C8000:
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[5].w[0] + 292u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 180u), 0u);
    st32((c.r[16].w[0] + 176u), 0u);
    st32((c.r[16].w[0] + 532u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8028u); st32((c.r[16].w[0] + 540u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001C8028u) [[unlikely]] return; }
L_001C8028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C8048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8038u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 393u, depth + 1u); else { c.pc = 0x0020BD00u; return; } if (c.pc != 0x001C8038u) [[unlikely]] return; }
L_001C8038:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12960u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 336u), c.r[16].w[0]);
    c.budget -= 4;
L_001C8048:
    st32((c.r[16].w[0] + 552u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8058u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x001C8058u) [[unlikely]] return; }
L_001C8058:
    set32(c.r[3], ld32((c.r[16].w[0] + 552u)));
    c.r[6].d[0] = 0ull | 65534ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E4C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].d[0] = c.r[2].d[0] | 20557ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 284u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 13488u);
    set32(c.r[6], ld32((c.r[16].w[0] + 552u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[6].w[0] + 292u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8090u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001C8090u) [[unlikely]] return; }
L_001C8090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C80B0:
    st32((c.r[4].w[0] + 536u), 0u);
    st32((c.r[4].w[0] + 196u), 0u);
    st32((c.r[4].w[0] + 528u), 0u);
    st32((c.r[4].w[0] + 524u), 0u);
    st32((c.r[4].w[0] + 544u), 0u);
    st32((c.r[4].w[0] + 548u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 200u), 0u);  c.pc = t; return; }
L_001C80D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C81E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C80FCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 19u, depth + 1u); else { c.pc = 0x001C8260u; return; } if (c.pc != 0x001C80FCu) [[unlikely]] return; }
L_001C80FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 192u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 184u)));  goto L_001C8128; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 192u), 0u);  goto L_001C8124; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8120u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C8120u) [[unlikely]] return; }
L_001C8120:
    st32((c.r[17].w[0] + 192u), 0u);
    c.budget -= 1;
L_001C8124:
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 1;
L_001C8128:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 188u)));  goto L_001C8150; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 184u), 0u);  goto L_001C814C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8148u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C8148u) [[unlikely]] return; }
L_001C8148:
    st32((c.r[17].w[0] + 184u), 0u);
    c.budget -= 1;
L_001C814C:
    set32(c.r[4], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 1;
L_001C8150:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 180u)));  goto L_001C8178; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 188u), 0u);  goto L_001C8174; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8170u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C8170u) [[unlikely]] return; }
L_001C8170:
    st32((c.r[17].w[0] + 188u), 0u);
    c.budget -= 1;
L_001C8174:
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 1;
L_001C8178:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 552u)));  goto L_001C81A0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 180u), 0u);  goto L_001C819C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8198u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C8198u) [[unlikely]] return; }
L_001C8198:
    st32((c.r[17].w[0] + 180u), 0u);
    c.budget -= 1;
L_001C819C:
    set32(c.r[4], ld32((c.r[17].w[0] + 552u)));
    c.budget -= 1;
L_001C81A0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001C81C8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 552u), 0u);  goto L_001C81C4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C81C0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C81C0u) [[unlikely]] return; }
L_001C81C0:
    st32((c.r[17].w[0] + 552u), 0u);
    c.budget -= 1;
L_001C81C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C81C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C81D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001C81D0u) [[unlikely]] return; }
L_001C81D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001C81EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C81E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001C81E8u) [[unlikely]] return; }
L_001C81E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C81EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C8200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C8248; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8230u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 398u, depth + 1u); else { c.pc = 0x0020BDB0u; return; } if (c.pc != 0x001C8230u) [[unlikely]] return; }
L_001C8230:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001C824C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8248u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001C8248u) [[unlikely]] return; }
L_001C8248:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C824C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C8260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 536u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 544u)));  goto L_001C8298; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8290u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C8290u) [[unlikely]] return; }
L_001C8290:
    st32((c.r[16].w[0] + 536u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 544u)));
    c.budget -= 2;
L_001C8298:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 548u)));  goto L_001C82C0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 544u), 0u);  goto L_001C82BC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C82B8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C82B8u) [[unlikely]] return; }
L_001C82B8:
    st32((c.r[16].w[0] + 544u), 0u);
    c.budget -= 1;
L_001C82BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 548u)));
    c.budget -= 1;
L_001C82C0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 196u)));  goto L_001C830C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 548u), 0u);  goto L_001C82E4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C82E0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C82E0u) [[unlikely]] return; }
L_001C82E0:
    st32((c.r[16].w[0] + 548u), 0u);
    c.budget -= 1;
L_001C82E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C830C; } }
L_001C82F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], ld32((c.r[4].w[0] + 176u)));  if (t) { goto L_001C8308; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8308u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C8308u) [[unlikely]] return; }
L_001C8308:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C830C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C82F0u | kUnwind; return; } goto L_001C82F0; } }
    st32((c.r[16].w[0] + 196u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_001C8348; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C832Cu); set32(c.r[4], 0u + 266u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001C832Cu) [[unlikely]] return; }
L_001C832C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 200u), 0u);  goto L_001C8344; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8340u); set32(c.r[5], ld32((c.r[16].w[0] + 200u)));  if (depth < kMaxDepth) unit_002E(c, 44u, depth + 1u); else { c.pc = 0x001D85C0u; return; } if (c.pc != 0x001C8340u) [[unlikely]] return; }
L_001C8340:
    st32((c.r[16].w[0] + 200u), 0u);
    c.budget -= 1;
L_001C8344:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001C8348:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C8370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 532u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001C839C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 129u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001C83B0; } }
L_001C839C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C83A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001C83A4u) [[unlikely]] return; }
L_001C83A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_001C83B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C83C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 532u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C8404; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 552u)));  goto L_001C83F0; }
    set32(c.r[4], ld32((c.r[4].w[0] + 552u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_001C8404; } }
L_001C83F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 292u), c.r[3].w[0]);
    c.budget -= 5;
L_001C8404:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001C8440; }
    c.r[3].d[0] = c.r[5].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C843C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C843Cu); set32(c.r[4], ld32((c.r[4].w[0] + 188u)));  if (depth < kMaxDepth) unit_003A(c, 414u, depth + 1u); else { c.pc = 0x0020BFF0u; return; } if (c.pc != 0x001C843Cu) [[unlikely]] return; }
L_001C843C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001C8440:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C8450:
    set32(c.r[2], ld32((c.r[4].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_001C847C; } }
L_001C845C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001C8488; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 176u)));  goto L_001C847C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8488; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.budget -= 1;
L_001C847C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C845Cu | kUnwind; return; } goto L_001C845C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C8488:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8490:
    set32(c.r[2], ld32((c.r[5].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_001C84BC; } }
L_001C849C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_001C84C8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 176u)));  goto L_001C84BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C84C8; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.budget -= 1;
L_001C84BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C849Cu | kUnwind; return; } goto L_001C849C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C84C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C84D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C850C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C84F8u); set32(c.r[4], 0u + 820u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001C84F8u) [[unlikely]] return; }
L_001C84F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 180u), c.r[2].w[0]);  goto L_001C850C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8508u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 160u, depth + 1u); else { c.pc = 0x001D5820u; return; } if (c.pc != 0x001C8508u) [[unlikely]] return; }
L_001C8508:
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 1;
L_001C850C:
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8518u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 163u, depth + 1u); else { c.pc = 0x001D58D0u; return; } if (c.pc != 0x001C8518u) [[unlikely]] return; }
L_001C8518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8520u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 44u, depth + 1u); else { c.pc = 0x001C85A0u; return; } if (c.pc != 0x001C8520u) [[unlikely]] return; }
L_001C8520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C8540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001C857C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 180u), 0u);  goto L_001C8578; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8574u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C8574u) [[unlikely]] return; }
L_001C8574:
    st32((c.r[16].w[0] + 180u), 0u);
    c.budget -= 1;
L_001C8578:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001C857C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8584u);  if (depth < kMaxDepth) unit_002A(c, 44u, depth + 1u); else { c.pc = 0x001C85A0u; return; } if (c.pc != 0x001C8584u) [[unlikely]] return; }
L_001C8584:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C85A0:
    set32(c.r[29], c.r[29].w[0] - 1056u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 536u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001C8634; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 532u)));  goto L_001C85CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 200u)));  if (t) { goto L_001C85F4; } }
L_001C85CC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001C85F0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C85EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 156u);  if (t) { goto L_001C85F0; } }
L_001C85EC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C85F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 1;
L_001C85F4:
    set32(c.r[7], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], c.r[2].w[0] + 296u);  if (t) { goto L_001C8628; } }
    c.budget -= 2;
    if (c.r[7].sd[0] <= 0) { set32(c.r[4], ld32((c.r[5].w[0] + 64u)));  goto L_001C862C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8610u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_002D(c, 176u, depth + 1u); else { c.pc = 0x001D5B10u; return; } if (c.pc != 0x001C8610u) [[unlikely]] return; }
L_001C8610:
    set32(c.r[2], ld32((c.r[16].w[0] + 536u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8620u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 197u, depth + 1u); else { c.pc = 0x001659B0u; return; } if (c.pc != 0x001C8620u) [[unlikely]] return; }
L_001C8620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001C8638; } }
L_001C8628:
    set32(c.r[4], ld32((c.r[5].w[0] + 64u)));
    c.budget -= 1;
L_001C862C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8634u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 197u, depth + 1u); else { c.pc = 0x001659B0u; return; } if (c.pc != 0x001C8634u) [[unlikely]] return; }
L_001C8634:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C8638:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1056u);  c.pc = t; return; }
L_001C8650:
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    st32((c.r[3].w[0] + 192u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 292u), c.r[3].w[0]);  c.pc = t; return; }
L_001C8670:
    set32(c.r[2], ld32((c.r[4].w[0] + 200u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[2].w[0] + 160u);  goto L_001C8684; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C8704; } }
L_001C8684:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { st32((c.r[5].w[0]), 0u);  goto L_001C8694; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C8704; } }
L_001C8694:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    st32((c.r[5].w[0] + 4u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.budget -= 28;
L_001C8704:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 544u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 548u)));  goto L_001C875C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 544u), 0u);  goto L_001C8758; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8754u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C8754u) [[unlikely]] return; }
L_001C8754:
    st32((c.r[16].w[0] + 544u), 0u);
    c.budget -= 1;
L_001C8758:
    set32(c.r[4], ld32((c.r[16].w[0] + 548u)));
    c.budget -= 1;
L_001C875C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001C8784; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 548u), 0u);  goto L_001C8780; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C877Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C877Cu) [[unlikely]] return; }
L_001C877C:
    st32((c.r[16].w[0] + 548u), 0u);
    c.budget -= 1;
L_001C8780:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C8784:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C8790:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C87C4u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C87C4u) [[unlikely]] return; }
L_001C87C4:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C87F8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C87F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C87F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C87F8u) [[unlikely]] return; }
L_001C87F8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 8u), 0u);  goto L_001C8850; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C884C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8814u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001C8814u) [[unlikely]] return; }
L_001C8814:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001C8840; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001C8830; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8840; } }
L_001C8830:
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8840u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001C8840u) [[unlikely]] return; }
L_001C8840:
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld8((c.r[19].w[0] + 4u));  if (t) { goto L_001C8854; } }
L_001C884C:
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_001C8850:
    c.r[17].d[0] = ld8((c.r[19].w[0] + 4u));
    c.budget -= 1;
L_001C8854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C885Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C885Cu) [[unlikely]] return; }
L_001C885C:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C888C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C888C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C888Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C888Cu) [[unlikely]] return; }
L_001C888C:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[17], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C889Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C889Cu) [[unlikely]] return; }
L_001C889C:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C88CC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C88CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C88CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C88CCu) [[unlikely]] return; }
L_001C88CC:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[17], ld32((c.r[19].w[0] + 152u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C88DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C88DCu) [[unlikely]] return; }
L_001C88DC:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C890C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C890C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C890Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C890Cu) [[unlikely]] return; }
L_001C890C:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[17], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C891Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C891Cu) [[unlikely]] return; }
L_001C891C:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C894C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C894C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C894Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C894Cu) [[unlikely]] return; }
L_001C894C:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[17], ld32((c.r[19].w[0] + 160u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C895Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C895Cu) [[unlikely]] return; }
L_001C895C:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C898C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C898C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C898Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C898Cu) [[unlikely]] return; }
L_001C898C:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[17], ld32((c.r[19].w[0] + 164u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C899Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C899Cu) [[unlikely]] return; }
L_001C899C:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C89CC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C89CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C89CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C89CCu) [[unlikely]] return; }
L_001C89CC:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[17], ld32((c.r[19].w[0] + 168u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C89DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C89DCu) [[unlikely]] return; }
L_001C89DC:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C8A0C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C8A0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C8A0Cu) [[unlikely]] return; }
L_001C8A0C:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[17], ld32((c.r[19].w[0] + 172u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C8A1Cu) [[unlikely]] return; }
L_001C8A1C:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C8A4C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C8A4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C8A4Cu) [[unlikely]] return; }
L_001C8A4C:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[17], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A5Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C8A5Cu) [[unlikely]] return; }
L_001C8A5C:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C8A8C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C8A8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C8A8Cu) [[unlikely]] return; }
L_001C8A8C:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[5], ld32((c.r[19].w[0] + 184u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 225u, depth + 1u); else { c.pc = 0x001E1C40u; return; } if (c.pc != 0x001C8A9Cu) [[unlikely]] return; }
L_001C8A9C:
    set32(c.r[5], ld32((c.r[19].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8AA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 225u, depth + 1u); else { c.pc = 0x001E1C40u; return; } if (c.pc != 0x001C8AA8u) [[unlikely]] return; }
L_001C8AA8:
    set32(c.r[5], ld32((c.r[19].w[0] + 192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8AB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 225u, depth + 1u); else { c.pc = 0x001E1C40u; return; } if (c.pc != 0x001C8AB4u) [[unlikely]] return; }
L_001C8AB4:
    set32(c.r[4], ld32((c.r[19].w[0] + 180u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001C8ACC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8AC8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 190u, depth + 1u); else { c.pc = 0x001D6350u; return; } if (c.pc != 0x001C8AC8u) [[unlikely]] return; }
L_001C8AC8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001C8ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8AD4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001C8AD4u) [[unlikely]] return; }
L_001C8AD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C8E08; } }
L_001C8ADC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001C8CE4; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001C8AFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8DF8; } }
L_001C8AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8B04u);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C8B04u) [[unlikely]] return; }
L_001C8B04:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C8B38; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C8B38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8B38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C8B38u) [[unlikely]] return; }
L_001C8B38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13762u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), 0u);  goto L_001C8B88; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8B54u); set32(c.r[4], c.r[4].w[0] + 13762u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001C8B54u) [[unlikely]] return; }
L_001C8B54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 13762u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001C8B84; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[17].w[0] + 8u);  goto L_001C8B78; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8B84; } }
L_001C8B78:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8B84u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001C8B84u) [[unlikely]] return; }
L_001C8B84:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001C8B88:
    set32(c.r[21], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8B94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C8B94u) [[unlikely]] return; }
L_001C8B94:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C8BC4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C8BC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8BC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C8BC4u) [[unlikely]] return; }
L_001C8BC4:
    st32((c.r[20].w[0] + 8u), 0u);
    set32(c.r[21], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8BD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C8BD4u) [[unlikely]] return; }
L_001C8BD4:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C8C04; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C8C04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8C04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C8C04u) [[unlikely]] return; }
L_001C8C04:
    st32((c.r[20].w[0] + 8u), 0u);
    set32(c.r[21], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8C14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C8C14u) [[unlikely]] return; }
L_001C8C14:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C8C44; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C8C44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8C44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C8C44u) [[unlikely]] return; }
L_001C8C44:
    st32((c.r[20].w[0] + 8u), 0u);
    set32(c.r[21], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8C54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C8C54u) [[unlikely]] return; }
L_001C8C54:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C8C84; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C8C84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8C84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C8C84u) [[unlikely]] return; }
L_001C8C84:
    st32((c.r[20].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8C9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[2].w[0] + 60u));  if (t) { goto L_001C8CA0; } }
L_001C8C9C:
    c.f[20] = 0u;
    c.budget -= 1;
L_001C8CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8CA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C8CA8u) [[unlikely]] return; }
L_001C8CA8:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C8CDC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C8CDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8CDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C8CDCu) [[unlikely]] return; }
L_001C8CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_001C8DF4; } }
L_001C8CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8CECu);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C8CECu) [[unlikely]] return; }
L_001C8CEC:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C8D20; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C8D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8D20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C8D20u) [[unlikely]] return; }
L_001C8D20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13770u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 8u), 0u);  goto L_001C8D70; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8D3Cu); set32(c.r[4], c.r[4].w[0] + 13770u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001C8D3Cu) [[unlikely]] return; }
L_001C8D3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 13770u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001C8D6C; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[20].w[0] + 8u);  goto L_001C8D60; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8D6C; } }
L_001C8D60:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8D6Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001C8D6Cu) [[unlikely]] return; }
L_001C8D6C:
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001C8D70:
    set32(c.r[21], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8D7Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C8D7Cu) [[unlikely]] return; }
L_001C8D7C:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C8DAC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C8DAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8DACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C8DACu) [[unlikely]] return; }
L_001C8DAC:
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8DC0u); c.r[20].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001C8DC0u) [[unlikely]] return; }
L_001C8DC0:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C8DF0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001C8DF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8DF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001C8DF0u) [[unlikely]] return; }
L_001C8DF0:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_001C8DF4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001C8DF8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8E04u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001C8E04u) [[unlikely]] return; }
L_001C8E04:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C8E08:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 160u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C8ADCu | kUnwind; return; } goto L_001C8ADC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001C8E40:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 200u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C8EA0; } }
    c.f[1] = ld32((c.r[3].w[0] + 1324u));
    set32(c.r[5], ld32((c.r[4].w[0] + 192u)));
    c.f[0] = ld32((c.r[3].w[0] + 1328u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[5].w[0] + 240u), c.f[1]);
    set32(c.r[3], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[5].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 192u)));
    st32((c.r[5].w[0] + 244u), c.f[1]);
    set32(c.r[3], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[5].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 192u)));
    st32((c.r[4].w[0] + 212u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    c.budget -= 18;
L_001C8EA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8EB0:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u - 17u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 192u)));
    st32((c.r[5].w[0] + 240u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[5].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 192u)));
    st32((c.r[5].w[0] + 244u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[5].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 192u)));
    st32((c.r[4].w[0] + 212u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 292u), c.r[3].w[0]);  c.pc = t; return; }
L_001C8F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001C8F20u) [[unlikely]] return; }
L_001C8F20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C8F30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 19u, depth + 1u); else { c.pc = 0x001C8260u; return; } if (c.pc != 0x001C8F44u) [[unlikely]] return; }
L_001C8F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 6u, depth + 1u); else { c.pc = 0x001C80B0u; return; } if (c.pc != 0x001C8F4Cu) [[unlikely]] return; }
L_001C8F4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001C8F58u) [[unlikely]] return; }
L_001C8F58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C8F70:
    set32(c.r[29], c.r[29].w[0] - 544u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[29].w[0] + 472u);
    st32((c.r[29].w[0] + 480u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8FB0u); st32((c.r[29].w[0] + 484u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x001C8FB0u) [[unlikely]] return; }
L_001C8FB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 120u);  goto L_001C95B8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001C9464; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001C8FDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_001C9660; } }
L_001C8FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8FE4u);  if (depth < kMaxDepth) unit_002A(c, 19u, depth + 1u); else { c.pc = 0x001C8260u; return; } if (c.pc != 0x001C8FE4u) [[unlikely]] return; }
L_001C8FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8FECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 6u, depth + 1u); else { c.pc = 0x001C80B0u; return; } if (c.pc != 0x001C8FECu) [[unlikely]] return; }
L_001C8FEC:
    set32(c.r[4], c.r[29].w[0] + 448u);
    set32(c.r[5], c.r[29].w[0] + 480u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8FFCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001C8FFCu) [[unlikely]] return; }
L_001C8FFC:
    set32(c.r[6], ld32((c.r[29].w[0] + 448u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 452u)));
    set32(c.r[4], c.r[29].w[0] + 440u);
    set32(c.r[5], c.r[29].w[0] + 472u);
    st32((c.r[29].w[0] + 472u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 476u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9028u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001C9028u) [[unlikely]] return; }
L_001C9028:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 444u));
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 472u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9044u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001C9044u) [[unlikely]] return; }
L_001C9044:
    set32(c.r[3], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[4], c.r[29].w[0] + 424u);
    set32(c.r[2], ld32((c.r[29].w[0] + 436u)));
    set32(c.r[5], c.r[29].w[0] + 472u);
    st32((c.r[29].w[0] + 472u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9060u); st32((c.r[29].w[0] + 476u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001C9060u) [[unlikely]] return; }
L_001C9060:
    set32(c.r[2], ld32((c.r[29].w[0] + 428u)));
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[5], c.r[29].w[0] + 472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9074u); st32((c.r[16].w[0] + 148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001C9074u) [[unlikely]] return; }
L_001C9074:
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[4], c.r[29].w[0] + 408u);
    set32(c.r[2], ld32((c.r[29].w[0] + 420u)));
    set32(c.r[5], c.r[29].w[0] + 472u);
    st32((c.r[29].w[0] + 472u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9090u); st32((c.r[29].w[0] + 476u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001C9090u) [[unlikely]] return; }
L_001C9090:
    set32(c.r[2], ld32((c.r[29].w[0] + 412u)));
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], c.r[29].w[0] + 472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C90A4u); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001C90A4u) [[unlikely]] return; }
L_001C90A4:
    set32(c.r[3], ld32((c.r[29].w[0] + 400u)));
    set32(c.r[4], c.r[29].w[0] + 392u);
    set32(c.r[2], ld32((c.r[29].w[0] + 404u)));
    set32(c.r[5], c.r[29].w[0] + 472u);
    st32((c.r[29].w[0] + 472u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C90C0u); st32((c.r[29].w[0] + 476u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001C90C0u) [[unlikely]] return; }
L_001C90C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 396u)));
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[5], c.r[29].w[0] + 472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C90D4u); st32((c.r[16].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001C90D4u) [[unlikely]] return; }
L_001C90D4:
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[4], c.r[29].w[0] + 376u);
    set32(c.r[2], ld32((c.r[29].w[0] + 388u)));
    set32(c.r[5], c.r[29].w[0] + 472u);
    st32((c.r[29].w[0] + 472u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C90F0u); st32((c.r[29].w[0] + 476u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001C90F0u) [[unlikely]] return; }
L_001C90F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 380u)));
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], c.r[29].w[0] + 472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9104u); st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001C9104u) [[unlikely]] return; }
L_001C9104:
    set32(c.r[3], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[4], c.r[29].w[0] + 360u);
    set32(c.r[2], ld32((c.r[29].w[0] + 372u)));
    set32(c.r[5], c.r[29].w[0] + 472u);
    st32((c.r[29].w[0] + 472u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9120u); st32((c.r[29].w[0] + 476u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001C9120u) [[unlikely]] return; }
L_001C9120:
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9134u); st32((c.r[16].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001C9134u) [[unlikely]] return; }
L_001C9134:
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[4], c.r[29].w[0] + 344u);
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    set32(c.r[5], c.r[29].w[0] + 472u);
    st32((c.r[29].w[0] + 472u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9150u); st32((c.r[29].w[0] + 476u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001C9150u) [[unlikely]] return; }
L_001C9150:
    set32(c.r[2], ld32((c.r[29].w[0] + 348u)));
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], c.r[29].w[0] + 472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9164u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001C9164u) [[unlikely]] return; }
L_001C9164:
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[4], c.r[29].w[0] + 328u);
    set32(c.r[2], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[5], c.r[29].w[0] + 472u);
    st32((c.r[29].w[0] + 472u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9180u); st32((c.r[29].w[0] + 476u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001C9180u) [[unlikely]] return; }
L_001C9180:
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9194u); st32((c.r[16].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001C9194u) [[unlikely]] return; }
L_001C9194:
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[4], c.r[29].w[0] + 312u);
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[5], c.r[29].w[0] + 472u);
    st32((c.r[29].w[0] + 472u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C91B0u); st32((c.r[29].w[0] + 476u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001C91B0u) [[unlikely]] return; }
L_001C91B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C91C4u); st32((c.r[16].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001C91C4u) [[unlikely]] return; }
L_001C91C4:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 304u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 296u);
    set32(c.r[5], c.r[29].w[0] + 480u);
    set32(c.r[6], c.r[6].w[0] + 13779u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C91E4u); st64((c.r[29].w[0] + 472u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001C91E4u) [[unlikely]] return; }
L_001C91E4:
    set32(c.r[3], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    st32((c.r[29].w[0] + 472u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 476u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9200u); c.r[4].d[0] = ld64((c.r[29].w[0] + 472u));  if (depth < kMaxDepth) unit_0030(c, 264u, depth + 1u); else { c.pc = 0x001E2170u; return; } if (c.pc != 0x001C9200u) [[unlikely]] return; }
L_001C9200:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[29].w[0] + 480u);
    set32(c.r[6], c.r[6].w[0] + 13779u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9218u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001C9218u) [[unlikely]] return; }
L_001C9218:
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    st32((c.r[29].w[0] + 472u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 476u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9234u); c.r[4].d[0] = ld64((c.r[29].w[0] + 472u));  if (depth < kMaxDepth) unit_0030(c, 264u, depth + 1u); else { c.pc = 0x001E2170u; return; } if (c.pc != 0x001C9234u) [[unlikely]] return; }
L_001C9234:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 280u);
    set32(c.r[5], c.r[29].w[0] + 480u);
    set32(c.r[6], c.r[6].w[0] + 13779u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C924Cu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001C924Cu) [[unlikely]] return; }
L_001C924C:
    set32(c.r[3], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    st32((c.r[29].w[0] + 472u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 476u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9268u); c.r[4].d[0] = ld64((c.r[29].w[0] + 472u));  if (depth < kMaxDepth) unit_0030(c, 264u, depth + 1u); else { c.pc = 0x001E2170u; return; } if (c.pc != 0x001C9268u) [[unlikely]] return; }
L_001C9268:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[29].w[0] + 480u);
    set32(c.r[6], c.r[6].w[0] + 13785u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9280u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001C9280u) [[unlikely]] return; }
L_001C9280:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 272u));
    set32(c.r[4], c.r[29].w[0] + 472u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9290u); st64((c.r[29].w[0] + 472u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001C9290u) [[unlikely]] return; }
L_001C9290:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001C92D0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  goto L_001C92C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C92B0u); set32(c.r[4], 0u + 820u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001C92B0u) [[unlikely]] return; }
L_001C92B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 180u), c.r[2].w[0]);  goto L_001C92C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C92C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 160u, depth + 1u); else { c.pc = 0x001D5820u; return; } if (c.pc != 0x001C92C0u) [[unlikely]] return; }
L_001C92C0:
    st32((c.r[16].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 1;
L_001C92C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 1;
L_001C92C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C92D0u); c.r[5].d[0] = ld64((c.r[29].w[0] + 472u));  if (depth < kMaxDepth) unit_002D(c, 202u, depth + 1u); else { c.pc = 0x001D6550u; return; } if (c.pc != 0x001C92D0u) [[unlikely]] return; }
L_001C92D0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 264u);
    set32(c.r[5], c.r[29].w[0] + 480u);
    set32(c.r[6], c.r[6].w[0] + 13762u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C92E8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001C92E8u) [[unlikely]] return; }
L_001C92E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    st32((c.r[29].w[0] + 472u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 476u), c.r[2].w[0]);  if (t) { goto L_001C9430; } }
L_001C92FC:
    set32(c.r[5], c.r[29].w[0] + 472u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9308u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001C9308u) [[unlikely]] return; }
L_001C9308:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9314u); set32(c.r[5], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001C9314u) [[unlikely]] return; }
L_001C9314:
    set32(c.r[20], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9324u); set32(c.r[5], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001C9324u) [[unlikely]] return; }
L_001C9324:
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[5], c.r[29].w[0] + 464u);
    st32((c.r[29].w[0] + 464u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9340u); st32((c.r[29].w[0] + 468u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001C9340u) [[unlikely]] return; }
L_001C9340:
    set32(c.r[19], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9350u); set32(c.r[5], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001C9350u) [[unlikely]] return; }
L_001C9350:
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[5], c.r[29].w[0] + 464u);
    st32((c.r[29].w[0] + 464u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C936Cu); st32((c.r[29].w[0] + 468u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001C936Cu) [[unlikely]] return; }
L_001C936C:
    set32(c.r[18], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[4], c.r[29].w[0] + 216u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C937Cu); set32(c.r[5], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001C937Cu) [[unlikely]] return; }
L_001C937C:
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[5], c.r[29].w[0] + 464u);
    st32((c.r[29].w[0] + 464u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9398u); st32((c.r[29].w[0] + 468u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001C9398u) [[unlikely]] return; }
L_001C9398:
    set32(c.r[17], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C93A8u); set32(c.r[5], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001C93A8u) [[unlikely]] return; }
L_001C93A8:
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[5], c.r[29].w[0] + 464u);
    st32((c.r[29].w[0] + 464u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C93C4u); st32((c.r[29].w[0] + 468u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001C93C4u) [[unlikely]] return; }
L_001C93C4:
    c.f[20] = ld32((c.r[29].w[0] + 196u));
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C93D4u); set32(c.r[5], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001C93D4u) [[unlikely]] return; }
L_001C93D4:
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[29].w[0] + 524u), c.f[20]);
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01060000u);
    set32(c.r[10], ld32((c.r[29].w[0] + 524u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 464u), c.r[5].w[0]);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 4098ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C940Cu); st32((c.r[29].w[0] + 468u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002C(c, 55u, depth + 1u); else { c.pc = 0x001D08E0u; return; } if (c.pc != 0x001C940Cu) [[unlikely]] return; }
L_001C940C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9420u); set32(c.r[6], c.r[6].w[0] + 13762u);  if (depth < kMaxDepth) unit_0022(c, 125u, depth + 1u); else { c.pc = 0x001A9410u; return; } if (c.pc != 0x001C9420u) [[unlikely]] return; }
L_001C9420:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[29].w[0] + 472u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 476u), c.r[2].w[0]);
    c.budget -= 4;
L_001C9430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9438u); set32(c.r[4], c.r[29].w[0] + 472u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001C9438u) [[unlikely]] return; }
L_001C9438:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 464u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C92FCu | kUnwind; return; } goto L_001C92FC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01060000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9454u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002C(c, 35u, depth + 1u); else { c.pc = 0x001D0600u; return; } if (c.pc != 0x001C9454u) [[unlikely]] return; }
L_001C9454:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001C965C; } }
L_001C9464:
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[29].w[0] + 480u);
    set32(c.r[6], c.r[6].w[0] + 13770u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9478u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001C9478u) [[unlikely]] return; }
L_001C9478:
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[29].w[0] + 472u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 476u), c.r[2].w[0]);  if (t) { goto L_001C9594; } }
L_001C948C:
    set32(c.r[5], c.r[29].w[0] + 472u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9498u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001C9498u) [[unlikely]] return; }
L_001C9498:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C94A4u); set32(c.r[5], c.r[29].w[0] + 456u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001C94A4u) [[unlikely]] return; }
L_001C94A4:
    set32(c.r[18], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C94B4u); set32(c.r[5], c.r[29].w[0] + 456u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001C94B4u) [[unlikely]] return; }
L_001C94B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[5], c.r[29].w[0] + 456u);
    st32((c.r[29].w[0] + 456u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C94D0u); st32((c.r[29].w[0] + 460u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001C94D0u) [[unlikely]] return; }
L_001C94D0:
    set32(c.r[17], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C94E0u); set32(c.r[5], c.r[29].w[0] + 456u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001C94E0u) [[unlikely]] return; }
L_001C94E0:
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[5], 0u - 1u);
    st32((c.r[29].w[0] + 456u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C94FCu); st32((c.r[29].w[0] + 460u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001C94FCu) [[unlikely]] return; }
L_001C94FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C9568; } }
L_001C9504:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x010B0000u);  goto L_001C9538; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x010B0000u);
    set32(c.r[10], 0u + 1u);
    set32(c.r[7], 0u + 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9530u); c.r[9].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 17u, depth + 1u); else { c.pc = 0x001D0250u; return; } if (c.pc != 0x001C9530u) [[unlikely]] return; }
L_001C9530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001C9558; } }
L_001C9538:
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9554u); c.r[6].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001D0190u; return; } if (c.pc != 0x001C9554u) [[unlikely]] return; }
L_001C9554:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001C9558:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9564u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001C9564u) [[unlikely]] return; }
L_001C9564:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C9568:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9504u | kUnwind; return; } goto L_001C9504; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9584u); set32(c.r[6], c.r[6].w[0] + 13770u);  if (depth < kMaxDepth) unit_0022(c, 125u, depth + 1u); else { c.pc = 0x001A9410u; return; } if (c.pc != 0x001C9584u) [[unlikely]] return; }
L_001C9584:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    st32((c.r[29].w[0] + 472u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 476u), c.r[2].w[0]);
    c.budget -= 4;
L_001C9594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C959Cu); set32(c.r[4], c.r[29].w[0] + 472u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001C959Cu) [[unlikely]] return; }
L_001C959C:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 456u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C948Cu | kUnwind; return; } goto L_001C948C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001C965C; } }
L_001C95B8:
    set32(c.r[5], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C95C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001C95C4u) [[unlikely]] return; }
L_001C95C4:
    set32(c.r[6], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], 0u - 256u);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 472u);
    st32((c.r[29].w[0] + 472u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 476u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C95F0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001C95F0u) [[unlikely]] return; }
L_001C95F0:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 116u));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001C9634; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_001C9650; } }
L_001C9634:
    set32(c.r[2], 0u - 65u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 7;
L_001C9650:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C965Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001C965Cu) [[unlikely]] return; }
L_001C965C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001C9660:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 544u);  c.pc = t; return; }
L_001C9680:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[22], ld32((c.r[4].w[0] + 60u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001C96C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001C96C8; } }
L_001C96C4:
    set32(c.r[18], ld32((c.r[21].w[0] + 64u)));
    c.budget -= 1;
L_001C96C8:
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], ld32((c.r[21].w[0] + 68u)));  goto L_001C96D8; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C96D8:
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 72u)));  goto L_001C96E8; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C96E8:
    set32(c.r[4], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001C97B0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001C9708; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_001C9834; } }
L_001C9708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9710u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001C9710u) [[unlikely]] return; }
L_001C9710:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 88u)));  goto L_001C97A4; }
    st32((c.r[29].w[0] + 176u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[17].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u + 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 184u), 0u);  if (t) { goto L_001C9798; } }
L_001C9734:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x010B0000u);
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.r[7].d[0] = c.r[17].d[0] << 32;
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.r[8].d[0] = c.r[16].d[0] << 32;
    st32((c.r[29].w[0]), c.f[2]);
    c.r[9].d[0] = c.r[19].d[0] << 32;
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.r[10].d[0] = c.r[22].d[0] << 32;
    c.r[11].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 4096ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9784u); c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);  if (depth < kMaxDepth) unit_002C(c, 25u, depth + 1u); else { c.pc = 0x001D0410u; return; } if (c.pc != 0x001C9784u) [[unlikely]] return; }
L_001C9784:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9794u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001C9794u) [[unlikely]] return; }
L_001C9794:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C9798:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { c.f[2] = ld32((c.r[29].w[0] + 184u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9734u | kUnwind; return; } goto L_001C9734; }
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    c.budget -= 1;
L_001C97A4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001C9830; } }
L_001C97B0:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C97BCu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001C97BCu) [[unlikely]] return; }
L_001C97BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C97E0; } }
L_001C97C4:
    c.budget -= 2;
    if (c.r[3].sd[0] >= 0) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001C97D4; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_001C97D4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C97E0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001C97E0u) [[unlikely]] return; }
L_001C97E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 128u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C97C4u | kUnwind; return; } goto L_001C97C4; }
    c.budget -= 2;
    if (c.r[16].sd[0] > 0) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001C9808; }
    set32(c.r[2], ld32((c.r[21].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001C9818; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001C9808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9810u);  if (depth < kMaxDepth) unit_002A(c, 50u, depth + 1u); else { c.pc = 0x001C8710u; return; } if (c.pc != 0x001C9810u) [[unlikely]] return; }
L_001C9810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001C9824; } }
L_001C9818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9820u);  if (depth < kMaxDepth) unit_002A(c, 51u, depth + 1u); else { c.pc = 0x001C8720u; return; } if (c.pc != 0x001C9820u) [[unlikely]] return; }
L_001C9820:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001C9824:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9830u); st32((c.r[21].w[0] + 524u), 0u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001C9830u) [[unlikely]] return; }
L_001C9830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_001C9834:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001C9860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001C988C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9884u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001C9884u) [[unlikely]] return; }
L_001C9884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001C9990; } }
L_001C988C:
    set32(c.r[5], ld32((c.r[16].w[0] + 524u)));
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  goto L_001C98BC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98A8u); set32(c.r[5], c.r[5].w[0] + 13793u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001C98A8u) [[unlikely]] return; }
L_001C98A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001C98B4u) [[unlikely]] return; }
L_001C98B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C998C; } }
L_001C98BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 524u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 208u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 16;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001C9900; }
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 1;
L_001C9900:
    set32(c.r[3], ld32((c.r[16].w[0] + 524u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 212u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001C992C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_001C992C:
    set32(c.r[3], ld32((c.r[16].w[0] + 524u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 216u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C995C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 72u));  if (t) { goto L_001C9960; } }
L_001C995C:
    c.f[0] = 0u;
    c.budget -= 1;
L_001C9960:
    set32(c.r[3], ld32((c.r[16].w[0] + 524u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 220u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 524u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C998Cu); st32((c.r[16].w[0] + 524u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001C998Cu) [[unlikely]] return; }
L_001C998C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001C9990:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C99A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C99C4u); set32(c.r[4], 0u + 266u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001C99C4u) [[unlikely]] return; }
L_001C99C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C99D0u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001C99D0u) [[unlikely]] return; }
L_001C99D0:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001C9D18; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 200u)));  goto L_001C9CB4; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_001C9C18; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 200u)));  goto L_001C9ACC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_001C9A14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001C9DC4; } }
L_001C9A14:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  goto L_001C9A34; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9A2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001C9A2Cu) [[unlikely]] return; }
L_001C9A2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9DC0; } }
L_001C9A34:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001C9A5C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
L_001C9A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9A64u);  if (depth < kMaxDepth) unit_002A(c, 19u, depth + 1u); else { c.pc = 0x001C8260u; return; } if (c.pc != 0x001C9A64u) [[unlikely]] return; }
L_001C9A64:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[5].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9A9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001D84F0u; return; } if (c.pc != 0x001C9A9Cu) [[unlikely]] return; }
L_001C9A9C:
    st32((c.r[17].w[0] + 200u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 524u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01070000u);
    set32(c.r[8], c.r[17].w[0] + 204u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9ABCu); c.r[6].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002C(c, 9u, depth + 1u); else { c.pc = 0x001D00F0u; return; } if (c.pc != 0x001C9ABCu) [[unlikely]] return; }
L_001C9ABC:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001C9DC0; } }
L_001C9ACC:
    set32(c.r[16], c.r[3].w[0] + 160u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001C9C14; } }
    set32(c.r[18], ld32((c.r[3].w[0] + 1320u)));
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[19], c.r[3].w[0] + 296u);  if (t) { goto L_001C9B14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9AECu); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001C9AECu) [[unlikely]] return; }
L_001C9AEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 536u), c.r[2].w[0]);  goto L_001C9B0C; }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 40u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B08u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 166u, depth + 1u); else { c.pc = 0x00165390u; return; } if (c.pc != 0x001C9B08u) [[unlikely]] return; }
L_001C9B08:
    st32((c.r[17].w[0] + 536u), c.r[2].w[0]);
    c.budget -= 1;
L_001C9B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 44u, depth + 1u); else { c.pc = 0x001C85A0u; return; } if (c.pc != 0x001C9B14u) [[unlikely]] return; }
L_001C9B14:
    set32(c.r[3], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 208u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001C9BD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B2Cu); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C9B2Cu) [[unlikely]] return; }
L_001C9B2C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001C9B4C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B44u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 31u, depth + 1u); else { c.pc = 0x001CC3B0u; return; } if (c.pc != 0x001C9B44u) [[unlikely]] return; }
L_001C9B44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001C9B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B54u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 272u, depth + 1u); else { c.pc = 0x001CA570u; return; } if (c.pc != 0x001C9B54u) [[unlikely]] return; }
L_001C9B54:
    set32(c.r[8], ld32((c.r[17].w[0] + 536u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x010B0000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 200u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B70u); c.r[6].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002C(c, 9u, depth + 1u); else { c.pc = 0x001D00F0u; return; } if (c.pc != 0x001C9B70u) [[unlikely]] return; }
L_001C9B70:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9BD8; } }
L_001C9B7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B84u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C9B84u) [[unlikely]] return; }
L_001C9B84:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001C9BA4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 55u, depth + 1u); else { c.pc = 0x001CC6D0u; return; } if (c.pc != 0x001C9B9Cu) [[unlikely]] return; }
L_001C9B9C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001C9BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9BACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 272u, depth + 1u); else { c.pc = 0x001CA570u; return; } if (c.pc != 0x001C9BACu) [[unlikely]] return; }
L_001C9BAC:
    set32(c.r[10], ld32((c.r[17].w[0] + 524u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x010B0000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 536u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[11], c.r[17].w[0] + 204u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 4097ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9BD4u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 21u, depth + 1u); else { c.pc = 0x001D0320u; return; } if (c.pc != 0x001C9BD4u) [[unlikely]] return; }
L_001C9BD4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001C9BD8:
    set32(c.r[3], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 228u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9B7Cu | kUnwind; return; } goto L_001C9B7C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 88u)));  goto L_001C9C08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9C04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 106u, depth + 1u); else { c.pc = 0x001C8E40u; return; } if (c.pc != 0x001C9C04u) [[unlikely]] return; }
L_001C9C04:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_001C9C08:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001C9DC0; } }
L_001C9C14:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001C9C18:
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 88u)));  goto L_001C9CA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001C9C88; } }
L_001C9C34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9C3Cu); set32(c.r[4], 0u + 200u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C9C3Cu) [[unlikely]] return; }
L_001C9C3C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001C9C5C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9C54u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 478u, depth + 1u); else { c.pc = 0x001CBD20u; return; } if (c.pc != 0x001C9C54u) [[unlikely]] return; }
L_001C9C54:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001C9C5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9C64u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 272u, depth + 1u); else { c.pc = 0x001CA570u; return; } if (c.pc != 0x001C9C64u) [[unlikely]] return; }
L_001C9C64:
    set32(c.r[3], ld32((c.r[17].w[0] + 200u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x010B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 4097ull;
    set32(c.r[7], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9C84u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 9u, depth + 1u); else { c.pc = 0x001D00F0u; return; } if (c.pc != 0x001C9C84u) [[unlikely]] return; }
L_001C9C84:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001C9C88:
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 216u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9C98u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_00A9(c, 98u, depth + 1u); else { c.pc = 0x003C4F10u; return; } if (c.pc != 0x001C9C98u) [[unlikely]] return; }
L_001C9C98:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9C34u | kUnwind; return; } goto L_001C9C34; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_001C9CA8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001C9DC0; } }
L_001C9CB4:
    set32(c.r[3], ld32((c.r[3].w[0] + 1332u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 88u)));  goto L_001C9D0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9CC8u); set32(c.r[4], 0u + 188u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001C9CC8u) [[unlikely]] return; }
L_001C9CC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001C9CE8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9CE0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 399u, depth + 1u); else { c.pc = 0x001E7DB0u; return; } if (c.pc != 0x001C9CE0u) [[unlikely]] return; }
L_001C9CE0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001C9CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9CF0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 272u, depth + 1u); else { c.pc = 0x001CA570u; return; } if (c.pc != 0x001C9CF0u) [[unlikely]] return; }
L_001C9CF0:
    set32(c.r[7], ld32((c.r[17].w[0] + 200u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x010B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9D08u); c.r[6].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001C9D08u) [[unlikely]] return; }
L_001C9D08:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_001C9D0C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001C9DC0; } }
L_001C9D18:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9D24u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001C9D24u) [[unlikely]] return; }
L_001C9D24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9D48; } }
L_001C9D2C:
    c.budget -= 2;
    if (c.r[3].sd[0] >= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001C9D3C; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001C9D3C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9D48u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001C9D48u) [[unlikely]] return; }
L_001C9D48:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 128u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9D2Cu | kUnwind; return; } goto L_001C9D2C; }
    c.budget -= 2;
    if (c.r[16].sd[0] > 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001C9D70; }
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001C9D80; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C9D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9D78u);  if (depth < kMaxDepth) unit_002A(c, 50u, depth + 1u); else { c.pc = 0x001C8710u; return; } if (c.pc != 0x001C9D78u) [[unlikely]] return; }
L_001C9D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 88u)));  if (t) { goto L_001C9D8C; } }
L_001C9D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9D88u);  if (depth < kMaxDepth) unit_002A(c, 51u, depth + 1u); else { c.pc = 0x001C8720u; return; } if (c.pc != 0x001C9D88u) [[unlikely]] return; }
L_001C9D88:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_001C9D8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 164u)));
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 172u)));
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 524u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9DC0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001C9DC0u) [[unlikely]] return; }
L_001C9DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001C9DC4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001C9DE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9DFCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 262u, depth + 1u); else { c.pc = 0x001CA470u; return; } if (c.pc != 0x001C9DFCu) [[unlikely]] return; }
L_001C9DFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9E08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001C9E08u) [[unlikely]] return; }
L_001C9E08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C9E20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9E3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 267u, depth + 1u); else { c.pc = 0x001CA4F0u; return; } if (c.pc != 0x001C9E3Cu) [[unlikely]] return; }
L_001C9E3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9E48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001C9E48u) [[unlikely]] return; }
L_001C9E48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C9E60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001C9EE0; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], 0u - 1u);  goto L_001C9E90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001C9EEC; } }
L_001C9E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9E98u);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001C9E98u) [[unlikely]] return; }
L_001C9E98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C9EC8; } }
L_001C9EA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x010B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9EB4u); c.r[6].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001C9EB4u) [[unlikely]] return; }
L_001C9EB4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9EC4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001C9EC4u) [[unlikely]] return; }
L_001C9EC4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001C9EC8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[7], ld32((c.r[16].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9EA0u | kUnwind; return; } goto L_001C9EA0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001C9EE8; } }
L_001C9EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9EE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001C9EE8u) [[unlikely]] return; }
L_001C9EE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001C9EEC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C9F00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 14;
    if (c.r[4].sd[0] <= 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0x41600000u);  goto L_001C9F40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = ld32((c.r[19].w[0] + 56u));  if (t) { goto L_001C9F44; } }
L_001C9F40:
    c.f[22] = c.r[3].w[0];
    c.budget -= 1;
L_001C9F44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[19].w[0] + 156u)));  goto L_001C9F64; }
    c.f[22] = c.f[0];
    set32(c.r[3], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 2;
L_001C9F64:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;  goto L_001C9F84; }
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], 0u + 2u);  goto L_001C9F7C; }
    set32(c.r[16], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 1;
L_001C9F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 88u)));  if (t) { goto L_001C9F98; } }
L_001C9F84:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], 0u + 1u);  goto L_001C9F94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 64u)));  if (t) { goto L_001C9F94; } }
L_001C9F94:
    set32(c.r[4], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 1;
L_001C9F98:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001CA358; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 188u)));  goto L_001CA0C0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] & 15ull;  goto L_001C9FC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001CA440; } }
L_001C9FC0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_001C9FDC; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9FD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001C9FD4u) [[unlikely]] return; }
L_001C9FD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA43C; } }
L_001C9FDC:
    c.r[4].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001CA008; } }
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CA008; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA000u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CA000u) [[unlikely]] return; }
L_001CA000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA43C; } }
L_001CA008:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] & 240ull;  goto L_001CA01C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 168u), c.r[3].w[0]);  if (t) { goto L_001CA03C; } }
L_001CA01C:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[19].w[0] + 168u), 0u);  goto L_001CA03C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 2u);  goto L_001CA038; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  if (t) { goto L_001CA040; } }
L_001CA038:
    st32((c.r[19].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 1;
L_001CA03C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_001CA040:
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[19].w[0] + 528u), c.f[22]);  goto L_001CA0B0; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA058u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001CA058u) [[unlikely]] return; }
L_001CA058:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001CA0AC; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_001CA0A4; } }
L_001CA070:
    c.r[7].d[0] = c.r[17].d[0] << 32;
    c.r[8].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA090u); c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);  if (depth < kMaxDepth) unit_002C(c, 9u, depth + 1u); else { c.pc = 0x001D00F0u; return; } if (c.pc != 0x001CA090u) [[unlikely]] return; }
L_001CA090:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA0A0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001CA0A0u) [[unlikely]] return; }
L_001CA0A0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CA0A4:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x010B0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA070u | kUnwind; return; } goto L_001CA070; }
L_001CA0AC:
    st32((c.r[19].w[0] + 528u), c.f[22]);
    c.budget -= 1;
L_001CA0B0:
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001CA43C; } }
L_001CA0C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 7;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001CA0E8; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001CA100; } }
L_001CA0E8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_001CA100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA110u); c.f[23] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 339u, depth + 1u); else { c.pc = 0x001E2D40u; return; } if (c.pc != 0x001CA110u) [[unlikely]] return; }
L_001CA110:
    c.f[2] = ld32((c.r[19].w[0] + 528u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[23], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[19].w[0] + 528u), c.f[0]);  if (t) { goto L_001CA134; } }
    st32((c.r[19].w[0] + 528u), c.f[1]);
    c.budget -= 1;
L_001CA134:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] & 15ull;  goto L_001CA1B4; }
    c.r[3].d[0] = c.r[16].d[0] & 15ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[19].w[0] + 528u));  goto L_001CA198; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[19].w[0] + 528u));  goto L_001CA178; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CA174; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CA20C; } }
L_001CA174:
    c.f[1] = ld32((c.r[19].w[0] + 528u));
    c.budget -= 1;
L_001CA178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[22]);
    c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[20];  if (t) { goto L_001CA208; } }
L_001CA198:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[22]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);  if (t) { goto L_001CA208; } }
L_001CA1B4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[19].w[0] + 528u));  goto L_001CA1FC; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[19].w[0] + 528u));  goto L_001CA1E4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CA1E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA208; } }
L_001CA1E0:
    c.f[0] = ld32((c.r[19].w[0] + 528u));
    c.budget -= 1;
L_001CA1E4:
    c.f[20] = fp::ee::div(c.fcr31, c.f[0], c.f[22]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[20];  if (t) { goto L_001CA208; } }
L_001CA1FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.f[20] = fp::ee::div(c.fcr31, c.f[0], c.f[22]);
    c.budget -= 3;
L_001CA208:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001CA20C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA214u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001CA214u) [[unlikely]] return; }
L_001CA214:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.r[3].w[0] << 24);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] << 24);  if (t) { goto L_001CA328; } }
L_001CA258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA260u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 346u, depth + 1u); else { c.pc = 0x001C6260u; return; } if (c.pc != 0x001CA260u) [[unlikely]] return; }
L_001CA260:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 168u)));  goto L_001CA2C4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    st32((c.r[3].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 172u), c.r[2].w[0]);  if (t) { goto L_001CA314; } }
L_001CA2C4:
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    st32((c.r[3].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    st32((c.r[3].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 20;
L_001CA314:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA324u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001CA324u) [[unlikely]] return; }
L_001CA324:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CA328:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA258u | kUnwind; return; } goto L_001CA258; } }
    c.f[1] = ld32((c.r[19].w[0] + 528u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CA43C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001CA43C; } }
L_001CA358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA360u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001CA360u) [[unlikely]] return; }
L_001CA360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA3CC; } }
L_001CA368:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], ld32((c.r[7].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[7].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[7].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[7].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA3CCu); st32((c.r[7].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001CA3CCu) [[unlikely]] return; }
L_001CA3CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[2].w[0] + 168u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA368u | kUnwind; return; } goto L_001CA368; }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_001CA408; }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u - 65u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_001CA428; } }
L_001CA408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 188u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 8;
L_001CA428:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA43Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CA43Cu) [[unlikely]] return; }
L_001CA43C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001CA440:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001CA470:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA49Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001CA49Cu) [[unlikely]] return; }
L_001CA49C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CA4C4; } }
L_001CA4A4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA4B0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 71u, depth + 1u); else { c.pc = 0x001CC8D0u; return; } if (c.pc != 0x001CA4B0u) [[unlikely]] return; }
L_001CA4B0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA4C0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001CA4C0u) [[unlikely]] return; }
L_001CA4C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CA4C4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA4A4u | kUnwind; return; } goto L_001CA4A4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CA4F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA51Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001CA51Cu) [[unlikely]] return; }
L_001CA51C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CA544; } }
L_001CA524:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA530u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 72u, depth + 1u); else { c.pc = 0x001CC920u; return; } if (c.pc != 0x001CA530u) [[unlikely]] return; }
L_001CA530:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA540u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001CA540u) [[unlikely]] return; }
L_001CA540:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CA544:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA524u | kUnwind; return; } goto L_001CA524; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CA570:
    set32(c.r[2], ld32((c.r[4].w[0] + 196u)));
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[5].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 196u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 168u)));
    c.budget -= 7;
    { set32(c.r[5], ld32((c.r[3].w[0] + 192u)));  [[clang::musttail]] return unit_003A(c, 412u, depth); }
L_001CA590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 196u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001CA5E0; } }
L_001CA5A4:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[5].d[0]) { c.r[3].d[0] = c.r[6].d[0] + 0ull;  goto L_001CA5DC; }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 176u)));  goto L_001CA5C0; }
    set32(c.r[2], ld32((c.r[6].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 196u), c.r[2].w[0]);  if (t) { goto L_001CA5C4; } }
L_001CA5C0:
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 1;
L_001CA5C4:
    set32(c.r[25], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA5D4u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CA5D4u) [[unlikely]] return; }
L_001CA5D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001CA5EC; } }
L_001CA5DC:
    set32(c.r[6], ld32((c.r[6].w[0] + 176u)));
    c.budget -= 1;
L_001CA5E0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA5A4u | kUnwind; return; } goto L_001CA5A4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001CA5EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CA600:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 336u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001CA740; }
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA620u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_002A(c, 49u, depth + 1u); else { c.pc = 0x001C8670u; return; } if (c.pc != 0x001CA620u) [[unlikely]] return; }
L_001CA620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA73C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA630u);  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x001CA630u) [[unlikely]] return; }
L_001CA630:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA63Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x001CA63Cu) [[unlikely]] return; }
L_001CA63C:
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[5], 0u + 5u);
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] | 65280ull;
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[2]);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA6B8u); st32((c.r[29].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0013(c, 138u, depth + 1u); else { c.pc = 0x0016DA10u; return; } if (c.pc != 0x001CA6B8u) [[unlikely]] return; }
L_001CA6B8:
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[5], 0u + 5u);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] | 255ull;
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[2]);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA734u); st32((c.r[29].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0013(c, 138u, depth + 1u); else { c.pc = 0x0016DA10u; return; } if (c.pc != 0x001CA734u) [[unlikely]] return; }
L_001CA734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA73Cu);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x001CA73Cu) [[unlikely]] return; }
L_001CA73C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001CA740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001CA750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 261u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA768u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001CA768u) [[unlikely]] return; }
L_001CA768:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[16].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] + 12992u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA77Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 160u, depth + 1u); else { c.pc = 0x001D5820u; return; } if (c.pc != 0x001CA77Cu) [[unlikely]] return; }
L_001CA77C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA784u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 291u, depth + 1u); else { c.pc = 0x001CA800u; return; } if (c.pc != 0x001CA784u) [[unlikely]] return; }
L_001CA784:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA794u); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001CA794u) [[unlikely]] return; }
L_001CA794:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 980u), c.r[2].w[0]);  goto L_001CA7A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA7A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 393u, depth + 1u); else { c.pc = 0x0020BD00u; return; } if (c.pc != 0x001CA7A4u) [[unlikely]] return; }
L_001CA7A4:
    st32((c.r[16].w[0] + 980u), c.r[2].w[0]);
    c.budget -= 1;
L_001CA7A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA7B0u);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x001CA7B0u) [[unlikely]] return; }
L_001CA7B0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 976u), c.r[2].w[0]);
    set32(c.r[3], 0u - 8193u);
    set32(c.r[7], ld32((c.r[16].w[0] + 980u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E430000u);
    c.r[2].d[0] = c.r[2].d[0] | 21325ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13824u);
    set32(c.r[6], ld32((c.r[7].w[0] + 292u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[7].w[0] + 292u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA7E8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001CA7E8u) [[unlikely]] return; }
L_001CA7E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CA800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 148u), 0u);  c.pc = t; return; }
L_001CA810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CA888; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 12992u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA83Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 298u, depth + 1u); else { c.pc = 0x001CA8A0u; return; } if (c.pc != 0x001CA83Cu) [[unlikely]] return; }
L_001CA83C:
    set32(c.r[4], ld32((c.r[17].w[0] + 980u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 156u);  goto L_001CA85C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA858u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CA858u) [[unlikely]] return; }
L_001CA858:
    set32(c.r[4], c.r[17].w[0] + 156u);
    c.budget -= 1;
L_001CA85C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA864u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002D(c, 161u, depth + 1u); else { c.pc = 0x001D5860u; return; } if (c.pc != 0x001CA864u) [[unlikely]] return; }
L_001CA864:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA870u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001CA870u) [[unlikely]] return; }
L_001CA870:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001CA88C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA888u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001CA888u) [[unlikely]] return; }
L_001CA888:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CA88C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CA8A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 148u)));  if (t) { goto L_001CA8D0; } }
L_001CA8BC:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA8CCu); set32(c.r[16], ld32((c.r[4].w[0] + 540u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CA8CCu) [[unlikely]] return; }
L_001CA8CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CA8D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA8BCu | kUnwind; return; } goto L_001CA8BC; } }
    st32((c.r[17].w[0] + 148u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CA8F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA904u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 307u, depth + 1u); else { c.pc = 0x001CA950u; return; } if (c.pc != 0x001CA904u) [[unlikely]] return; }
L_001CA904:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001CA938; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA91Cu);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x001CA91Cu) [[unlikely]] return; }
L_001CA91C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA924u); set32(c.r[4], ld32((c.r[16].w[0] + 976u)));  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x001CA924u) [[unlikely]] return; }
L_001CA924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA92Cu); set32(c.r[4], ld32((c.r[16].w[0] + 980u)));  if (depth < kMaxDepth) unit_003A(c, 414u, depth + 1u); else { c.pc = 0x0020BFF0u; return; } if (c.pc != 0x001CA92Cu) [[unlikely]] return; }
L_001CA92C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA934u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x001CA934u) [[unlikely]] return; }
L_001CA934:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001CA938:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CA950:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u + 31u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA978u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001CA978u) [[unlikely]] return; }
L_001CA978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CAA3C; } }
L_001CA980:
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { set32(c.r[5], ld32((c.r[17].w[0] + 176u)));  goto L_001CA9A0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA998u); set32(c.r[5], c.r[5].w[0] + 14101u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001CA998u) [[unlikely]] return; }
L_001CA998:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 2;
L_001CA9A0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001CA9BC; }
    set32(c.r[5], ld32((c.r[19].w[0] + 980u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA9B4u); set32(c.r[4], ld32((c.r[17].w[0] + 188u)));  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x001CA9B4u) [[unlikely]] return; }
L_001CA9B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001CA9F0; } }
L_001CA9BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA9C4u);  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001CA9C4u) [[unlikely]] return; }
L_001CA9C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 188u)));  goto L_001CA9E0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA9D8u); set32(c.r[5], ld32((c.r[2].w[0] + 184u)));  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x001CA9D8u) [[unlikely]] return; }
L_001CA9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA9EC; } }
L_001CA9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA9E8u); set32(c.r[5], ld32((c.r[19].w[0] + 980u)));  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x001CA9E8u) [[unlikely]] return; }
L_001CA9E8:
    st32((c.r[17].w[0] + 176u), 0u);
    c.budget -= 1;
L_001CA9EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CA9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA9F8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001CA9F8u) [[unlikely]] return; }
L_001CA9F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CAA1C; } }
L_001CAA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAA08u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 343u, depth + 1u); else { c.pc = 0x001C61E0u; return; } if (c.pc != 0x001CAA08u) [[unlikely]] return; }
L_001CAA08:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAA18u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001CAA18u) [[unlikely]] return; }
L_001CAA18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CAA1C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CAA00u | kUnwind; return; } goto L_001CAA00; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAA34u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CAA34u) [[unlikely]] return; }
L_001CAA34:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 2;
L_001CAA3C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA980u | kUnwind; return; } goto L_001CA980; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CAA60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAA94u); set32(c.r[4], 0u + 556u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001CAA94u) [[unlikely]] return; }
L_001CAA94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001CAACC; }
    set32(c.r[9], ld32((c.r[16].w[0] + 152u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[9].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAAC4u); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0029(c, 510u, depth + 1u); else { c.pc = 0x001C7E70u; return; } if (c.pc != 0x001CAAC4u) [[unlikely]] return; }
L_001CAAC4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001CAACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAAD4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 27u, depth + 1u); else { c.pc = 0x001C8370u; return; } if (c.pc != 0x001CAAD4u) [[unlikely]] return; }
L_001CAAD4:
    set32(c.r[5], ld32((c.r[16].w[0] + 980u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAAE0u); set32(c.r[4], ld32((c.r[17].w[0] + 188u)));  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x001CAAE0u) [[unlikely]] return; }
L_001CAAE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    st32((c.r[17].w[0] + 540u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 148u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001CAB10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001CAB88; } }
L_001CAB38:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[3].d[0]) { c.r[16].d[0] = c.r[4].d[0] + 0ull;  goto L_001CAB84; }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 540u)));  goto L_001CAB68; }
    set32(c.r[2], ld32((c.r[4].w[0] + 540u)));
    st32((c.r[18].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAB60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CAB60u) [[unlikely]] return; }
L_001CAB60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 148u)));  if (t) { goto L_001CAB88; } }
L_001CAB68:
    st32((c.r[16].w[0] + 540u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAB7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CAB7Cu) [[unlikely]] return; }
L_001CAB7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 540u)));  if (t) { goto L_001CAB88; } }
L_001CAB84:
    set32(c.r[4], ld32((c.r[4].w[0] + 540u)));
    c.budget -= 1;
L_001CAB88:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 160u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CAB38u | kUnwind; return; } goto L_001CAB38; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001CABB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CABD0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001CABD0u) [[unlikely]] return; }
L_001CABD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CABF4; } }
L_001CABD8:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001CABE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001CAC04; } }
L_001CABE8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CABF4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CABF4u) [[unlikely]] return; }
L_001CABF4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 160u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CABD8u | kUnwind; return; } goto L_001CABD8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_001CAC04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CAC20:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAC50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001CAC50u) [[unlikely]] return; }
L_001CAC50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CACA8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 1;
L_001CAC5C:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001CAC9C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], 0u + 3u);  goto L_001CAC7C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_001CAC98; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_001CAC7C:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001CACB8; }
    set32(c.r[3], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001CAC98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CACB4; } }
L_001CAC98:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001CAC9C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CACA8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CACA8u) [[unlikely]] return; }
L_001CACA8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 148u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CAC5Cu | kUnwind; return; } goto L_001CAC5C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CACB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001CACB8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CACD0:
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_001CACFC; } }
L_001CACDC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001CAD08; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 540u)));  goto L_001CACFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CAD08; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 540u)));
    c.budget -= 1;
L_001CACFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CACDCu | kUnwind; return; } goto L_001CACDC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CAD08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CAD10:
    set32(c.r[2], ld32((c.r[5].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_001CAD3C; } }
L_001CAD1C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_001CAD48; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 540u)));  goto L_001CAD3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CAD48; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 540u)));
    c.budget -= 1;
L_001CAD3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CAD1Cu | kUnwind; return; } goto L_001CAD1C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CAD48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CAD50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAD70u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001CAD70u) [[unlikely]] return; }
L_001CAD70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CAD98; } }
L_001CAD78:
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001CAD8C; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001CAD8C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAD98u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CAD98u) [[unlikely]] return; }
L_001CAD98:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CAD78u | kUnwind; return; } goto L_001CAD78; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CADC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CADE0u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001CADE0u) [[unlikely]] return; }
L_001CADE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CADFC; } }
L_001CADE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CADFCu); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CADFCu) [[unlikely]] return; }
L_001CADFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CADE8u | kUnwind; return; } goto L_001CADE8; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CAE20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAE48u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001CAE48u) [[unlikely]] return; }
L_001CAE48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CAEF4; } }
L_001CAE50:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001CAEE8; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001CAE70; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 184u)));  goto L_001CAE8C; }
L_001CAE70:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001CAEE4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CAEE4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 184u)));
    c.budget -= 1;
L_001CAE8C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001CAEB8; } }
L_001CAE98:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001CAEB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001CAEC4; } }
L_001CAEB8:
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CAE98u | kUnwind; return; } goto L_001CAE98; }
L_001CAEC4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001CAEE4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 200u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001CAEDC; }
    set32(c.r[16], ld32((c.r[3].w[0] + 224u)));
    c.budget -= 1;
L_001CAEDC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001CAEFC; } }
L_001CAEE4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001CAEE8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAEF4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CAEF4u) [[unlikely]] return; }
L_001CAEF4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 156u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CAE50u | kUnwind; return; } goto L_001CAE50; }
L_001CAEFC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], c.r[29].w[0] + 64u);  goto L_001CAF1C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAF14u); set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 358u, depth + 1u); else { c.pc = 0x001CAF70u; return; } if (c.pc != 0x001CAF14u) [[unlikely]] return; }
L_001CAF14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001CAF50; } }
L_001CAF1C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_001CAF40; } }
L_001CAF24:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CAF24u | kUnwind; return; } goto L_001CAF24; } }
L_001CAF40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAF4Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_002A(c, 358u, depth + 1u); else { c.pc = 0x001CAF70u; return; } if (c.pc != 0x001CAF4Cu) [[unlikely]] return; }
L_001CAF4C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001CAF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAF58u);  if (depth < kMaxDepth) unit_002A(c, 359u, depth + 1u); else { c.pc = 0x001CAF80u; return; } if (c.pc != 0x001CAF58u) [[unlikely]] return; }
L_001CAF58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001CAF70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 156u);  [[clang::musttail]] return unit_002D(c, 163u, depth); }
L_001CAF80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAF9Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001CAF9Cu) [[unlikely]] return; }
L_001CAF9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CAFC0; } }
L_001CAFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAFACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 44u, depth + 1u); else { c.pc = 0x001C85A0u; return; } if (c.pc != 0x001CAFACu) [[unlikely]] return; }
L_001CAFAC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAFBCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CAFBCu) [[unlikely]] return; }
L_001CAFBC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CAFC0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CAFA4u | kUnwind; return; } goto L_001CAFA4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CAFE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[30], c.r[29].w[0] + 0u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB014u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001CB014u) [[unlikely]] return; }
L_001CB014:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CB048; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001CB048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB048u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001CB048u) [[unlikely]] return; }
L_001CB048:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[19].w[0] + 8u), 0u);  goto L_001CB0A0; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB09C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB064u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001CB064u) [[unlikely]] return; }
L_001CB064:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001CB090; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001CB080; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB090; } }
L_001CB080:
    set32(c.r[4], c.r[19].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB090u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001CB090u) [[unlikely]] return; }
L_001CB090:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 976u)));  if (t) { goto L_001CB0A4; } }
L_001CB09C:
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 1;
L_001CB0A0:
    set32(c.r[18], ld32((c.r[16].w[0] + 976u)));
    c.budget -= 1;
L_001CB0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB0ACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001CB0ACu) [[unlikely]] return; }
L_001CB0AC:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CB0DC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001CB0DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB0DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001CB0DCu) [[unlikely]] return; }
L_001CB0DC:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[18], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB0ECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001CB0ECu) [[unlikely]] return; }
L_001CB0EC:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CB11C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001CB11C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB11Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001CB11Cu) [[unlikely]] return; }
L_001CB11C:
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[18].d[0] = ld16((c.r[16].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB12Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001CB12Cu) [[unlikely]] return; }
L_001CB12C:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CB15C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001CB15C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB15Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001CB15Cu) [[unlikely]] return; }
L_001CB15C:
    set32(c.r[4], c.r[16].w[0] + 156u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB16Cu); st32((c.r[17].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_002D(c, 190u, depth + 1u); else { c.pc = 0x001D6350u; return; } if (c.pc != 0x001CB16Cu) [[unlikely]] return; }
L_001CB16C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB174u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 345u, depth + 1u); else { c.pc = 0x001CADC0u; return; } if (c.pc != 0x001CB174u) [[unlikely]] return; }
L_001CB174:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], 0u - 16u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[5], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB1A4u); set32(c.r[17], c.r[29].w[0]);  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001CB1A4u) [[unlikely]] return; }
L_001CB1A4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001CB1D0; } }
L_001CB1B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB1C8u); st32((c.r[2].w[0] - 4u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CB1C8u) [[unlikely]] return; }
L_001CB1C8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_001CB1D0:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] - c.r[20].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CB1B0u | kUnwind; return; } goto L_001CB1B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001CB208; } }
L_001CB1E4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB204u); set32(c.r[6], c.r[6].w[0] + 14118u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CB204u) [[unlikely]] return; }
L_001CB204:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001CB208:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CB1E4u | kUnwind; return; } goto L_001CB1E4; }
    set32(c.r[29], c.r[30].w[0] + 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001CB240:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB26Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001CB26Cu) [[unlikely]] return; }
L_001CB26C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CB294; } }
L_001CB274:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB280u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 262u, depth + 1u); else { c.pc = 0x001CA470u; return; } if (c.pc != 0x001CB280u) [[unlikely]] return; }
L_001CB280:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB290u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CB290u) [[unlikely]] return; }
L_001CB290:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CB294:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CB274u | kUnwind; return; } goto L_001CB274; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CB2C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB2ECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001CB2ECu) [[unlikely]] return; }
L_001CB2EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CB314; } }
L_001CB2F4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB300u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 267u, depth + 1u); else { c.pc = 0x001CA4F0u; return; } if (c.pc != 0x001CB300u) [[unlikely]] return; }
L_001CB300:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB310u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CB310u) [[unlikely]] return; }
L_001CB310:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CB314:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CB2F4u | kUnwind; return; } goto L_001CB2F4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CB340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB350u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CB350u) [[unlikely]] return; }
L_001CB350:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CB360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB374u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 298u, depth + 1u); else { c.pc = 0x001CA8A0u; return; } if (c.pc != 0x001CB374u) [[unlikely]] return; }
L_001CB374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB37Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 291u, depth + 1u); else { c.pc = 0x001CA800u; return; } if (c.pc != 0x001CB37Cu) [[unlikely]] return; }
L_001CB37C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB388u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CB388u) [[unlikely]] return; }
L_001CB388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CB3A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CB568; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CB3CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001CB574; } }
L_001CB3CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB3D4u);  if (depth < kMaxDepth) unit_002A(c, 298u, depth + 1u); else { c.pc = 0x001CA8A0u; return; } if (c.pc != 0x001CB3D4u) [[unlikely]] return; }
L_001CB3D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB3DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 291u, depth + 1u); else { c.pc = 0x001CA800u; return; } if (c.pc != 0x001CB3DCu) [[unlikely]] return; }
L_001CB3DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB400u); st32((c.r[29].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001CB400u) [[unlikely]] return; }
L_001CB400:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB40Cu); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001CB40Cu) [[unlikely]] return; }
L_001CB40C:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB420u); st32((c.r[16].w[0] + 976u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001CB420u) [[unlikely]] return; }
L_001CB420:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[5], c.r[29].w[0] + 104u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB43Cu); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001CB43Cu) [[unlikely]] return; }
L_001CB43C:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB450u); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001CB450u) [[unlikely]] return; }
L_001CB450:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[5], c.r[29].w[0] + 104u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB46Cu); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001CB46Cu) [[unlikely]] return; }
L_001CB46C:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 60u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[6].w[0] + 14124u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB494u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001CB494u) [[unlikely]] return; }
L_001CB494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB49Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001CB49Cu) [[unlikely]] return; }
L_001CB49C:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001CB4B4; } }
    c.r[5].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB4B4u); set32(c.r[4], c.r[16].w[0] + 156u);  if (depth < kMaxDepth) unit_002D(c, 202u, depth + 1u); else { c.pc = 0x001D6550u; return; } if (c.pc != 0x001CB4B4u) [[unlikely]] return; }
L_001CB4B4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[6].w[0] + 14118u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB4CCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001CB4CCu) [[unlikely]] return; }
L_001CB4CC:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_001CB544; } }
L_001CB4E0:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB4F0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 320u, depth + 1u); else { c.pc = 0x001CAA60u; return; } if (c.pc != 0x001CB4F0u) [[unlikely]] return; }
L_001CB4F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB4FCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001CB4FCu) [[unlikely]] return; }
L_001CB4FC:
    set32(c.r[8], ld32((c.r[29].w[0] + 100u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[7], c.r[5].w[0] + 136u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    st32((c.r[2].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB520u); st32((c.r[2].w[0] + 140u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001CB520u) [[unlikely]] return; }
L_001CB520:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 40u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB534u); set32(c.r[6], c.r[6].w[0] + 14118u);  if (depth < kMaxDepth) unit_0022(c, 125u, depth + 1u); else { c.pc = 0x001A9410u; return; } if (c.pc != 0x001CB534u) [[unlikely]] return; }
L_001CB534:
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 4;
L_001CB544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB54Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001CB54Cu) [[unlikely]] return; }
L_001CB54C:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CB4E0u | kUnwind; return; } goto L_001CB4E0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001CB570; } }
L_001CB568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB570u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CB570u) [[unlikely]] return; }
L_001CB570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001CB574:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001CB580:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CB67C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  goto L_001CB5B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001CB688; } }
L_001CB5B0:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  goto L_001CB5C4; }
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 2;
L_001CB5C4:
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  goto L_001CB5DC; }
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
L_001CB5DC:
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  goto L_001CB5F0; }
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 2;
L_001CB5F0:
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 68u)));  goto L_001CB604; }
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 2;
L_001CB604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB60Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001CB60Cu) [[unlikely]] return; }
L_001CB60C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001CB664; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB624u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CB624u) [[unlikely]] return; }
L_001CB624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB684; } }
L_001CB62C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01060000u);
    set32(c.r[10], ld32((c.r[16].w[0] + 72u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB650u); c.r[6].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002C(c, 21u, depth + 1u); else { c.pc = 0x001D0320u; return; } if (c.pc != 0x001CB650u) [[unlikely]] return; }
L_001CB650:
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB660u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CB660u) [[unlikely]] return; }
L_001CB660:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CB664:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[11], ld32((c.r[16].w[0] + 76u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CB62Cu | kUnwind; return; } goto L_001CB62C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001CB684; } }
L_001CB67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB684u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CB684u) [[unlikely]] return; }
L_001CB684:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001CB688:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CB6A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CB784; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  goto L_001CB6D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001CB790; } }
L_001CB6D0:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  goto L_001CB6E4; }
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 2;
L_001CB6E4:
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  goto L_001CB6F8; }
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 2;
L_001CB6F8:
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 72u)));  goto L_001CB710; }
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
L_001CB710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB718u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001CB718u) [[unlikely]] return; }
L_001CB718:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001CB76C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB730u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CB730u) [[unlikely]] return; }
L_001CB730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB78C; } }
L_001CB738:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01060000u);
    set32(c.r[9], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB758u); c.r[6].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002C(c, 17u, depth + 1u); else { c.pc = 0x001D0250u; return; } if (c.pc != 0x001CB758u) [[unlikely]] return; }
L_001CB758:
    set32(c.r[6], ld32((c.r[16].w[0] + 72u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB768u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CB768u) [[unlikely]] return; }
L_001CB768:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CB76C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[10], ld32((c.r[16].w[0] + 68u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CB738u | kUnwind; return; } goto L_001CB738; }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001CB78C; } }
L_001CB784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB78Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CB78Cu) [[unlikely]] return; }
L_001CB78C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001CB790:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CB7A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CB93C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  goto L_001CB7D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001CB9FC; } }
L_001CB7D4:
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  goto L_001CB7EC; }
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
L_001CB7EC:
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 68u)));  goto L_001CB800; }
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 2;
L_001CB800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB808u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001CB808u) [[unlikely]] return; }
L_001CB808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CB830; } }
L_001CB810:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CB9F8; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB82Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CB82Cu) [[unlikely]] return; }
L_001CB82C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CB830:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CB810u | kUnwind; return; } goto L_001CB810; }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB848u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_002A(c, 349u, depth + 1u); else { c.pc = 0x001CAE20u; return; } if (c.pc != 0x001CB848u) [[unlikely]] return; }
L_001CB848:
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB854u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001CB854u) [[unlikely]] return; }
L_001CB854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CB924; } }
L_001CB85C:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 68u)));  goto L_001CB914; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[7], ld32((c.r[17].w[0] + 56u)));  goto L_001CB8D4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[7], ld32((c.r[17].w[0] + 56u)));  goto L_001CB8B8; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x01060000u);  goto L_001CB8A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[17].w[0] + 56u)));  if (t) { goto L_001CB8F4; } }
L_001CB8A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB8B0u); c.r[6].d[0] = c.r[2].d[0] | 4101ull;  if (depth < kMaxDepth) unit_002B(c, 435u, depth + 1u); else { c.pc = 0x001CFFF0u; return; } if (c.pc != 0x001CB8B0u) [[unlikely]] return; }
L_001CB8B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB910; } }
L_001CB8B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01060000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB8CCu); c.r[6].d[0] = c.r[2].d[0] | 4101ull;  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001CB8CCu) [[unlikely]] return; }
L_001CB8CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB910; } }
L_001CB8D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01060000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 60u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB8ECu); c.r[6].d[0] = c.r[2].d[0] | 4101ull;  if (depth < kMaxDepth) unit_002C(c, 9u, depth + 1u); else { c.pc = 0x001D00F0u; return; } if (c.pc != 0x001CB8ECu) [[unlikely]] return; }
L_001CB8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB910; } }
L_001CB8F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01060000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 60u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[17].w[0] + 64u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB910u); c.r[6].d[0] = c.r[2].d[0] | 4101ull;  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001D0190u; return; } if (c.pc != 0x001CB910u) [[unlikely]] return; }
L_001CB910:
    set32(c.r[6], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 1;
L_001CB914:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB920u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CB920u) [[unlikely]] return; }
L_001CB920:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CB924:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CB85Cu | kUnwind; return; } goto L_001CB85C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001CB9F8; } }
L_001CB93C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB944u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001CB944u) [[unlikely]] return; }
L_001CB944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CB9B0; } }
L_001CB94C:
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001CB990; }
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB98C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB974u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CB974u) [[unlikely]] return; }
L_001CB974:
    set32(c.r[5], ld32((c.r[16].w[0] + 160u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB984u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 325u, depth + 1u); else { c.pc = 0x001CAB10u; return; } if (c.pc != 0x001CB984u) [[unlikely]] return; }
L_001CB984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001CB9B0; } }
L_001CB98C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001CB990:
    set32(c.r[2], 0u - 16385u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB9ACu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CB9ACu) [[unlikely]] return; }
L_001CB9AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CB9B0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CB94Cu | kUnwind; return; } goto L_001CB94C; }
    set32(c.r[16], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001CB9F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB9CCu);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001CB9CCu) [[unlikely]] return; }
L_001CB9CC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB9D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x001CB9D8u) [[unlikely]] return; }
L_001CB9D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB9EC; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 3;
L_001CB9EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CB9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB9F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CB9F8u) [[unlikely]] return; }
L_001CB9F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001CB9FC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CBA10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001CBA44; }
    set32(c.r[16], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 1;
L_001CBA44:
    c.r[3].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CBA58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[18].w[0] + 64u)));  if (t) { goto L_001CBA68; } }
L_001CBA58:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[19], 0u + 1u);  goto L_001CBA68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001CBA68; } }
L_001CBA68:
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001CBAE4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001CBA88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001CBAF0; } }
L_001CBA88:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBA98u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 333u, depth + 1u); else { c.pc = 0x001CAC20u; return; } if (c.pc != 0x001CBA98u) [[unlikely]] return; }
L_001CBA98:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_001CBAC4; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBAB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 320u, depth + 1u); else { c.pc = 0x001CAA60u; return; } if (c.pc != 0x001CBAB4u) [[unlikely]] return; }
L_001CBAB4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBAC0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001CBAC0u) [[unlikely]] return; }
L_001CBAC0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CBAC4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01060000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBAD4u); c.r[6].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 435u, depth + 1u); else { c.pc = 0x001CFFF0u; return; } if (c.pc != 0x001CBAD4u) [[unlikely]] return; }
L_001CBAD4:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001CBAEC; } }
L_001CBAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBAECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CBAECu) [[unlikely]] return; }
L_001CBAEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001CBAF0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001CBB10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CBB34; } }
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 2;
L_001CBB34:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001CBBB8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 56u)));  goto L_001CBB54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001CBBC4; } }
L_001CBB54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBB5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001CBB5Cu) [[unlikely]] return; }
L_001CBB5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001CBBA0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBB74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CBB74u) [[unlikely]] return; }
L_001CBB74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBBC0; } }
L_001CBB7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBB8Cu); c.r[6].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 435u, depth + 1u); else { c.pc = 0x001CFFF0u; return; } if (c.pc != 0x001CBB8Cu) [[unlikely]] return; }
L_001CBB8C:
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBB9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CBB9Cu) [[unlikely]] return; }
L_001CBB9C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CBBA0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x01060000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CBB7Cu | kUnwind; return; } goto L_001CBB7C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001CBBC0; } }
L_001CBBB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBBC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CBBC0u) [[unlikely]] return; }
L_001CBBC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001CBBC4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001CBBE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBC00u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001CBC00u) [[unlikely]] return; }
L_001CBC00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CBC4C; } }
L_001CBC08:
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001CBC3C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBC24u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CBC24u) [[unlikely]] return; }
L_001CBC24:
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBC34u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 325u, depth + 1u); else { c.pc = 0x001CAB10u; return; } if (c.pc != 0x001CBC34u) [[unlikely]] return; }
L_001CBC34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CBC4C; } }
L_001CBC3C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBC48u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CBC48u) [[unlikely]] return; }
L_001CBC48:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CBC4C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CBC08u | kUnwind; return; } goto L_001CBC08; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBC60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CBC60u) [[unlikely]] return; }
L_001CBC60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CBC80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CBD00; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], 0u - 1u);  goto L_001CBCB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001CBD0C; } }
L_001CBCB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBCB8u);  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001CBCB8u) [[unlikely]] return; }
L_001CBCB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CBCE8; } }
L_001CBCC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01060000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBCD4u); c.r[6].d[0] = c.r[2].d[0] | 4102ull;  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001CBCD4u) [[unlikely]] return; }
L_001CBCD4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBCE4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001CBCE4u) [[unlikely]] return; }
L_001CBCE4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CBCE8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[7], ld32((c.r[16].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CBCC0u | kUnwind; return; } goto L_001CBCC0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001CBD08; } }
L_001CBD00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBD08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CBD08u) [[unlikely]] return; }
L_001CBD08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001CBD0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001CBD20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 270u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBD38u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001C6120u; return; } if (c.pc != 0x001CBD38u) [[unlikely]] return; }
L_001CBD38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBD4Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 482u, depth + 1u); else { c.pc = 0x001CBD90u; return; } if (c.pc != 0x001CBD4Cu) [[unlikely]] return; }
L_001CBD4C:
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46450000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 19533ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBD70u); set32(c.r[5], c.r[5].w[0] + 14160u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001CBD70u) [[unlikely]] return; }
L_001CBD70:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CBD90:
    st32((c.r[4].w[0] + 180u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[4].w[0] + 184u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_001CBDB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CBE00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 13056u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBDDCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 487u, depth + 1u); else { c.pc = 0x001CBE20u; return; } if (c.pc != 0x001CBDDCu) [[unlikely]] return; }
L_001CBDDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBDE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0029(c, 349u, depth + 1u); else { c.pc = 0x001C62B0u; return; } if (c.pc != 0x001CBDE8u) [[unlikely]] return; }
L_001CBDE8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001CBE04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBE00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001CBE00u) [[unlikely]] return; }
L_001CBE00:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CBE04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CBE20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 180u), 0u);  goto L_001CBE5C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 184u), 0u);  goto L_001CBE58; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBE54u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CBE54u) [[unlikely]] return; }
L_001CBE54:
    st32((c.r[16].w[0] + 184u), 0u);
    c.budget -= 1;
L_001CBE58:
    st32((c.r[16].w[0] + 180u), 0u);
    c.budget -= 1;
L_001CBE5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CBE80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001CBEB0; }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 348u));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CBEAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBEACu);  if (depth < kMaxDepth) unit_002B(c, 29u, depth + 1u); else { c.pc = 0x001CC360u; return; } if (c.pc != 0x001CBEACu) [[unlikely]] return; }
L_001CBEAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001CBEB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CBEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBED0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CBED0u) [[unlikely]] return; }
L_001CBED0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CBEE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBEF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 487u, depth + 1u); else { c.pc = 0x001CBE20u; return; } if (c.pc != 0x001CBEF4u) [[unlikely]] return; }
L_001CBEF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBEFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 482u, depth + 1u); else { c.pc = 0x001CBD90u; return; } if (c.pc != 0x001CBEFCu) [[unlikely]] return; }
L_001CBEFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBF08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CBF08u) [[unlikely]] return; }
L_001CBF08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CBF20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CBF40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001CBFF4; } }
L_001CBF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBF48u);  if (depth < kMaxDepth) unit_002A(c, 487u, depth + 1u); else { c.pc = 0x001CBE20u; return; } if (c.pc != 0x001CBF48u) [[unlikely]] return; }
L_001CBF48:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[16].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001CBF74; }
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 1;
L_001CBF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBF7Cu); set32(c.r[5], ld32((c.r[16].w[0] + 192u)));  if (depth < kMaxDepth) unit_00A9(c, 131u, depth + 1u); else { c.pc = 0x003C5540u; return; } if (c.pc != 0x001CBF7Cu) [[unlikely]] return; }
L_001CBF7C:
    st32((c.r[16].w[0] + 196u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 14136u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 14144u);
    st8((c.r[16].w[0] + 188u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[3], c.r[3].w[0] >> 16);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[16].w[0] + 189u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 196u));
    st8((c.r[16].w[0] + 190u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 191u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 188u)));
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 189u)));
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBFF0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001CBFF0u) [[unlikely]] return; }
L_001CBFF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001CBFF4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
}

}
