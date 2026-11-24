#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00C1[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29,
    0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0,
    0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    53, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58,
    0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82,
    0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0,
    97, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 115, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153,
    0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 178, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 0, 190,
    0, 0, 0, 191, 0, 0, 192, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0,
    201, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 0,
    0, 212, 0, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225,
    0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 233, 0, 0,
    234, 0, 0, 0, 235, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 244, 0,
    0, 245, 0, 0, 246, 0, 0, 0, 247, 0, 248, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0,
    0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 0, 269, 0, 270, 0, 271,
    0, 272, 0, 273, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 286, 0, 0, 287, 0,
    0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 298, 0, 0,
    299, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0,
    0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0,
    0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0,
    0, 355, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 370, 0, 371, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0,
    381, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    386, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395,
    0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0,
    0, 0, 406, 0, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0,
    414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0,
    419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 426,
    0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431,
    0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 438, 0, 0,
    0, 0, 0, 0, 439, 0, 0, 440, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0,
    0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0,
    457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0,
    0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 469,
    0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0,
    0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 0, 0, 0,
    481, 0, 0, 482, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0,
    0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 0, 500,
    0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505,
    0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0,
    0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 517,
    0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0,
    530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0,
    535, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    539, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0,
    544, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0,
    0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0,
    0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0,
    564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0,
    567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 572,
    0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0,
    579, 0, 0, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0,
    0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0,
    596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 598, 0, 0, 599, 0,
    600, 0, 601, 0, 0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 0, 0, 0, 0,
    608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 610, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 614,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 617, 0, 0, 0, 0, 0, 0, 0, 618, 0, 619, 0, 0, 0, 0, 0, 0,
    620, 0, 0, 0, 0, 0, 621, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    629, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 636,
    0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0,
    0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0,
    0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 0, 656, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    665, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0,
    0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0,
    0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00C1(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00424000;
    case 2u: goto L_00424004;
    case 3u: goto L_0042400C;
    case 4u: goto L_00424024;
    case 5u: goto L_00424040;
    case 6u: goto L_00424084;
    case 7u: goto L_004240A8;
    case 8u: goto L_004240F8;
    case 9u: goto L_00424140;
    case 10u: goto L_00424154;
    case 11u: goto L_00424180;
    case 12u: goto L_004241F0;
    case 13u: goto L_00424234;
    case 14u: goto L_00424258;
    case 15u: goto L_00424280;
    case 16u: goto L_004242B4;
    case 17u: goto L_004242CC;
    case 18u: goto L_004242F0;
    case 19u: goto L_00424328;
    case 20u: goto L_00424344;
    case 21u: goto L_00424354;
    case 22u: goto L_00424384;
    case 23u: goto L_0042439C;
    case 24u: goto L_004243DC;
    case 25u: goto L_00424414;
    case 26u: goto L_00424434;
    case 27u: goto L_00424448;
    case 28u: goto L_00424460;
    case 29u: goto L_0042447C;
    case 30u: goto L_00424490;
    case 31u: goto L_0042449C;
    case 32u: goto L_004244AC;
    case 33u: goto L_004244D0;
    case 34u: goto L_004244E0;
    case 35u: goto L_004244F0;
    case 36u: goto L_00424504;
    case 37u: goto L_0042452C;
    case 38u: goto L_00424554;
    case 39u: goto L_004245A0;
    case 40u: goto L_004245B4;
    case 41u: goto L_00424610;
    case 42u: goto L_00424628;
    case 43u: goto L_0042463C;
    case 44u: goto L_00424650;
    case 45u: goto L_00424670;
    case 46u: goto L_00424680;
    case 47u: goto L_004246C0;
    case 48u: goto L_004246C8;
    case 49u: goto L_004246D8;
    case 50u: goto L_004246F0;
    case 51u: goto L_00424730;
    case 52u: goto L_00424770;
    case 53u: goto L_00424780;
    case 54u: goto L_0042478C;
    case 55u: goto L_004247A0;
    case 56u: goto L_004247C0;
    case 57u: goto L_004247E0;
    case 58u: goto L_004247FC;
    case 59u: goto L_00424804;
    case 60u: goto L_00424814;
    case 61u: goto L_00424830;
    case 62u: goto L_00424854;
    case 63u: goto L_0042485C;
    case 64u: goto L_0042486C;
    case 65u: goto L_004248A0;
    case 66u: goto L_004248C0;
    case 67u: goto L_004248C8;
    case 68u: goto L_004248D8;
    case 69u: goto L_004248F0;
    case 70u: goto L_00424900;
    case 71u: goto L_00424910;
    case 72u: goto L_00424930;
    case 73u: goto L_00424938;
    case 74u: goto L_00424948;
    case 75u: goto L_00424960;
    case 76u: goto L_00424970;
    case 77u: goto L_00424980;
    case 78u: goto L_0042499C;
    case 79u: goto L_004249A4;
    case 80u: goto L_004249B4;
    case 81u: goto L_004249D0;
    case 82u: goto L_004249FC;
    case 83u: goto L_00424A04;
    case 84u: goto L_00424A14;
    case 85u: goto L_00424A30;
    case 86u: goto L_00424A38;
    case 87u: goto L_00424A4C;
    case 88u: goto L_00424A84;
    case 89u: goto L_00424A8C;
    case 90u: goto L_00424AA0;
    case 91u: goto L_00424AE0;
    case 92u: goto L_00424AF0;
    case 93u: goto L_00424B20;
    case 94u: goto L_00424B60;
    case 95u: goto L_00424B68;
    case 96u: goto L_00424B78;
    case 97u: goto L_00424B80;
    case 98u: goto L_00424B88;
    case 99u: goto L_00424B94;
    case 100u: goto L_00424BA4;
    case 101u: goto L_00424BC0;
    case 102u: goto L_00424BD0;
    case 103u: goto L_00424CA0;
    case 104u: goto L_00424CBC;
    case 105u: goto L_00424CC4;
    case 106u: goto L_00424CD4;
    case 107u: goto L_00424CF0;
    case 108u: goto L_00424D14;
    case 109u: goto L_00424D1C;
    case 110u: goto L_00424D2C;
    case 111u: goto L_00424D44;
    case 112u: goto L_00424D54;
    case 113u: goto L_00424D60;
    case 114u: goto L_00424D70;
    case 115u: goto L_00424D78;
    case 116u: goto L_00424D88;
    case 117u: goto L_00424DA0;
    case 118u: goto L_00424DB0;
    case 119u: goto L_00424DBC;
    case 120u: goto L_00424DD0;
    case 121u: goto L_00424DEC;
    case 122u: goto L_00424DF4;
    case 123u: goto L_00424E04;
    case 124u: goto L_00424E20;
    case 125u: goto L_00424E30;
    case 126u: goto L_00424E50;
    case 127u: goto L_00424E60;
    case 128u: goto L_00424E74;
    case 129u: goto L_00424ED0;
    case 130u: goto L_00424EE0;
    case 131u: goto L_00424F10;
    case 132u: goto L_00424F20;
    case 133u: goto L_00424F50;
    case 134u: goto L_00424F60;
    case 135u: goto L_00424F80;
    case 136u: goto L_00424F9C;
    case 137u: goto L_00424FA4;
    case 138u: goto L_00424FB4;
    case 139u: goto L_00424FD0;
    case 140u: goto L_00424FEC;
    case 141u: goto L_00424FF4;
    case 142u: goto L_00425004;
    case 143u: goto L_00425020;
    case 144u: goto L_0042503C;
    case 145u: goto L_00425044;
    case 146u: goto L_00425054;
    case 147u: goto L_00425070;
    case 148u: goto L_00425090;
    case 149u: goto L_00425098;
    case 150u: goto L_004250A8;
    case 151u: goto L_004250B8;
    case 152u: goto L_004250E0;
    case 153u: goto L_004250FC;
    case 154u: goto L_0042510C;
    case 155u: goto L_00425128;
    case 156u: goto L_0042514C;
    case 157u: goto L_00425170;
    case 158u: goto L_00425184;
    case 159u: goto L_00425198;
    case 160u: goto L_004251AC;
    case 161u: goto L_004251F0;
    case 162u: goto L_00425204;
    case 163u: goto L_00425214;
    case 164u: goto L_00425220;
    case 165u: goto L_00425230;
    case 166u: goto L_00425250;
    case 167u: goto L_00425258;
    case 168u: goto L_00425268;
    case 169u: goto L_00425280;
    case 170u: goto L_00425298;
    case 171u: goto L_004252AC;
    case 172u: goto L_004252B8;
    case 173u: goto L_004252D0;
    case 174u: goto L_004252E0;
    case 175u: goto L_004252EC;
    case 176u: goto L_00425310;
    case 177u: goto L_00425324;
    case 178u: goto L_0042532C;
    case 179u: goto L_00425338;
    case 180u: goto L_0042534C;
    case 181u: goto L_0042535C;
    case 182u: goto L_00425368;
    case 183u: goto L_00425390;
    case 184u: goto L_004253A4;
    case 185u: goto L_004253C0;
    case 186u: goto L_004253CC;
    case 187u: goto L_004253DC;
    case 188u: goto L_004253E8;
    case 189u: goto L_004253F0;
    case 190u: goto L_004253FC;
    case 191u: goto L_0042540C;
    case 192u: goto L_00425418;
    case 193u: goto L_00425420;
    case 194u: goto L_0042542C;
    case 195u: goto L_0042543C;
    case 196u: goto L_00425448;
    case 197u: goto L_00425450;
    case 198u: goto L_0042545C;
    case 199u: goto L_0042546C;
    case 200u: goto L_00425478;
    case 201u: goto L_00425480;
    case 202u: goto L_0042548C;
    case 203u: goto L_0042549C;
    case 204u: goto L_004254A8;
    case 205u: goto L_004254B0;
    case 206u: goto L_004254BC;
    case 207u: goto L_004254CC;
    case 208u: goto L_004254D8;
    case 209u: goto L_004254E0;
    case 210u: goto L_004254EC;
    case 211u: goto L_004254F4;
    case 212u: goto L_00425504;
    case 213u: goto L_00425510;
    case 214u: goto L_00425520;
    case 215u: goto L_0042552C;
    case 216u: goto L_00425548;
    case 217u: goto L_00425558;
    case 218u: goto L_00425564;
    case 219u: goto L_00425580;
    case 220u: goto L_0042559C;
    case 221u: goto L_004255A4;
    case 222u: goto L_004255B4;
    case 223u: goto L_004255D0;
    case 224u: goto L_004255F0;
    case 225u: goto L_004255FC;
    case 226u: goto L_0042561C;
    case 227u: goto L_00425628;
    case 228u: goto L_00425630;
    case 229u: goto L_00425644;
    case 230u: goto L_00425650;
    case 231u: goto L_00425660;
    case 232u: goto L_00425668;
    case 233u: goto L_00425674;
    case 234u: goto L_00425680;
    case 235u: goto L_00425690;
    case 236u: goto L_00425698;
    case 237u: goto L_004256A4;
    case 238u: goto L_004256B0;
    case 239u: goto L_004256C0;
    case 240u: goto L_004256C8;
    case 241u: goto L_004256D4;
    case 242u: goto L_004256E0;
    case 243u: goto L_004256F0;
    case 244u: goto L_004256F8;
    case 245u: goto L_00425704;
    case 246u: goto L_00425710;
    case 247u: goto L_00425720;
    case 248u: goto L_00425728;
    case 249u: goto L_00425734;
    case 250u: goto L_00425740;
    case 251u: goto L_00425748;
    case 252u: goto L_00425754;
    case 253u: goto L_0042575C;
    case 254u: goto L_0042576C;
    case 255u: goto L_00425778;
    case 256u: goto L_00425788;
    case 257u: goto L_00425794;
    case 258u: goto L_004257B0;
    case 259u: goto L_004257C0;
    case 260u: goto L_004257CC;
    case 261u: goto L_004257E0;
    case 262u: goto L_00425830;
    case 263u: goto L_00425838;
    case 264u: goto L_00425840;
    case 265u: goto L_00425848;
    case 266u: goto L_00425850;
    case 267u: goto L_00425858;
    case 268u: goto L_00425860;
    case 269u: goto L_0042586C;
    case 270u: goto L_00425874;
    case 271u: goto L_0042587C;
    case 272u: goto L_00425884;
    case 273u: goto L_0042588C;
    case 274u: goto L_00425894;
    case 275u: goto L_0042589C;
    case 276u: goto L_004258D0;
    case 277u: goto L_004258DC;
    case 278u: goto L_00425910;
    case 279u: goto L_0042591C;
    case 280u: goto L_00425950;
    case 281u: goto L_00425964;
    case 282u: goto L_0042598C;
    case 283u: goto L_004259C8;
    case 284u: goto L_004259D8;
    case 285u: goto L_004259E4;
    case 286u: goto L_004259EC;
    case 287u: goto L_004259F8;
    case 288u: goto L_00425A08;
    case 289u: goto L_00425A14;
    case 290u: goto L_00425A40;
    case 291u: goto L_00425A50;
    case 292u: goto L_00425A5C;
    case 293u: goto L_00425A70;
    case 294u: goto L_00425A90;
    case 295u: goto L_00425AC0;
    case 296u: goto L_00425AD8;
    case 297u: goto L_00425AE4;
    case 298u: goto L_00425AF4;
    case 299u: goto L_00425B00;
    case 300u: goto L_00425B08;
    case 301u: goto L_00425B20;
    case 302u: goto L_00425B3C;
    case 303u: goto L_00425B44;
    case 304u: goto L_00425B54;
    case 305u: goto L_00425B64;
    case 306u: goto L_00425B80;
    case 307u: goto L_00425B94;
    case 308u: goto L_00425BA4;
    case 309u: goto L_00425BB0;
    case 310u: goto L_00425BB8;
    case 311u: goto L_00425BD0;
    case 312u: goto L_00425BEC;
    case 313u: goto L_00425BF4;
    case 314u: goto L_00425C04;
    case 315u: goto L_00425C20;
    case 316u: goto L_00425C38;
    case 317u: goto L_00425C44;
    case 318u: goto L_00425C54;
    case 319u: goto L_00425C60;
    case 320u: goto L_00425C68;
    case 321u: goto L_00425C80;
    case 322u: goto L_00425C9C;
    case 323u: goto L_00425CA4;
    case 324u: goto L_00425CB4;
    case 325u: goto L_00425CC4;
    case 326u: goto L_00425CE0;
    case 327u: goto L_00425CFC;
    case 328u: goto L_00425D0C;
    case 329u: goto L_00425D18;
    case 330u: goto L_00425D24;
    case 331u: goto L_00425D40;
    case 332u: goto L_00425D5C;
    case 333u: goto L_00425D64;
    case 334u: goto L_00425D74;
    case 335u: goto L_00425D90;
    case 336u: goto L_00425DA4;
    case 337u: goto L_00425DB4;
    case 338u: goto L_00425DC0;
    case 339u: goto L_00425DD0;
    case 340u: goto L_00425DEC;
    case 341u: goto L_00425DF4;
    case 342u: goto L_00425E04;
    case 343u: goto L_00425E20;
    case 344u: goto L_00425E3C;
    case 345u: goto L_00425E4C;
    case 346u: goto L_00425E58;
    case 347u: goto L_00425E64;
    case 348u: goto L_00425E80;
    case 349u: goto L_00425E9C;
    case 350u: goto L_00425EA4;
    case 351u: goto L_00425EB4;
    case 352u: goto L_00425ED0;
    case 353u: goto L_00425EE8;
    case 354u: goto L_00425EF4;
    case 355u: goto L_00425F04;
    case 356u: goto L_00425F10;
    case 357u: goto L_00425F20;
    case 358u: goto L_00425F3C;
    case 359u: goto L_00425F44;
    case 360u: goto L_00425F54;
    case 361u: goto L_00425F64;
    case 362u: goto L_00425F80;
    case 363u: goto L_00425F90;
    case 364u: goto L_00425F98;
    case 365u: goto L_00425FB0;
    case 366u: goto L_00425FD4;
    case 367u: goto L_00425FDC;
    case 368u: goto L_00425FEC;
    case 369u: goto L_00426014;
    case 370u: goto L_0042601C;
    case 371u: goto L_00426024;
    case 372u: goto L_0042602C;
    case 373u: goto L_00426038;
    case 374u: goto L_00426044;
    case 375u: goto L_00426050;
    case 376u: goto L_0042605C;
    case 377u: goto L_00426068;
    case 378u: goto L_00426090;
    case 379u: goto L_004260A8;
    case 380u: goto L_004260E8;
    case 381u: goto L_00426100;
    case 382u: goto L_00426114;
    case 383u: goto L_0042611C;
    case 384u: goto L_00426130;
    case 385u: goto L_00426170;
    case 386u: goto L_00426180;
    case 387u: goto L_00426194;
    case 388u: goto L_004261A4;
    case 389u: goto L_004261B0;
    case 390u: goto L_004261C0;
    case 391u: goto L_004261D4;
    case 392u: goto L_004261F0;
    case 393u: goto L_00426220;
    case 394u: goto L_00426264;
    case 395u: goto L_0042627C;
    case 396u: goto L_004262A0;
    case 397u: goto L_004262B0;
    case 398u: goto L_004262C0;
    case 399u: goto L_004262E0;
    case 400u: goto L_004262F8;
    case 401u: goto L_0042632C;
    case 402u: goto L_00426338;
    case 403u: goto L_00426350;
    case 404u: goto L_00426360;
    case 405u: goto L_00426378;
    case 406u: goto L_00426388;
    case 407u: goto L_00426398;
    case 408u: goto L_004263A4;
    case 409u: goto L_004263B0;
    case 410u: goto L_004263BC;
    case 411u: goto L_004263C4;
    case 412u: goto L_004263D0;
    case 413u: goto L_004263F0;
    case 414u: goto L_00426400;
    case 415u: goto L_00426410;
    case 416u: goto L_00426428;
    case 417u: goto L_0042645C;
    case 418u: goto L_00426468;
    case 419u: goto L_00426480;
    case 420u: goto L_00426490;
    case 421u: goto L_004264A8;
    case 422u: goto L_004264B8;
    case 423u: goto L_004264C8;
    case 424u: goto L_004264D4;
    case 425u: goto L_004264F0;
    case 426u: goto L_004264FC;
    case 427u: goto L_00426504;
    case 428u: goto L_00426510;
    case 429u: goto L_00426530;
    case 430u: goto L_00426548;
    case 431u: goto L_0042657C;
    case 432u: goto L_00426588;
    case 433u: goto L_004265A0;
    case 434u: goto L_004265B0;
    case 435u: goto L_004265C8;
    case 436u: goto L_004265D8;
    case 437u: goto L_004265E8;
    case 438u: goto L_004265F4;
    case 439u: goto L_00426610;
    case 440u: goto L_0042661C;
    case 441u: goto L_00426624;
    case 442u: goto L_00426630;
    case 443u: goto L_00426650;
    case 444u: goto L_00426668;
    case 445u: goto L_0042669C;
    case 446u: goto L_004266A8;
    case 447u: goto L_004266C0;
    case 448u: goto L_004266E0;
    case 449u: goto L_004266F8;
    case 450u: goto L_00426708;
    case 451u: goto L_00426718;
    case 452u: goto L_00426724;
    case 453u: goto L_00426740;
    case 454u: goto L_0042674C;
    case 455u: goto L_00426754;
    case 456u: goto L_00426760;
    case 457u: goto L_00426780;
    case 458u: goto L_00426798;
    case 459u: goto L_004267CC;
    case 460u: goto L_004267D8;
    case 461u: goto L_004267F0;
    case 462u: goto L_00426808;
    case 463u: goto L_00426820;
    case 464u: goto L_00426830;
    case 465u: goto L_00426840;
    case 466u: goto L_0042684C;
    case 467u: goto L_00426868;
    case 468u: goto L_00426874;
    case 469u: goto L_0042687C;
    case 470u: goto L_00426888;
    case 471u: goto L_004268A0;
    case 472u: goto L_004268B8;
    case 473u: goto L_004268EC;
    case 474u: goto L_004268F8;
    case 475u: goto L_00426910;
    case 476u: goto L_00426920;
    case 477u: goto L_00426938;
    case 478u: goto L_00426948;
    case 479u: goto L_00426958;
    case 480u: goto L_00426964;
    case 481u: goto L_00426980;
    case 482u: goto L_0042698C;
    case 483u: goto L_00426994;
    case 484u: goto L_004269A0;
    case 485u: goto L_004269C0;
    case 486u: goto L_004269D8;
    case 487u: goto L_00426A18;
    case 488u: goto L_00426A24;
    case 489u: goto L_00426A3C;
    case 490u: goto L_00426A4C;
    case 491u: goto L_00426A64;
    case 492u: goto L_00426A74;
    case 493u: goto L_00426A84;
    case 494u: goto L_00426A90;
    case 495u: goto L_00426AA8;
    case 496u: goto L_00426AB8;
    case 497u: goto L_00426AC8;
    case 498u: goto L_00426AD4;
    case 499u: goto L_00426AF0;
    case 500u: goto L_00426AFC;
    case 501u: goto L_00426B04;
    case 502u: goto L_00426B10;
    case 503u: goto L_00426B30;
    case 504u: goto L_00426B48;
    case 505u: goto L_00426B7C;
    case 506u: goto L_00426B88;
    case 507u: goto L_00426BA0;
    case 508u: goto L_00426BE0;
    case 509u: goto L_00426BF4;
    case 510u: goto L_00426C08;
    case 511u: goto L_00426C20;
    case 512u: goto L_00426C30;
    case 513u: goto L_00426C40;
    case 514u: goto L_00426C4C;
    case 515u: goto L_00426C68;
    case 516u: goto L_00426C74;
    case 517u: goto L_00426C7C;
    case 518u: goto L_00426C84;
    case 519u: goto L_00426C98;
    case 520u: goto L_00426CAC;
    case 521u: goto L_00426CC0;
    case 522u: goto L_00426CD8;
    case 523u: goto L_00426CF0;
    case 524u: goto L_00426D1C;
    case 525u: goto L_00426D2C;
    case 526u: goto L_00426D38;
    case 527u: goto L_00426D54;
    case 528u: goto L_00426D64;
    case 529u: goto L_00426D78;
    case 530u: goto L_00426D80;
    case 531u: goto L_00426D94;
    case 532u: goto L_00426DB0;
    case 533u: goto L_00426DC0;
    case 534u: goto L_00426DF0;
    case 535u: goto L_00426E00;
    case 536u: goto L_00426E10;
    case 537u: goto L_00426E20;
    case 538u: goto L_00426E34;
    case 539u: goto L_00426E80;
    case 540u: goto L_00426EA0;
    case 541u: goto L_00426EB0;
    case 542u: goto L_00426EC0;
    case 543u: goto L_00426EE0;
    case 544u: goto L_00426F00;
    case 545u: goto L_00426F10;
    case 546u: goto L_00426F28;
    case 547u: goto L_00426F40;
    case 548u: goto L_00426F50;
    case 549u: goto L_00426F60;
    case 550u: goto L_00426F78;
    case 551u: goto L_00426F90;
    case 552u: goto L_00426FA0;
    case 553u: goto L_00426FC0;
    case 554u: goto L_00426FD0;
    case 555u: goto L_00427010;
    case 556u: goto L_00427020;
    case 557u: goto L_00427050;
    case 558u: goto L_00427060;
    case 559u: goto L_00427078;
    case 560u: goto L_00427090;
    case 561u: goto L_004270A0;
    case 562u: goto L_004270B0;
    case 563u: goto L_004270F0;
    case 564u: goto L_00427100;
    case 565u: goto L_00427118;
    case 566u: goto L_00427170;
    case 567u: goto L_00427180;
    case 568u: goto L_004271B0;
    case 569u: goto L_004271C0;
    case 570u: goto L_004271D0;
    case 571u: goto L_004271E0;
    case 572u: goto L_004271FC;
    case 573u: goto L_00427210;
    case 574u: goto L_00427220;
    case 575u: goto L_00427230;
    case 576u: goto L_00427240;
    case 577u: goto L_0042725C;
    case 578u: goto L_00427270;
    case 579u: goto L_00427280;
    case 580u: goto L_00427290;
    case 581u: goto L_004272A8;
    case 582u: goto L_004272C0;
    case 583u: goto L_004272D8;
    case 584u: goto L_00427300;
    case 585u: goto L_00427330;
    case 586u: goto L_00427344;
    case 587u: goto L_00427390;
    case 588u: goto L_004273BC;
    case 589u: goto L_004273C4;
    case 590u: goto L_004273E4;
    case 591u: goto L_00427404;
    case 592u: goto L_00427420;
    case 593u: goto L_0042744C;
    case 594u: goto L_00427454;
    case 595u: goto L_0042746C;
    case 596u: goto L_00427480;
    case 597u: goto L_004274E4;
    case 598u: goto L_004274EC;
    case 599u: goto L_004274F8;
    case 600u: goto L_00427500;
    case 601u: goto L_00427508;
    case 602u: goto L_00427514;
    case 603u: goto L_00427530;
    case 604u: goto L_00427570;
    case 605u: goto L_004275C0;
    case 606u: goto L_004275DC;
    case 607u: goto L_004275E4;
    case 608u: goto L_00427600;
    case 609u: goto L_00427640;
    case 610u: goto L_00427648;
    case 611u: goto L_00427650;
    case 612u: goto L_00427658;
    case 613u: goto L_00427674;
    case 614u: goto L_0042767C;
    case 615u: goto L_004276A4;
    case 616u: goto L_004276B4;
    case 617u: goto L_004276BC;
    case 618u: goto L_004276DC;
    case 619u: goto L_004276E4;
    case 620u: goto L_00427700;
    case 621u: goto L_00427718;
    case 622u: goto L_00427720;
    case 623u: goto L_00427744;
    case 624u: goto L_00427760;
    case 625u: goto L_0042779C;
    case 626u: goto L_004277B8;
    case 627u: goto L_004277CC;
    case 628u: goto L_004277D4;
    case 629u: goto L_00427800;
    case 630u: goto L_00427810;
    case 631u: goto L_00427818;
    case 632u: goto L_00427838;
    case 633u: goto L_00427840;
    case 634u: goto L_0042785C;
    case 635u: goto L_00427874;
    case 636u: goto L_0042787C;
    case 637u: goto L_004278A0;
    case 638u: goto L_004278A8;
    case 639u: goto L_004278C0;
    case 640u: goto L_004278E0;
    case 641u: goto L_004278F0;
    case 642u: goto L_00427910;
    case 643u: goto L_00427944;
    case 644u: goto L_00427960;
    case 645u: goto L_00427970;
    case 646u: goto L_00427984;
    case 647u: goto L_00427994;
    case 648u: goto L_004279A8;
    case 649u: goto L_004279B0;
    case 650u: goto L_004279D4;
    case 651u: goto L_004279E8;
    case 652u: goto L_00427A2C;
    case 653u: goto L_00427A40;
    case 654u: goto L_00427A50;
    case 655u: goto L_00427A60;
    case 656u: goto L_00427A74;
    case 657u: goto L_00427AA0;
    case 658u: goto L_00427AB4;
    case 659u: goto L_00427AC4;
    case 660u: goto L_00427ACC;
    case 661u: goto L_00427B2C;
    case 662u: goto L_00427B34;
    case 663u: goto L_00427B44;
    case 664u: goto L_00427B4C;
    case 665u: goto L_00427B80;
    case 666u: goto L_00427BA0;
    case 667u: goto L_00427BB0;
    case 668u: goto L_00427BC8;
    case 669u: goto L_00427BDC;
    case 670u: goto L_00427BF0;
    case 671u: goto L_00427C04;
    case 672u: goto L_00427C20;
    case 673u: goto L_00427C40;
    case 674u: goto L_00427C70;
    case 675u: goto L_00427C88;
    default: bad_entry(c, 0x00424000u); return;
    }
L_00424000:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00424004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042400Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0042400Cu) [[unlikely]] return; }
L_0042400C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00424028; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424024u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00424024u) [[unlikely]] return; }
L_00424024:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00424028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00424040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00424128; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 56u)));  goto L_004240C0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 88u);  goto L_0042407C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00424124; } }
L_0042407C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424084u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00424084u) [[unlikely]] return; }
L_00424084:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), c.r[4].w[0]);  goto L_004240B0; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 28864u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004240A8u); set32(c.r[7], c.r[7].w[0] - 28880u);  if (depth < kMaxDepth) unit_00A7(c, 94u, depth + 1u); else { c.pc = 0x003BCD70u; return; } if (c.pc != 0x004240A8u) [[unlikely]] return; }
L_004240A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 2;
L_004240B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00424124; } }
L_004240C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00424124; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 84u)));
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_00424100; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004240F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004240F8u) [[unlikely]] return; }
L_004240F8:
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_00424100:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 9;
L_00424124:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00424128:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00424140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424154u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 433u, depth + 1u); else { c.pc = 0x00423030u; return; } if (c.pc != 0x00424154u) [[unlikely]] return; }
L_00424154:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49470000u);
    set32(c.r[3], c.r[3].w[0] + 16304u);
    c.r[2].d[0] = c.r[2].d[0] | 17221ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424180u); st32((c.r[16].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0024(c, 344u, depth + 1u); else { c.pc = 0x001B2780u; return; } if (c.pc != 0x00424180u) [[unlikely]] return; }
L_00424180:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[28].w[0] - 30112u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    st32((c.r[16].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    c.f[2] = ld32((c.r[5].w[0] + 18568u));
    c.f[1] = ld32((c.r[4].w[0] + 18572u));
    c.f[0] = ld32((c.r[3].w[0] + 18576u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004241F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004242CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 16304u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  goto L_0042423C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00424234u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00424234u) [[unlikely]] return; }
L_00424234:
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 2;
L_0042423C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_00424260; }
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0042425C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424258u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x00424258u) [[unlikely]] return; }
L_00424258:
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 1;
L_0042425C:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_00424260:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30112u)));  goto L_00424288; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 92u), 0u);  goto L_00424284; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00424280u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00424280u) [[unlikely]] return; }
L_00424280:
    st32((c.r[16].w[0] + 92u), 0u);
    c.budget -= 1;
L_00424284:
    set32(c.r[2], ld32((c.r[28].w[0] - 30112u)));
    c.budget -= 1;
L_00424288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00424294; } }
    st32((c.r[28].w[0] - 30112u), 0u);
    c.budget -= 1;
L_00424294:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_004242B8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004242B4u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x004242B4u) [[unlikely]] return; }
L_004242B4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_004242B8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004242D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004242CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x004242CCu) [[unlikely]] return; }
L_004242CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004242D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004242F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 76u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004245F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 28816u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00424000u < 16384u) { entry = entries_00C1[(t - 0x00424000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00424328:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 360u);  goto L_0042434C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00424344u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00424344u) [[unlikely]] return; }
L_00424344:
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[4], 0u + 360u);
    c.budget -= 2;
L_0042434C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424354u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00424354u) [[unlikely]] return; }
L_00424354:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), c.r[4].w[0]);  goto L_0042438C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 28848u);
    set32(c.r[7], c.r[7].w[0] - 28832u);
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424384u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x00424384u) [[unlikely]] return; }
L_00424384:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 80u), c.r[4].w[0]);
    c.budget -= 2;
L_0042438C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004245F8; } }
L_0042439C:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004245FC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] + 1u);  goto L_0042440C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004243E0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004243DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004243DCu) [[unlikely]] return; }
L_004243DC:
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 1;
L_004243E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18584u));
    c.f[1] = ld32((c.r[4].w[0] + 18588u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18592u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_004245F8; } }
L_0042440C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004245F8; } }
L_00424414:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 80u)));  goto L_0042443C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00424438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424434u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x00424434u) [[unlikely]] return; }
L_00424434:
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 1;
L_00424438:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_0042443C:
    set32(c.r[5], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424448u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_00C0(c, 476u, depth + 1u); else { c.pc = 0x00423980u; return; } if (c.pc != 0x00424448u) [[unlikely]] return; }
L_00424448:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424460u); set32(c.r[5], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00424460u) [[unlikely]] return; }
L_00424460:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00424484; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042447Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042447Cu) [[unlikely]] return; }
L_0042447C:
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_00424484:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004245F8; } }
L_00424490:
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042449Cu); set32(c.r[4], 0u + 127u);  if (depth < kMaxDepth) unit_0025(c, 477u, depth + 1u); else { c.pc = 0x001B7840u; return; } if (c.pc != 0x0042449Cu) [[unlikely]] return; }
L_0042449C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004245F8; } }
L_004244AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 3200u);  goto L_004244D8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 92u), 0u);  goto L_004244D4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004244D0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004244D0u) [[unlikely]] return; }
L_004244D0:
    st32((c.r[16].w[0] + 92u), 0u);
    c.budget -= 1;
L_004244D4:
    set32(c.r[4], 0u + 3200u);
    c.budget -= 1;
L_004244D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004244E0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x004244E0u) [[unlikely]] return; }
L_004244E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  goto L_004244F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004244F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 169u, depth + 1u); else { c.pc = 0x00291720u; return; } if (c.pc != 0x004244F0u) [[unlikely]] return; }
L_004244F0:
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 1;
L_004244F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424504u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 176u, depth + 1u); else { c.pc = 0x00291810u; return; } if (c.pc != 0x00424504u) [[unlikely]] return; }
L_00424504:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  goto L_00424584; }
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_00424534; }
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00424530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042452Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x0042452Cu) [[unlikely]] return; }
L_0042452C:
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 1;
L_00424530:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_00424534:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00424558; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 92u), 0u);  goto L_00424558; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00424554u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00424554u) [[unlikely]] return; }
L_00424554:
    st32((c.r[16].w[0] + 92u), 0u);
    c.budget -= 1;
L_00424558:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 18600u));
    c.f[1] = ld32((c.r[4].w[0] + 18604u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 18608u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_004245F8; } }
L_00424584:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_004245A8; }
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004245A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004245A0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x004245A0u) [[unlikely]] return; }
L_004245A0:
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 1;
L_004245A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_004245A8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004245F8; } }
L_004245B4:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], c.r[4].w[0] + 1056u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[6].d[0] = c.r[6].d[0] << 33;
    c.r[6].d[0] = c.r[6].d[0] >> 33;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 17;
L_004245F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004245FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00424610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424628u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00424628u) [[unlikely]] return; }
L_00424628:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00424640; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042463Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 9u, depth + 1u); else { c.pc = 0x00424140u; return; } if (c.pc != 0x0042463Cu) [[unlikely]] return; }
L_0042463C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00424640:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00424650:
    set32(c.r[3], ld32((c.r[28].w[0] - 30112u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];  c.pc = t; return; }
L_00424670:
    set32(c.r[2], ld32((c.r[28].w[0] - 30112u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 92u)));  c.pc = t; return; }
L_00424680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004246B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[6], 0u + 34u);  goto L_004246B4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], 0u + 32u);  goto L_004246B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_004246B8; } }
L_004246B0:
    set32(c.r[6], 0u + 33u);
    c.budget -= 1;
L_004246B4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_004246B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004246C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x004246C0u) [[unlikely]] return; }
L_004246C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004246C8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x004246C8u) [[unlikely]] return; }
L_004246C8:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004246D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x004246D8u) [[unlikely]] return; }
L_004246D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004246F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00424704; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0])));  if (t) { goto L_00424720; } }
L_00424704:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00424720; }
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00424720; } }
L_00424720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00424730:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00424760; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 34u);  goto L_00424764; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], 0u + 32u);  goto L_00424764; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00424768; } }
L_00424760:
    set32(c.r[16], 0u + 33u);
    c.budget -= 1;
L_00424764:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_00424768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424770u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x00424770u) [[unlikely]] return; }
L_00424770:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424780u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00424780u) [[unlikely]] return; }
L_00424780:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042478Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x0042478Cu) [[unlikely]] return; }
L_0042478C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004247A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004247C0u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_002D(c, 6u, depth + 1u); else { c.pc = 0x001D40D0u; return; } if (c.pc != 0x004247C0u) [[unlikely]] return; }
L_004247C0:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004247E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004247FCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x004247FCu) [[unlikely]] return; }
L_004247FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424804u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00424804u) [[unlikely]] return; }
L_00424804:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424814u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00424814u) [[unlikely]] return; }
L_00424814:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00424830:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], 0u + 17u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424854u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00424854u) [[unlikely]] return; }
L_00424854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042485Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x0042485Cu) [[unlikely]] return; }
L_0042485C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042486Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x0042486Cu) [[unlikely]] return; }
L_0042486C:
    set32(c.r[3], c.r[17].w[0] - 2u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004248A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[4].w[0] << 4);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[2].w[0] + 2u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004248C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x004248C0u) [[unlikely]] return; }
L_004248C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004248C8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x004248C8u) [[unlikely]] return; }
L_004248C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004248D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x004248D8u) [[unlikely]] return; }
L_004248D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004248F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424900u);  if (depth < kMaxDepth) unit_00C1(c, 65u, depth + 1u); else { c.pc = 0x004248A0u; return; } if (c.pc != 0x00424900u) [[unlikely]] return; }
L_00424900:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00424910:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[4].w[0] << 4);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[2].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424930u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00424930u) [[unlikely]] return; }
L_00424930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424938u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00424938u) [[unlikely]] return; }
L_00424938:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424948u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00424948u) [[unlikely]] return; }
L_00424948:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00424960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424970u);  if (depth < kMaxDepth) unit_00C1(c, 71u, depth + 1u); else { c.pc = 0x00424910u; return; } if (c.pc != 0x00424970u) [[unlikely]] return; }
L_00424970:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00424980:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], c.r[4].w[0] << 4);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042499Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0042499Cu) [[unlikely]] return; }
L_0042499C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004249A4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x004249A4u) [[unlikely]] return; }
L_004249A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004249B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x004249B4u) [[unlikely]] return; }
L_004249B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004249D0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004249FCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x004249FCu) [[unlikely]] return; }
L_004249FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424A04u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00424A04u) [[unlikely]] return; }
L_00424A04:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424A14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00424A14u) [[unlikely]] return; }
L_00424A14:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 6u);  goto L_00424A6C; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424A30u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00424A30u) [[unlikely]] return; }
L_00424A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424A38u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00424A38u) [[unlikely]] return; }
L_00424A38:
    c.r[16].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424A4Cu); c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00424A4Cu) [[unlikely]] return; }
L_00424A4C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00424A68; } }
    c.r[1].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], 0u + 9u);  goto L_00424A68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00424A68; } }
L_00424A68:
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_00424A6C:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00424AC0; }
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424A84u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00424A84u) [[unlikely]] return; }
L_00424A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424A8Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00424A8Cu) [[unlikely]] return; }
L_00424A8C:
    c.r[16].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424AA0u); c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00424AA0u) [[unlikely]] return; }
L_00424AA0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00424ABC; } }
    c.r[1].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], 0u + 9u);  goto L_00424ABC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00424ABC; } }
L_00424ABC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00424AC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00424AE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424AF0u);  if (depth < kMaxDepth) unit_00C1(c, 81u, depth + 1u); else { c.pc = 0x004249D0u; return; } if (c.pc != 0x00424AF0u) [[unlikely]] return; }
L_00424AF0:
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;  goto L_00424B04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00424B14; } }
L_00424B04:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_00424B14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00424B14; } }
L_00424B14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00424B20:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424B60u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00424B60u) [[unlikely]] return; }
L_00424B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424B68u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00424B68u) [[unlikely]] return; }
L_00424B68:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424B78u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00424B78u) [[unlikely]] return; }
L_00424B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], 0u + 1u);  if (t) { goto L_00424C64; } }
L_00424B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00424C54; } }
L_00424B88:
    set32(c.r[17], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424B94u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00C1(c, 69u, depth + 1u); else { c.pc = 0x004248F0u; return; } if (c.pc != 0x00424B94u) [[unlikely]] return; }
L_00424B94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF00000u);  goto L_00424BAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424BA4u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00C1(c, 77u, depth + 1u); else { c.pc = 0x00424980u; return; } if (c.pc != 0x00424BA4u) [[unlikely]] return; }
L_00424BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_00424BB4; } }
L_00424BAC:
    c.r[2].d[0] = c.r[2].d[0] | 48576ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_00424BB4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424BC0u); set32(c.r[16], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00C1(c, 69u, depth + 1u); else { c.pc = 0x004248F0u; return; } if (c.pc != 0x00424BC0u) [[unlikely]] return; }
L_00424BC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF00000u);  goto L_00424BD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424BD0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00C1(c, 77u, depth + 1u); else { c.pc = 0x00424980u; return; } if (c.pc != 0x00424BD0u) [[unlikely]] return; }
L_00424BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00424BDC; } }
L_00424BD8:
    c.r[8].d[0] = c.r[3].d[0] | 48576ull;
    c.budget -= 1;
L_00424BDC:
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[7].d[0]) { set32(c.r[6], ld32((c.r[16].w[0])));  goto L_00424BF4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[19].d[0] = c.r[3].d[0] | 16960ull;
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 3;
L_00424BF4:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[6].d[0]) { set32(c.r[4], c.r[19].w[0] << 2);  goto L_00424C08; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[8].d[0] = c.r[3].d[0] | 16960ull;
    set32(c.r[4], c.r[19].w[0] << 2);
    c.budget -= 3;
L_00424C08:
    set32(c.r[3], 0u + 9u);
    set32(c.r[5], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    if (c.r[1].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_00424C54; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[21], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 6;
L_00424C54:
    set32(c.r[3], c.r[23].w[0] - 1u);
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00424B88u | kUnwind; return; } goto L_00424B88; }
L_00424C64:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { c.r[21].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00424B80u | kUnwind; return; } goto L_00424B80; }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00424CA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 17u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424CBCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00424CBCu) [[unlikely]] return; }
L_00424CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424CC4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00424CC4u) [[unlikely]] return; }
L_00424CC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424CD4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00424CD4u) [[unlikely]] return; }
L_00424CD4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00424CF0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], 0u + 17u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424D14u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00424D14u) [[unlikely]] return; }
L_00424D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424D1Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00424D1Cu) [[unlikely]] return; }
L_00424D1C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424D2Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00424D2Cu) [[unlikely]] return; }
L_00424D2C:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[17].d[0] + 0ull;  goto L_00424D38; }
L_00424D38:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424D44u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x00424D44u) [[unlikely]] return; }
L_00424D44:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 17u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424D54u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00424D54u) [[unlikely]] return; }
L_00424D54:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424D60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00424D60u) [[unlikely]] return; }
L_00424D60:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424D70u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00424D70u) [[unlikely]] return; }
L_00424D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424D78u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00424D78u) [[unlikely]] return; }
L_00424D78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424D88u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00424D88u) [[unlikely]] return; }
L_00424D88:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[17].d[0] + 0ull;  goto L_00424D94; }
L_00424D94:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424DA0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x00424DA0u) [[unlikely]] return; }
L_00424DA0:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424DB0u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00424DB0u) [[unlikely]] return; }
L_00424DB0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424DBCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00424DBCu) [[unlikely]] return; }
L_00424DBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00424DD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424DECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00424DECu) [[unlikely]] return; }
L_00424DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424DF4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00424DF4u) [[unlikely]] return; }
L_00424DF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424E04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00424E04u) [[unlikely]] return; }
L_00424E04:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00424E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424E30u);  if (depth < kMaxDepth) unit_00C1(c, 120u, depth + 1u); else { c.pc = 0x00424DD0u; return; } if (c.pc != 0x00424E30u) [[unlikely]] return; }
L_00424E30:
    set32(c.r[3], 0u + 100u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00424E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424E60u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00C1(c, 120u, depth + 1u); else { c.pc = 0x00424DD0u; return; } if (c.pc != 0x00424E60u) [[unlikely]] return; }
L_00424E60:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424E74u);  if (depth < kMaxDepth) unit_00C1(c, 120u, depth + 1u); else { c.pc = 0x00424DD0u; return; } if (c.pc != 0x00424E74u) [[unlikely]] return; }
L_00424E74:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 5;
    if (c.r[16].sd[0] <= 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_00424EB4; }
    c.r[1].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_00424EA0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00424EB4; } }
L_00424EA0:
    set32(c.r[2], c.r[2].w[0] - 28793u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
L_00424EB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00424ED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424EE0u);  if (depth < kMaxDepth) unit_0024(c, 612u, depth + 1u); else { c.pc = 0x001B3FA0u; return; } if (c.pc != 0x00424EE0u) [[unlikely]] return; }
L_00424EE0:
    c.r[3].d[0] = c.r[2].sd[0] < 1000ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00424EF8; }
    c.r[3].d[0] = c.r[2].sd[0] < 2000ll ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00424EF8:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00424F10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424F20u);  if (depth < kMaxDepth) unit_0024(c, 612u, depth + 1u); else { c.pc = 0x001B3FA0u; return; } if (c.pc != 0x00424F20u) [[unlikely]] return; }
L_00424F20:
    c.r[3].d[0] = c.r[2].sd[0] < 2000ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00424F38; }
    c.r[3].d[0] = c.r[2].sd[0] < 3000ll ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00424F38:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00424F50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424F60u);  if (depth < kMaxDepth) unit_0024(c, 612u, depth + 1u); else { c.pc = 0x001B3FA0u; return; } if (c.pc != 0x00424F60u) [[unlikely]] return; }
L_00424F60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 1100ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00424F80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424F9Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00424F9Cu) [[unlikely]] return; }
L_00424F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424FA4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00424FA4u) [[unlikely]] return; }
L_00424FA4:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424FB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00424FB4u) [[unlikely]] return; }
L_00424FB4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00424FD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424FECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00424FECu) [[unlikely]] return; }
L_00424FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00424FF4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00424FF4u) [[unlikely]] return; }
L_00424FF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425004u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425004u) [[unlikely]] return; }
L_00425004:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00425020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042503Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0042503Cu) [[unlikely]] return; }
L_0042503C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425044u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00425044u) [[unlikely]] return; }
L_00425044:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425054u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425054u) [[unlikely]] return; }
L_00425054:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00425070:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], 0u + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425090u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00425090u) [[unlikely]] return; }
L_00425090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425098u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00425098u) [[unlikely]] return; }
L_00425098:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004250A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x004250A8u) [[unlikely]] return; }
L_004250A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] + 18624u);
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
L_004250B8:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004250B8u | kUnwind; return; } goto L_004250B8; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004250E0u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00C1(c, 93u, depth + 1u); else { c.pc = 0x00424B20u; return; } if (c.pc != 0x004250E0u) [[unlikely]] return; }
L_004250E0:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[17], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_004250F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_0042515C; } }
L_004250F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004250FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 69u, depth + 1u); else { c.pc = 0x004248F0u; return; } if (c.pc != 0x004250FCu) [[unlikely]] return; }
L_004250FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0042515C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042510Cu);  if (depth < kMaxDepth) unit_00C1(c, 135u, depth + 1u); else { c.pc = 0x00424F80u; return; } if (c.pc != 0x0042510Cu) [[unlikely]] return; }
L_0042510C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] - 2u);  goto L_00425140; }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[4].d[0];  if (t) { goto L_0042513C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425128u);  if (depth < kMaxDepth) unit_00C1(c, 65u, depth + 1u); else { c.pc = 0x004248A0u; return; } if (c.pc != 0x00425128u) [[unlikely]] return; }
L_00425128:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0042513C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0042515C; } }
L_0042513C:
    set32(c.r[2], c.r[17].w[0] - 2u);
    c.budget -= 1;
L_00425140:
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042514Cu); set32(c.r[16], c.r[2].w[0] + 3u);  if (depth < kMaxDepth) unit_00C1(c, 135u, depth + 1u); else { c.pc = 0x00424F80u; return; } if (c.pc != 0x0042514Cu) [[unlikely]] return; }
L_0042514C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0042515C; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0042515C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00425170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425184u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00C1(c, 120u, depth + 1u); else { c.pc = 0x00424DD0u; return; } if (c.pc != 0x00425184u) [[unlikely]] return; }
L_00425184:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425198u);  if (depth < kMaxDepth) unit_00C1(c, 120u, depth + 1u); else { c.pc = 0x00424DD0u; return; } if (c.pc != 0x00425198u) [[unlikely]] return; }
L_00425198:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004251ACu);  if (depth < kMaxDepth) unit_00C1(c, 131u, depth + 1u); else { c.pc = 0x00424F10u; return; } if (c.pc != 0x004251ACu) [[unlikely]] return; }
L_004251AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_004251BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_004251D8; } }
L_004251BC:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_004251D8; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_004251D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004251DC; } }
L_004251D4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_004251D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004251DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004251F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425204u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x00425204u) [[unlikely]] return; }
L_00425204:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425214u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00425214u) [[unlikely]] return; }
L_00425214:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425220u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425220u) [[unlikely]] return; }
L_00425220:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00425230:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[4].w[0] << 4);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[2].w[0] + 15u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425250u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00425250u) [[unlikely]] return; }
L_00425250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425258u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00425258u) [[unlikely]] return; }
L_00425258:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425268u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425268u) [[unlikely]] return; }
L_00425268:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00425280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425298u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x00425298u) [[unlikely]] return; }
L_00425298:
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] + 15u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004252ACu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x004252ACu) [[unlikely]] return; }
L_004252AC:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004252B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x004252B8u) [[unlikely]] return; }
L_004252B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004252D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], 0u + 2u);
    c.budget -= 4;
L_004252E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004252ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C1(c, 169u, depth + 1u); else { c.pc = 0x00425280u; return; } if (c.pc != 0x004252ECu) [[unlikely]] return; }
L_004252EC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004252E0u | kUnwind; return; } goto L_004252E0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00425310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], 0u + 2u);
    c.budget -= 5;
L_00425324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042532Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 77u, depth + 1u); else { c.pc = 0x00424980u; return; } if (c.pc != 0x0042532Cu) [[unlikely]] return; }
L_0042532C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425338u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 165u, depth + 1u); else { c.pc = 0x00425230u; return; } if (c.pc != 0x00425338u) [[unlikely]] return; }
L_00425338:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00425354; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042534Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 77u, depth + 1u); else { c.pc = 0x00424980u; return; } if (c.pc != 0x0042534Cu) [[unlikely]] return; }
L_0042534C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00425360; } }
L_00425354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042535Cu);  if (depth < kMaxDepth) unit_00C1(c, 165u, depth + 1u); else { c.pc = 0x00425230u; return; } if (c.pc != 0x0042535Cu) [[unlikely]] return; }
L_0042535C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00425360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425368u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 169u, depth + 1u); else { c.pc = 0x00425280u; return; } if (c.pc != 0x00425368u) [[unlikely]] return; }
L_00425368:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00425324u | kUnwind; return; } goto L_00425324; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00425390:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004253A4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00C1(c, 103u, depth + 1u); else { c.pc = 0x00424CA0u; return; } if (c.pc != 0x004253A4u) [[unlikely]] return; }
L_004253A4:
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004253B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_004253C0; } }
L_004253B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004253C0u);  if (depth < kMaxDepth) unit_00C1(c, 103u, depth + 1u); else { c.pc = 0x00424CA0u; return; } if (c.pc != 0x004253C0u) [[unlikely]] return; }
L_004253C0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004253CCu); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x004253CCu) [[unlikely]] return; }
L_004253CC:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004253DCu); set32(c.r[6], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x004253DCu) [[unlikely]] return; }
L_004253DC:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004253E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x004253E8u) [[unlikely]] return; }
L_004253E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004253F0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00C1(c, 165u, depth + 1u); else { c.pc = 0x00425230u; return; } if (c.pc != 0x004253F0u) [[unlikely]] return; }
L_004253F0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004253FCu); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x004253FCu) [[unlikely]] return; }
L_004253FC:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 145u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042540Cu); set32(c.r[6], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x0042540Cu) [[unlikely]] return; }
L_0042540C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425418u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425418u) [[unlikely]] return; }
L_00425418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425420u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00C1(c, 165u, depth + 1u); else { c.pc = 0x00425230u; return; } if (c.pc != 0x00425420u) [[unlikely]] return; }
L_00425420:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042542Cu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x0042542Cu) [[unlikely]] return; }
L_0042542C:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 146u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042543Cu); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x0042543Cu) [[unlikely]] return; }
L_0042543C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425448u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425448u) [[unlikely]] return; }
L_00425448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425450u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_00C1(c, 165u, depth + 1u); else { c.pc = 0x00425230u; return; } if (c.pc != 0x00425450u) [[unlikely]] return; }
L_00425450:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042545Cu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x0042545Cu) [[unlikely]] return; }
L_0042545C:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 147u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042546Cu); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x0042546Cu) [[unlikely]] return; }
L_0042546C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425478u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425478u) [[unlikely]] return; }
L_00425478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425480u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00C1(c, 165u, depth + 1u); else { c.pc = 0x00425230u; return; } if (c.pc != 0x00425480u) [[unlikely]] return; }
L_00425480:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042548Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x0042548Cu) [[unlikely]] return; }
L_0042548C:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 148u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042549Cu); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x0042549Cu) [[unlikely]] return; }
L_0042549C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004254A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x004254A8u) [[unlikely]] return; }
L_004254A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004254B0u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_00C1(c, 165u, depth + 1u); else { c.pc = 0x00425230u; return; } if (c.pc != 0x004254B0u) [[unlikely]] return; }
L_004254B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004254BCu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x004254BCu) [[unlikely]] return; }
L_004254BC:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 149u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004254CCu); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x004254CCu) [[unlikely]] return; }
L_004254CC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004254D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x004254D8u) [[unlikely]] return; }
L_004254D8:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[17].w[0] + 160u);
    c.budget -= 2;
L_004254E0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004254ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x004254ECu) [[unlikely]] return; }
L_004254EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004254F4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x004254F4u) [[unlikely]] return; }
L_004254F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425504u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425504u) [[unlikely]] return; }
L_00425504:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425510u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x00425510u) [[unlikely]] return; }
L_00425510:
    set32(c.r[5], c.r[17].w[0] + 150u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425520u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00425520u) [[unlikely]] return; }
L_00425520:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042552Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x0042552Cu) [[unlikely]] return; }
L_0042552C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[6], c.r[17].w[0] + 160u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004254E0u | kUnwind; return; } goto L_004254E0; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425548u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x00425548u) [[unlikely]] return; }
L_00425548:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425558u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00425558u) [[unlikely]] return; }
L_00425558:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425564u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425564u) [[unlikely]] return; }
L_00425564:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00425580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042559Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0042559Cu) [[unlikely]] return; }
L_0042559C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004255A4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x004255A4u) [[unlikely]] return; }
L_004255A4:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004255B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x004255B4u) [[unlikely]] return; }
L_004255B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004255D0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 336u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], 0u + 144u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004255F0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x004255F0u) [[unlikely]] return; }
L_004255F0:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004255FCu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x004255FCu) [[unlikely]] return; }
L_004255FC:
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 304u);  goto L_00425610; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_00425628; } }
L_00425610:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042561Cu); set32(c.r[6], 0u + 144u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0042561Cu) [[unlikely]] return; }
L_0042561C:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425628u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00425628u) [[unlikely]] return; }
L_00425628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425630u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 107u, depth + 1u); else { c.pc = 0x00424CF0u; return; } if (c.pc != 0x00425630u) [[unlikely]] return; }
L_00425630:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 336u);  goto L_00425648; }
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425644u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425644u) [[unlikely]] return; }
L_00425644:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 1;
L_00425648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425650u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425650u) [[unlikely]] return; }
L_00425650:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425660u); set32(c.r[6], 0u + 145u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00425660u) [[unlikely]] return; }
L_00425660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425668u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00425668u) [[unlikely]] return; }
L_00425668:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425674u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00C1(c, 169u, depth + 1u); else { c.pc = 0x00425280u; return; } if (c.pc != 0x00425674u) [[unlikely]] return; }
L_00425674:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425680u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425680u) [[unlikely]] return; }
L_00425680:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425690u); set32(c.r[6], 0u + 146u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00425690u) [[unlikely]] return; }
L_00425690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425698u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00425698u) [[unlikely]] return; }
L_00425698:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004256A4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00C1(c, 169u, depth + 1u); else { c.pc = 0x00425280u; return; } if (c.pc != 0x004256A4u) [[unlikely]] return; }
L_004256A4:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004256B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x004256B0u) [[unlikely]] return; }
L_004256B0:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004256C0u); set32(c.r[6], 0u + 147u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x004256C0u) [[unlikely]] return; }
L_004256C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004256C8u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x004256C8u) [[unlikely]] return; }
L_004256C8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004256D4u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_00C1(c, 169u, depth + 1u); else { c.pc = 0x00425280u; return; } if (c.pc != 0x004256D4u) [[unlikely]] return; }
L_004256D4:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004256E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x004256E0u) [[unlikely]] return; }
L_004256E0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004256F0u); set32(c.r[6], 0u + 148u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x004256F0u) [[unlikely]] return; }
L_004256F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004256F8u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x004256F8u) [[unlikely]] return; }
L_004256F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425704u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00C1(c, 169u, depth + 1u); else { c.pc = 0x00425280u; return; } if (c.pc != 0x00425704u) [[unlikely]] return; }
L_00425704:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425710u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425710u) [[unlikely]] return; }
L_00425710:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425720u); set32(c.r[6], 0u + 149u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00425720u) [[unlikely]] return; }
L_00425720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425728u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00425728u) [[unlikely]] return; }
L_00425728:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425734u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_00C1(c, 169u, depth + 1u); else { c.pc = 0x00425280u; return; } if (c.pc != 0x00425734u) [[unlikely]] return; }
L_00425734:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425740u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425740u) [[unlikely]] return; }
L_00425740:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[17].w[0] + 150u);
    c.budget -= 2;
L_00425748:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425754u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00425754u) [[unlikely]] return; }
L_00425754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042575Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x0042575Cu) [[unlikely]] return; }
L_0042575C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042576Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x0042576Cu) [[unlikely]] return; }
L_0042576C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425778u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x00425778u) [[unlikely]] return; }
L_00425778:
    set32(c.r[5], c.r[17].w[0] + 160u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425788u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00425788u) [[unlikely]] return; }
L_00425788:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425794u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425794u) [[unlikely]] return; }
L_00425794:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[6], c.r[17].w[0] + 150u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00425748u | kUnwind; return; } goto L_00425748; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004257B0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x004257B0u) [[unlikely]] return; }
L_004257B0:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 31u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004257C0u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x004257C0u) [[unlikely]] return; }
L_004257C0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004257CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x004257CCu) [[unlikely]] return; }
L_004257CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_004257E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00425828; } }
    set32(c.r[20], 0u + 1u);
    c.r[22].d[0] = 0ull + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00425864; } }
L_00425828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425830u);  if (depth < kMaxDepth) unit_00C1(c, 301u, depth + 1u); else { c.pc = 0x00425B20u; return; } if (c.pc != 0x00425830u) [[unlikely]] return; }
L_00425830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425838u); c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 311u, depth + 1u); else { c.pc = 0x00425BD0u; return; } if (c.pc != 0x00425838u) [[unlikely]] return; }
L_00425838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425840u); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 321u, depth + 1u); else { c.pc = 0x00425C80u; return; } if (c.pc != 0x00425840u) [[unlikely]] return; }
L_00425840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425848u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 331u, depth + 1u); else { c.pc = 0x00425D40u; return; } if (c.pc != 0x00425848u) [[unlikely]] return; }
L_00425848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425850u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 339u, depth + 1u); else { c.pc = 0x00425DD0u; return; } if (c.pc != 0x00425850u) [[unlikely]] return; }
L_00425850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425858u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 348u, depth + 1u); else { c.pc = 0x00425E80u; return; } if (c.pc != 0x00425858u) [[unlikely]] return; }
L_00425858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425860u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 357u, depth + 1u); else { c.pc = 0x00425F20u; return; } if (c.pc != 0x00425860u) [[unlikely]] return; }
L_00425860:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00425864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042586Cu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 295u, depth + 1u); else { c.pc = 0x00425AC0u; return; } if (c.pc != 0x0042586Cu) [[unlikely]] return; }
L_0042586C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425874u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 306u, depth + 1u); else { c.pc = 0x00425B80u; return; } if (c.pc != 0x00425874u) [[unlikely]] return; }
L_00425874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042587Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 315u, depth + 1u); else { c.pc = 0x00425C20u; return; } if (c.pc != 0x0042587Cu) [[unlikely]] return; }
L_0042587C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425884u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 326u, depth + 1u); else { c.pc = 0x00425CE0u; return; } if (c.pc != 0x00425884u) [[unlikely]] return; }
L_00425884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042588Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 335u, depth + 1u); else { c.pc = 0x00425D90u; return; } if (c.pc != 0x0042588Cu) [[unlikely]] return; }
L_0042588C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425894u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 343u, depth + 1u); else { c.pc = 0x00425E20u; return; } if (c.pc != 0x00425894u) [[unlikely]] return; }
L_00425894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042589Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 352u, depth + 1u); else { c.pc = 0x00425ED0u; return; } if (c.pc != 0x0042589Cu) [[unlikely]] return; }
L_0042589C:
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
L_004258D0:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004258F0; } }
L_004258DC:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_004258F0; }
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_00425908; } }
L_004258F0:
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004258DCu | kUnwind; return; } goto L_004258DC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_00425908:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00425910:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00425930; } }
L_0042591C:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_00425930; }
    set32(c.r[2], c.r[4].w[0] + c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00425948; } }
L_00425930:
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[6].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042591Cu | kUnwind; return; } goto L_0042591C; }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_00425948:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00425950:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425964u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00C1(c, 301u, depth + 1u); else { c.pc = 0x00425B20u; return; } if (c.pc != 0x00425964u) [[unlikely]] return; }
L_00425964:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[17].d[0] = c.r[3].d[0] + 0ull;  goto L_00425984; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[17].d[0] = c.r[3].d[0] + 0ull;  goto L_00425984; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00425984; }
L_00425984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042598Cu);  if (depth < kMaxDepth) unit_00C1(c, 321u, depth + 1u); else { c.pc = 0x00425C80u; return; } if (c.pc != 0x0042598Cu) [[unlikely]] return; }
L_0042598C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[16].d[0] = c.r[3].d[0] + 0ull;  goto L_004259AC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[16].d[0] = c.r[3].d[0] + 0ull;  goto L_004259AC; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_004259AC; }
L_004259AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 28640u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004259C8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00C1(c, 293u, depth + 1u); else { c.pc = 0x00425A70u; return; } if (c.pc != 0x004259C8u) [[unlikely]] return; }
L_004259C8:
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004259D8u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x004259D8u) [[unlikely]] return; }
L_004259D8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004259E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x004259E4u) [[unlikely]] return; }
L_004259E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004259ECu);  if (depth < kMaxDepth) unit_00C1(c, 311u, depth + 1u); else { c.pc = 0x00425BD0u; return; } if (c.pc != 0x004259ECu) [[unlikely]] return; }
L_004259EC:
    c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004259F8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x004259F8u) [[unlikely]] return; }
L_004259F8:
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425A08u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00425A08u) [[unlikely]] return; }
L_00425A08:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425A14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425A14u) [[unlikely]] return; }
L_00425A14:
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 28624u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425A40u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00C1(c, 293u, depth + 1u); else { c.pc = 0x00425A70u; return; } if (c.pc != 0x00425A40u) [[unlikely]] return; }
L_00425A40:
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425A50u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00425A50u) [[unlikely]] return; }
L_00425A50:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425A5Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425A5Cu) [[unlikely]] return; }
L_00425A5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00425A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425A90u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_002D(c, 6u, depth + 1u); else { c.pc = 0x001D40D0u; return; } if (c.pc != 0x00425A90u) [[unlikely]] return; }
L_00425A90:
    st32((c.r[16].w[0]), c.f[20]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00425AC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425AD8u); set32(c.r[4], c.r[4].w[0] - 28784u);  if (depth < kMaxDepth) unit_00C1(c, 276u, depth + 1u); else { c.pc = 0x004258D0u; return; } if (c.pc != 0x00425AD8u) [[unlikely]] return; }
L_00425AD8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425AE4u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x00425AE4u) [[unlikely]] return; }
L_00425AE4:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 177u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425AF4u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00425AF4u) [[unlikely]] return; }
L_00425AF4:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425B00u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425B00u) [[unlikely]] return; }
L_00425B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425B08u);  if (depth < kMaxDepth) unit_00C1(c, 280u, depth + 1u); else { c.pc = 0x00425950u; return; } if (c.pc != 0x00425B08u) [[unlikely]] return; }
L_00425B08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00425B20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 177u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425B3Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00425B3Cu) [[unlikely]] return; }
L_00425B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425B44u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00425B44u) [[unlikely]] return; }
L_00425B44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425B54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425B54u) [[unlikely]] return; }
L_00425B54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425B64u); set32(c.r[4], c.r[4].w[0] - 28784u);  if (depth < kMaxDepth) unit_00C1(c, 278u, depth + 1u); else { c.pc = 0x00425910u; return; } if (c.pc != 0x00425B64u) [[unlikely]] return; }
L_00425B64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00425B80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425B94u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x00425B94u) [[unlikely]] return; }
L_00425B94:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 178u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425BA4u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00425BA4u) [[unlikely]] return; }
L_00425BA4:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425BB0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425BB0u) [[unlikely]] return; }
L_00425BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425BB8u);  if (depth < kMaxDepth) unit_00C1(c, 280u, depth + 1u); else { c.pc = 0x00425950u; return; } if (c.pc != 0x00425BB8u) [[unlikely]] return; }
L_00425BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00425BD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 178u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425BECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00425BECu) [[unlikely]] return; }
L_00425BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425BF4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00425BF4u) [[unlikely]] return; }
L_00425BF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425C04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425C04u) [[unlikely]] return; }
L_00425C04:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00425C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425C38u); set32(c.r[4], c.r[4].w[0] - 28752u);  if (depth < kMaxDepth) unit_00C1(c, 276u, depth + 1u); else { c.pc = 0x004258D0u; return; } if (c.pc != 0x00425C38u) [[unlikely]] return; }
L_00425C38:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425C44u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x00425C44u) [[unlikely]] return; }
L_00425C44:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425C54u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00425C54u) [[unlikely]] return; }
L_00425C54:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425C60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425C60u) [[unlikely]] return; }
L_00425C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425C68u);  if (depth < kMaxDepth) unit_00C1(c, 280u, depth + 1u); else { c.pc = 0x00425950u; return; } if (c.pc != 0x00425C68u) [[unlikely]] return; }
L_00425C68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00425C80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 9u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425C9Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00425C9Cu) [[unlikely]] return; }
L_00425C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425CA4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00425CA4u) [[unlikely]] return; }
L_00425CA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425CB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425CB4u) [[unlikely]] return; }
L_00425CB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425CC4u); set32(c.r[4], c.r[4].w[0] - 28752u);  if (depth < kMaxDepth) unit_00C1(c, 278u, depth + 1u); else { c.pc = 0x00425910u; return; } if (c.pc != 0x00425CC4u) [[unlikely]] return; }
L_00425CC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00425CE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425CFCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x00425CFCu) [[unlikely]] return; }
L_00425CFC:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425D0Cu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00425D0Cu) [[unlikely]] return; }
L_00425D0C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425D18u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425D18u) [[unlikely]] return; }
L_00425D18:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425D24u); c.r[4].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_000D(c, 42u, depth + 1u); else { c.pc = 0x001545D0u; return; } if (c.pc != 0x00425D24u) [[unlikely]] return; }
L_00425D24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00425D40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 180u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425D5Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00425D5Cu) [[unlikely]] return; }
L_00425D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425D64u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00425D64u) [[unlikely]] return; }
L_00425D64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425D74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425D74u) [[unlikely]] return; }
L_00425D74:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00425D90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425DA4u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x00425DA4u) [[unlikely]] return; }
L_00425DA4:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 181u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425DB4u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00425DB4u) [[unlikely]] return; }
L_00425DB4:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425DC0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425DC0u) [[unlikely]] return; }
L_00425DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00425DD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 181u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425DECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00425DECu) [[unlikely]] return; }
L_00425DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425DF4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00425DF4u) [[unlikely]] return; }
L_00425DF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425E04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425E04u) [[unlikely]] return; }
L_00425E04:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00425E20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425E3Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x00425E3Cu) [[unlikely]] return; }
L_00425E3C:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 182u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425E4Cu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00425E4Cu) [[unlikely]] return; }
L_00425E4C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425E58u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425E58u) [[unlikely]] return; }
L_00425E58:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425E64u); c.r[4].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_003D(c, 40u, depth + 1u); else { c.pc = 0x002145C0u; return; } if (c.pc != 0x00425E64u) [[unlikely]] return; }
L_00425E64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00425E80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 182u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425E9Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00425E9Cu) [[unlikely]] return; }
L_00425E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425EA4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00425EA4u) [[unlikely]] return; }
L_00425EA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425EB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425EB4u) [[unlikely]] return; }
L_00425EB4:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00425ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425EE8u); set32(c.r[4], c.r[4].w[0] - 28720u);  if (depth < kMaxDepth) unit_00C1(c, 276u, depth + 1u); else { c.pc = 0x004258D0u; return; } if (c.pc != 0x00425EE8u) [[unlikely]] return; }
L_00425EE8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425EF4u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x00425EF4u) [[unlikely]] return; }
L_00425EF4:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 183u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425F04u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x00425F04u) [[unlikely]] return; }
L_00425F04:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425F10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425F10u) [[unlikely]] return; }
L_00425F10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00425F20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 183u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425F3Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00425F3Cu) [[unlikely]] return; }
L_00425F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425F44u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00425F44u) [[unlikely]] return; }
L_00425F44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425F54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425F54u) [[unlikely]] return; }
L_00425F54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425F64u); set32(c.r[4], c.r[4].w[0] - 28720u);  if (depth < kMaxDepth) unit_00C1(c, 278u, depth + 1u); else { c.pc = 0x00425910u; return; } if (c.pc != 0x00425F64u) [[unlikely]] return; }
L_00425F64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00425F80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425F90u);  if (depth < kMaxDepth) unit_00C1(c, 378u, depth + 1u); else { c.pc = 0x00426090u; return; } if (c.pc != 0x00425F90u) [[unlikely]] return; }
L_00425F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425F98u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 381u, depth + 1u); else { c.pc = 0x00426100u; return; } if (c.pc != 0x00425F98u) [[unlikely]] return; }
L_00425F98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00425FB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], 0u + 36u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425FD4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00425FD4u) [[unlikely]] return; }
L_00425FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425FDCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00C1(c, 50u, depth + 1u); else { c.pc = 0x004246F0u; return; } if (c.pc != 0x00425FDCu) [[unlikely]] return; }
L_00425FDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00425FECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x00425FECu) [[unlikely]] return; }
L_00425FEC:
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00426078; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 28576u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00424000u < 16384u) { entry = entries_00C1[(t - 0x00424000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00426014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00426078; } }
L_0042601C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00426078; } }
L_00426024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00426078; } }
L_0042602C:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_00426078; } }
L_00426038:
    c.r[2].d[0] = c.r[16].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_00426078; } }
L_00426044:
    c.r[2].d[0] = c.r[16].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_00426078; } }
L_00426050:
    c.r[2].d[0] = c.r[16].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_00426078; } }
L_0042605C:
    c.r[2].d[0] = c.r[16].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_00426078; } }
L_00426068:
    c.r[2].d[0] = c.r[16].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_00426078; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00426078:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00426090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 28528u);  if (t) { goto L_004260D4; } }
L_004260A8:
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_004260D4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 28524u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_004260E8; } }
L_004260D4:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004260A8u | kUnwind; return; } goto L_004260A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004260E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 378u, depth + 1u); else { c.pc = 0x00426090u; return; } if (c.pc != 0x004260E8u) [[unlikely]] return; }
L_004260E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00426100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00426120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426114u);  if (depth < kMaxDepth) unit_00C1(c, 357u, depth + 1u); else { c.pc = 0x00425F20u; return; } if (c.pc != 0x00426114u) [[unlikely]] return; }
L_00426114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042611Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 378u, depth + 1u); else { c.pc = 0x00426090u; return; } if (c.pc != 0x0042611Cu) [[unlikely]] return; }
L_0042611C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00426120:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 28528u);  if (t) { goto L_0042615C; } }
L_00426130:
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0042615C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 28520u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00426170; } }
L_0042615C:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00426130u | kUnwind; return; } goto L_00426130; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426170u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 381u, depth + 1u); else { c.pc = 0x00426100u; return; } if (c.pc != 0x00426170u) [[unlikely]] return; }
L_00426170:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00426180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 12345u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426194u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x004247A0u; return; } if (c.pc != 0x00426194u) [[unlikely]] return; }
L_00426194:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004261A4u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x004261A4u) [[unlikely]] return; }
L_004261A4:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004261B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 453u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x004261B0u) [[unlikely]] return; }
L_004261B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004261C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004261D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 441u, depth + 1u); else { c.pc = 0x004231B0u; return; } if (c.pc != 0x004261D4u) [[unlikely]] return; }
L_004261D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 16368u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534D0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004261F0u); c.r[5].d[0] = c.r[2].d[0] | 17184ull;  if (depth < kMaxDepth) unit_000B(c, 143u, depth + 1u); else { c.pc = 0x0014EF30u; return; } if (c.pc != 0x004261F0u) [[unlikely]] return; }
L_004261F0:
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[3], 0u - 10u);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 30108u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00426220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0042627C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 16368u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30108u)));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042625C; }
    st32((c.r[28].w[0] - 30108u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0042625C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426264u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 180u, depth + 1u); else { c.pc = 0x0041DB60u; return; } if (c.pc != 0x00426264u) [[unlikely]] return; }
L_00426264:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00426280; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042627Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0042627Cu) [[unlikely]] return; }
L_0042627C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00426280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004262A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004262B0u);  if (depth < kMaxDepth) unit_003E(c, 80u, depth + 1u); else { c.pc = 0x00218C30u; return; } if (c.pc != 0x004262B0u) [[unlikely]] return; }
L_004262B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_004262D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004262C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 224u, depth + 1u); else { c.pc = 0x002160C0u; return; } if (c.pc != 0x004262C0u) [[unlikely]] return; }
L_004262C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004262D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004262D4; } }
L_004262D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004262D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004262E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004262F8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 80u, depth + 1u); else { c.pc = 0x00218C30u; return; } if (c.pc != 0x004262F8u) [[unlikely]] return; }
L_004262F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00426370; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00426348; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00426324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004263D4; } }
L_00426324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042632Cu);  if (depth < kMaxDepth) unit_0025(c, 302u, depth + 1u); else { c.pc = 0x001B5C40u; return; } if (c.pc != 0x0042632Cu) [[unlikely]] return; }
L_0042632C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426338u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 447u, depth + 1u); else { c.pc = 0x00423320u; return; } if (c.pc != 0x00426338u) [[unlikely]] return; }
L_00426338:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_004263D0; } }
L_00426348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426350u);  if (depth < kMaxDepth) unit_003D(c, 224u, depth + 1u); else { c.pc = 0x002160C0u; return; } if (c.pc != 0x00426350u) [[unlikely]] return; }
L_00426350:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004263D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426360u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 231u, depth + 1u); else { c.pc = 0x00216210u; return; } if (c.pc != 0x00426360u) [[unlikely]] return; }
L_00426360:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_004263D0; } }
L_00426370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426378u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 224u, depth + 1u); else { c.pc = 0x002160C0u; return; } if (c.pc != 0x00426378u) [[unlikely]] return; }
L_00426378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004263D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426388u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 414u, depth + 1u); else { c.pc = 0x00426400u; return; } if (c.pc != 0x00426388u) [[unlikely]] return; }
L_00426388:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042639C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426398u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 413u, depth + 1u); else { c.pc = 0x004263F0u; return; } if (c.pc != 0x00426398u) [[unlikely]] return; }
L_00426398:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042639C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004263A4u);  if (depth < kMaxDepth) unit_003D(c, 226u, depth + 1u); else { c.pc = 0x00216100u; return; } if (c.pc != 0x004263A4u) [[unlikely]] return; }
L_004263A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004263B0u); st32((c.r[16].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_003D(c, 227u, depth + 1u); else { c.pc = 0x00216110u; return; } if (c.pc != 0x004263B0u) [[unlikely]] return; }
L_004263B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004263BCu); st32((c.r[16].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 228u, depth + 1u); else { c.pc = 0x00216160u; return; } if (c.pc != 0x004263BCu) [[unlikely]] return; }
L_004263BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004263C4u); st32((c.r[16].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x004263C4u) [[unlikely]] return; }
L_004263C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004263D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x004263D0u) [[unlikely]] return; }
L_004263D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004263D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004263F0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 100u), c.r[3].w[0]);  c.pc = t; return; }
L_00426400:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];  c.pc = t; return; }
L_00426410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426428u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 80u, depth + 1u); else { c.pc = 0x00218C30u; return; } if (c.pc != 0x00426428u) [[unlikely]] return; }
L_00426428:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004264A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00426478; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00426454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00426514; } }
L_00426454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042645Cu);  if (depth < kMaxDepth) unit_0025(c, 302u, depth + 1u); else { c.pc = 0x001B5C40u; return; } if (c.pc != 0x0042645Cu) [[unlikely]] return; }
L_0042645C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426468u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 447u, depth + 1u); else { c.pc = 0x00423320u; return; } if (c.pc != 0x00426468u) [[unlikely]] return; }
L_00426468:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00426510; } }
L_00426478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426480u);  if (depth < kMaxDepth) unit_003D(c, 224u, depth + 1u); else { c.pc = 0x002160C0u; return; } if (c.pc != 0x00426480u) [[unlikely]] return; }
L_00426480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00426510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426490u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 231u, depth + 1u); else { c.pc = 0x00216210u; return; } if (c.pc != 0x00426490u) [[unlikely]] return; }
L_00426490:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00426510; } }
L_004264A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004264A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 224u, depth + 1u); else { c.pc = 0x002160C0u; return; } if (c.pc != 0x004264A8u) [[unlikely]] return; }
L_004264A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00426510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004264B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 414u, depth + 1u); else { c.pc = 0x00426400u; return; } if (c.pc != 0x004264B8u) [[unlikely]] return; }
L_004264B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004264CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004264C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 413u, depth + 1u); else { c.pc = 0x004263F0u; return; } if (c.pc != 0x004264C8u) [[unlikely]] return; }
L_004264C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004264CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004264D4u);  if (depth < kMaxDepth) unit_003D(c, 225u, depth + 1u); else { c.pc = 0x002160F0u; return; } if (c.pc != 0x004264D4u) [[unlikely]] return; }
L_004264D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004264E8; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_004264E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004264F0u);  if (depth < kMaxDepth) unit_003D(c, 227u, depth + 1u); else { c.pc = 0x00216110u; return; } if (c.pc != 0x004264F0u) [[unlikely]] return; }
L_004264F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004264FCu); st32((c.r[16].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 228u, depth + 1u); else { c.pc = 0x00216160u; return; } if (c.pc != 0x004264FCu) [[unlikely]] return; }
L_004264FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426504u); st32((c.r[16].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x00426504u) [[unlikely]] return; }
L_00426504:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426510u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00426510u) [[unlikely]] return; }
L_00426510:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00426514:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00426530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426548u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 80u, depth + 1u); else { c.pc = 0x00218C30u; return; } if (c.pc != 0x00426548u) [[unlikely]] return; }
L_00426548:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004265C0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00426598; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00426574; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00426634; } }
L_00426574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042657Cu);  if (depth < kMaxDepth) unit_0025(c, 302u, depth + 1u); else { c.pc = 0x001B5C40u; return; } if (c.pc != 0x0042657Cu) [[unlikely]] return; }
L_0042657C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426588u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 447u, depth + 1u); else { c.pc = 0x00423320u; return; } if (c.pc != 0x00426588u) [[unlikely]] return; }
L_00426588:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00426630; } }
L_00426598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004265A0u);  if (depth < kMaxDepth) unit_003D(c, 224u, depth + 1u); else { c.pc = 0x002160C0u; return; } if (c.pc != 0x004265A0u) [[unlikely]] return; }
L_004265A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00426630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004265B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 232u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x004265B0u) [[unlikely]] return; }
L_004265B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00426630; } }
L_004265C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004265C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 224u, depth + 1u); else { c.pc = 0x002160C0u; return; } if (c.pc != 0x004265C8u) [[unlikely]] return; }
L_004265C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00426630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004265D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 414u, depth + 1u); else { c.pc = 0x00426400u; return; } if (c.pc != 0x004265D8u) [[unlikely]] return; }
L_004265D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004265EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004265E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 413u, depth + 1u); else { c.pc = 0x004263F0u; return; } if (c.pc != 0x004265E8u) [[unlikely]] return; }
L_004265E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004265EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004265F4u);  if (depth < kMaxDepth) unit_003D(c, 225u, depth + 1u); else { c.pc = 0x002160F0u; return; } if (c.pc != 0x004265F4u) [[unlikely]] return; }
L_004265F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00426608; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_00426608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426610u);  if (depth < kMaxDepth) unit_003D(c, 227u, depth + 1u); else { c.pc = 0x00216110u; return; } if (c.pc != 0x00426610u) [[unlikely]] return; }
L_00426610:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042661Cu); st32((c.r[16].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 228u, depth + 1u); else { c.pc = 0x00216160u; return; } if (c.pc != 0x0042661Cu) [[unlikely]] return; }
L_0042661C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426624u); st32((c.r[16].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x00426624u) [[unlikely]] return; }
L_00426624:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426630u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00426630u) [[unlikely]] return; }
L_00426630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00426634:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00426650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426668u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 80u, depth + 1u); else { c.pc = 0x00218C30u; return; } if (c.pc != 0x00426668u) [[unlikely]] return; }
L_00426668:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004266F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004266B8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00426694; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00426764; } }
L_00426694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042669Cu);  if (depth < kMaxDepth) unit_0025(c, 302u, depth + 1u); else { c.pc = 0x001B5C40u; return; } if (c.pc != 0x0042669Cu) [[unlikely]] return; }
L_0042669C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004266A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 447u, depth + 1u); else { c.pc = 0x00423320u; return; } if (c.pc != 0x004266A8u) [[unlikely]] return; }
L_004266A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00426760; } }
L_004266B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004266C0u);  if (depth < kMaxDepth) unit_003D(c, 224u, depth + 1u); else { c.pc = 0x002160C0u; return; } if (c.pc != 0x004266C0u) [[unlikely]] return; }
L_004266C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00426760; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 132u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[7], c.r[16].w[0] + 140u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004266E0u); set32(c.r[8], c.r[16].w[0] + 152u);  if (depth < kMaxDepth) unit_003D(c, 233u, depth + 1u); else { c.pc = 0x00216230u; return; } if (c.pc != 0x004266E0u) [[unlikely]] return; }
L_004266E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00426760; } }
L_004266F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004266F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 224u, depth + 1u); else { c.pc = 0x002160C0u; return; } if (c.pc != 0x004266F8u) [[unlikely]] return; }
L_004266F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00426760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426708u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 414u, depth + 1u); else { c.pc = 0x00426400u; return; } if (c.pc != 0x00426708u) [[unlikely]] return; }
L_00426708:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042671C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426718u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 413u, depth + 1u); else { c.pc = 0x004263F0u; return; } if (c.pc != 0x00426718u) [[unlikely]] return; }
L_00426718:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042671C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426724u);  if (depth < kMaxDepth) unit_003D(c, 225u, depth + 1u); else { c.pc = 0x002160F0u; return; } if (c.pc != 0x00426724u) [[unlikely]] return; }
L_00426724:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00426738; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_00426738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426740u);  if (depth < kMaxDepth) unit_003D(c, 227u, depth + 1u); else { c.pc = 0x00216110u; return; } if (c.pc != 0x00426740u) [[unlikely]] return; }
L_00426740:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042674Cu); st32((c.r[16].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 228u, depth + 1u); else { c.pc = 0x00216160u; return; } if (c.pc != 0x0042674Cu) [[unlikely]] return; }
L_0042674C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426754u); st32((c.r[16].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x00426754u) [[unlikely]] return; }
L_00426754:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426760u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00426760u) [[unlikely]] return; }
L_00426760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00426764:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00426780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426798u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 80u, depth + 1u); else { c.pc = 0x00218C30u; return; } if (c.pc != 0x00426798u) [[unlikely]] return; }
L_00426798:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00426818; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004267E8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004267C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0042688C; } }
L_004267C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004267CCu);  if (depth < kMaxDepth) unit_0025(c, 302u, depth + 1u); else { c.pc = 0x001B5C40u; return; } if (c.pc != 0x004267CCu) [[unlikely]] return; }
L_004267CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004267D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 447u, depth + 1u); else { c.pc = 0x00423320u; return; } if (c.pc != 0x004267D8u) [[unlikely]] return; }
L_004267D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00426888; } }
L_004267E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004267F0u);  if (depth < kMaxDepth) unit_003D(c, 224u, depth + 1u); else { c.pc = 0x002160C0u; return; } if (c.pc != 0x004267F0u) [[unlikely]] return; }
L_004267F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00426888; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426808u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 239u, depth + 1u); else { c.pc = 0x00216380u; return; } if (c.pc != 0x00426808u) [[unlikely]] return; }
L_00426808:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00426888; } }
L_00426818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426820u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 224u, depth + 1u); else { c.pc = 0x002160C0u; return; } if (c.pc != 0x00426820u) [[unlikely]] return; }
L_00426820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00426888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426830u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 414u, depth + 1u); else { c.pc = 0x00426400u; return; } if (c.pc != 0x00426830u) [[unlikely]] return; }
L_00426830:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00426844; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426840u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 413u, depth + 1u); else { c.pc = 0x004263F0u; return; } if (c.pc != 0x00426840u) [[unlikely]] return; }
L_00426840:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00426844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042684Cu);  if (depth < kMaxDepth) unit_003D(c, 225u, depth + 1u); else { c.pc = 0x002160F0u; return; } if (c.pc != 0x0042684Cu) [[unlikely]] return; }
L_0042684C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00426860; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_00426860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426868u);  if (depth < kMaxDepth) unit_003D(c, 227u, depth + 1u); else { c.pc = 0x00216110u; return; } if (c.pc != 0x00426868u) [[unlikely]] return; }
L_00426868:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426874u); st32((c.r[16].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 228u, depth + 1u); else { c.pc = 0x00216160u; return; } if (c.pc != 0x00426874u) [[unlikely]] return; }
L_00426874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042687Cu); st32((c.r[16].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x0042687Cu) [[unlikely]] return; }
L_0042687C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426888u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00426888u) [[unlikely]] return; }
L_00426888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0042688C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004268A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004268B8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 80u, depth + 1u); else { c.pc = 0x00218C30u; return; } if (c.pc != 0x004268B8u) [[unlikely]] return; }
L_004268B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00426930; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00426908; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004268E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004269A4; } }
L_004268E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004268ECu);  if (depth < kMaxDepth) unit_0025(c, 302u, depth + 1u); else { c.pc = 0x001B5C40u; return; } if (c.pc != 0x004268ECu) [[unlikely]] return; }
L_004268EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004268F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 447u, depth + 1u); else { c.pc = 0x00423320u; return; } if (c.pc != 0x004268F8u) [[unlikely]] return; }
L_004268F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_004269A0; } }
L_00426908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426910u);  if (depth < kMaxDepth) unit_003D(c, 224u, depth + 1u); else { c.pc = 0x002160C0u; return; } if (c.pc != 0x00426910u) [[unlikely]] return; }
L_00426910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004269A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426920u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 242u, depth + 1u); else { c.pc = 0x002163E0u; return; } if (c.pc != 0x00426920u) [[unlikely]] return; }
L_00426920:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_004269A0; } }
L_00426930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426938u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 224u, depth + 1u); else { c.pc = 0x002160C0u; return; } if (c.pc != 0x00426938u) [[unlikely]] return; }
L_00426938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004269A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426948u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 414u, depth + 1u); else { c.pc = 0x00426400u; return; } if (c.pc != 0x00426948u) [[unlikely]] return; }
L_00426948:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042695C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426958u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 413u, depth + 1u); else { c.pc = 0x004263F0u; return; } if (c.pc != 0x00426958u) [[unlikely]] return; }
L_00426958:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042695C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426964u);  if (depth < kMaxDepth) unit_003D(c, 225u, depth + 1u); else { c.pc = 0x002160F0u; return; } if (c.pc != 0x00426964u) [[unlikely]] return; }
L_00426964:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00426978; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_00426978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426980u);  if (depth < kMaxDepth) unit_003D(c, 227u, depth + 1u); else { c.pc = 0x00216110u; return; } if (c.pc != 0x00426980u) [[unlikely]] return; }
L_00426980:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042698Cu); st32((c.r[16].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 228u, depth + 1u); else { c.pc = 0x00216160u; return; } if (c.pc != 0x0042698Cu) [[unlikely]] return; }
L_0042698C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426994u); st32((c.r[16].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x00426994u) [[unlikely]] return; }
L_00426994:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004269A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x004269A0u) [[unlikely]] return; }
L_004269A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004269A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004269C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004269D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003E(c, 80u, depth + 1u); else { c.pc = 0x00218C30u; return; } if (c.pc != 0x004269D8u) [[unlikely]] return; }
L_004269D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00426AA0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00426A5C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00426A34; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00426A10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00426B14; } }
L_00426A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426A18u);  if (depth < kMaxDepth) unit_0025(c, 302u, depth + 1u); else { c.pc = 0x001B5C40u; return; } if (c.pc != 0x00426A18u) [[unlikely]] return; }
L_00426A18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426A24u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 447u, depth + 1u); else { c.pc = 0x00423320u; return; } if (c.pc != 0x00426A24u) [[unlikely]] return; }
L_00426A24:
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00426B10; } }
L_00426A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426A3Cu);  if (depth < kMaxDepth) unit_003D(c, 224u, depth + 1u); else { c.pc = 0x002160C0u; return; } if (c.pc != 0x00426A3Cu) [[unlikely]] return; }
L_00426A3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00426B10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426A4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 241u, depth + 1u); else { c.pc = 0x002163D0u; return; } if (c.pc != 0x00426A4Cu) [[unlikely]] return; }
L_00426A4C:
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00426B10; } }
L_00426A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426A64u);  if (depth < kMaxDepth) unit_003D(c, 224u, depth + 1u); else { c.pc = 0x002160C0u; return; } if (c.pc != 0x00426A64u) [[unlikely]] return; }
L_00426A64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00426B10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426A74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 414u, depth + 1u); else { c.pc = 0x00426400u; return; } if (c.pc != 0x00426A74u) [[unlikely]] return; }
L_00426A74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00426A88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426A84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 413u, depth + 1u); else { c.pc = 0x004263F0u; return; } if (c.pc != 0x00426A84u) [[unlikely]] return; }
L_00426A84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00426A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426A90u);  if (depth < kMaxDepth) unit_003D(c, 232u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x00426A90u) [[unlikely]] return; }
L_00426A90:
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00426B10; } }
L_00426AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426AA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 224u, depth + 1u); else { c.pc = 0x002160C0u; return; } if (c.pc != 0x00426AA8u) [[unlikely]] return; }
L_00426AA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00426B10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426AB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 414u, depth + 1u); else { c.pc = 0x00426400u; return; } if (c.pc != 0x00426AB8u) [[unlikely]] return; }
L_00426AB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00426ACC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426AC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 413u, depth + 1u); else { c.pc = 0x004263F0u; return; } if (c.pc != 0x00426AC8u) [[unlikely]] return; }
L_00426AC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00426ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426AD4u);  if (depth < kMaxDepth) unit_003D(c, 225u, depth + 1u); else { c.pc = 0x002160F0u; return; } if (c.pc != 0x00426AD4u) [[unlikely]] return; }
L_00426AD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00426AE8; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00426AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426AF0u);  if (depth < kMaxDepth) unit_003D(c, 227u, depth + 1u); else { c.pc = 0x00216110u; return; } if (c.pc != 0x00426AF0u) [[unlikely]] return; }
L_00426AF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426AFCu); st32((c.r[17].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 228u, depth + 1u); else { c.pc = 0x00216160u; return; } if (c.pc != 0x00426AFCu) [[unlikely]] return; }
L_00426AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426B04u); st32((c.r[17].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x00426B04u) [[unlikely]] return; }
L_00426B04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426B10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00426B10u) [[unlikely]] return; }
L_00426B10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00426B14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00426B30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426B48u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003E(c, 80u, depth + 1u); else { c.pc = 0x00218C30u; return; } if (c.pc != 0x00426B48u) [[unlikely]] return; }
L_00426B48:
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00426C18; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00426B98; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00426B74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00426CB0; } }
L_00426B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426B7Cu);  if (depth < kMaxDepth) unit_0025(c, 302u, depth + 1u); else { c.pc = 0x001B5C40u; return; } if (c.pc != 0x00426B7Cu) [[unlikely]] return; }
L_00426B7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426B88u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 447u, depth + 1u); else { c.pc = 0x00423320u; return; } if (c.pc != 0x00426B88u) [[unlikely]] return; }
L_00426B88:
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00426CAC; } }
L_00426B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426BA0u);  if (depth < kMaxDepth) unit_003D(c, 224u, depth + 1u); else { c.pc = 0x002160C0u; return; } if (c.pc != 0x00426BA0u) [[unlikely]] return; }
L_00426BA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00426CAC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_00426BFC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_00426BE8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_00426BD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 108u)));  if (t) { goto L_00426C0C; } }
L_00426BD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426BE0u); set32(c.r[5], c.r[5].w[0] - 28375u);  if (depth < kMaxDepth) unit_003D(c, 243u, depth + 1u); else { c.pc = 0x002163F0u; return; } if (c.pc != 0x00426BE0u) [[unlikely]] return; }
L_00426BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00426C08; } }
L_00426BE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426BF4u); set32(c.r[5], c.r[5].w[0] - 28362u);  if (depth < kMaxDepth) unit_003D(c, 243u, depth + 1u); else { c.pc = 0x002163F0u; return; } if (c.pc != 0x00426BF4u) [[unlikely]] return; }
L_00426BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00426C08; } }
L_00426BFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426C08u); set32(c.r[5], c.r[5].w[0] - 28349u);  if (depth < kMaxDepth) unit_003D(c, 243u, depth + 1u); else { c.pc = 0x002163F0u; return; } if (c.pc != 0x00426C08u) [[unlikely]] return; }
L_00426C08:
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 1;
L_00426C0C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00426CAC; } }
L_00426C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426C20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 224u, depth + 1u); else { c.pc = 0x002160C0u; return; } if (c.pc != 0x00426C20u) [[unlikely]] return; }
L_00426C20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00426CAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426C30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 414u, depth + 1u); else { c.pc = 0x00426400u; return; } if (c.pc != 0x00426C30u) [[unlikely]] return; }
L_00426C30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00426C44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426C40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 413u, depth + 1u); else { c.pc = 0x004263F0u; return; } if (c.pc != 0x00426C40u) [[unlikely]] return; }
L_00426C40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00426C44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426C4Cu);  if (depth < kMaxDepth) unit_003D(c, 225u, depth + 1u); else { c.pc = 0x002160F0u; return; } if (c.pc != 0x00426C4Cu) [[unlikely]] return; }
L_00426C4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00426C60; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00426C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426C68u);  if (depth < kMaxDepth) unit_003D(c, 227u, depth + 1u); else { c.pc = 0x00216110u; return; } if (c.pc != 0x00426C68u) [[unlikely]] return; }
L_00426C68:
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426C74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 228u, depth + 1u); else { c.pc = 0x00216160u; return; } if (c.pc != 0x00426C74u) [[unlikely]] return; }
L_00426C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426C7Cu); st32((c.r[17].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x00426C7Cu) [[unlikely]] return; }
L_00426C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426C84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 41u, depth + 1u); else { c.pc = 0x003BC790u; return; } if (c.pc != 0x00426C84u) [[unlikely]] return; }
L_00426C84:
    c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00426CA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426C98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 414u, depth + 1u); else { c.pc = 0x00426400u; return; } if (c.pc != 0x00426C98u) [[unlikely]] return; }
L_00426C98:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_00426CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426CACu);  if (depth < kMaxDepth) unit_00C0(c, 445u, depth + 1u); else { c.pc = 0x004232B0u; return; } if (c.pc != 0x00426CACu) [[unlikely]] return; }
L_00426CAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00426CB0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00426CC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426CD8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 80u, depth + 1u); else { c.pc = 0x00218C30u; return; } if (c.pc != 0x00426CD8u) [[unlikely]] return; }
L_00426CD8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_00426CF8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426CF0u); set32(c.r[4], c.r[4].w[0] - 28336u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x00426CF0u) [[unlikely]] return; }
L_00426CF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00426D98; } }
L_00426CF8:
    set32(c.r[3], ld32((c.r[3].w[0] + 18656u)));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(389ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00426D94; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 18656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426D1Cu); st32((c.r[28].w[0] - 31752u), 0u);  if (depth < kMaxDepth) unit_003D(c, 212u, depth + 1u); else { c.pc = 0x00215F00u; return; } if (c.pc != 0x00426D1Cu) [[unlikely]] return; }
L_00426D1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426D2Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 213u, depth + 1u); else { c.pc = 0x00215F10u; return; } if (c.pc != 0x00426D2Cu) [[unlikely]] return; }
L_00426D2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426D38u); set32(c.r[4], c.r[4].w[0] - 28307u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00426D38u) [[unlikely]] return; }
L_00426D38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 18656u)));
    set32(c.r[4], c.r[4].w[0] - 28289u);
    set32(c.r[6], 0u + 389u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426D54u); set32(c.r[7], c.r[5].w[0] - 389u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00426D54u) [[unlikely]] return; }
L_00426D54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull | 50630ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426D64u); set32(c.r[4], c.r[4].w[0] - 28236u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00426D64u) [[unlikely]] return; }
L_00426D64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    set32(c.r[4], c.r[4].w[0] - 28215u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426D78u); c.r[5].d[0] = c.r[2].d[0] | 12536ull;  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00426D78u) [[unlikely]] return; }
L_00426D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426D80u); set32(c.r[4], 0u + 168u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00426D80u) [[unlikely]] return; }
L_00426D80:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00426D94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426D94u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 390u, depth + 1u); else { c.pc = 0x004261C0u; return; } if (c.pc != 0x00426D94u) [[unlikely]] return; }
L_00426D94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00426D98:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00426DB0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30108u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 4;
    { set32(c.r[5], c.r[5].w[0] + 19656u);  goto L_00426DC0; }
L_00426DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 16u), c.f[2]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426DF0u); st32((c.r[29].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_00C0(c, 443u, depth + 1u); else { c.pc = 0x00423230u; return; } if (c.pc != 0x00426DF0u) [[unlikely]] return; }
L_00426DF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00426E00:
    set32(c.r[4], ld32((c.r[28].w[0] - 30108u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 4;
    { set32(c.r[5], c.r[5].w[0] + 19672u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00426DC0u | kUnwind; return; } goto L_00426DC0; }
L_00426E10:
    set32(c.r[4], ld32((c.r[28].w[0] - 30108u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 4;
    { set32(c.r[5], c.r[5].w[0] + 19688u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00426DC0u | kUnwind; return; } goto L_00426DC0; }
L_00426E20:
    set32(c.r[2], ld32((c.r[28].w[0] - 30108u)));
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 132u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30108u)));
    st32((c.r[2].w[0] + 136u), c.r[5].w[0]);
    c.budget -= 5;
L_00426E34:
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[2], ld32((c.r[28].w[0] - 30108u)));
    set32(c.r[4], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[8].w[0]);
    st32((c.r[4].w[0] + 140u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[9].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 30108u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 152u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00426E34u | kUnwind; return; } goto L_00426E34; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30108u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 4;
    { set32(c.r[5], c.r[5].w[0] + 19704u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00426DC0u | kUnwind; return; } goto L_00426DC0; }
L_00426E80:
    set32(c.r[2], ld32((c.r[28].w[0] - 30108u)));
    st32((c.r[2].w[0] + 124u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30108u)));
    st32((c.r[2].w[0] + 128u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30108u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 8;
    { set32(c.r[5], c.r[5].w[0] + 19720u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00426DC0u | kUnwind; return; } goto L_00426DC0; }
L_00426EA0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30108u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 4;
    { set32(c.r[5], c.r[5].w[0] + 19736u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00426DC0u | kUnwind; return; } goto L_00426DC0; }
L_00426EB0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30108u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 4;
    { set32(c.r[5], c.r[5].w[0] + 19752u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00426DC0u | kUnwind; return; } goto L_00426DC0; }
L_00426EC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30108u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[2].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30108u)));
    c.budget -= 6;
    { set32(c.r[5], c.r[5].w[0] + 19768u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00426DC0u | kUnwind; return; } goto L_00426DC0; }
L_00426EE0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30108u)));  goto L_00426EF0; }
L_00426EF0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00142090u | kUnwind; return; } [[clang::musttail]] return unit_0008(c, 170u, depth); }
L_00426F00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426F10u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00426F10u) [[unlikely]] return; }
L_00426F10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30108u)));  goto L_00426F20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00426F28; } }
L_00426F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426F28u);  if (depth < kMaxDepth) unit_00C1(c, 547u, depth + 1u); else { c.pc = 0x00426F40u; return; } if (c.pc != 0x00426F28u) [[unlikely]] return; }
L_00426F28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00426F40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 100u)));  c.pc = t; return; }
L_00426F50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426F60u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00426F60u) [[unlikely]] return; }
L_00426F60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30108u)));  goto L_00426F70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00426F80; } }
L_00426F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426F78u);  if (depth < kMaxDepth) unit_00C1(c, 547u, depth + 1u); else { c.pc = 0x00426F40u; return; } if (c.pc != 0x00426F78u) [[unlikely]] return; }
L_00426F78:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_00426F80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00426F90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426FA0u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00426FA0u) [[unlikely]] return; }
L_00426FA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30108u)));  goto L_00426FB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00426FB4; } }
L_00426FB0:
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 1;
L_00426FB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00426FC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00426FD0u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00426FD0u) [[unlikely]] return; }
L_00426FD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30108u)));  goto L_00426FE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427004; } }
L_00426FE0:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00427004; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00427000; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427004; } }
L_00427000:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00427004:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00427010:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427020u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00427020u) [[unlikely]] return; }
L_00427020:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30108u)));  goto L_00427030; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427040; } }
L_00427030:
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00427040; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00427040:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00427050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427060u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00427060u) [[unlikely]] return; }
L_00427060:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30108u)));  goto L_00427070; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427078; } }
L_00427070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427078u);  if (depth < kMaxDepth) unit_00C1(c, 560u, depth + 1u); else { c.pc = 0x00427090u; return; } if (c.pc != 0x00427078u) [[unlikely]] return; }
L_00427078:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00427090:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 96u)));  c.pc = t; return; }
L_004270A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004270B0u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x004270B0u) [[unlikely]] return; }
L_004270B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30108u)));  goto L_004270C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004270E4; } }
L_004270C0:
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 120u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_004270E4; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004270E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004270E4; } }
L_004270E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004270E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004270F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427100u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00427100u) [[unlikely]] return; }
L_00427100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00427110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427158; } }
L_00427110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427118u);  if (depth < kMaxDepth) unit_00C1(c, 555u, depth + 1u); else { c.pc = 0x00427010u; return; } if (c.pc != 0x00427118u) [[unlikely]] return; }
L_00427118:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30108u)));  goto L_00427128; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00427158; } }
L_00427128:
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 120u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00427158; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00427154; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00427154; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427158; } }
L_00427154:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00427158:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00427170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427180u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00427180u) [[unlikely]] return; }
L_00427180:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30108u)));  goto L_00427190; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004271A4; } }
L_00427190:
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 120u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_004271A4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004271A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004271B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004271C0u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x004271C0u) [[unlikely]] return; }
L_004271C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00427200; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004271D0u);  if (depth < kMaxDepth) unit_00C1(c, 553u, depth + 1u); else { c.pc = 0x00426FC0u; return; } if (c.pc != 0x004271D0u) [[unlikely]] return; }
L_004271D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00427200; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004271E0u);  if (depth < kMaxDepth) unit_00C1(c, 551u, depth + 1u); else { c.pc = 0x00426F90u; return; } if (c.pc != 0x004271E0u) [[unlikely]] return; }
L_004271E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004271F4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00427200; } }
L_004271F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004271FCu);  if (depth < kMaxDepth) unit_00C1(c, 535u, depth + 1u); else { c.pc = 0x00426E00u; return; } if (c.pc != 0x004271FCu) [[unlikely]] return; }
L_004271FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00427200:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00427210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427220u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00427220u) [[unlikely]] return; }
L_00427220:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00427260; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427230u);  if (depth < kMaxDepth) unit_00C1(c, 553u, depth + 1u); else { c.pc = 0x00426FC0u; return; } if (c.pc != 0x00427230u) [[unlikely]] return; }
L_00427230:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00427260; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427240u);  if (depth < kMaxDepth) unit_00C1(c, 551u, depth + 1u); else { c.pc = 0x00426F90u; return; } if (c.pc != 0x00427240u) [[unlikely]] return; }
L_00427240:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00427254; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00427260; } }
L_00427254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042725Cu);  if (depth < kMaxDepth) unit_00C1(c, 535u, depth + 1u); else { c.pc = 0x00426E00u; return; } if (c.pc != 0x0042725Cu) [[unlikely]] return; }
L_0042725C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00427260:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00427270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427280u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00427280u) [[unlikely]] return; }
L_00427280:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004272AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427290u);  if (depth < kMaxDepth) unit_00C1(c, 551u, depth + 1u); else { c.pc = 0x00426F90u; return; } if (c.pc != 0x00427290u) [[unlikely]] return; }
L_00427290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004272A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004272AC; } }
L_004272A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004272A8u);  if (depth < kMaxDepth) unit_00C1(c, 535u, depth + 1u); else { c.pc = 0x00426E00u; return; } if (c.pc != 0x004272A8u) [[unlikely]] return; }
L_004272A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004272AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004272C0:
    set32(c.r[5], c.r[4].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] | 12520ull;  if (t) { goto L_004272E8; } }
L_004272D8:
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_004272E8:
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004272D8u | kUnwind; return; } goto L_004272D8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00427300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], 0u + 27u);  goto L_00427320; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427380; } }
L_00427320:
    set32(c.r[2], 0u + 5u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427330u); st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C1(c, 587u, depth + 1u); else { c.pc = 0x00427390u; return; } if (c.pc != 0x00427330u) [[unlikely]] return; }
L_00427330:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00427340; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427380; } }
L_00427340:
    set32(c.r[4], 0u + 4556u);
    c.budget -= 1;
L_00427344:
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[2].w[0] - 11320u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00427344u | kUnwind; return; } goto L_00427344; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00050000u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 10760u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 12532u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_00427380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00427390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004273AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427408; } }
L_004273AC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_004273BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004273C4u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x004273C4u) [[unlikely]] return; }
L_004273C4:
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004273BCu | kUnwind; return; } goto L_004273BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004273E4u);  if (depth < kMaxDepth) unit_0048(c, 39u, depth + 1u); else { c.pc = 0x002403F0u; return; } if (c.pc != 0x004273E4u) [[unlikely]] return; }
L_004273E4:
    c.r[1].d[0] = 0ull | 54177ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 20u);  goto L_004273FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427408; } }
L_004273FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427404u); c.r[5].d[0] = 0ull | 54176ull;  if (depth < kMaxDepth) unit_0048(c, 27u, depth + 1u); else { c.pc = 0x00240260u; return; } if (c.pc != 0x00427404u) [[unlikely]] return; }
L_00427404:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00427408:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00427420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00427438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427470; } }
L_00427438:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 16u));
    set32(c.r[16], c.r[4].w[0] + 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042744Cu); set32(c.r[4], c.r[4].w[0] - 28192u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0042744Cu) [[unlikely]] return; }
L_0042744C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427454u); set32(c.r[4], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0048(c, 34u, depth + 1u); else { c.pc = 0x00240340u; return; } if (c.pc != 0x00427454u) [[unlikely]] return; }
L_00427454:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00427464; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427470; } }
L_00427464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042746Cu);  if (depth < kMaxDepth) unit_00C1(c, 261u, depth + 1u); else { c.pc = 0x004257E0u; return; } if (c.pc != 0x0042746Cu) [[unlikely]] return; }
L_0042746C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00427470:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00427480:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004274B8; } }
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_0042754C; }
    c.r[1].d[0] = c.r[17].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], 0u + 4556u);  goto L_004274C4; }
L_004274B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042754C; } }
L_004274C4:
    c.r[1].d[0] = 0ull | 54212ull;
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004274E4u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C1(c, 126u, depth + 1u); else { c.pc = 0x00424E50u; return; } if (c.pc != 0x004274E4u) [[unlikely]] return; }
L_004274E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004274ECu); c.r[19].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00C1(c, 124u, depth + 1u); else { c.pc = 0x00424E20u; return; } if (c.pc != 0x004274ECu) [[unlikely]] return; }
L_004274EC:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004274F8u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C1(c, 147u, depth + 1u); else { c.pc = 0x00425070u; return; } if (c.pc != 0x004274F8u) [[unlikely]] return; }
L_004274F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427500u); st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C0(c, 414u, depth + 1u); else { c.pc = 0x00422CA0u; return; } if (c.pc != 0x00427500u) [[unlikely]] return; }
L_00427500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427508u); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C1(c, 135u, depth + 1u); else { c.pc = 0x00424F80u; return; } if (c.pc != 0x00427508u) [[unlikely]] return; }
L_00427508:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427514u); st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0048(c, 22u, depth + 1u); else { c.pc = 0x00240200u; return; } if (c.pc != 0x00427514u) [[unlikely]] return; }
L_00427514:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4545ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 12u);  goto L_00427528; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042754C; } }
L_00427528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427530u); set32(c.r[5], 0u + 4544u);  if (depth < kMaxDepth) unit_0048(c, 10u, depth + 1u); else { c.pc = 0x00240070u; return; } if (c.pc != 0x00427530u) [[unlikely]] return; }
L_00427530:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00050000u);  goto L_00427540; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042754C; } }
L_00427540:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 12532u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 3;
L_0042754C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00427570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00427594; } }
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_004275E8; }
    c.r[1].d[0] = c.r[5].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], 0u + 4556u);  goto L_004275A0; }
L_00427594:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004275E8; } }
L_004275A0:
    c.r[1].d[0] = 0ull | 54212ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004275C0u); set32(c.r[4], c.r[4].w[0] - 28162u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x004275C0u) [[unlikely]] return; }
L_004275C0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_004275D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004275E8; } }
L_004275D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004275DCu);  if (depth < kMaxDepth) unit_00C0(c, 413u, depth + 1u); else { c.pc = 0x00422C80u; return; } if (c.pc != 0x004275DCu) [[unlikely]] return; }
L_004275DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004275E4u); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0048(c, 17u, depth + 1u); else { c.pc = 0x00240150u; return; } if (c.pc != 0x004275E4u) [[unlikely]] return; }
L_004275E4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004275E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00427600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00427620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427748; } }
L_00427620:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], 0u + 17u);
    c.r[1].d[0] = c.r[1].d[0] | 10756ull;
    set32(c.r[16], c.r[4].w[0] + c.r[1].w[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427640u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C1(c, 124u, depth + 1u); else { c.pc = 0x00424E20u; return; } if (c.pc != 0x00427640u) [[unlikely]] return; }
L_00427640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427648u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C1(c, 157u, depth + 1u); else { c.pc = 0x00425170u; return; } if (c.pc != 0x00427648u) [[unlikely]] return; }
L_00427648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427650u); st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0024(c, 612u, depth + 1u); else { c.pc = 0x001B3FA0u; return; } if (c.pc != 0x00427650u) [[unlikely]] return; }
L_00427650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427658u); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 414u, depth + 1u); else { c.pc = 0x00422CA0u; return; } if (c.pc != 0x00427658u) [[unlikely]] return; }
L_00427658:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004276AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427674u);  if (depth < kMaxDepth) unit_00C0(c, 382u, depth + 1u); else { c.pc = 0x004228F0u; return; } if (c.pc != 0x00427674u) [[unlikely]] return; }
L_00427674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042767Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 384u, depth + 1u); else { c.pc = 0x00422930u; return; } if (c.pc != 0x0042767Cu) [[unlikely]] return; }
L_0042767C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1760ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 16u);  if (t) { goto L_00427698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427748; } }
L_00427698:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004276A4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x004276A4u) [[unlikely]] return; }
L_004276A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00427748; } }
L_004276AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004276B4u);  if (depth < kMaxDepth) unit_00C0(c, 390u, depth + 1u); else { c.pc = 0x004229D0u; return; } if (c.pc != 0x004276B4u) [[unlikely]] return; }
L_004276B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004276BCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 392u, depth + 1u); else { c.pc = 0x00422A10u; return; } if (c.pc != 0x004276BCu) [[unlikely]] return; }
L_004276BC:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4545ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 16u);  if (t) { goto L_004276D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427748; } }
L_004276D0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004276DCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x004276DCu) [[unlikely]] return; }
L_004276DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004276E4u);  if (depth < kMaxDepth) unit_0048(c, 22u, depth + 1u); else { c.pc = 0x00240200u; return; } if (c.pc != 0x004276E4u) [[unlikely]] return; }
L_004276E4:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4545ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 4560u);  if (t) { goto L_004276F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427748; } }
L_004276F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427700u); set32(c.r[5], 0u + 4544u);  if (depth < kMaxDepth) unit_0048(c, 10u, depth + 1u); else { c.pc = 0x00240070u; return; } if (c.pc != 0x00427700u) [[unlikely]] return; }
L_00427700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00427710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427748; } }
L_00427710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427718u);  if (depth < kMaxDepth) unit_00C0(c, 386u, depth + 1u); else { c.pc = 0x00422960u; return; } if (c.pc != 0x00427718u) [[unlikely]] return; }
L_00427718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427720u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 388u, depth + 1u); else { c.pc = 0x004229A0u; return; } if (c.pc != 0x00427720u) [[unlikely]] return; }
L_00427720:
    c.r[1].d[0] = 0ull | 58209ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 9104u);  if (t) { goto L_00427738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427748; } }
L_00427738:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427744u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00427744u) [[unlikely]] return; }
L_00427744:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00427748:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00427760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00427780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004278C4; } }
L_00427780:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[1].d[0] = c.r[1].d[0] | 10756ull;
    set32(c.r[16], c.r[4].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042779Cu); set32(c.r[4], c.r[4].w[0] - 28130u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0042779Cu) [[unlikely]] return; }
L_0042779C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_004277B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004278C4; } }
L_004277B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004277B8u);  if (depth < kMaxDepth) unit_00C0(c, 413u, depth + 1u); else { c.pc = 0x00422C80u; return; } if (c.pc != 0x004277B8u) [[unlikely]] return; }
L_004277B8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[16].w[0] + 16u);  goto L_00427808; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004277CCu); set32(c.r[18], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00C0(c, 382u, depth + 1u); else { c.pc = 0x004228F0u; return; } if (c.pc != 0x004277CCu) [[unlikely]] return; }
L_004277CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004277D4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 384u, depth + 1u); else { c.pc = 0x00422930u; return; } if (c.pc != 0x004277D4u) [[unlikely]] return; }
L_004277D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1761ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_004277F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004278C4; } }
L_004277F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427800u); c.r[6].d[0] = c.r[2].d[0] | 1760ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00427800u) [[unlikely]] return; }
L_00427800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));  if (t) { goto L_004278AC; } }
L_00427808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427810u);  if (depth < kMaxDepth) unit_00C0(c, 390u, depth + 1u); else { c.pc = 0x004229D0u; return; } if (c.pc != 0x00427810u) [[unlikely]] return; }
L_00427810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427818u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 392u, depth + 1u); else { c.pc = 0x00422A10u; return; } if (c.pc != 0x00427818u) [[unlikely]] return; }
L_00427818:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4545ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042782C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004278C4; } }
L_0042782C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427838u); set32(c.r[6], 0u + 4544u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00427838u) [[unlikely]] return; }
L_00427838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427840u); set32(c.r[17], c.r[16].w[0] + 4560u);  if (depth < kMaxDepth) unit_0048(c, 22u, depth + 1u); else { c.pc = 0x00240200u; return; } if (c.pc != 0x00427840u) [[unlikely]] return; }
L_00427840:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4545ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00427854; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004278C4; } }
L_00427854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042785Cu);  if (depth < kMaxDepth) unit_0048(c, 17u, depth + 1u); else { c.pc = 0x00240150u; return; } if (c.pc != 0x0042785Cu) [[unlikely]] return; }
L_0042785C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[16].w[0] + 9104u);  goto L_0042786C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004278C4; } }
L_0042786C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427874u);  if (depth < kMaxDepth) unit_00C0(c, 386u, depth + 1u); else { c.pc = 0x00422960u; return; } if (c.pc != 0x00427874u) [[unlikely]] return; }
L_00427874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042787Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 388u, depth + 1u); else { c.pc = 0x004229A0u; return; } if (c.pc != 0x0042787Cu) [[unlikely]] return; }
L_0042787C:
    c.r[1].d[0] = 0ull | 58209ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00427894; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004278C4; } }
L_00427894:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004278A0u); c.r[6].d[0] = 0ull | 58208ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x004278A0u) [[unlikely]] return; }
L_004278A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004278A8u);  if (depth < kMaxDepth) unit_00C1(c, 161u, depth + 1u); else { c.pc = 0x004251F0u; return; } if (c.pc != 0x004278A8u) [[unlikely]] return; }
L_004278A8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 1;
L_004278AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 1900u);  goto L_004278B8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_004278B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004278C0u);  if (depth < kMaxDepth) unit_0024(c, 608u, depth + 1u); else { c.pc = 0x001B3F60u; return; } if (c.pc != 0x004278C0u) [[unlikely]] return; }
L_004278C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004278C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004278E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004278F0u); c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 582u, depth + 1u); else { c.pc = 0x004272C0u; return; } if (c.pc != 0x004278F0u) [[unlikely]] return; }
L_004278F0:
    st32((c.r[7].w[0] + 12u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00427910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00427930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427A80; } }
L_00427930:
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].d[0] = ld16((c.r[17].w[0] + 2u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427944u); set32(c.r[4], c.r[4].w[0] - 28099u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00427944u) [[unlikely]] return; }
L_00427944:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[2], 0u + 27u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[7], ld32((c.r[17].w[0] + 12u)));  goto L_00427968; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427960u); set32(c.r[4], c.r[4].w[0] - 28067u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00427960u) [[unlikely]] return; }
L_00427960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427A80; } }
L_00427968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427970u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 582u, depth + 1u); else { c.pc = 0x004272C0u; return; } if (c.pc != 0x00427970u) [[unlikely]] return; }
L_00427970:
    c.budget -= 2;
    if (c.r[7].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[17].w[0] + 36u);  goto L_0042798C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427984u); set32(c.r[4], c.r[4].w[0] - 28044u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00427984u) [[unlikely]] return; }
L_00427984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427A80; } }
L_0042798C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427994u);  if (depth < kMaxDepth) unit_0048(c, 47u, depth + 1u); else { c.pc = 0x002404D0u; return; } if (c.pc != 0x00427994u) [[unlikely]] return; }
L_00427994:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_004279F4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004279A8u); set32(c.r[4], c.r[4].w[0] - 28029u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x004279A8u) [[unlikely]] return; }
L_004279A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427A80; } }
L_004279B0:
    c.r[1].d[0] = 0ull | 54212ull;
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 4u));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004279F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004279D4u); set32(c.r[4], c.r[3].w[0] + 12u);  if (depth < kMaxDepth) unit_0048(c, 44u, depth + 1u); else { c.pc = 0x00240450u; return; } if (c.pc != 0x004279D4u) [[unlikely]] return; }
L_004279D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004279F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004279E8u); set32(c.r[4], c.r[4].w[0] - 28012u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x004279E8u) [[unlikely]] return; }
L_004279E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427A80; } }
L_004279F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004279F4:
    c.r[2].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 4556u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004279B0u | kUnwind; return; } goto L_004279B0; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[1].d[0] = c.r[1].d[0] | 10756ull;
    set32(c.r[16], c.r[17].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00427A80; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 16u);  goto L_00427A48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427A2Cu); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0048(c, 50u, depth + 1u); else { c.pc = 0x00240550u; return; } if (c.pc != 0x00427A2Cu) [[unlikely]] return; }
L_00427A2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00427A7C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427A40u); set32(c.r[4], c.r[4].w[0] - 27997u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00427A40u) [[unlikely]] return; }
L_00427A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427A80; } }
L_00427A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427A50u);  if (depth < kMaxDepth) unit_0048(c, 44u, depth + 1u); else { c.pc = 0x00240450u; return; } if (c.pc != 0x00427A50u) [[unlikely]] return; }
L_00427A50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00427A68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427A60u); set32(c.r[4], c.r[16].w[0] + 4560u);  if (depth < kMaxDepth) unit_0048(c, 44u, depth + 1u); else { c.pc = 0x00240450u; return; } if (c.pc != 0x00427A60u) [[unlikely]] return; }
L_00427A60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00427A7C; } }
L_00427A68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427A74u); set32(c.r[4], c.r[4].w[0] - 27975u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00427A74u) [[unlikely]] return; }
L_00427A74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00427A80; } }
L_00427A7C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00427A80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00427AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427AB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 20u, depth + 1u); else { c.pc = 0x001FC2E0u; return; } if (c.pc != 0x00427AB4u) [[unlikely]] return; }
L_00427AB4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00427B70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427AC4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 322u, depth + 1u); else { c.pc = 0x0034EE50u; return; } if (c.pc != 0x00427AC4u) [[unlikely]] return; }
L_00427AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427ACCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 666u, depth + 1u); else { c.pc = 0x00427BA0u; return; } if (c.pc != 0x00427ACCu) [[unlikely]] return; }
L_00427ACC:
    set32(c.r[3], 0u + 3840u);
    set32(c.r[4], 0u + 16383u);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = ld64((c.r[16].w[0] + 56u));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[6].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00427B6C; } }
    st64((c.r[16].w[0] + 56u), c.r[6].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] - 27952u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld64((c.r[3].w[0]));
    c.budget -= 9;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_00427B54; }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(39ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00427B6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427B2Cu);  if (depth < kMaxDepth) unit_000B(c, 122u, depth + 1u); else { c.pc = 0x0014EDE0u; return; } if (c.pc != 0x00427B2Cu) [[unlikely]] return; }
L_00427B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427B34u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 128u, depth + 1u); else { c.pc = 0x001B0BF0u; return; } if (c.pc != 0x00427B34u) [[unlikely]] return; }
L_00427B34:
    set32(c.r[4], 0u + 13u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427B44u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00427B44u) [[unlikely]] return; }
L_00427B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427B4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 665u, depth + 1u); else { c.pc = 0x00427B80u; return; } if (c.pc != 0x00427B4Cu) [[unlikely]] return; }
L_00427B4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00427B6C; } }
L_00427B54:
    c.r[3].d[0] = ld64((c.r[3].w[0] - 27952u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; st32((c.r[16].w[0] + 52u), 0u);  if (t) { goto L_00427B6C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 3;
L_00427B6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00427B70:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00427B80:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_00427BA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld64((c.r[4].w[0] + 72u));  c.pc = t; return; }
L_00427BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427BC8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00427BC8u) [[unlikely]] return; }
L_00427BC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00427BE0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427BDCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 670u, depth + 1u); else { c.pc = 0x00427BF0u; return; } if (c.pc != 0x00427BDCu) [[unlikely]] return; }
L_00427BDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00427BE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00427BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427C04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00427C04u) [[unlikely]] return; }
L_00427C04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 16432u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427C20u); st64((c.r[16].w[0] + 56u), 0ull);  if (depth < kMaxDepth) unit_000B(c, 141u, depth + 1u); else { c.pc = 0x0014EEF0u; return; } if (c.pc != 0x00427C20u) [[unlikely]] return; }
L_00427C20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00427C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00427C88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 16432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427C70u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00427C70u) [[unlikely]] return; }
L_00427C70:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00427C8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00427C88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00427C88u) [[unlikely]] return; }
L_00427C88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00427C8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
}

}
