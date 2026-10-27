#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002F[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13,
    0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 20, 0, 0, 21, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0,
    0, 45, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 52,
    0, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0,
    61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70,
    0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 80,
    0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0,
    0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0,
    99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109,
    0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 122,
    0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    128, 0, 0, 129, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0,
    0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 157,
    0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 172, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0,
    0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 180, 0, 181, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0,
    187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 205,
    0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 211,
    0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 222,
    0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 238, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0,
    0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250,
    0, 0, 251, 0, 252, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 260, 0, 261, 0, 0,
    262, 0, 263, 0, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 276, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 279,
    0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0,
    0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 301, 0, 0, 302, 0, 0, 0,
    0, 303, 0, 304, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0,
    317, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0,
    0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0,
    0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 350, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0,
    0, 361, 0, 0, 362, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0,
    0, 0, 367, 0, 368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 375,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379,
    0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 383, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 388, 0, 0, 0,
    389, 0, 0, 390, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 0,
    0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0,
    409, 0, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 417, 0, 418, 0, 419,
    0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0,
    424, 0, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0,
    0, 436, 0, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 0, 445, 0, 0,
    446, 0, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458,
    0, 0, 459, 0, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 0, 466, 0, 0, 467, 0, 0, 468,
    0, 0, 469, 0, 0, 470, 0, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 477, 0, 0,
    478, 0, 0, 479, 0, 0, 480, 0, 0, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 486, 0, 0, 0, 487, 0, 0,
    488, 0, 0, 489, 0, 0, 490, 0, 0, 491, 0, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 497, 0,
    0, 498, 0, 0, 499, 0, 0, 500, 0, 0, 501, 0, 0, 0, 502, 0, 0, 503, 0, 0, 504, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0,
    507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 513,
    0, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 517, 0, 518, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    520, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0,
    0, 526, 0, 0, 527, 0, 0, 528, 0, 0, 529, 0, 530, 0, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 0, 0,
    0, 536, 0, 0, 537, 0, 0, 538, 0, 0, 539, 0, 0, 540, 0, 541, 0, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 0, 546,
    0, 0, 0, 0, 547, 0, 0, 548, 0, 0, 549, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0,
    560, 0, 0, 561, 0, 562, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566,
    0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 572, 0, 0, 573,
    0, 0, 574, 0, 575, 0, 0, 0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 582, 0, 0, 583,
    0, 0, 584, 0, 0, 585, 0, 0, 0, 586, 0, 0, 587, 0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 0, 591, 0, 0, 0, 592, 0, 0, 593,
    0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 0, 597, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0,
    603, 0, 0, 604, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0,
    0, 0, 609, 0, 610, 0, 0, 0, 611, 0, 0, 612, 0, 0, 613, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 616, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0,
    622, 0, 0, 623, 0, 0, 624, 0, 0, 625, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 631, 0, 632,
    0, 0, 0, 633, 0, 0, 634, 0, 0, 635, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 640, 0, 0, 641, 0, 0,
    642, 0, 0, 0, 643, 0, 0, 644, 0, 0, 645, 0, 0, 646, 0, 0, 647, 0, 0, 648, 0, 0, 0, 649, 0, 0, 650, 0, 0, 651, 0, 0,
    652, 0, 0, 653, 0, 0, 0, 654, 0, 0, 655, 0, 0, 656, 0, 0, 657, 0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 661, 0,
    662, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 670, 0, 0, 0, 671, 0, 0, 672, 0, 0,
    673, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 677, 0, 0, 678, 0, 0, 679, 0, 0, 680, 0, 681, 0, 0, 0, 0, 0, 682,
    0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 693, 0, 0, 694, 0,
    0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 699,
    0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 705, 0, 0, 706,
    0, 0, 707, 0, 708, 0, 0, 0, 709, 0, 0, 710, 0, 0, 711, 0, 0, 712, 0, 0, 713, 0, 0, 714, 0, 0, 0, 715, 0, 0, 716, 0,
    0, 717, 0, 0, 718, 0, 0, 719, 0, 720, 0, 0, 0, 721, 0, 0, 722, 0, 0, 723, 0, 0, 724, 0, 0, 725, 0, 0, 726, 0, 0, 0,
    727, 0, 0, 728, 0, 0, 729, 0, 0, 730, 0, 0, 731, 0, 732, 0, 0, 0, 733, 0, 0, 734, 0, 0, 735, 0, 0, 736, 0, 0, 737, 0,
    0, 738, 0, 0, 0, 739, 0, 0, 740, 0, 0, 741, 0, 0, 742, 0, 0, 743, 0, 744, 0, 0, 0, 745, 0, 0, 746, 0, 0, 747, 0, 0,
    748, 0, 0, 749, 0, 0, 750, 0, 0, 0, 751, 0, 0, 752, 0, 0, 753, 0, 754, 0, 755, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 758, 0, 759, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 762, 0, 0, 763, 0,
    0, 0, 0, 0, 764, 0, 0, 765, 0, 766, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 769,
    0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 772, 0, 773, 0, 774, 0, 0, 0, 0, 775, 0, 0, 776, 0, 0, 0, 777, 0,
    0, 778, 0, 0, 779, 0, 0, 780, 0, 0, 781, 0, 782, 0, 0, 0, 783, 0, 0, 784, 0, 0, 785, 0, 0, 786, 0, 0, 787, 0, 0, 788,
    0, 0, 0, 789, 0, 0, 790, 0, 0, 791, 0, 0, 792, 0, 0, 793, 0, 794, 0, 0, 0, 795, 0, 0, 796, 0, 0, 797, 0, 0, 798, 0,
    0, 799, 0, 0, 800, 0, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 0, 804, 0, 0, 805, 0, 0, 0, 806, 0, 0, 807, 0, 0, 808, 0,
    809, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 813, 0,
    814, 0, 0, 0, 815, 0, 0, 0, 816, 0, 0, 817, 0, 0, 818, 0, 0, 0, 0, 0, 819, 0, 0, 820, 0, 0, 0, 821, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0, 825, 0, 0, 826, 0,
    0, 0, 827, 0, 828, 0, 829, 0, 0, 830, 0, 0, 831, 0, 0, 832, 0, 0, 833, 0, 834, 0, 0, 0, 835, 0, 0, 836, 0, 0, 837, 0,
    0, 838, 0, 0, 839, 0, 0, 840, 0, 0, 0, 841, 0, 0, 842, 0, 0, 843, 0, 0, 844, 0, 0, 845, 0, 846, 0, 0, 0, 847, 0, 0,
    848, 0, 0, 849, 0, 0, 850, 0, 0, 851, 0, 0, 852, 0, 0, 0, 853, 0, 0, 854, 0, 0, 855, 0, 0, 856, 0, 0, 857, 0, 0, 0,
    858, 0, 0, 859, 0, 0, 860, 0, 0, 861, 0, 0, 862, 0, 0, 863, 0, 0, 0, 864, 0, 0, 865, 0, 0, 866, 0, 0, 867, 0, 0, 868,
    0, 869, 0, 0, 0, 870, 0, 0, 871, 0, 0, 872, 0, 0, 873, 0, 0, 874, 0, 0, 875, 0, 0, 0, 876, 0, 0, 877, 0, 0, 878, 0,
    0, 879, 0, 0, 880, 0, 0, 0, 881, 0, 0, 882, 0, 0, 883, 0, 0, 884, 0, 0, 885, 0, 0, 886, 0, 0, 0, 887, 0, 0, 888, 0,
    0, 889, 0, 0, 890, 0, 0, 891, 0, 892, 0, 0, 0, 893, 0, 0, 894, 0, 0, 895, 0, 0, 896, 0, 0, 897, 0, 0, 898, 0, 0, 0,
    899, 0, 0, 900, 0, 0, 901, 0, 902, 0, 903, 0, 0, 0, 0, 0, 0, 0, 0, 0, 904, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 905,
    0, 0, 0, 0, 0, 0, 906, 0, 907, 0, 0, 0, 908, 0, 0, 0, 909, 0, 0, 910, 0, 0, 911, 0, 0, 0, 0, 0, 912, 0, 0, 913,
    0, 914, 0, 915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 916, 0, 0, 0, 0, 0, 0, 917, 0, 918, 0, 0, 0, 919, 0, 0,
    0, 0, 0, 920, 0, 0, 921, 0, 922, 0, 923, 0, 0, 0, 0, 924, 0, 0, 0, 0, 925, 0, 0, 926, 0, 0, 927, 0, 0, 928, 0, 0,
    929, 0, 930, 0, 0, 0, 931, 0, 0, 932, 0, 0, 933, 0, 0, 934, 0, 0, 935, 0, 0, 936, 0, 0, 0, 937, 0, 0, 938, 0, 0, 939,
    0, 0, 940, 0, 0, 941, 0, 942, 0, 0, 0, 943, 0, 0, 944, 0, 0, 945, 0, 0, 946, 0, 0, 947, 0, 0, 0, 0, 948, 0, 0, 949,
    0, 0, 950, 0, 951, 0, 952, 0, 0, 0, 0, 0, 0, 0, 0, 0, 953, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 954, 0, 0,
    0, 0, 0, 0, 955, 0, 956, 0, 0, 0, 957, 0, 0, 0, 958, 0, 0, 959, 0, 0, 960, 0, 0, 0, 0, 0, 961, 0, 0, 962, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 963, 0, 0, 0, 0, 0, 0, 964, 0, 0, 0, 0, 0, 965, 0, 0, 0, 0, 0, 966, 0, 0,
    967, 0, 0, 0, 0, 0, 0, 968, 969, 0, 0, 0, 970, 0, 0, 971, 0, 0, 972, 0, 0, 973, 0, 0, 974, 0, 0, 0, 975, 0, 0, 976,
    0, 0, 977, 0, 0, 978, 0, 0, 979, 0, 0, 980, 0, 0, 0, 981, 982, 0, 983, 0, 0, 984, 0, 0, 985, 0, 0, 986, 0, 0, 0, 987,
};

void unit_002F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001BC000;
    case 2u: goto L_001BC010;
    case 3u: goto L_001BC024;
    case 4u: goto L_001BC030;
    case 5u: goto L_001BC03C;
    case 6u: goto L_001BC044;
    case 7u: goto L_001BC054;
    case 8u: goto L_001BC05C;
    case 9u: goto L_001BC080;
    case 10u: goto L_001BC0B4;
    case 11u: goto L_001BC0DC;
    case 12u: goto L_001BC0F0;
    case 13u: goto L_001BC0FC;
    case 14u: goto L_001BC108;
    case 15u: goto L_001BC114;
    case 16u: goto L_001BC12C;
    case 17u: goto L_001BC150;
    case 18u: goto L_001BC168;
    case 19u: goto L_001BC180;
    case 20u: goto L_001BC190;
    case 21u: goto L_001BC19C;
    case 22u: goto L_001BC1A4;
    case 23u: goto L_001BC1AC;
    case 24u: goto L_001BC1BC;
    case 25u: goto L_001BC1C8;
    case 26u: goto L_001BC1D4;
    case 27u: goto L_001BC1DC;
    case 28u: goto L_001BC1EC;
    case 29u: goto L_001BC1F4;
    case 30u: goto L_001BC214;
    case 31u: goto L_001BC220;
    case 32u: goto L_001BC22C;
    case 33u: goto L_001BC238;
    case 34u: goto L_001BC244;
    case 35u: goto L_001BC24C;
    case 36u: goto L_001BC264;
    case 37u: goto L_001BC27C;
    case 38u: goto L_001BC28C;
    case 39u: goto L_001BC2A4;
    case 40u: goto L_001BC2BC;
    case 41u: goto L_001BC2C8;
    case 42u: goto L_001BC2D0;
    case 43u: goto L_001BC2E0;
    case 44u: goto L_001BC2EC;
    case 45u: goto L_001BC304;
    case 46u: goto L_001BC314;
    case 47u: goto L_001BC31C;
    case 48u: goto L_001BC334;
    case 49u: goto L_001BC364;
    case 50u: goto L_001BC36C;
    case 51u: goto L_001BC374;
    case 52u: goto L_001BC37C;
    case 53u: goto L_001BC390;
    case 54u: goto L_001BC39C;
    case 55u: goto L_001BC3A4;
    case 56u: goto L_001BC3BC;
    case 57u: goto L_001BC3C8;
    case 58u: goto L_001BC3D4;
    case 59u: goto L_001BC3E0;
    case 60u: goto L_001BC3F0;
    case 61u: goto L_001BC400;
    case 62u: goto L_001BC410;
    case 63u: goto L_001BC41C;
    case 64u: goto L_001BC428;
    case 65u: goto L_001BC434;
    case 66u: goto L_001BC444;
    case 67u: goto L_001BC450;
    case 68u: goto L_001BC464;
    case 69u: goto L_001BC470;
    case 70u: goto L_001BC47C;
    case 71u: goto L_001BC488;
    case 72u: goto L_001BC498;
    case 73u: goto L_001BC4A8;
    case 74u: goto L_001BC4B8;
    case 75u: goto L_001BC4C4;
    case 76u: goto L_001BC4D0;
    case 77u: goto L_001BC4DC;
    case 78u: goto L_001BC4E4;
    case 79u: goto L_001BC4EC;
    case 80u: goto L_001BC4FC;
    case 81u: goto L_001BC508;
    case 82u: goto L_001BC514;
    case 83u: goto L_001BC524;
    case 84u: goto L_001BC530;
    case 85u: goto L_001BC53C;
    case 86u: goto L_001BC548;
    case 87u: goto L_001BC558;
    case 88u: goto L_001BC568;
    case 89u: goto L_001BC578;
    case 90u: goto L_001BC584;
    case 91u: goto L_001BC590;
    case 92u: goto L_001BC59C;
    case 93u: goto L_001BC5AC;
    case 94u: goto L_001BC5B8;
    case 95u: goto L_001BC5CC;
    case 96u: goto L_001BC5D8;
    case 97u: goto L_001BC5E4;
    case 98u: goto L_001BC5F0;
    case 99u: goto L_001BC600;
    case 100u: goto L_001BC610;
    case 101u: goto L_001BC620;
    case 102u: goto L_001BC62C;
    case 103u: goto L_001BC638;
    case 104u: goto L_001BC644;
    case 105u: goto L_001BC64C;
    case 106u: goto L_001BC654;
    case 107u: goto L_001BC664;
    case 108u: goto L_001BC670;
    case 109u: goto L_001BC67C;
    case 110u: goto L_001BC68C;
    case 111u: goto L_001BC698;
    case 112u: goto L_001BC6A4;
    case 113u: goto L_001BC6AC;
    case 114u: goto L_001BC6B4;
    case 115u: goto L_001BC6BC;
    case 116u: goto L_001BC6CC;
    case 117u: goto L_001BC6D4;
    case 118u: goto L_001BC700;
    case 119u: goto L_001BC734;
    case 120u: goto L_001BC75C;
    case 121u: goto L_001BC770;
    case 122u: goto L_001BC77C;
    case 123u: goto L_001BC788;
    case 124u: goto L_001BC794;
    case 125u: goto L_001BC7AC;
    case 126u: goto L_001BC7D0;
    case 127u: goto L_001BC7E8;
    case 128u: goto L_001BC800;
    case 129u: goto L_001BC80C;
    case 130u: goto L_001BC814;
    case 131u: goto L_001BC81C;
    case 132u: goto L_001BC82C;
    case 133u: goto L_001BC838;
    case 134u: goto L_001BC844;
    case 135u: goto L_001BC850;
    case 136u: goto L_001BC85C;
    case 137u: goto L_001BC868;
    case 138u: goto L_001BC870;
    case 139u: goto L_001BC878;
    case 140u: goto L_001BC888;
    case 141u: goto L_001BC894;
    case 142u: goto L_001BC8A0;
    case 143u: goto L_001BC8AC;
    case 144u: goto L_001BC8B8;
    case 145u: goto L_001BC8C0;
    case 146u: goto L_001BC8D0;
    case 147u: goto L_001BC8DC;
    case 148u: goto L_001BC8E8;
    case 149u: goto L_001BC8F4;
    case 150u: goto L_001BC900;
    case 151u: goto L_001BC91C;
    case 152u: goto L_001BC934;
    case 153u: goto L_001BC94C;
    case 154u: goto L_001BC95C;
    case 155u: goto L_001BC968;
    case 156u: goto L_001BC974;
    case 157u: goto L_001BC97C;
    case 158u: goto L_001BC984;
    case 159u: goto L_001BC990;
    case 160u: goto L_001BC99C;
    case 161u: goto L_001BC9AC;
    case 162u: goto L_001BC9B8;
    case 163u: goto L_001BC9C4;
    case 164u: goto L_001BC9D0;
    case 165u: goto L_001BC9DC;
    case 166u: goto L_001BC9F4;
    case 167u: goto L_001BCA0C;
    case 168u: goto L_001BCA24;
    case 169u: goto L_001BCA34;
    case 170u: goto L_001BCA40;
    case 171u: goto L_001BCA4C;
    case 172u: goto L_001BCA54;
    case 173u: goto L_001BCA5C;
    case 174u: goto L_001BCA68;
    case 175u: goto L_001BCA74;
    case 176u: goto L_001BCA84;
    case 177u: goto L_001BCA90;
    case 178u: goto L_001BCA9C;
    case 179u: goto L_001BCAA8;
    case 180u: goto L_001BCAB0;
    case 181u: goto L_001BCAB8;
    case 182u: goto L_001BCAC4;
    case 183u: goto L_001BCACC;
    case 184u: goto L_001BCADC;
    case 185u: goto L_001BCAE8;
    case 186u: goto L_001BCAF4;
    case 187u: goto L_001BCB00;
    case 188u: goto L_001BCB0C;
    case 189u: goto L_001BCB18;
    case 190u: goto L_001BCB30;
    case 191u: goto L_001BCB48;
    case 192u: goto L_001BCB58;
    case 193u: goto L_001BCB70;
    case 194u: goto L_001BCB88;
    case 195u: goto L_001BCB90;
    case 196u: goto L_001BCB98;
    case 197u: goto L_001BCBA8;
    case 198u: goto L_001BCBB4;
    case 199u: goto L_001BCBF0;
    case 200u: goto L_001BCC1C;
    case 201u: goto L_001BCC44;
    case 202u: goto L_001BCC58;
    case 203u: goto L_001BCC64;
    case 204u: goto L_001BCC70;
    case 205u: goto L_001BCC7C;
    case 206u: goto L_001BCC94;
    case 207u: goto L_001BCCA0;
    case 208u: goto L_001BCCC0;
    case 209u: goto L_001BCCD8;
    case 210u: goto L_001BCCF0;
    case 211u: goto L_001BCCFC;
    case 212u: goto L_001BCD08;
    case 213u: goto L_001BCD10;
    case 214u: goto L_001BCD20;
    case 215u: goto L_001BCD2C;
    case 216u: goto L_001BCD38;
    case 217u: goto L_001BCD44;
    case 218u: goto L_001BCD50;
    case 219u: goto L_001BCD5C;
    case 220u: goto L_001BCD64;
    case 221u: goto L_001BCD6C;
    case 222u: goto L_001BCD7C;
    case 223u: goto L_001BCD88;
    case 224u: goto L_001BCD94;
    case 225u: goto L_001BCDA0;
    case 226u: goto L_001BCDAC;
    case 227u: goto L_001BCDB4;
    case 228u: goto L_001BCDC4;
    case 229u: goto L_001BCDD0;
    case 230u: goto L_001BCDDC;
    case 231u: goto L_001BCDE8;
    case 232u: goto L_001BCDF4;
    case 233u: goto L_001BCE10;
    case 234u: goto L_001BCE28;
    case 235u: goto L_001BCE34;
    case 236u: goto L_001BCE40;
    case 237u: goto L_001BCE4C;
    case 238u: goto L_001BCE54;
    case 239u: goto L_001BCE5C;
    case 240u: goto L_001BCE68;
    case 241u: goto L_001BCE74;
    case 242u: goto L_001BCE84;
    case 243u: goto L_001BCE90;
    case 244u: goto L_001BCE9C;
    case 245u: goto L_001BCEA8;
    case 246u: goto L_001BCEB4;
    case 247u: goto L_001BCECC;
    case 248u: goto L_001BCEE4;
    case 249u: goto L_001BCEF0;
    case 250u: goto L_001BCEFC;
    case 251u: goto L_001BCF08;
    case 252u: goto L_001BCF10;
    case 253u: goto L_001BCF18;
    case 254u: goto L_001BCF24;
    case 255u: goto L_001BCF30;
    case 256u: goto L_001BCF40;
    case 257u: goto L_001BCF4C;
    case 258u: goto L_001BCF58;
    case 259u: goto L_001BCF64;
    case 260u: goto L_001BCF6C;
    case 261u: goto L_001BCF74;
    case 262u: goto L_001BCF80;
    case 263u: goto L_001BCF88;
    case 264u: goto L_001BCF98;
    case 265u: goto L_001BCFA4;
    case 266u: goto L_001BCFB0;
    case 267u: goto L_001BCFB8;
    case 268u: goto L_001BCFC0;
    case 269u: goto L_001BCFE0;
    case 270u: goto L_001BD03C;
    case 271u: goto L_001BD044;
    case 272u: goto L_001BD04C;
    case 273u: goto L_001BD054;
    case 274u: goto L_001BD0BC;
    case 275u: goto L_001BD0C4;
    case 276u: goto L_001BD0CC;
    case 277u: goto L_001BD0DC;
    case 278u: goto L_001BD0E8;
    case 279u: goto L_001BD0FC;
    case 280u: goto L_001BD104;
    case 281u: goto L_001BD134;
    case 282u: goto L_001BD1A0;
    case 283u: goto L_001BD1A8;
    case 284u: goto L_001BD1B8;
    case 285u: goto L_001BD224;
    case 286u: goto L_001BD22C;
    case 287u: goto L_001BD278;
    case 288u: goto L_001BD284;
    case 289u: goto L_001BD290;
    case 290u: goto L_001BD2AC;
    case 291u: goto L_001BD2C0;
    case 292u: goto L_001BD2C8;
    case 293u: goto L_001BD2D8;
    case 294u: goto L_001BD3A8;
    case 295u: goto L_001BD3B0;
    case 296u: goto L_001BD3EC;
    case 297u: goto L_001BD408;
    case 298u: goto L_001BD42C;
    case 299u: goto L_001BD448;
    case 300u: goto L_001BD45C;
    case 301u: goto L_001BD464;
    case 302u: goto L_001BD470;
    case 303u: goto L_001BD484;
    case 304u: goto L_001BD48C;
    case 305u: goto L_001BD494;
    case 306u: goto L_001BD49C;
    case 307u: goto L_001BD4D4;
    case 308u: goto L_001BD4F0;
    case 309u: goto L_001BD514;
    case 310u: goto L_001BD530;
    case 311u: goto L_001BD54C;
    case 312u: goto L_001BD554;
    case 313u: goto L_001BD55C;
    case 314u: goto L_001BD5A0;
    case 315u: goto L_001BD5E8;
    case 316u: goto L_001BD5F4;
    case 317u: goto L_001BD600;
    case 318u: goto L_001BD608;
    case 319u: goto L_001BD61C;
    case 320u: goto L_001BD680;
    case 321u: goto L_001BD6C8;
    case 322u: goto L_001BD6D0;
    case 323u: goto L_001BD6E0;
    case 324u: goto L_001BD6E8;
    case 325u: goto L_001BD718;
    case 326u: goto L_001BD738;
    case 327u: goto L_001BD740;
    case 328u: goto L_001BD748;
    case 329u: goto L_001BD758;
    case 330u: goto L_001BD764;
    case 331u: goto L_001BD784;
    case 332u: goto L_001BD798;
    case 333u: goto L_001BD7A0;
    case 334u: goto L_001BD7A8;
    case 335u: goto L_001BD7CC;
    case 336u: goto L_001BD7DC;
    case 337u: goto L_001BD834;
    case 338u: goto L_001BD83C;
    case 339u: goto L_001BD844;
    case 340u: goto L_001BD880;
    case 341u: goto L_001BD8AC;
    case 342u: goto L_001BD8C8;
    case 343u: goto L_001BD8D0;
    case 344u: goto L_001BD8E0;
    case 345u: goto L_001BD8EC;
    case 346u: goto L_001BD8F8;
    case 347u: goto L_001BD904;
    case 348u: goto L_001BD91C;
    case 349u: goto L_001BD928;
    case 350u: goto L_001BD930;
    case 351u: goto L_001BD938;
    case 352u: goto L_001BD948;
    case 353u: goto L_001BD978;
    case 354u: goto L_001BD990;
    case 355u: goto L_001BD9A8;
    case 356u: goto L_001BD9C0;
    case 357u: goto L_001BD9CC;
    case 358u: goto L_001BD9D4;
    case 359u: goto L_001BD9DC;
    case 360u: goto L_001BD9F8;
    case 361u: goto L_001BDA04;
    case 362u: goto L_001BDA10;
    case 363u: goto L_001BDA18;
    case 364u: goto L_001BDA20;
    case 365u: goto L_001BDA40;
    case 366u: goto L_001BDA6C;
    case 367u: goto L_001BDA88;
    case 368u: goto L_001BDA90;
    case 369u: goto L_001BDAA0;
    case 370u: goto L_001BDAB0;
    case 371u: goto L_001BDABC;
    case 372u: goto L_001BDAC8;
    case 373u: goto L_001BDAE0;
    case 374u: goto L_001BDAEC;
    case 375u: goto L_001BDAFC;
    case 376u: goto L_001BDB30;
    case 377u: goto L_001BDB4C;
    case 378u: goto L_001BDB64;
    case 379u: goto L_001BDB7C;
    case 380u: goto L_001BDB88;
    case 381u: goto L_001BDBA4;
    case 382u: goto L_001BDBB0;
    case 383u: goto L_001BDBB8;
    case 384u: goto L_001BDBC4;
    case 385u: goto L_001BDBD0;
    case 386u: goto L_001BDBDC;
    case 387u: goto L_001BDBE8;
    case 388u: goto L_001BDBF0;
    case 389u: goto L_001BDC00;
    case 390u: goto L_001BDC0C;
    case 391u: goto L_001BDC18;
    case 392u: goto L_001BDC24;
    case 393u: goto L_001BDC30;
    case 394u: goto L_001BDC44;
    case 395u: goto L_001BDC50;
    case 396u: goto L_001BDC5C;
    case 397u: goto L_001BDC68;
    case 398u: goto L_001BDC74;
    case 399u: goto L_001BDC84;
    case 400u: goto L_001BDC90;
    case 401u: goto L_001BDC9C;
    case 402u: goto L_001BDCA8;
    case 403u: goto L_001BDCB4;
    case 404u: goto L_001BDCC0;
    case 405u: goto L_001BDCD0;
    case 406u: goto L_001BDCDC;
    case 407u: goto L_001BDCE8;
    case 408u: goto L_001BDCF4;
    case 409u: goto L_001BDD00;
    case 410u: goto L_001BDD10;
    case 411u: goto L_001BDD1C;
    case 412u: goto L_001BDD28;
    case 413u: goto L_001BDD34;
    case 414u: goto L_001BDD40;
    case 415u: goto L_001BDD54;
    case 416u: goto L_001BDD60;
    case 417u: goto L_001BDD6C;
    case 418u: goto L_001BDD74;
    case 419u: goto L_001BDD7C;
    case 420u: goto L_001BDDA0;
    case 421u: goto L_001BDDCC;
    case 422u: goto L_001BDDE8;
    case 423u: goto L_001BDDF0;
    case 424u: goto L_001BDE00;
    case 425u: goto L_001BDE10;
    case 426u: goto L_001BDE1C;
    case 427u: goto L_001BDE28;
    case 428u: goto L_001BDE40;
    case 429u: goto L_001BDE4C;
    case 430u: goto L_001BDE5C;
    case 431u: goto L_001BDE90;
    case 432u: goto L_001BDEAC;
    case 433u: goto L_001BDEC4;
    case 434u: goto L_001BDEDC;
    case 435u: goto L_001BDEE8;
    case 436u: goto L_001BDF04;
    case 437u: goto L_001BDF14;
    case 438u: goto L_001BDF20;
    case 439u: goto L_001BDF2C;
    case 440u: goto L_001BDF38;
    case 441u: goto L_001BDF40;
    case 442u: goto L_001BDF50;
    case 443u: goto L_001BDF5C;
    case 444u: goto L_001BDF68;
    case 445u: goto L_001BDF74;
    case 446u: goto L_001BDF80;
    case 447u: goto L_001BDF8C;
    case 448u: goto L_001BDF9C;
    case 449u: goto L_001BDFA8;
    case 450u: goto L_001BDFB4;
    case 451u: goto L_001BDFBC;
    case 452u: goto L_001BDFC4;
    case 453u: goto L_001BDFE0;
    case 454u: goto L_001BE00C;
    case 455u: goto L_001BE034;
    case 456u: goto L_001BE04C;
    case 457u: goto L_001BE064;
    case 458u: goto L_001BE07C;
    case 459u: goto L_001BE088;
    case 460u: goto L_001BE098;
    case 461u: goto L_001BE0A4;
    case 462u: goto L_001BE0B0;
    case 463u: goto L_001BE0BC;
    case 464u: goto L_001BE0C8;
    case 465u: goto L_001BE0D4;
    case 466u: goto L_001BE0E4;
    case 467u: goto L_001BE0F0;
    case 468u: goto L_001BE0FC;
    case 469u: goto L_001BE108;
    case 470u: goto L_001BE114;
    case 471u: goto L_001BE124;
    case 472u: goto L_001BE130;
    case 473u: goto L_001BE13C;
    case 474u: goto L_001BE148;
    case 475u: goto L_001BE154;
    case 476u: goto L_001BE168;
    case 477u: goto L_001BE174;
    case 478u: goto L_001BE180;
    case 479u: goto L_001BE18C;
    case 480u: goto L_001BE198;
    case 481u: goto L_001BE1A8;
    case 482u: goto L_001BE1B4;
    case 483u: goto L_001BE1C0;
    case 484u: goto L_001BE1CC;
    case 485u: goto L_001BE1D8;
    case 486u: goto L_001BE1E4;
    case 487u: goto L_001BE1F4;
    case 488u: goto L_001BE200;
    case 489u: goto L_001BE20C;
    case 490u: goto L_001BE218;
    case 491u: goto L_001BE224;
    case 492u: goto L_001BE234;
    case 493u: goto L_001BE240;
    case 494u: goto L_001BE24C;
    case 495u: goto L_001BE258;
    case 496u: goto L_001BE264;
    case 497u: goto L_001BE278;
    case 498u: goto L_001BE284;
    case 499u: goto L_001BE290;
    case 500u: goto L_001BE29C;
    case 501u: goto L_001BE2A8;
    case 502u: goto L_001BE2B8;
    case 503u: goto L_001BE2C4;
    case 504u: goto L_001BE2D0;
    case 505u: goto L_001BE2D8;
    case 506u: goto L_001BE2E0;
    case 507u: goto L_001BE300;
    case 508u: goto L_001BE32C;
    case 509u: goto L_001BE348;
    case 510u: goto L_001BE350;
    case 511u: goto L_001BE360;
    case 512u: goto L_001BE370;
    case 513u: goto L_001BE37C;
    case 514u: goto L_001BE388;
    case 515u: goto L_001BE3A0;
    case 516u: goto L_001BE3AC;
    case 517u: goto L_001BE3B4;
    case 518u: goto L_001BE3BC;
    case 519u: goto L_001BE3CC;
    case 520u: goto L_001BE400;
    case 521u: goto L_001BE41C;
    case 522u: goto L_001BE434;
    case 523u: goto L_001BE44C;
    case 524u: goto L_001BE458;
    case 525u: goto L_001BE474;
    case 526u: goto L_001BE484;
    case 527u: goto L_001BE490;
    case 528u: goto L_001BE49C;
    case 529u: goto L_001BE4A8;
    case 530u: goto L_001BE4B0;
    case 531u: goto L_001BE4C0;
    case 532u: goto L_001BE4CC;
    case 533u: goto L_001BE4D8;
    case 534u: goto L_001BE4E4;
    case 535u: goto L_001BE4F0;
    case 536u: goto L_001BE504;
    case 537u: goto L_001BE510;
    case 538u: goto L_001BE51C;
    case 539u: goto L_001BE528;
    case 540u: goto L_001BE534;
    case 541u: goto L_001BE53C;
    case 542u: goto L_001BE54C;
    case 543u: goto L_001BE558;
    case 544u: goto L_001BE564;
    case 545u: goto L_001BE570;
    case 546u: goto L_001BE57C;
    case 547u: goto L_001BE590;
    case 548u: goto L_001BE59C;
    case 549u: goto L_001BE5A8;
    case 550u: goto L_001BE5B0;
    case 551u: goto L_001BE5B8;
    case 552u: goto L_001BE5E0;
    case 553u: goto L_001BE60C;
    case 554u: goto L_001BE628;
    case 555u: goto L_001BE630;
    case 556u: goto L_001BE640;
    case 557u: goto L_001BE650;
    case 558u: goto L_001BE65C;
    case 559u: goto L_001BE668;
    case 560u: goto L_001BE680;
    case 561u: goto L_001BE68C;
    case 562u: goto L_001BE694;
    case 563u: goto L_001BE69C;
    case 564u: goto L_001BE6AC;
    case 565u: goto L_001BE6E0;
    case 566u: goto L_001BE6FC;
    case 567u: goto L_001BE714;
    case 568u: goto L_001BE72C;
    case 569u: goto L_001BE738;
    case 570u: goto L_001BE754;
    case 571u: goto L_001BE764;
    case 572u: goto L_001BE770;
    case 573u: goto L_001BE77C;
    case 574u: goto L_001BE788;
    case 575u: goto L_001BE790;
    case 576u: goto L_001BE7A0;
    case 577u: goto L_001BE7AC;
    case 578u: goto L_001BE7B8;
    case 579u: goto L_001BE7C4;
    case 580u: goto L_001BE7D0;
    case 581u: goto L_001BE7E4;
    case 582u: goto L_001BE7F0;
    case 583u: goto L_001BE7FC;
    case 584u: goto L_001BE808;
    case 585u: goto L_001BE814;
    case 586u: goto L_001BE824;
    case 587u: goto L_001BE830;
    case 588u: goto L_001BE83C;
    case 589u: goto L_001BE848;
    case 590u: goto L_001BE854;
    case 591u: goto L_001BE860;
    case 592u: goto L_001BE870;
    case 593u: goto L_001BE87C;
    case 594u: goto L_001BE888;
    case 595u: goto L_001BE894;
    case 596u: goto L_001BE8A0;
    case 597u: goto L_001BE8B0;
    case 598u: goto L_001BE8BC;
    case 599u: goto L_001BE8C8;
    case 600u: goto L_001BE8D4;
    case 601u: goto L_001BE8E0;
    case 602u: goto L_001BE8F4;
    case 603u: goto L_001BE900;
    case 604u: goto L_001BE90C;
    case 605u: goto L_001BE914;
    case 606u: goto L_001BE91C;
    case 607u: goto L_001BE940;
    case 608u: goto L_001BE96C;
    case 609u: goto L_001BE988;
    case 610u: goto L_001BE990;
    case 611u: goto L_001BE9A0;
    case 612u: goto L_001BE9AC;
    case 613u: goto L_001BE9B8;
    case 614u: goto L_001BE9C4;
    case 615u: goto L_001BE9DC;
    case 616u: goto L_001BE9E8;
    case 617u: goto L_001BEA18;
    case 618u: goto L_001BEA30;
    case 619u: goto L_001BEA48;
    case 620u: goto L_001BEA60;
    case 621u: goto L_001BEA6C;
    case 622u: goto L_001BEA80;
    case 623u: goto L_001BEA8C;
    case 624u: goto L_001BEA98;
    case 625u: goto L_001BEAA4;
    case 626u: goto L_001BEAB0;
    case 627u: goto L_001BEAC4;
    case 628u: goto L_001BEAD0;
    case 629u: goto L_001BEADC;
    case 630u: goto L_001BEAE8;
    case 631u: goto L_001BEAF4;
    case 632u: goto L_001BEAFC;
    case 633u: goto L_001BEB0C;
    case 634u: goto L_001BEB18;
    case 635u: goto L_001BEB24;
    case 636u: goto L_001BEB30;
    case 637u: goto L_001BEB3C;
    case 638u: goto L_001BEB50;
    case 639u: goto L_001BEB5C;
    case 640u: goto L_001BEB68;
    case 641u: goto L_001BEB74;
    case 642u: goto L_001BEB80;
    case 643u: goto L_001BEB90;
    case 644u: goto L_001BEB9C;
    case 645u: goto L_001BEBA8;
    case 646u: goto L_001BEBB4;
    case 647u: goto L_001BEBC0;
    case 648u: goto L_001BEBCC;
    case 649u: goto L_001BEBDC;
    case 650u: goto L_001BEBE8;
    case 651u: goto L_001BEBF4;
    case 652u: goto L_001BEC00;
    case 653u: goto L_001BEC0C;
    case 654u: goto L_001BEC1C;
    case 655u: goto L_001BEC28;
    case 656u: goto L_001BEC34;
    case 657u: goto L_001BEC40;
    case 658u: goto L_001BEC4C;
    case 659u: goto L_001BEC60;
    case 660u: goto L_001BEC6C;
    case 661u: goto L_001BEC78;
    case 662u: goto L_001BEC80;
    case 663u: goto L_001BEC88;
    case 664u: goto L_001BECB0;
    case 665u: goto L_001BECDC;
    case 666u: goto L_001BED04;
    case 667u: goto L_001BED1C;
    case 668u: goto L_001BED34;
    case 669u: goto L_001BED4C;
    case 670u: goto L_001BED58;
    case 671u: goto L_001BED68;
    case 672u: goto L_001BED74;
    case 673u: goto L_001BED80;
    case 674u: goto L_001BED8C;
    case 675u: goto L_001BED98;
    case 676u: goto L_001BEDAC;
    case 677u: goto L_001BEDB8;
    case 678u: goto L_001BEDC4;
    case 679u: goto L_001BEDD0;
    case 680u: goto L_001BEDDC;
    case 681u: goto L_001BEDE4;
    case 682u: goto L_001BEDFC;
    case 683u: goto L_001BEE14;
    case 684u: goto L_001BEE24;
    case 685u: goto L_001BEE3C;
    case 686u: goto L_001BEE54;
    case 687u: goto L_001BEE70;
    case 688u: goto L_001BEE9C;
    case 689u: goto L_001BEEB8;
    case 690u: goto L_001BEEC0;
    case 691u: goto L_001BEED0;
    case 692u: goto L_001BEEE0;
    case 693u: goto L_001BEEEC;
    case 694u: goto L_001BEEF8;
    case 695u: goto L_001BEF10;
    case 696u: goto L_001BEF1C;
    case 697u: goto L_001BEF2C;
    case 698u: goto L_001BEF60;
    case 699u: goto L_001BEF7C;
    case 700u: goto L_001BEF94;
    case 701u: goto L_001BEFAC;
    case 702u: goto L_001BEFB8;
    case 703u: goto L_001BEFD4;
    case 704u: goto L_001BEFE4;
    case 705u: goto L_001BEFF0;
    case 706u: goto L_001BEFFC;
    case 707u: goto L_001BF008;
    case 708u: goto L_001BF010;
    case 709u: goto L_001BF020;
    case 710u: goto L_001BF02C;
    case 711u: goto L_001BF038;
    case 712u: goto L_001BF044;
    case 713u: goto L_001BF050;
    case 714u: goto L_001BF05C;
    case 715u: goto L_001BF06C;
    case 716u: goto L_001BF078;
    case 717u: goto L_001BF084;
    case 718u: goto L_001BF090;
    case 719u: goto L_001BF09C;
    case 720u: goto L_001BF0A4;
    case 721u: goto L_001BF0B4;
    case 722u: goto L_001BF0C0;
    case 723u: goto L_001BF0CC;
    case 724u: goto L_001BF0D8;
    case 725u: goto L_001BF0E4;
    case 726u: goto L_001BF0F0;
    case 727u: goto L_001BF100;
    case 728u: goto L_001BF10C;
    case 729u: goto L_001BF118;
    case 730u: goto L_001BF124;
    case 731u: goto L_001BF130;
    case 732u: goto L_001BF138;
    case 733u: goto L_001BF148;
    case 734u: goto L_001BF154;
    case 735u: goto L_001BF160;
    case 736u: goto L_001BF16C;
    case 737u: goto L_001BF178;
    case 738u: goto L_001BF184;
    case 739u: goto L_001BF194;
    case 740u: goto L_001BF1A0;
    case 741u: goto L_001BF1AC;
    case 742u: goto L_001BF1B8;
    case 743u: goto L_001BF1C4;
    case 744u: goto L_001BF1CC;
    case 745u: goto L_001BF1DC;
    case 746u: goto L_001BF1E8;
    case 747u: goto L_001BF1F4;
    case 748u: goto L_001BF200;
    case 749u: goto L_001BF20C;
    case 750u: goto L_001BF218;
    case 751u: goto L_001BF228;
    case 752u: goto L_001BF234;
    case 753u: goto L_001BF240;
    case 754u: goto L_001BF248;
    case 755u: goto L_001BF250;
    case 756u: goto L_001BF270;
    case 757u: goto L_001BF29C;
    case 758u: goto L_001BF2B8;
    case 759u: goto L_001BF2C0;
    case 760u: goto L_001BF2D0;
    case 761u: goto L_001BF2E0;
    case 762u: goto L_001BF2EC;
    case 763u: goto L_001BF2F8;
    case 764u: goto L_001BF310;
    case 765u: goto L_001BF31C;
    case 766u: goto L_001BF324;
    case 767u: goto L_001BF32C;
    case 768u: goto L_001BF360;
    case 769u: goto L_001BF37C;
    case 770u: goto L_001BF394;
    case 771u: goto L_001BF3AC;
    case 772u: goto L_001BF3B8;
    case 773u: goto L_001BF3C0;
    case 774u: goto L_001BF3C8;
    case 775u: goto L_001BF3DC;
    case 776u: goto L_001BF3E8;
    case 777u: goto L_001BF3F8;
    case 778u: goto L_001BF404;
    case 779u: goto L_001BF410;
    case 780u: goto L_001BF41C;
    case 781u: goto L_001BF428;
    case 782u: goto L_001BF430;
    case 783u: goto L_001BF440;
    case 784u: goto L_001BF44C;
    case 785u: goto L_001BF458;
    case 786u: goto L_001BF464;
    case 787u: goto L_001BF470;
    case 788u: goto L_001BF47C;
    case 789u: goto L_001BF48C;
    case 790u: goto L_001BF498;
    case 791u: goto L_001BF4A4;
    case 792u: goto L_001BF4B0;
    case 793u: goto L_001BF4BC;
    case 794u: goto L_001BF4C4;
    case 795u: goto L_001BF4D4;
    case 796u: goto L_001BF4E0;
    case 797u: goto L_001BF4EC;
    case 798u: goto L_001BF4F8;
    case 799u: goto L_001BF504;
    case 800u: goto L_001BF510;
    case 801u: goto L_001BF520;
    case 802u: goto L_001BF52C;
    case 803u: goto L_001BF538;
    case 804u: goto L_001BF544;
    case 805u: goto L_001BF550;
    case 806u: goto L_001BF560;
    case 807u: goto L_001BF56C;
    case 808u: goto L_001BF578;
    case 809u: goto L_001BF580;
    case 810u: goto L_001BF588;
    case 811u: goto L_001BF5B0;
    case 812u: goto L_001BF5DC;
    case 813u: goto L_001BF5F8;
    case 814u: goto L_001BF600;
    case 815u: goto L_001BF610;
    case 816u: goto L_001BF620;
    case 817u: goto L_001BF62C;
    case 818u: goto L_001BF638;
    case 819u: goto L_001BF650;
    case 820u: goto L_001BF65C;
    case 821u: goto L_001BF66C;
    case 822u: goto L_001BF6A0;
    case 823u: goto L_001BF6BC;
    case 824u: goto L_001BF6D4;
    case 825u: goto L_001BF6EC;
    case 826u: goto L_001BF6F8;
    case 827u: goto L_001BF708;
    case 828u: goto L_001BF710;
    case 829u: goto L_001BF718;
    case 830u: goto L_001BF724;
    case 831u: goto L_001BF730;
    case 832u: goto L_001BF73C;
    case 833u: goto L_001BF748;
    case 834u: goto L_001BF750;
    case 835u: goto L_001BF760;
    case 836u: goto L_001BF76C;
    case 837u: goto L_001BF778;
    case 838u: goto L_001BF784;
    case 839u: goto L_001BF790;
    case 840u: goto L_001BF79C;
    case 841u: goto L_001BF7AC;
    case 842u: goto L_001BF7B8;
    case 843u: goto L_001BF7C4;
    case 844u: goto L_001BF7D0;
    case 845u: goto L_001BF7DC;
    case 846u: goto L_001BF7E4;
    case 847u: goto L_001BF7F4;
    case 848u: goto L_001BF800;
    case 849u: goto L_001BF80C;
    case 850u: goto L_001BF818;
    case 851u: goto L_001BF824;
    case 852u: goto L_001BF830;
    case 853u: goto L_001BF840;
    case 854u: goto L_001BF84C;
    case 855u: goto L_001BF858;
    case 856u: goto L_001BF864;
    case 857u: goto L_001BF870;
    case 858u: goto L_001BF880;
    case 859u: goto L_001BF88C;
    case 860u: goto L_001BF898;
    case 861u: goto L_001BF8A4;
    case 862u: goto L_001BF8B0;
    case 863u: goto L_001BF8BC;
    case 864u: goto L_001BF8CC;
    case 865u: goto L_001BF8D8;
    case 866u: goto L_001BF8E4;
    case 867u: goto L_001BF8F0;
    case 868u: goto L_001BF8FC;
    case 869u: goto L_001BF904;
    case 870u: goto L_001BF914;
    case 871u: goto L_001BF920;
    case 872u: goto L_001BF92C;
    case 873u: goto L_001BF938;
    case 874u: goto L_001BF944;
    case 875u: goto L_001BF950;
    case 876u: goto L_001BF960;
    case 877u: goto L_001BF96C;
    case 878u: goto L_001BF978;
    case 879u: goto L_001BF984;
    case 880u: goto L_001BF990;
    case 881u: goto L_001BF9A0;
    case 882u: goto L_001BF9AC;
    case 883u: goto L_001BF9B8;
    case 884u: goto L_001BF9C4;
    case 885u: goto L_001BF9D0;
    case 886u: goto L_001BF9DC;
    case 887u: goto L_001BF9EC;
    case 888u: goto L_001BF9F8;
    case 889u: goto L_001BFA04;
    case 890u: goto L_001BFA10;
    case 891u: goto L_001BFA1C;
    case 892u: goto L_001BFA24;
    case 893u: goto L_001BFA34;
    case 894u: goto L_001BFA40;
    case 895u: goto L_001BFA4C;
    case 896u: goto L_001BFA58;
    case 897u: goto L_001BFA64;
    case 898u: goto L_001BFA70;
    case 899u: goto L_001BFA80;
    case 900u: goto L_001BFA8C;
    case 901u: goto L_001BFA98;
    case 902u: goto L_001BFAA0;
    case 903u: goto L_001BFAA8;
    case 904u: goto L_001BFAD0;
    case 905u: goto L_001BFAFC;
    case 906u: goto L_001BFB18;
    case 907u: goto L_001BFB20;
    case 908u: goto L_001BFB30;
    case 909u: goto L_001BFB40;
    case 910u: goto L_001BFB4C;
    case 911u: goto L_001BFB58;
    case 912u: goto L_001BFB70;
    case 913u: goto L_001BFB7C;
    case 914u: goto L_001BFB84;
    case 915u: goto L_001BFB8C;
    case 916u: goto L_001BFBC0;
    case 917u: goto L_001BFBDC;
    case 918u: goto L_001BFBE4;
    case 919u: goto L_001BFBF4;
    case 920u: goto L_001BFC0C;
    case 921u: goto L_001BFC18;
    case 922u: goto L_001BFC20;
    case 923u: goto L_001BFC28;
    case 924u: goto L_001BFC3C;
    case 925u: goto L_001BFC50;
    case 926u: goto L_001BFC5C;
    case 927u: goto L_001BFC68;
    case 928u: goto L_001BFC74;
    case 929u: goto L_001BFC80;
    case 930u: goto L_001BFC88;
    case 931u: goto L_001BFC98;
    case 932u: goto L_001BFCA4;
    case 933u: goto L_001BFCB0;
    case 934u: goto L_001BFCBC;
    case 935u: goto L_001BFCC8;
    case 936u: goto L_001BFCD4;
    case 937u: goto L_001BFCE4;
    case 938u: goto L_001BFCF0;
    case 939u: goto L_001BFCFC;
    case 940u: goto L_001BFD08;
    case 941u: goto L_001BFD14;
    case 942u: goto L_001BFD1C;
    case 943u: goto L_001BFD2C;
    case 944u: goto L_001BFD38;
    case 945u: goto L_001BFD44;
    case 946u: goto L_001BFD50;
    case 947u: goto L_001BFD5C;
    case 948u: goto L_001BFD70;
    case 949u: goto L_001BFD7C;
    case 950u: goto L_001BFD88;
    case 951u: goto L_001BFD90;
    case 952u: goto L_001BFD98;
    case 953u: goto L_001BFDC0;
    case 954u: goto L_001BFDF4;
    case 955u: goto L_001BFE10;
    case 956u: goto L_001BFE18;
    case 957u: goto L_001BFE28;
    case 958u: goto L_001BFE38;
    case 959u: goto L_001BFE44;
    case 960u: goto L_001BFE50;
    case 961u: goto L_001BFE68;
    case 962u: goto L_001BFE74;
    case 963u: goto L_001BFEA8;
    case 964u: goto L_001BFEC4;
    case 965u: goto L_001BFEDC;
    case 966u: goto L_001BFEF4;
    case 967u: goto L_001BFF00;
    case 968u: goto L_001BFF1C;
    case 969u: goto L_001BFF20;
    case 970u: goto L_001BFF30;
    case 971u: goto L_001BFF3C;
    case 972u: goto L_001BFF48;
    case 973u: goto L_001BFF54;
    case 974u: goto L_001BFF60;
    case 975u: goto L_001BFF70;
    case 976u: goto L_001BFF7C;
    case 977u: goto L_001BFF88;
    case 978u: goto L_001BFF94;
    case 979u: goto L_001BFFA0;
    case 980u: goto L_001BFFAC;
    case 981u: goto L_001BFFBC;
    case 982u: goto L_001BFFC0;
    case 983u: goto L_001BFFC8;
    case 984u: goto L_001BFFD4;
    case 985u: goto L_001BFFE0;
    case 986u: goto L_001BFFEC;
    case 987u: goto L_001BFFFC;
    default: bad_entry(c, 0x001BC000u); return;
    }
L_001BC000:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC010u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC010u) [[unlikely]] return; }
L_001BC010:
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC024u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC024u) [[unlikely]] return; }
L_001BC024:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC030u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC030u) [[unlikely]] return; }
L_001BC030:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC03Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC03Cu) [[unlikely]] return; }
L_001BC03C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC044u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC044u) [[unlikely]] return; }
L_001BC044:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC054u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BC054u) [[unlikely]] return; }
L_001BC054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC05Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC05Cu) [[unlikely]] return; }
L_001BC05C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001BC080:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC0B4u); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BC0B4u) [[unlikely]] return; }
L_001BC0B4:
    c.f[5] = ld32((c.r[20].w[0] + 32u));
    c.f[4] = ld32((c.r[18].w[0]));
    c.f[3] = ld32((c.r[20].w[0] + 36u));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC0DCu); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC0DCu) [[unlikely]] return; }
L_001BC0DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + 8592u);  if (t) { goto L_001BC138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC0F0u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001BC0F0u) [[unlikely]] return; }
L_001BC0F0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC0FCu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC0FCu) [[unlikely]] return; }
L_001BC0FC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC108u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC108u) [[unlikely]] return; }
L_001BC108:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC114u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC114u) [[unlikely]] return; }
L_001BC114:
    c.f[0] = ld32((c.r[20].w[0] + 8540u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC12Cu); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC12Cu) [[unlikely]] return; }
L_001BC12C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC180; } }
    c.budget -= 1;
L_001BC138:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC150u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC150u) [[unlikely]] return; }
L_001BC150:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC168u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC168u) [[unlikely]] return; }
L_001BC168:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC180u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC180u) [[unlikely]] return; }
L_001BC180:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC190u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BC190u) [[unlikely]] return; }
L_001BC190:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC19Cu); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC19Cu) [[unlikely]] return; }
L_001BC19C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC1A4u); c.r[4].d[0] = ld16((c.r[20].w[0] + 8332u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC1A4u) [[unlikely]] return; }
L_001BC1A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC1ACu); c.r[4].d[0] = ld16((c.r[20].w[0] + 8328u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC1ACu) [[unlikely]] return; }
L_001BC1AC:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC1BCu); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC1BCu) [[unlikely]] return; }
L_001BC1BC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC1C8u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC1C8u) [[unlikely]] return; }
L_001BC1C8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC1D4u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC1D4u) [[unlikely]] return; }
L_001BC1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC1DCu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC1DCu) [[unlikely]] return; }
L_001BC1DC:
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC1ECu); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BC1ECu) [[unlikely]] return; }
L_001BC1EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC1F4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC1F4u) [[unlikely]] return; }
L_001BC1F4:
    c.f[12] = ld32((c.r[20].w[0] + 4224u));
    set32(c.r[19], c.r[20].w[0] + 2752u);
    c.f[13] = ld32((c.r[20].w[0] + 4228u));
    set32(c.r[18], c.r[20].w[0] + 4224u);
    c.f[14] = ld32((c.r[20].w[0] + 4232u));
    set32(c.r[17], c.r[20].w[0] + 5200u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC214u); set32(c.r[16], c.r[20].w[0] + 4736u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC214u) [[unlikely]] return; }
L_001BC214:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC220u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC220u) [[unlikely]] return; }
L_001BC220:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC22Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC22Cu) [[unlikely]] return; }
L_001BC22C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC238u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC238u) [[unlikely]] return; }
L_001BC238:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC244u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC244u) [[unlikely]] return; }
L_001BC244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC24Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BC24Cu) [[unlikely]] return; }
L_001BC24C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 16u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC264u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_002F(c, 269u, depth + 1u); else { c.pc = 0x001BCFE0u; return; } if (c.pc != 0x001BC264u) [[unlikely]] return; }
L_001BC264:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 128u);
    set32(c.r[6], c.r[18].w[0] + 48u);
    set32(c.r[7], c.r[17].w[0] + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC27Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_002F(c, 314u, depth + 1u); else { c.pc = 0x001BD5A0u; return; } if (c.pc != 0x001BC27Cu) [[unlikely]] return; }
L_001BC27C:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC28Cu); set32(c.r[18], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001BC28Cu) [[unlikely]] return; }
L_001BC28C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[17].w[0] + 36u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC2A4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 269u, depth + 1u); else { c.pc = 0x001BCFE0u; return; } if (c.pc != 0x001BC2A4u) [[unlikely]] return; }
L_001BC2A4:
    set32(c.r[5], c.r[19].w[0] + 128u);
    set32(c.r[6], c.r[18].w[0] + 32u);
    set32(c.r[7], c.r[17].w[0] + 60u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC2BCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 314u, depth + 1u); else { c.pc = 0x001BD5A0u; return; } if (c.pc != 0x001BC2BCu) [[unlikely]] return; }
L_001BC2BC:
    set32(c.r[18], 0u + 12u);
    set32(c.r[17], c.r[20].w[0] + 768u);
    c.budget -= 3;
L_001BC2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC2D0u); set32(c.r[4], c.r[17].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001BC2D0u) [[unlikely]] return; }
L_001BC2D0:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC2E0u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BC2E0u) [[unlikely]] return; }
L_001BC2E0:
    set32(c.r[4], c.r[17].w[0] + 1984u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC2ECu); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC2ECu) [[unlikely]] return; }
L_001BC2EC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[1].d[0] = c.r[18].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BC2C8u | kUnwind; return; } goto L_001BC2C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC304u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BC304u) [[unlikely]] return; }
L_001BC304:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 8428u));
    set32(c.r[16], c.r[20].w[0] + 2112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC314u); set32(c.r[17], c.r[20].w[0] + 4576u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC314u) [[unlikely]] return; }
L_001BC314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC31Cu); c.r[4].d[0] = ld16((c.r[20].w[0] + 8424u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC31Cu) [[unlikely]] return; }
L_001BC31C:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8658u));
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 16020u);  if (t) { goto L_001BC340; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC334u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC334u) [[unlikely]] return; }
L_001BC334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC380; } }
    c.budget -= 1;
L_001BC340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0910000u);
    c.r[3].d[0] = c.r[2].d[0] | 62390ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0230000u);
    c.r[2].d[0] = c.r[2].d[0] | 29884ull;
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.f[12] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC364u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC364u) [[unlikely]] return; }
L_001BC364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC36Cu); set32(c.r[4], 0u + 16383u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC36Cu) [[unlikely]] return; }
L_001BC36C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC374u); set32(c.r[4], 0u + 2503u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC374u) [[unlikely]] return; }
L_001BC374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC37Cu); c.r[4].d[0] = 0ull | 49153ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC37Cu) [[unlikely]] return; }
L_001BC37C:
    c.budget -= 1;
L_001BC380:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC390u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BC390u) [[unlikely]] return; }
L_001BC390:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC39Cu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC39Cu) [[unlikely]] return; }
L_001BC39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC3A4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BC3A4u) [[unlikely]] return; }
L_001BC3A4:
    c.f[12] = ld32((c.r[20].w[0] + 4080u));
    set32(c.r[19], c.r[20].w[0] + 4080u);
    c.f[13] = ld32((c.r[20].w[0] + 4084u));
    c.f[14] = ld32((c.r[20].w[0] + 4088u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC3BCu); set32(c.r[18], c.r[20].w[0] + 5092u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC3BCu) [[unlikely]] return; }
L_001BC3BC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC3C8u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC3C8u) [[unlikely]] return; }
L_001BC3C8:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC3D4u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC3D4u) [[unlikely]] return; }
L_001BC3D4:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC3E0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC3E0u) [[unlikely]] return; }
L_001BC3E0:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC3F0u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BC3F0u) [[unlikely]] return; }
L_001BC3F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC400u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC400u) [[unlikely]] return; }
L_001BC400:
    c.f[13] = ld32((c.r[19].w[0] + 20u));
    c.f[14] = ld32((c.r[19].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC410u); c.f[12] = ld32((c.r[19].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC410u) [[unlikely]] return; }
L_001BC410:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC41Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC41Cu) [[unlikely]] return; }
L_001BC41C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC428u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC428u) [[unlikely]] return; }
L_001BC428:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC434u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC434u) [[unlikely]] return; }
L_001BC434:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC444u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BC444u) [[unlikely]] return; }
L_001BC444:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC450u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC450u) [[unlikely]] return; }
L_001BC450:
    set32(c.r[19], c.r[19].w[0] + 32u);
    c.f[13] = ld32((c.r[19].w[0] + 4u));
    c.f[14] = ld32((c.r[19].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC464u); c.f[12] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC464u) [[unlikely]] return; }
L_001BC464:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC470u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC470u) [[unlikely]] return; }
L_001BC470:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC47Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC47Cu) [[unlikely]] return; }
L_001BC47C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC488u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC488u) [[unlikely]] return; }
L_001BC488:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC498u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BC498u) [[unlikely]] return; }
L_001BC498:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC4A8u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC4A8u) [[unlikely]] return; }
L_001BC4A8:
    c.f[13] = ld32((c.r[19].w[0] + 20u));
    c.f[14] = ld32((c.r[19].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC4B8u); c.f[12] = ld32((c.r[19].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC4B8u) [[unlikely]] return; }
L_001BC4B8:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC4C4u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC4C4u) [[unlikely]] return; }
L_001BC4C4:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC4D0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC4D0u) [[unlikely]] return; }
L_001BC4D0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC4DCu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC4DCu) [[unlikely]] return; }
L_001BC4DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC4E4u); set32(c.r[4], ld32((c.r[20].w[0] + 8400u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC4E4u) [[unlikely]] return; }
L_001BC4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC4ECu); set32(c.r[4], ld32((c.r[20].w[0] + 8404u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC4ECu) [[unlikely]] return; }
L_001BC4EC:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC4FCu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BC4FCu) [[unlikely]] return; }
L_001BC4FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC508u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC508u) [[unlikely]] return; }
L_001BC508:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC514u); set32(c.r[19], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001BC514u) [[unlikely]] return; }
L_001BC514:
    c.f[13] = ld32((c.r[19].w[0] + 4u));
    c.f[14] = ld32((c.r[19].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC524u); c.f[12] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC524u) [[unlikely]] return; }
L_001BC524:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC530u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC530u) [[unlikely]] return; }
L_001BC530:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC53Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC53Cu) [[unlikely]] return; }
L_001BC53C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC548u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC548u) [[unlikely]] return; }
L_001BC548:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC558u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BC558u) [[unlikely]] return; }
L_001BC558:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC568u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC568u) [[unlikely]] return; }
L_001BC568:
    c.f[13] = ld32((c.r[19].w[0] + 20u));
    c.f[14] = ld32((c.r[19].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC578u); c.f[12] = ld32((c.r[19].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC578u) [[unlikely]] return; }
L_001BC578:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC584u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC584u) [[unlikely]] return; }
L_001BC584:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC590u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC590u) [[unlikely]] return; }
L_001BC590:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC59Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC59Cu) [[unlikely]] return; }
L_001BC59C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC5ACu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BC5ACu) [[unlikely]] return; }
L_001BC5AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC5B8u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC5B8u) [[unlikely]] return; }
L_001BC5B8:
    set32(c.r[19], c.r[19].w[0] + 32u);
    c.f[13] = ld32((c.r[19].w[0] + 4u));
    c.f[14] = ld32((c.r[19].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC5CCu); c.f[12] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC5CCu) [[unlikely]] return; }
L_001BC5CC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC5D8u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC5D8u) [[unlikely]] return; }
L_001BC5D8:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC5E4u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC5E4u) [[unlikely]] return; }
L_001BC5E4:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC5F0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC5F0u) [[unlikely]] return; }
L_001BC5F0:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC600u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BC600u) [[unlikely]] return; }
L_001BC600:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC610u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC610u) [[unlikely]] return; }
L_001BC610:
    c.f[13] = ld32((c.r[19].w[0] + 20u));
    c.f[14] = ld32((c.r[19].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC620u); c.f[12] = ld32((c.r[19].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC620u) [[unlikely]] return; }
L_001BC620:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC62Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC62Cu) [[unlikely]] return; }
L_001BC62C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC638u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC638u) [[unlikely]] return; }
L_001BC638:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC644u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC644u) [[unlikely]] return; }
L_001BC644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC64Cu); set32(c.r[4], ld32((c.r[20].w[0] + 8408u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC64Cu) [[unlikely]] return; }
L_001BC64C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC654u); set32(c.r[4], ld32((c.r[20].w[0] + 8412u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC654u) [[unlikely]] return; }
L_001BC654:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC664u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BC664u) [[unlikely]] return; }
L_001BC664:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC670u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC670u) [[unlikely]] return; }
L_001BC670:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC67Cu); set32(c.r[19], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BC67Cu) [[unlikely]] return; }
L_001BC67C:
    c.f[13] = ld32((c.r[19].w[0] + 4u));
    c.f[14] = ld32((c.r[19].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC68Cu); c.f[12] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC68Cu) [[unlikely]] return; }
L_001BC68C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC698u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC698u) [[unlikely]] return; }
L_001BC698:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC6A4u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC6A4u) [[unlikely]] return; }
L_001BC6A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC6ACu); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC6ACu) [[unlikely]] return; }
L_001BC6AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC6B4u); set32(c.r[4], ld32((c.r[20].w[0] + 8420u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC6B4u) [[unlikely]] return; }
L_001BC6B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC6BCu); set32(c.r[4], ld32((c.r[20].w[0] + 8416u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC6BCu) [[unlikely]] return; }
L_001BC6BC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC6CCu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BC6CCu) [[unlikely]] return; }
L_001BC6CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC6D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC6D4u) [[unlikely]] return; }
L_001BC6D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001BC700:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC734u); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BC734u) [[unlikely]] return; }
L_001BC734:
    c.f[5] = ld32((c.r[20].w[0] + 32u));
    c.f[4] = ld32((c.r[18].w[0]));
    c.f[3] = ld32((c.r[20].w[0] + 36u));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC75Cu); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC75Cu) [[unlikely]] return; }
L_001BC75C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + 8592u);  if (t) { goto L_001BC7B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC770u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001BC770u) [[unlikely]] return; }
L_001BC770:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC77Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC77Cu) [[unlikely]] return; }
L_001BC77C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC788u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC788u) [[unlikely]] return; }
L_001BC788:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC794u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC794u) [[unlikely]] return; }
L_001BC794:
    c.f[0] = ld32((c.r[20].w[0] + 8540u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC7ACu); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC7ACu) [[unlikely]] return; }
L_001BC7AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC800; } }
    c.budget -= 1;
L_001BC7B8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC7D0u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC7D0u) [[unlikely]] return; }
L_001BC7D0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC7E8u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC7E8u) [[unlikely]] return; }
L_001BC7E8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC800u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC800u) [[unlikely]] return; }
L_001BC800:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC80Cu); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC80Cu) [[unlikely]] return; }
L_001BC80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC814u); c.r[4].d[0] = ld16((c.r[20].w[0] + 8332u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC814u) [[unlikely]] return; }
L_001BC814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC81Cu); c.r[4].d[0] = ld16((c.r[20].w[0] + 8328u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC81Cu) [[unlikely]] return; }
L_001BC81C:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC82Cu); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC82Cu) [[unlikely]] return; }
L_001BC82C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC838u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC838u) [[unlikely]] return; }
L_001BC838:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC844u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC844u) [[unlikely]] return; }
L_001BC844:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC850u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC850u) [[unlikely]] return; }
L_001BC850:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC85Cu); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC85Cu) [[unlikely]] return; }
L_001BC85C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC868u); set32(c.r[18], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BC868u) [[unlikely]] return; }
L_001BC868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC870u); c.r[4].d[0] = ld16((c.r[20].w[0] + 8428u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC870u) [[unlikely]] return; }
L_001BC870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC878u); c.r[4].d[0] = ld16((c.r[20].w[0] + 8424u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC878u) [[unlikely]] return; }
L_001BC878:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC888u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC888u) [[unlikely]] return; }
L_001BC888:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC894u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC894u) [[unlikely]] return; }
L_001BC894:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC8A0u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC8A0u) [[unlikely]] return; }
L_001BC8A0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC8ACu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC8ACu) [[unlikely]] return; }
L_001BC8AC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC8B8u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC8B8u) [[unlikely]] return; }
L_001BC8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC8C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BC8C0u) [[unlikely]] return; }
L_001BC8C0:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC8D0u); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC8D0u) [[unlikely]] return; }
L_001BC8D0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC8DCu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC8DCu) [[unlikely]] return; }
L_001BC8DC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC8E8u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC8E8u) [[unlikely]] return; }
L_001BC8E8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC8F4u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC8F4u) [[unlikely]] return; }
L_001BC8F4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC900u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC900u) [[unlikely]] return; }
L_001BC900:
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC91Cu); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_002F(c, 269u, depth + 1u); else { c.pc = 0x001BCFE0u; return; } if (c.pc != 0x001BC91Cu) [[unlikely]] return; }
L_001BC91C:
    c.f[12] = ld32((c.r[18].w[0] + 32u));
    set32(c.r[19], c.r[19].w[0] + 128u);
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC934u); set32(c.r[17], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC934u) [[unlikely]] return; }
L_001BC934:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8658u));
    set32(c.r[2], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[20].w[0] + 304u);  if (t) { goto L_001BC950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC94Cu);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001BC94Cu) [[unlikely]] return; }
L_001BC94C:
    c.budget -= 1;
L_001BC950:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC95Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC95Cu) [[unlikely]] return; }
L_001BC95C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC968u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC968u) [[unlikely]] return; }
L_001BC968:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC974u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC974u) [[unlikely]] return; }
L_001BC974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC97Cu); set32(c.r[4], ld32((c.r[20].w[0] + 8400u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC97Cu) [[unlikely]] return; }
L_001BC97C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC984u); set32(c.r[4], ld32((c.r[20].w[0] + 8404u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC984u) [[unlikely]] return; }
L_001BC984:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC990u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC990u) [[unlikely]] return; }
L_001BC990:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC99Cu); set32(c.r[18], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001BC99Cu) [[unlikely]] return; }
L_001BC99C:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC9ACu); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BC9ACu) [[unlikely]] return; }
L_001BC9AC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC9B8u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BC9B8u) [[unlikely]] return; }
L_001BC9B8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC9C4u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BC9C4u) [[unlikely]] return; }
L_001BC9C4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC9D0u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BC9D0u) [[unlikely]] return; }
L_001BC9D0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC9DCu); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BC9DCu) [[unlikely]] return; }
L_001BC9DC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 16u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC9F4u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_002F(c, 269u, depth + 1u); else { c.pc = 0x001BCFE0u; return; } if (c.pc != 0x001BC9F4u) [[unlikely]] return; }
L_001BC9F4:
    c.f[12] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[19], c.r[19].w[0] + 128u);
    c.f[13] = ld32((c.r[18].w[0] + 52u));
    c.f[14] = ld32((c.r[18].w[0] + 56u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCA0Cu); set32(c.r[17], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BCA0Cu) [[unlikely]] return; }
L_001BCA0C:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8658u));
    set32(c.r[2], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[20].w[0] + 320u);  if (t) { goto L_001BCA28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCA24u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001BCA24u) [[unlikely]] return; }
L_001BCA24:
    c.budget -= 1;
L_001BCA28:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCA34u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BCA34u) [[unlikely]] return; }
L_001BCA34:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCA40u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BCA40u) [[unlikely]] return; }
L_001BCA40:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCA4Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCA4Cu) [[unlikely]] return; }
L_001BCA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCA54u); set32(c.r[4], ld32((c.r[20].w[0] + 8408u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCA54u) [[unlikely]] return; }
L_001BCA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCA5Cu); set32(c.r[4], ld32((c.r[20].w[0] + 8412u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BCA5Cu) [[unlikely]] return; }
L_001BCA5C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCA68u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BCA68u) [[unlikely]] return; }
L_001BCA68:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCA74u); set32(c.r[18], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BCA74u) [[unlikely]] return; }
L_001BCA74:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCA84u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BCA84u) [[unlikely]] return; }
L_001BCA84:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCA90u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BCA90u) [[unlikely]] return; }
L_001BCA90:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCA9Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BCA9Cu) [[unlikely]] return; }
L_001BCA9C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCAA8u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCAA8u) [[unlikely]] return; }
L_001BCAA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCAB0u); set32(c.r[4], ld32((c.r[20].w[0] + 8420u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BCAB0u) [[unlikely]] return; }
L_001BCAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCAB8u); set32(c.r[4], ld32((c.r[20].w[0] + 8416u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCAB8u) [[unlikely]] return; }
L_001BCAB8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCAC4u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BCAC4u) [[unlikely]] return; }
L_001BCAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCACCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BCACCu) [[unlikely]] return; }
L_001BCACC:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCADCu); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BCADCu) [[unlikely]] return; }
L_001BCADC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCAE8u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BCAE8u) [[unlikely]] return; }
L_001BCAE8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCAF4u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BCAF4u) [[unlikely]] return; }
L_001BCAF4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCB00u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCB00u) [[unlikely]] return; }
L_001BCB00:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCB0Cu); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BCB0Cu) [[unlikely]] return; }
L_001BCB0C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCB18u); set32(c.r[18], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BCB18u) [[unlikely]] return; }
L_001BCB18:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCB30u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_002F(c, 269u, depth + 1u); else { c.pc = 0x001BCFE0u; return; } if (c.pc != 0x001BCB30u) [[unlikely]] return; }
L_001BCB30:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 128u);
    set32(c.r[6], c.r[18].w[0] + 32u);
    set32(c.r[7], c.r[17].w[0] + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCB48u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_002F(c, 314u, depth + 1u); else { c.pc = 0x001BD5A0u; return; } if (c.pc != 0x001BCB48u) [[unlikely]] return; }
L_001BCB48:
    set32(c.r[4], 0u + 1u);
    set32(c.r[19], c.r[19].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCB58u); set32(c.r[18], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BCB58u) [[unlikely]] return; }
L_001BCB58:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[17].w[0] + 36u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCB70u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 269u, depth + 1u); else { c.pc = 0x001BCFE0u; return; } if (c.pc != 0x001BCB70u) [[unlikely]] return; }
L_001BCB70:
    set32(c.r[5], c.r[19].w[0] + 128u);
    set32(c.r[6], c.r[18].w[0] + 32u);
    set32(c.r[7], c.r[17].w[0] + 60u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCB88u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 314u, depth + 1u); else { c.pc = 0x001BD5A0u; return; } if (c.pc != 0x001BCB88u) [[unlikely]] return; }
L_001BCB88:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001BCB90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCB98u); set32(c.r[4], c.r[20].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001BCB98u) [[unlikely]] return; }
L_001BCB98:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCBA8u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BCBA8u) [[unlikely]] return; }
L_001BCBA8:
    set32(c.r[4], c.r[20].w[0] + 1984u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCBB4u); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BCBB4u) [[unlikely]] return; }
L_001BCBB4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[17].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BCB90u | kUnwind; return; } goto L_001BCB90; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001BCBF0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCC1Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BCC1Cu) [[unlikely]] return; }
L_001BCC1C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCC44u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BCC44u) [[unlikely]] return; }
L_001BCC44:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[19].w[0] + 8592u);  if (t) { goto L_001BCCA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCC58u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001BCC58u) [[unlikely]] return; }
L_001BCC58:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCC64u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BCC64u) [[unlikely]] return; }
L_001BCC64:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCC70u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BCC70u) [[unlikely]] return; }
L_001BCC70:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCC7Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCC7Cu) [[unlikely]] return; }
L_001BCC7C:
    c.f[0] = ld32((c.r[19].w[0] + 8540u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCC94u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BCC94u) [[unlikely]] return; }
L_001BCC94:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCCA0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BCCA0u) [[unlikely]] return; }
L_001BCCA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BCD00; } }
L_001BCCA8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCCC0u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BCCC0u) [[unlikely]] return; }
L_001BCCC0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCCD8u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BCCD8u) [[unlikely]] return; }
L_001BCCD8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCCF0u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCCF0u) [[unlikely]] return; }
L_001BCCF0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCCFCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BCCFCu) [[unlikely]] return; }
L_001BCCFC:
    c.budget -= 1;
L_001BCD00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD08u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8332u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BCD08u) [[unlikely]] return; }
L_001BCD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD10u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8328u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCD10u) [[unlikely]] return; }
L_001BCD10:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD20u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BCD20u) [[unlikely]] return; }
L_001BCD20:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD2Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BCD2Cu) [[unlikely]] return; }
L_001BCD2C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD38u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BCD38u) [[unlikely]] return; }
L_001BCD38:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD44u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCD44u) [[unlikely]] return; }
L_001BCD44:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD50u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BCD50u) [[unlikely]] return; }
L_001BCD50:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD5Cu); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BCD5Cu) [[unlikely]] return; }
L_001BCD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD64u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8428u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BCD64u) [[unlikely]] return; }
L_001BCD64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD6Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 8424u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCD6Cu) [[unlikely]] return; }
L_001BCD6C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD7Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BCD7Cu) [[unlikely]] return; }
L_001BCD7C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD88u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BCD88u) [[unlikely]] return; }
L_001BCD88:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD94u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BCD94u) [[unlikely]] return; }
L_001BCD94:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDA0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCDA0u) [[unlikely]] return; }
L_001BCDA0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDACu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BCDACu) [[unlikely]] return; }
L_001BCDAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDB4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BCDB4u) [[unlikely]] return; }
L_001BCDB4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDC4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BCDC4u) [[unlikely]] return; }
L_001BCDC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDD0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BCDD0u) [[unlikely]] return; }
L_001BCDD0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDDCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BCDDCu) [[unlikely]] return; }
L_001BCDDC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDE8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCDE8u) [[unlikely]] return; }
L_001BCDE8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDF4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BCDF4u) [[unlikely]] return; }
L_001BCDF4:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCE10u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_002F(c, 269u, depth + 1u); else { c.pc = 0x001BCFE0u; return; } if (c.pc != 0x001BCE10u) [[unlikely]] return; }
L_001BCE10:
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[18], c.r[18].w[0] + 128u);
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCE28u); set32(c.r[16], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BCE28u) [[unlikely]] return; }
L_001BCE28:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCE34u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BCE34u) [[unlikely]] return; }
L_001BCE34:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCE40u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BCE40u) [[unlikely]] return; }
L_001BCE40:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCE4Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCE4Cu) [[unlikely]] return; }
L_001BCE4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCE54u); set32(c.r[4], ld32((c.r[19].w[0] + 8400u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCE54u) [[unlikely]] return; }
L_001BCE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCE5Cu); set32(c.r[4], ld32((c.r[19].w[0] + 8404u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BCE5Cu) [[unlikely]] return; }
L_001BCE5C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCE68u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BCE68u) [[unlikely]] return; }
L_001BCE68:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCE74u); set32(c.r[17], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001BCE74u) [[unlikely]] return; }
L_001BCE74:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCE84u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BCE84u) [[unlikely]] return; }
L_001BCE84:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCE90u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BCE90u) [[unlikely]] return; }
L_001BCE90:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCE9Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BCE9Cu) [[unlikely]] return; }
L_001BCE9C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCEA8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCEA8u) [[unlikely]] return; }
L_001BCEA8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCEB4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BCEB4u) [[unlikely]] return; }
L_001BCEB4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 16u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCECCu); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_002F(c, 269u, depth + 1u); else { c.pc = 0x001BCFE0u; return; } if (c.pc != 0x001BCECCu) [[unlikely]] return; }
L_001BCECC:
    c.f[12] = ld32((c.r[17].w[0] + 48u));
    set32(c.r[18], c.r[18].w[0] + 128u);
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCEE4u); set32(c.r[16], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BCEE4u) [[unlikely]] return; }
L_001BCEE4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCEF0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BCEF0u) [[unlikely]] return; }
L_001BCEF0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCEFCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BCEFCu) [[unlikely]] return; }
L_001BCEFC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF08u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCF08u) [[unlikely]] return; }
L_001BCF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF10u); set32(c.r[4], ld32((c.r[19].w[0] + 8408u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCF10u) [[unlikely]] return; }
L_001BCF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF18u); set32(c.r[4], ld32((c.r[19].w[0] + 8412u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BCF18u) [[unlikely]] return; }
L_001BCF18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF24u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BCF24u) [[unlikely]] return; }
L_001BCF24:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF30u); set32(c.r[17], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BCF30u) [[unlikely]] return; }
L_001BCF30:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF40u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BCF40u) [[unlikely]] return; }
L_001BCF40:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF4Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BCF4Cu) [[unlikely]] return; }
L_001BCF4C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF58u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BCF58u) [[unlikely]] return; }
L_001BCF58:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF64u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCF64u) [[unlikely]] return; }
L_001BCF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF6Cu); set32(c.r[4], ld32((c.r[19].w[0] + 8420u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BCF6Cu) [[unlikely]] return; }
L_001BCF6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF74u); set32(c.r[4], ld32((c.r[19].w[0] + 8416u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCF74u) [[unlikely]] return; }
L_001BCF74:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF80u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BCF80u) [[unlikely]] return; }
L_001BCF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF88u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BCF88u) [[unlikely]] return; }
L_001BCF88:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF98u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BCF98u) [[unlikely]] return; }
L_001BCF98:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCFA4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BCFA4u) [[unlikely]] return; }
L_001BCFA4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCFB0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BCFB0u) [[unlikely]] return; }
L_001BCFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCFB8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BCFB8u) [[unlikely]] return; }
L_001BCFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCFC0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BCFC0u) [[unlikely]] return; }
L_001BCFC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BCFE0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[12] = ld32((c.r[6].w[0]));
    c.f[13] = ld32((c.r[6].w[0] + 4u));
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD03Cu); c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BD03Cu) [[unlikely]] return; }
L_001BD03C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD044u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BD044u) [[unlikely]] return; }
L_001BD044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD04Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BD04Cu) [[unlikely]] return; }
L_001BD04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD054u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001BD054u) [[unlikely]] return; }
L_001BD054:
    set32(c.r[16], c.r[18].w[0] << 4);
    set32(c.r[3], c.r[29].w[0] + 304u);
    set32(c.r[4], c.r[16].w[0] + c.r[21].w[0]);
    set32(c.r[2], 0u + 2u);
    c.f[3] = ld32((c.r[4].w[0] + 5600u));
    c.f[2] = ld32((c.r[4].w[0] + 5604u));
    c.f[1] = ld32((c.r[4].w[0] + 5608u));
    c.f[0] = ld32((c.r[4].w[0] + 5612u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    c.budget -= 13;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { goto L_001BD090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = ld32((c.r[21].w[0] + 8436u));  if (t) { goto L_001BD0B0; } }
L_001BD090:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001BD0A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = ld32((c.r[21].w[0] + 8432u));  if (t) { goto L_001BD0B0; } }
    c.budget -= 1;
L_001BD0A8:
    c.f[22] = 0u;
    c.budget -= 2;
L_001BD0B0:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD0BCu); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x001BD0BCu) [[unlikely]] return; }
L_001BD0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD0C4u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BD0C4u) [[unlikely]] return; }
L_001BD0C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD0CCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001BD0CCu) [[unlikely]] return; }
L_001BD0CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD0DCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x001BD0DCu) [[unlikely]] return; }
L_001BD0DC:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD0E8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001BD0E8u) [[unlikely]] return; }
L_001BD0E8:
    set32(c.r[2], c.r[29].w[0] + 304u);
    set32(c.r[3], c.r[29].w[0] + 288u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD0FCu); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BD0FCu) [[unlikely]] return; }
L_001BD0FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD104u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BD104u) [[unlikely]] return; }
L_001BD104:
    set32(c.r[3], c.r[16].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[29].w[0] + 320u);
    c.f[3] = ld32((c.r[3].w[0] + 5664u));
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.f[2] = ld32((c.r[3].w[0] + 5668u));
    c.f[1] = ld32((c.r[3].w[0] + 5672u));
    c.f[0] = ld32((c.r[3].w[0] + 5676u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD134u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BD134u) [[unlikely]] return; }
L_001BD134:
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    set32(c.r[17], c.r[29].w[0] + 256u);
    set32(c.r[2], c.r[29].w[0] + 260u);
    set32(c.r[7], c.r[29].w[0] + 324u);
    set32(c.r[3], c.r[29].w[0] + 328u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    set32(c.r[2], c.r[29].w[0] + 264u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD1A0u); st32((c.r[3].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001BD1A0u) [[unlikely]] return; }
L_001BD1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD1A8u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BD1A8u) [[unlikely]] return; }
L_001BD1A8:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD1B8u); set32(c.r[6], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001BD1B8u) [[unlikely]] return; }
L_001BD1B8:
    c.f[2] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.f[1] = ld32((c.r[29].w[0] + 244u));
    set32(c.r[22], c.r[29].w[0] + 196u);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    set32(c.r[23], c.r[29].w[0] + 200u);
    set32(c.r[30], c.r[29].w[0] + 212u);
    set32(c.r[16], c.r[29].w[0] + 216u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[29].w[0] + 180u), c.f[1]);
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[22].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 264u);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[23].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 272u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 276u));
    st32((c.r[29].w[0] + 208u), c.f[1]);
    st32((c.r[30].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD224u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BD224u) [[unlikely]] return; }
L_001BD224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD22Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001BD22Cu) [[unlikely]] return; }
L_001BD22C:
    c.f[3] = ld32((c.r[19].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.f[2] = ld32((c.r[19].w[0] + 20u));
    set32(c.r[2], c.r[29].w[0] + 304u);
    c.f[1] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD278u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001BD278u) [[unlikely]] return; }
L_001BD278:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD284u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001BD284u) [[unlikely]] return; }
L_001BD284:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD290u); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001BD290u) [[unlikely]] return; }
L_001BD290:
    c.f[23] = c.f[0];
    c.f[0] = fp::add(c.f[21], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[23]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001BD2D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD2ACu); set32(c.r[20], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BD2ACu) [[unlikely]] return; }
L_001BD2AC:
    c.f[0] = c.f[21] ^ fp::kSign;
    c.f[13] = fp::sub(c.f[0], c.f[22]);
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD2C0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BD2C0u) [[unlikely]] return; }
L_001BD2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD2C8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BD2C8u) [[unlikely]] return; }
L_001BD2C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD560; } }
L_001BD2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD2D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BD2D8u) [[unlikely]] return; }
L_001BD2D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[3].w[0];
    c.f[5] = fp::mul(c.f[21], c.f[21]);
    c.f[1] = fp::mul(c.f[3], c.f[23]);
    c.f[2] = fp::mul(c.f[1], c.f[21]);
    c.f[1] = fp::mul(c.f[3], c.f[21]);
    c.f[4] = fp::mul(c.f[23], c.f[23]);
    c.f[6] = fp::mul(c.f[20], c.f[20]);
    c.f[3] = fp::add(c.f[4], c.f[5]);
    c.f[3] = fp::sub(c.f[3], c.f[6]);
    fpu_div(c, 21u, c.f[3], c.f[2]);
    c.f[2] = fp::add(c.f[5], c.f[6]);
    c.f[2] = fp::sub(c.f[2], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[2] = c.f[2] ^ fp::kSign;
    fpu_div(c, 20u, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BD340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { goto L_001BD360; } }
    c.budget -= 1;
L_001BD340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BD360; } }
    c.f[21] = c.f[0];
    c.budget -= 2;
L_001BD360:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BD380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_001BD3A0; } }
L_001BD380:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BD3A0; } }
    c.f[20] = c.f[0];
    c.budget -= 2;
L_001BD3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD3A8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BD3A8u) [[unlikely]] return; }
L_001BD3A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD3B0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BD3B0u) [[unlikely]] return; }
L_001BD3B0:
    c.f[1] = fp::mul(c.f[21], c.f[21]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[21]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[22].w[0]), c.f[21]);  if (t) { goto L_001BD3D0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001BD410; } }
    c.budget -= 1;
L_001BD3D0:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 772u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001BD3F8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD3ECu); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001BD3ECu) [[unlikely]] return; }
L_001BD3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD448; } }
    c.budget -= 1;
L_001BD3F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD408u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001BD408u) [[unlikely]] return; }
L_001BD408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_001BD448; } }
L_001BD410:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 772u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001BD438; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD42Cu); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001BD42Cu) [[unlikely]] return; }
L_001BD42C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_001BD448; } }
    c.budget -= 1;
L_001BD438:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD448u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001BD448u) [[unlikely]] return; }
L_001BD448:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[23].w[0]), c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD45Cu); st32((c.r[30].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001BD45Cu) [[unlikely]] return; }
L_001BD45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD464u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001BD464u) [[unlikely]] return; }
L_001BD464:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD470u); set32(c.r[20], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BD470u) [[unlikely]] return; }
L_001BD470:
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[12] = ld32((c.r[19].w[0] + 16u));
    c.f[14] = ld32((c.r[19].w[0] + 24u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD484u); c.f[13] = fp::sub(c.f[0], c.f[22]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BD484u) [[unlikely]] return; }
L_001BD484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD48Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BD48Cu) [[unlikely]] return; }
L_001BD48C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD494u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BD494u) [[unlikely]] return; }
L_001BD494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD49Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BD49Cu) [[unlikely]] return; }
L_001BD49C:
    c.f[1] = fp::mul(c.f[20], c.f[20]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[20]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[22].w[0]), c.f[20]);  if (t) { goto L_001BD4B8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001BD4F8; } }
L_001BD4B8:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 772u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001BD4E0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD4D4u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001BD4D4u) [[unlikely]] return; }
L_001BD4D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_001BD538; } }
    c.budget -= 1;
L_001BD4E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD4F0u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001BD4F0u) [[unlikely]] return; }
L_001BD4F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD538; } }
L_001BD4F8:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 772u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001BD520; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD514u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001BD514u) [[unlikely]] return; }
L_001BD514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD538; } }
    c.budget -= 1;
L_001BD520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD530u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001BD530u) [[unlikely]] return; }
L_001BD530:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 2;
L_001BD538:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[23].w[0]), c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD54Cu); st32((c.r[30].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001BD54Cu) [[unlikely]] return; }
L_001BD54C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD554u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001BD554u) [[unlikely]] return; }
L_001BD554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD55Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BD55Cu) [[unlikely]] return; }
L_001BD55C:
    c.budget -= 1;
L_001BD560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_001BD5A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[12] = ld32((c.r[6].w[0]));
    c.f[13] = ld32((c.r[6].w[0] + 4u));
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD5E8u); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BD5E8u) [[unlikely]] return; }
L_001BD5E8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD5F4u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BD5F4u) [[unlikely]] return; }
L_001BD5F4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD600u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BD600u) [[unlikely]] return; }
L_001BD600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD608u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BD608u) [[unlikely]] return; }
L_001BD608:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001BD628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD61Cu);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BD61Cu) [[unlikely]] return; }
L_001BD61C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD848; } }
    c.budget -= 1;
L_001BD628:
    c.r[16].d[0] = c.r[16].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[3], c.r[16].w[0] + c.r[21].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8560u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[3].w[0] + 8560u);  if (t) { goto L_001BD6D8; } }
    st8((c.r[3].w[0] + 8562u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 8544u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[3].w[0] + 8544u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD680u); set32(c.r[4], ld32((c.r[3].w[0] + 8544u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BD680u) [[unlikely]] return; }
L_001BD680:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    set32(c.r[2], 0u + 70u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_001BD6C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[1] = ld32((c.r[3].w[0] + 8552u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[3].w[0] + 8552u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD6C8u); set32(c.r[4], ld32((c.r[3].w[0] + 8552u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BD6C8u) [[unlikely]] return; }
L_001BD6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD6D0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BD6D0u) [[unlikely]] return; }
L_001BD6D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD848; } }
L_001BD6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD6E0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BD6E0u) [[unlikely]] return; }
L_001BD6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD6E8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001BD6E8u) [[unlikely]] return; }
L_001BD6E8:
    set32(c.r[2], c.r[16].w[0] + c.r[21].w[0]);
    set32(c.r[17], c.r[2].w[0] + 8562u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8562u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[29].w[0] + 164u);  if (t) { goto L_001BD720; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = ld32((c.r[21].w[0] + 8532u));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.f[20] = ld32((c.r[19].w[0]));
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD718u); st32((c.r[19].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0021(c, 72u, depth + 1u); else { c.pc = 0x001859B0u; return; } if (c.pc != 0x001BD718u) [[unlikely]] return; }
L_001BD718:
    st32((c.r[19].w[0]), c.f[20]);
    c.budget -= 2;
L_001BD720:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD738u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0011(c, 224u, depth + 1u); else { c.pc = 0x00146FE0u; return; } if (c.pc != 0x001BD738u) [[unlikely]] return; }
L_001BD738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD740u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BD740u) [[unlikely]] return; }
L_001BD740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD748u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001BD748u) [[unlikely]] return; }
L_001BD748:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD758u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x001BD758u) [[unlikely]] return; }
L_001BD758:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD764u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001BD764u) [[unlikely]] return; }
L_001BD764:
    set32(c.r[22], c.r[29].w[0] + 148u);
    set32(c.r[17], c.r[29].w[0] + 152u);
    c.f[12] = ld32((c.r[17].w[0]));
    set32(c.r[16], c.r[16].w[0] << 2);
    c.f[13] = ld32((c.r[22].w[0]));
    set32(c.r[2], c.r[16].w[0] + c.r[21].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD784u); set32(c.r[19], c.r[2].w[0] + 8544u);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001BD784u) [[unlikely]] return; }
L_001BD784:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD798u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001BD798u) [[unlikely]] return; }
L_001BD798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD7A0u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BD7A0u) [[unlikely]] return; }
L_001BD7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD7A8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BD7A8u) [[unlikely]] return; }
L_001BD7A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001BD848; } }
    c.f[0] = ld32((c.r[22].w[0]));
    c.f[1] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD7CCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001BD7CCu) [[unlikely]] return; }
L_001BD7CC:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD7DCu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001BD7DCu) [[unlikely]] return; }
L_001BD7DC:
    set32(c.r[3], c.r[16].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.f[2] = ld32((c.r[3].w[0] + 8552u));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[0] = c.r[2].w[0];
    set32(c.r[16], c.r[3].w[0] + 8552u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD834u); st32((c.r[3].w[0] + 8552u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001BD834u) [[unlikely]] return; }
L_001BD834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD83Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BD83Cu) [[unlikely]] return; }
L_001BD83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD844u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BD844u) [[unlikely]] return; }
L_001BD844:
    c.budget -= 1;
L_001BD848:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001BD880:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD8ACu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BD8ACu) [[unlikely]] return; }
L_001BD8AC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD950; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD8C8u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BD8C8u) [[unlikely]] return; }
L_001BD8C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD8D0u); set32(c.r[4], c.r[19].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001BD8D0u) [[unlikely]] return; }
L_001BD8D0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD8E0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BD8E0u) [[unlikely]] return; }
L_001BD8E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD8ECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BD8ECu) [[unlikely]] return; }
L_001BD8EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD8F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BD8F8u) [[unlikely]] return; }
L_001BD8F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD904u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BD904u) [[unlikely]] return; }
L_001BD904:
    c.f[0] = ld32((c.r[19].w[0] + 8540u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD91Cu); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BD91Cu) [[unlikely]] return; }
L_001BD91C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD928u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BD928u) [[unlikely]] return; }
L_001BD928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD930u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8332u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BD930u) [[unlikely]] return; }
L_001BD930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD938u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8328u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BD938u) [[unlikely]] return; }
L_001BD938:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD948u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BD948u) [[unlikely]] return; }
L_001BD948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD9F8; } }
L_001BD950:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD978u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BD978u) [[unlikely]] return; }
L_001BD978:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD990u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BD990u) [[unlikely]] return; }
L_001BD990:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD9A8u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BD9A8u) [[unlikely]] return; }
L_001BD9A8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD9C0u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BD9C0u) [[unlikely]] return; }
L_001BD9C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD9CCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BD9CCu) [[unlikely]] return; }
L_001BD9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD9D4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8332u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BD9D4u) [[unlikely]] return; }
L_001BD9D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD9DCu); c.r[4].d[0] = ld16((c.r[19].w[0] + 8328u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BD9DCu) [[unlikely]] return; }
L_001BD9DC:
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[17].w[0] + 16u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD9F8u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BD9F8u) [[unlikely]] return; }
L_001BD9F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDA04u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BDA04u) [[unlikely]] return; }
L_001BDA04:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDA10u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BDA10u) [[unlikely]] return; }
L_001BDA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDA18u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BDA18u) [[unlikely]] return; }
L_001BDA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDA20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BDA20u) [[unlikely]] return; }
L_001BDA20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BDA40:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDA6Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BDA6Cu) [[unlikely]] return; }
L_001BDA6C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BDB08; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDA88u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDA88u) [[unlikely]] return; }
L_001BDA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDA90u); set32(c.r[4], c.r[19].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001BDA90u) [[unlikely]] return; }
L_001BDA90:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDAA0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDAA0u) [[unlikely]] return; }
L_001BDAA0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDAB0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BDAB0u) [[unlikely]] return; }
L_001BDAB0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDABCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BDABCu) [[unlikely]] return; }
L_001BDABC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDAC8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BDAC8u) [[unlikely]] return; }
L_001BDAC8:
    c.f[0] = ld32((c.r[19].w[0] + 8540u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDAE0u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDAE0u) [[unlikely]] return; }
L_001BDAE0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDAECu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BDAECu) [[unlikely]] return; }
L_001BDAEC:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDAFCu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDAFCu) [[unlikely]] return; }
L_001BDAFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BDBA8; } }
    c.budget -= 1;
L_001BDB08:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDB30u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDB30u) [[unlikely]] return; }
L_001BDB30:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDB4Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BDB4Cu) [[unlikely]] return; }
L_001BDB4C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDB64u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BDB64u) [[unlikely]] return; }
L_001BDB64:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDB7Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BDB7Cu) [[unlikely]] return; }
L_001BDB7C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDB88u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BDB88u) [[unlikely]] return; }
L_001BDB88:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDBA4u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDBA4u) [[unlikely]] return; }
L_001BDBA4:
    c.budget -= 1;
L_001BDBA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDBB0u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8332u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BDBB0u) [[unlikely]] return; }
L_001BDBB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDBB8u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8328u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BDBB8u) [[unlikely]] return; }
L_001BDBB8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDBC4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BDBC4u) [[unlikely]] return; }
L_001BDBC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDBD0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BDBD0u) [[unlikely]] return; }
L_001BDBD0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDBDCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BDBDCu) [[unlikely]] return; }
L_001BDBDC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDBE8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BDBE8u) [[unlikely]] return; }
L_001BDBE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDBF0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BDBF0u) [[unlikely]] return; }
L_001BDBF0:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC00u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDC00u) [[unlikely]] return; }
L_001BDC00:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC0Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BDC0Cu) [[unlikely]] return; }
L_001BDC0C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC18u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BDC18u) [[unlikely]] return; }
L_001BDC18:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC24u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BDC24u) [[unlikely]] return; }
L_001BDC24:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC30u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BDC30u) [[unlikely]] return; }
L_001BDC30:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC44u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDC44u) [[unlikely]] return; }
L_001BDC44:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC50u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BDC50u) [[unlikely]] return; }
L_001BDC50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC5Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BDC5Cu) [[unlikely]] return; }
L_001BDC5C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC68u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BDC68u) [[unlikely]] return; }
L_001BDC68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC74u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BDC74u) [[unlikely]] return; }
L_001BDC74:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC84u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDC84u) [[unlikely]] return; }
L_001BDC84:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC90u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BDC90u) [[unlikely]] return; }
L_001BDC90:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC9Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BDC9Cu) [[unlikely]] return; }
L_001BDC9C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDCA8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BDCA8u) [[unlikely]] return; }
L_001BDCA8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDCB4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BDCB4u) [[unlikely]] return; }
L_001BDCB4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDCC0u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BDCC0u) [[unlikely]] return; }
L_001BDCC0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDCD0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDCD0u) [[unlikely]] return; }
L_001BDCD0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDCDCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BDCDCu) [[unlikely]] return; }
L_001BDCDC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDCE8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BDCE8u) [[unlikely]] return; }
L_001BDCE8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDCF4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BDCF4u) [[unlikely]] return; }
L_001BDCF4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD00u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BDD00u) [[unlikely]] return; }
L_001BDD00:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD10u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDD10u) [[unlikely]] return; }
L_001BDD10:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD1Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BDD1Cu) [[unlikely]] return; }
L_001BDD1C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD28u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BDD28u) [[unlikely]] return; }
L_001BDD28:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD34u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BDD34u) [[unlikely]] return; }
L_001BDD34:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD40u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BDD40u) [[unlikely]] return; }
L_001BDD40:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD54u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDD54u) [[unlikely]] return; }
L_001BDD54:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD60u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BDD60u) [[unlikely]] return; }
L_001BDD60:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD6Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BDD6Cu) [[unlikely]] return; }
L_001BDD6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD74u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BDD74u) [[unlikely]] return; }
L_001BDD74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD7Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BDD7Cu) [[unlikely]] return; }
L_001BDD7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BDDA0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDDCCu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BDDCCu) [[unlikely]] return; }
L_001BDDCC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BDE68; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDDE8u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDDE8u) [[unlikely]] return; }
L_001BDDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDDF0u); set32(c.r[4], c.r[19].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001BDDF0u) [[unlikely]] return; }
L_001BDDF0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE00u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDE00u) [[unlikely]] return; }
L_001BDE00:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE10u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BDE10u) [[unlikely]] return; }
L_001BDE10:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE1Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BDE1Cu) [[unlikely]] return; }
L_001BDE1C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE28u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BDE28u) [[unlikely]] return; }
L_001BDE28:
    c.f[0] = ld32((c.r[19].w[0] + 8540u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE40u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDE40u) [[unlikely]] return; }
L_001BDE40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE4Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BDE4Cu) [[unlikely]] return; }
L_001BDE4C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE5Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDE5Cu) [[unlikely]] return; }
L_001BDE5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BDF08; } }
    c.budget -= 1;
L_001BDE68:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE90u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDE90u) [[unlikely]] return; }
L_001BDE90:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDEACu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BDEACu) [[unlikely]] return; }
L_001BDEAC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDEC4u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BDEC4u) [[unlikely]] return; }
L_001BDEC4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDEDCu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BDEDCu) [[unlikely]] return; }
L_001BDEDC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDEE8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BDEE8u) [[unlikely]] return; }
L_001BDEE8:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF04u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDF04u) [[unlikely]] return; }
L_001BDF04:
    c.budget -= 1;
L_001BDF08:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF14u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BDF14u) [[unlikely]] return; }
L_001BDF14:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF20u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BDF20u) [[unlikely]] return; }
L_001BDF20:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF2Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BDF2Cu) [[unlikely]] return; }
L_001BDF2C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF38u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BDF38u) [[unlikely]] return; }
L_001BDF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF40u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BDF40u) [[unlikely]] return; }
L_001BDF40:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF50u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDF50u) [[unlikely]] return; }
L_001BDF50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF5Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BDF5Cu) [[unlikely]] return; }
L_001BDF5C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF68u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BDF68u) [[unlikely]] return; }
L_001BDF68:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF74u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BDF74u) [[unlikely]] return; }
L_001BDF74:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF80u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BDF80u) [[unlikely]] return; }
L_001BDF80:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF8Cu); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BDF8Cu) [[unlikely]] return; }
L_001BDF8C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF9Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BDF9Cu) [[unlikely]] return; }
L_001BDF9C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDFA8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BDFA8u) [[unlikely]] return; }
L_001BDFA8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDFB4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BDFB4u) [[unlikely]] return; }
L_001BDFB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDFBCu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BDFBCu) [[unlikely]] return; }
L_001BDFBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDFC4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BDFC4u) [[unlikely]] return; }
L_001BDFC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BDFE0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE00Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BE00Cu) [[unlikely]] return; }
L_001BE00C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE034u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE034u) [[unlikely]] return; }
L_001BE034:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE04Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE04Cu) [[unlikely]] return; }
L_001BE04C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE064u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE064u) [[unlikely]] return; }
L_001BE064:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE07Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE07Cu) [[unlikely]] return; }
L_001BE07C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE088u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE088u) [[unlikely]] return; }
L_001BE088:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE098u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE098u) [[unlikely]] return; }
L_001BE098:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0A4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE0A4u) [[unlikely]] return; }
L_001BE0A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0B0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE0B0u) [[unlikely]] return; }
L_001BE0B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0BCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE0BCu) [[unlikely]] return; }
L_001BE0BC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0C8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE0C8u) [[unlikely]] return; }
L_001BE0C8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0D4u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BE0D4u) [[unlikely]] return; }
L_001BE0D4:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0E4u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE0E4u) [[unlikely]] return; }
L_001BE0E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE0F0u) [[unlikely]] return; }
L_001BE0F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0FCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE0FCu) [[unlikely]] return; }
L_001BE0FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE108u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE108u) [[unlikely]] return; }
L_001BE108:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE114u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE114u) [[unlikely]] return; }
L_001BE114:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE124u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE124u) [[unlikely]] return; }
L_001BE124:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE130u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE130u) [[unlikely]] return; }
L_001BE130:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE13Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE13Cu) [[unlikely]] return; }
L_001BE13C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE148u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE148u) [[unlikely]] return; }
L_001BE148:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE154u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE154u) [[unlikely]] return; }
L_001BE154:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE168u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE168u) [[unlikely]] return; }
L_001BE168:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE174u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE174u) [[unlikely]] return; }
L_001BE174:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE180u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE180u) [[unlikely]] return; }
L_001BE180:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE18Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE18Cu) [[unlikely]] return; }
L_001BE18C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE198u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE198u) [[unlikely]] return; }
L_001BE198:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE1A8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE1A8u) [[unlikely]] return; }
L_001BE1A8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE1B4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE1B4u) [[unlikely]] return; }
L_001BE1B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE1C0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE1C0u) [[unlikely]] return; }
L_001BE1C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE1CCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE1CCu) [[unlikely]] return; }
L_001BE1CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE1D8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE1D8u) [[unlikely]] return; }
L_001BE1D8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE1E4u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BE1E4u) [[unlikely]] return; }
L_001BE1E4:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE1F4u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE1F4u) [[unlikely]] return; }
L_001BE1F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE200u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE200u) [[unlikely]] return; }
L_001BE200:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE20Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE20Cu) [[unlikely]] return; }
L_001BE20C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE218u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE218u) [[unlikely]] return; }
L_001BE218:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE224u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE224u) [[unlikely]] return; }
L_001BE224:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE234u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE234u) [[unlikely]] return; }
L_001BE234:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE240u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE240u) [[unlikely]] return; }
L_001BE240:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE24Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE24Cu) [[unlikely]] return; }
L_001BE24C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE258u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE258u) [[unlikely]] return; }
L_001BE258:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE264u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE264u) [[unlikely]] return; }
L_001BE264:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE278u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE278u) [[unlikely]] return; }
L_001BE278:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE284u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE284u) [[unlikely]] return; }
L_001BE284:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE290u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE290u) [[unlikely]] return; }
L_001BE290:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE29Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE29Cu) [[unlikely]] return; }
L_001BE29C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE2A8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE2A8u) [[unlikely]] return; }
L_001BE2A8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE2B8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE2B8u) [[unlikely]] return; }
L_001BE2B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE2C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE2C4u) [[unlikely]] return; }
L_001BE2C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE2D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE2D0u) [[unlikely]] return; }
L_001BE2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE2D8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE2D8u) [[unlikely]] return; }
L_001BE2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE2E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE2E0u) [[unlikely]] return; }
L_001BE2E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BE300:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE32Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BE32Cu) [[unlikely]] return; }
L_001BE32C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE3D8; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE348u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE348u) [[unlikely]] return; }
L_001BE348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE350u); set32(c.r[4], c.r[19].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001BE350u) [[unlikely]] return; }
L_001BE350:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE360u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE360u) [[unlikely]] return; }
L_001BE360:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE370u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE370u) [[unlikely]] return; }
L_001BE370:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE37Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE37Cu) [[unlikely]] return; }
L_001BE37C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE388u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE388u) [[unlikely]] return; }
L_001BE388:
    c.f[0] = ld32((c.r[19].w[0] + 8540u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE3A0u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE3A0u) [[unlikely]] return; }
L_001BE3A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE3ACu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE3ACu) [[unlikely]] return; }
L_001BE3AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE3B4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8332u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE3B4u) [[unlikely]] return; }
L_001BE3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE3BCu); c.r[4].d[0] = ld16((c.r[19].w[0] + 8328u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE3BCu) [[unlikely]] return; }
L_001BE3BC:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE3CCu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE3CCu) [[unlikely]] return; }
L_001BE3CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BE478; } }
    c.budget -= 1;
L_001BE3D8:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE400u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE400u) [[unlikely]] return; }
L_001BE400:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE41Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE41Cu) [[unlikely]] return; }
L_001BE41C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE434u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE434u) [[unlikely]] return; }
L_001BE434:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE44Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE44Cu) [[unlikely]] return; }
L_001BE44C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE458u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE458u) [[unlikely]] return; }
L_001BE458:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE474u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE474u) [[unlikely]] return; }
L_001BE474:
    c.budget -= 1;
L_001BE478:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE484u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE484u) [[unlikely]] return; }
L_001BE484:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE490u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE490u) [[unlikely]] return; }
L_001BE490:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE49Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE49Cu) [[unlikely]] return; }
L_001BE49C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE4A8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE4A8u) [[unlikely]] return; }
L_001BE4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE4B0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BE4B0u) [[unlikely]] return; }
L_001BE4B0:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE4C0u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE4C0u) [[unlikely]] return; }
L_001BE4C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE4CCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE4CCu) [[unlikely]] return; }
L_001BE4CC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE4D8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE4D8u) [[unlikely]] return; }
L_001BE4D8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE4E4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE4E4u) [[unlikely]] return; }
L_001BE4E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE4F0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE4F0u) [[unlikely]] return; }
L_001BE4F0:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE504u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE504u) [[unlikely]] return; }
L_001BE504:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE510u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE510u) [[unlikely]] return; }
L_001BE510:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE51Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE51Cu) [[unlikely]] return; }
L_001BE51C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE528u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE528u) [[unlikely]] return; }
L_001BE528:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE534u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE534u) [[unlikely]] return; }
L_001BE534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE53Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BE53Cu) [[unlikely]] return; }
L_001BE53C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE54Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE54Cu) [[unlikely]] return; }
L_001BE54C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE558u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE558u) [[unlikely]] return; }
L_001BE558:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE564u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE564u) [[unlikely]] return; }
L_001BE564:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE570u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE570u) [[unlikely]] return; }
L_001BE570:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE57Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE57Cu) [[unlikely]] return; }
L_001BE57C:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE590u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE590u) [[unlikely]] return; }
L_001BE590:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE59Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE59Cu) [[unlikely]] return; }
L_001BE59C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE5A8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE5A8u) [[unlikely]] return; }
L_001BE5A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE5B0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE5B0u) [[unlikely]] return; }
L_001BE5B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE5B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE5B8u) [[unlikely]] return; }
L_001BE5B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BE5E0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE60Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BE60Cu) [[unlikely]] return; }
L_001BE60C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE6B8; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE628u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE628u) [[unlikely]] return; }
L_001BE628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE630u); set32(c.r[4], c.r[19].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001BE630u) [[unlikely]] return; }
L_001BE630:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE640u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE640u) [[unlikely]] return; }
L_001BE640:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE650u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE650u) [[unlikely]] return; }
L_001BE650:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE65Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE65Cu) [[unlikely]] return; }
L_001BE65C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE668u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE668u) [[unlikely]] return; }
L_001BE668:
    c.f[0] = ld32((c.r[19].w[0] + 8540u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE680u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE680u) [[unlikely]] return; }
L_001BE680:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE68Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE68Cu) [[unlikely]] return; }
L_001BE68C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE694u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8332u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE694u) [[unlikely]] return; }
L_001BE694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE69Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 8328u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE69Cu) [[unlikely]] return; }
L_001BE69C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE6ACu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE6ACu) [[unlikely]] return; }
L_001BE6AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BE758; } }
    c.budget -= 1;
L_001BE6B8:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE6E0u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE6E0u) [[unlikely]] return; }
L_001BE6E0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE6FCu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE6FCu) [[unlikely]] return; }
L_001BE6FC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE714u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE714u) [[unlikely]] return; }
L_001BE714:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE72Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE72Cu) [[unlikely]] return; }
L_001BE72C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE738u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE738u) [[unlikely]] return; }
L_001BE738:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE754u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE754u) [[unlikely]] return; }
L_001BE754:
    c.budget -= 1;
L_001BE758:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE764u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE764u) [[unlikely]] return; }
L_001BE764:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE770u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE770u) [[unlikely]] return; }
L_001BE770:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE77Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE77Cu) [[unlikely]] return; }
L_001BE77C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE788u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE788u) [[unlikely]] return; }
L_001BE788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE790u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BE790u) [[unlikely]] return; }
L_001BE790:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE7A0u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE7A0u) [[unlikely]] return; }
L_001BE7A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE7ACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE7ACu) [[unlikely]] return; }
L_001BE7AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE7B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE7B8u) [[unlikely]] return; }
L_001BE7B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE7C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE7C4u) [[unlikely]] return; }
L_001BE7C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE7D0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE7D0u) [[unlikely]] return; }
L_001BE7D0:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE7E4u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE7E4u) [[unlikely]] return; }
L_001BE7E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE7F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE7F0u) [[unlikely]] return; }
L_001BE7F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE7FCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE7FCu) [[unlikely]] return; }
L_001BE7FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE808u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE808u) [[unlikely]] return; }
L_001BE808:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE814u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE814u) [[unlikely]] return; }
L_001BE814:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE824u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE824u) [[unlikely]] return; }
L_001BE824:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE830u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE830u) [[unlikely]] return; }
L_001BE830:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE83Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE83Cu) [[unlikely]] return; }
L_001BE83C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE848u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE848u) [[unlikely]] return; }
L_001BE848:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE854u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE854u) [[unlikely]] return; }
L_001BE854:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE860u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BE860u) [[unlikely]] return; }
L_001BE860:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE870u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE870u) [[unlikely]] return; }
L_001BE870:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE87Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE87Cu) [[unlikely]] return; }
L_001BE87C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE888u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE888u) [[unlikely]] return; }
L_001BE888:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE894u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE894u) [[unlikely]] return; }
L_001BE894:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE8A0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE8A0u) [[unlikely]] return; }
L_001BE8A0:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE8B0u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE8B0u) [[unlikely]] return; }
L_001BE8B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE8BCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE8BCu) [[unlikely]] return; }
L_001BE8BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE8C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE8C8u) [[unlikely]] return; }
L_001BE8C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE8D4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE8D4u) [[unlikely]] return; }
L_001BE8D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE8E0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE8E0u) [[unlikely]] return; }
L_001BE8E0:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE8F4u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE8F4u) [[unlikely]] return; }
L_001BE8F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE900u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE900u) [[unlikely]] return; }
L_001BE900:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE90Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE90Cu) [[unlikely]] return; }
L_001BE90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE914u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE914u) [[unlikely]] return; }
L_001BE914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE91Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE91Cu) [[unlikely]] return; }
L_001BE91C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BE940:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE96Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BE96Cu) [[unlikely]] return; }
L_001BE96C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE9F0; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE988u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE988u) [[unlikely]] return; }
L_001BE988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE990u); set32(c.r[4], c.r[19].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001BE990u) [[unlikely]] return; }
L_001BE990:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE9A0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE9A0u) [[unlikely]] return; }
L_001BE9A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE9ACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BE9ACu) [[unlikely]] return; }
L_001BE9AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE9B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BE9B8u) [[unlikely]] return; }
L_001BE9B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE9C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BE9C4u) [[unlikely]] return; }
L_001BE9C4:
    c.f[0] = ld32((c.r[19].w[0] + 8540u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE9DCu); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BE9DCu) [[unlikely]] return; }
L_001BE9DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE9E8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BE9E8u) [[unlikely]] return; }
L_001BE9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BEA70; } }
L_001BE9F0:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA18u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BEA18u) [[unlikely]] return; }
L_001BEA18:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA30u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BEA30u) [[unlikely]] return; }
L_001BEA30:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA48u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BEA48u) [[unlikely]] return; }
L_001BEA48:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA60u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BEA60u) [[unlikely]] return; }
L_001BEA60:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA6Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BEA6Cu) [[unlikely]] return; }
L_001BEA6C:
    c.budget -= 1;
L_001BEA70:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA80u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BEA80u) [[unlikely]] return; }
L_001BEA80:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA8Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BEA8Cu) [[unlikely]] return; }
L_001BEA8C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA98u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BEA98u) [[unlikely]] return; }
L_001BEA98:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEAA4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BEAA4u) [[unlikely]] return; }
L_001BEAA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEAB0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BEAB0u) [[unlikely]] return; }
L_001BEAB0:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEAC4u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BEAC4u) [[unlikely]] return; }
L_001BEAC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEAD0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BEAD0u) [[unlikely]] return; }
L_001BEAD0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEADCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BEADCu) [[unlikely]] return; }
L_001BEADC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEAE8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BEAE8u) [[unlikely]] return; }
L_001BEAE8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEAF4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BEAF4u) [[unlikely]] return; }
L_001BEAF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEAFCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BEAFCu) [[unlikely]] return; }
L_001BEAFC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB0Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BEB0Cu) [[unlikely]] return; }
L_001BEB0C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB18u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BEB18u) [[unlikely]] return; }
L_001BEB18:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB24u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BEB24u) [[unlikely]] return; }
L_001BEB24:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB30u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BEB30u) [[unlikely]] return; }
L_001BEB30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB3Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BEB3Cu) [[unlikely]] return; }
L_001BEB3C:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB50u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BEB50u) [[unlikely]] return; }
L_001BEB50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB5Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BEB5Cu) [[unlikely]] return; }
L_001BEB5C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB68u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BEB68u) [[unlikely]] return; }
L_001BEB68:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB74u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BEB74u) [[unlikely]] return; }
L_001BEB74:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB80u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BEB80u) [[unlikely]] return; }
L_001BEB80:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB90u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BEB90u) [[unlikely]] return; }
L_001BEB90:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB9Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BEB9Cu) [[unlikely]] return; }
L_001BEB9C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEBA8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BEBA8u) [[unlikely]] return; }
L_001BEBA8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEBB4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BEBB4u) [[unlikely]] return; }
L_001BEBB4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEBC0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BEBC0u) [[unlikely]] return; }
L_001BEBC0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEBCCu); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BEBCCu) [[unlikely]] return; }
L_001BEBCC:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEBDCu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BEBDCu) [[unlikely]] return; }
L_001BEBDC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEBE8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BEBE8u) [[unlikely]] return; }
L_001BEBE8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEBF4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BEBF4u) [[unlikely]] return; }
L_001BEBF4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC00u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BEC00u) [[unlikely]] return; }
L_001BEC00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC0Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BEC0Cu) [[unlikely]] return; }
L_001BEC0C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC1Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BEC1Cu) [[unlikely]] return; }
L_001BEC1C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC28u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BEC28u) [[unlikely]] return; }
L_001BEC28:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC34u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BEC34u) [[unlikely]] return; }
L_001BEC34:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC40u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BEC40u) [[unlikely]] return; }
L_001BEC40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC4Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BEC4Cu) [[unlikely]] return; }
L_001BEC4C:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC60u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BEC60u) [[unlikely]] return; }
L_001BEC60:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC6Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BEC6Cu) [[unlikely]] return; }
L_001BEC6C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC78u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BEC78u) [[unlikely]] return; }
L_001BEC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC80u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BEC80u) [[unlikely]] return; }
L_001BEC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC88u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BEC88u) [[unlikely]] return; }
L_001BEC88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BECB0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BECDCu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BECDCu) [[unlikely]] return; }
L_001BECDC:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED04u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BED04u) [[unlikely]] return; }
L_001BED04:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED1Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BED1Cu) [[unlikely]] return; }
L_001BED1C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED34u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BED34u) [[unlikely]] return; }
L_001BED34:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED4Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BED4Cu) [[unlikely]] return; }
L_001BED4C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED58u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BED58u) [[unlikely]] return; }
L_001BED58:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED68u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BED68u) [[unlikely]] return; }
L_001BED68:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED74u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BED74u) [[unlikely]] return; }
L_001BED74:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED80u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BED80u) [[unlikely]] return; }
L_001BED80:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED8Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BED8Cu) [[unlikely]] return; }
L_001BED8C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED98u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BED98u) [[unlikely]] return; }
L_001BED98:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEDACu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BEDACu) [[unlikely]] return; }
L_001BEDAC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEDB8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BEDB8u) [[unlikely]] return; }
L_001BEDB8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEDC4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BEDC4u) [[unlikely]] return; }
L_001BEDC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEDD0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BEDD0u) [[unlikely]] return; }
L_001BEDD0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEDDCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BEDDCu) [[unlikely]] return; }
L_001BEDDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEDE4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BEDE4u) [[unlikely]] return; }
L_001BEDE4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 16u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEDFCu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_002F(c, 269u, depth + 1u); else { c.pc = 0x001BCFE0u; return; } if (c.pc != 0x001BEDFCu) [[unlikely]] return; }
L_001BEDFC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 128u);
    set32(c.r[6], c.r[17].w[0] + 48u);
    set32(c.r[7], c.r[16].w[0] + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEE14u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_002F(c, 314u, depth + 1u); else { c.pc = 0x001BD5A0u; return; } if (c.pc != 0x001BEE14u) [[unlikely]] return; }
L_001BEE14:
    set32(c.r[4], 0u + 1u);
    set32(c.r[18], c.r[18].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEE24u); set32(c.r[17], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BEE24u) [[unlikely]] return; }
L_001BEE24:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 36u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEE3Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 269u, depth + 1u); else { c.pc = 0x001BCFE0u; return; } if (c.pc != 0x001BEE3Cu) [[unlikely]] return; }
L_001BEE3C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 128u);
    set32(c.r[6], c.r[17].w[0] + 32u);
    set32(c.r[7], c.r[16].w[0] + 60u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEE54u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 314u, depth + 1u); else { c.pc = 0x001BD5A0u; return; } if (c.pc != 0x001BEE54u) [[unlikely]] return; }
L_001BEE54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BEE70:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEE9Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BEE9Cu) [[unlikely]] return; }
L_001BEE9C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BEF38; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEEB8u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BEEB8u) [[unlikely]] return; }
L_001BEEB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEEC0u); set32(c.r[4], c.r[19].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001BEEC0u) [[unlikely]] return; }
L_001BEEC0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEED0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BEED0u) [[unlikely]] return; }
L_001BEED0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEEE0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BEEE0u) [[unlikely]] return; }
L_001BEEE0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEEECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BEEECu) [[unlikely]] return; }
L_001BEEEC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEEF8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BEEF8u) [[unlikely]] return; }
L_001BEEF8:
    c.f[0] = ld32((c.r[19].w[0] + 8540u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEF10u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BEF10u) [[unlikely]] return; }
L_001BEF10:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEF1Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BEF1Cu) [[unlikely]] return; }
L_001BEF1C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEF2Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BEF2Cu) [[unlikely]] return; }
L_001BEF2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BEFD8; } }
    c.budget -= 1;
L_001BEF38:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEF60u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BEF60u) [[unlikely]] return; }
L_001BEF60:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEF7Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BEF7Cu) [[unlikely]] return; }
L_001BEF7C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEF94u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BEF94u) [[unlikely]] return; }
L_001BEF94:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEFACu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BEFACu) [[unlikely]] return; }
L_001BEFAC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEFB8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BEFB8u) [[unlikely]] return; }
L_001BEFB8:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEFD4u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BEFD4u) [[unlikely]] return; }
L_001BEFD4:
    c.budget -= 1;
L_001BEFD8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEFE4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BEFE4u) [[unlikely]] return; }
L_001BEFE4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEFF0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BEFF0u) [[unlikely]] return; }
L_001BEFF0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEFFCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BEFFCu) [[unlikely]] return; }
L_001BEFFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF008u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF008u) [[unlikely]] return; }
L_001BF008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF010u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BF010u) [[unlikely]] return; }
L_001BF010:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF020u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF020u) [[unlikely]] return; }
L_001BF020:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF02Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF02Cu) [[unlikely]] return; }
L_001BF02C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF038u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF038u) [[unlikely]] return; }
L_001BF038:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF044u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF044u) [[unlikely]] return; }
L_001BF044:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF050u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF050u) [[unlikely]] return; }
L_001BF050:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF05Cu); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001BF05Cu) [[unlikely]] return; }
L_001BF05C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF06Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF06Cu) [[unlikely]] return; }
L_001BF06C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF078u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF078u) [[unlikely]] return; }
L_001BF078:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF084u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF084u) [[unlikely]] return; }
L_001BF084:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF090u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF090u) [[unlikely]] return; }
L_001BF090:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF09Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF09Cu) [[unlikely]] return; }
L_001BF09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF0A4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001BF0A4u) [[unlikely]] return; }
L_001BF0A4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF0B4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF0B4u) [[unlikely]] return; }
L_001BF0B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF0C0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF0C0u) [[unlikely]] return; }
L_001BF0C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF0CCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF0CCu) [[unlikely]] return; }
L_001BF0CC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF0D8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF0D8u) [[unlikely]] return; }
L_001BF0D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF0E4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF0E4u) [[unlikely]] return; }
L_001BF0E4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF0F0u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001BF0F0u) [[unlikely]] return; }
L_001BF0F0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF100u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF100u) [[unlikely]] return; }
L_001BF100:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF10Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF10Cu) [[unlikely]] return; }
L_001BF10C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF118u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF118u) [[unlikely]] return; }
L_001BF118:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF124u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF124u) [[unlikely]] return; }
L_001BF124:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF130u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF130u) [[unlikely]] return; }
L_001BF130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF138u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001BF138u) [[unlikely]] return; }
L_001BF138:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF148u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF148u) [[unlikely]] return; }
L_001BF148:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF154u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF154u) [[unlikely]] return; }
L_001BF154:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF160u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF160u) [[unlikely]] return; }
L_001BF160:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF16Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF16Cu) [[unlikely]] return; }
L_001BF16C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF178u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF178u) [[unlikely]] return; }
L_001BF178:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF184u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001BF184u) [[unlikely]] return; }
L_001BF184:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF194u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF194u) [[unlikely]] return; }
L_001BF194:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1A0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF1A0u) [[unlikely]] return; }
L_001BF1A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1ACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF1ACu) [[unlikely]] return; }
L_001BF1AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF1B8u) [[unlikely]] return; }
L_001BF1B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1C4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF1C4u) [[unlikely]] return; }
L_001BF1C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1CCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001BF1CCu) [[unlikely]] return; }
L_001BF1CC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1DCu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF1DCu) [[unlikely]] return; }
L_001BF1DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1E8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF1E8u) [[unlikely]] return; }
L_001BF1E8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1F4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF1F4u) [[unlikely]] return; }
L_001BF1F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF200u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF200u) [[unlikely]] return; }
L_001BF200:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF20Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF20Cu) [[unlikely]] return; }
L_001BF20C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF218u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BF218u) [[unlikely]] return; }
L_001BF218:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF228u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF228u) [[unlikely]] return; }
L_001BF228:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF234u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF234u) [[unlikely]] return; }
L_001BF234:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF240u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF240u) [[unlikely]] return; }
L_001BF240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF248u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF248u) [[unlikely]] return; }
L_001BF248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF250u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF250u) [[unlikely]] return; }
L_001BF250:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BF270:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF29Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BF29Cu) [[unlikely]] return; }
L_001BF29C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF338; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF2B8u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF2B8u) [[unlikely]] return; }
L_001BF2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF2C0u); set32(c.r[4], c.r[19].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001BF2C0u) [[unlikely]] return; }
L_001BF2C0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF2D0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF2D0u) [[unlikely]] return; }
L_001BF2D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF2E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF2E0u) [[unlikely]] return; }
L_001BF2E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF2ECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF2ECu) [[unlikely]] return; }
L_001BF2EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF2F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF2F8u) [[unlikely]] return; }
L_001BF2F8:
    c.f[0] = ld32((c.r[19].w[0] + 8540u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF310u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF310u) [[unlikely]] return; }
L_001BF310:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF31Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF31Cu) [[unlikely]] return; }
L_001BF31C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF324u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8332u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF324u) [[unlikely]] return; }
L_001BF324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF32Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 8328u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF32Cu) [[unlikely]] return; }
L_001BF32C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF3E0; } }
    c.budget -= 1;
L_001BF338:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF360u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF360u) [[unlikely]] return; }
L_001BF360:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF37Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF37Cu) [[unlikely]] return; }
L_001BF37C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF394u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF394u) [[unlikely]] return; }
L_001BF394:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF3ACu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF3ACu) [[unlikely]] return; }
L_001BF3AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF3B8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF3B8u) [[unlikely]] return; }
L_001BF3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF3C0u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8332u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF3C0u) [[unlikely]] return; }
L_001BF3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF3C8u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8328u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF3C8u) [[unlikely]] return; }
L_001BF3C8:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF3DCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF3DCu) [[unlikely]] return; }
L_001BF3DC:
    c.budget -= 1;
L_001BF3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF3E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BF3E8u) [[unlikely]] return; }
L_001BF3E8:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF3F8u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF3F8u) [[unlikely]] return; }
L_001BF3F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF404u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF404u) [[unlikely]] return; }
L_001BF404:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF410u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF410u) [[unlikely]] return; }
L_001BF410:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF41Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF41Cu) [[unlikely]] return; }
L_001BF41C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF428u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF428u) [[unlikely]] return; }
L_001BF428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF430u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BF430u) [[unlikely]] return; }
L_001BF430:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF440u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF440u) [[unlikely]] return; }
L_001BF440:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF44Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF44Cu) [[unlikely]] return; }
L_001BF44C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF458u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF458u) [[unlikely]] return; }
L_001BF458:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF464u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF464u) [[unlikely]] return; }
L_001BF464:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF470u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF470u) [[unlikely]] return; }
L_001BF470:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF47Cu); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001BF47Cu) [[unlikely]] return; }
L_001BF47C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF48Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF48Cu) [[unlikely]] return; }
L_001BF48C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF498u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF498u) [[unlikely]] return; }
L_001BF498:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF4A4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF4A4u) [[unlikely]] return; }
L_001BF4A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF4B0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF4B0u) [[unlikely]] return; }
L_001BF4B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF4BCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF4BCu) [[unlikely]] return; }
L_001BF4BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF4C4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BF4C4u) [[unlikely]] return; }
L_001BF4C4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF4D4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF4D4u) [[unlikely]] return; }
L_001BF4D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF4E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF4E0u) [[unlikely]] return; }
L_001BF4E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF4ECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF4ECu) [[unlikely]] return; }
L_001BF4EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF4F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF4F8u) [[unlikely]] return; }
L_001BF4F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF504u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF504u) [[unlikely]] return; }
L_001BF504:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF510u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BF510u) [[unlikely]] return; }
L_001BF510:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF520u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF520u) [[unlikely]] return; }
L_001BF520:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF52Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF52Cu) [[unlikely]] return; }
L_001BF52C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF538u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF538u) [[unlikely]] return; }
L_001BF538:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF544u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF544u) [[unlikely]] return; }
L_001BF544:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF550u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF550u) [[unlikely]] return; }
L_001BF550:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF560u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF560u) [[unlikely]] return; }
L_001BF560:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF56Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF56Cu) [[unlikely]] return; }
L_001BF56C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF578u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF578u) [[unlikely]] return; }
L_001BF578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF580u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF580u) [[unlikely]] return; }
L_001BF580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF588u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF588u) [[unlikely]] return; }
L_001BF588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BF5B0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF5DCu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BF5DCu) [[unlikely]] return; }
L_001BF5DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF678; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF5F8u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF5F8u) [[unlikely]] return; }
L_001BF5F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF600u); set32(c.r[4], c.r[19].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001BF600u) [[unlikely]] return; }
L_001BF600:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF610u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF610u) [[unlikely]] return; }
L_001BF610:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF620u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF620u) [[unlikely]] return; }
L_001BF620:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF62Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF62Cu) [[unlikely]] return; }
L_001BF62C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF638u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF638u) [[unlikely]] return; }
L_001BF638:
    c.f[0] = ld32((c.r[19].w[0] + 8540u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF650u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF650u) [[unlikely]] return; }
L_001BF650:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF65Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF65Cu) [[unlikely]] return; }
L_001BF65C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF66Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF66Cu) [[unlikely]] return; }
L_001BF66C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF708; } }
    c.budget -= 1;
L_001BF678:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF6A0u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF6A0u) [[unlikely]] return; }
L_001BF6A0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF6BCu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF6BCu) [[unlikely]] return; }
L_001BF6BC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF6D4u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF6D4u) [[unlikely]] return; }
L_001BF6D4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF6ECu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF6ECu) [[unlikely]] return; }
L_001BF6EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF6F8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF6F8u) [[unlikely]] return; }
L_001BF6F8:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF708u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF708u) [[unlikely]] return; }
L_001BF708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF710u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8332u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF710u) [[unlikely]] return; }
L_001BF710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF718u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8328u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF718u) [[unlikely]] return; }
L_001BF718:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF724u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF724u) [[unlikely]] return; }
L_001BF724:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF730u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF730u) [[unlikely]] return; }
L_001BF730:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF73Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF73Cu) [[unlikely]] return; }
L_001BF73C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF748u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF748u) [[unlikely]] return; }
L_001BF748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF750u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BF750u) [[unlikely]] return; }
L_001BF750:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF760u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF760u) [[unlikely]] return; }
L_001BF760:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF76Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF76Cu) [[unlikely]] return; }
L_001BF76C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF778u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF778u) [[unlikely]] return; }
L_001BF778:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF784u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF784u) [[unlikely]] return; }
L_001BF784:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF790u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF790u) [[unlikely]] return; }
L_001BF790:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF79Cu); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BF79Cu) [[unlikely]] return; }
L_001BF79C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF7ACu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF7ACu) [[unlikely]] return; }
L_001BF7AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF7B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF7B8u) [[unlikely]] return; }
L_001BF7B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF7C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF7C4u) [[unlikely]] return; }
L_001BF7C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF7D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF7D0u) [[unlikely]] return; }
L_001BF7D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF7DCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF7DCu) [[unlikely]] return; }
L_001BF7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF7E4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001BF7E4u) [[unlikely]] return; }
L_001BF7E4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF7F4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF7F4u) [[unlikely]] return; }
L_001BF7F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF800u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF800u) [[unlikely]] return; }
L_001BF800:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF80Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF80Cu) [[unlikely]] return; }
L_001BF80C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF818u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF818u) [[unlikely]] return; }
L_001BF818:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF824u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF824u) [[unlikely]] return; }
L_001BF824:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF830u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BF830u) [[unlikely]] return; }
L_001BF830:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF840u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF840u) [[unlikely]] return; }
L_001BF840:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF84Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF84Cu) [[unlikely]] return; }
L_001BF84C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF858u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF858u) [[unlikely]] return; }
L_001BF858:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF864u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF864u) [[unlikely]] return; }
L_001BF864:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF870u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF870u) [[unlikely]] return; }
L_001BF870:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF880u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF880u) [[unlikely]] return; }
L_001BF880:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF88Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF88Cu) [[unlikely]] return; }
L_001BF88C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF898u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF898u) [[unlikely]] return; }
L_001BF898:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8A4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF8A4u) [[unlikely]] return; }
L_001BF8A4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8B0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF8B0u) [[unlikely]] return; }
L_001BF8B0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8BCu); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BF8BCu) [[unlikely]] return; }
L_001BF8BC:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8CCu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF8CCu) [[unlikely]] return; }
L_001BF8CC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8D8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF8D8u) [[unlikely]] return; }
L_001BF8D8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8E4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF8E4u) [[unlikely]] return; }
L_001BF8E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF8F0u) [[unlikely]] return; }
L_001BF8F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8FCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF8FCu) [[unlikely]] return; }
L_001BF8FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF904u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BF904u) [[unlikely]] return; }
L_001BF904:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF914u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF914u) [[unlikely]] return; }
L_001BF914:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF920u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF920u) [[unlikely]] return; }
L_001BF920:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF92Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF92Cu) [[unlikely]] return; }
L_001BF92C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF938u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF938u) [[unlikely]] return; }
L_001BF938:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF944u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF944u) [[unlikely]] return; }
L_001BF944:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF950u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BF950u) [[unlikely]] return; }
L_001BF950:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF960u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF960u) [[unlikely]] return; }
L_001BF960:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF96Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF96Cu) [[unlikely]] return; }
L_001BF96C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF978u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF978u) [[unlikely]] return; }
L_001BF978:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF984u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF984u) [[unlikely]] return; }
L_001BF984:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF990u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF990u) [[unlikely]] return; }
L_001BF990:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF9A0u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF9A0u) [[unlikely]] return; }
L_001BF9A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF9ACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF9ACu) [[unlikely]] return; }
L_001BF9AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF9B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BF9B8u) [[unlikely]] return; }
L_001BF9B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF9C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BF9C4u) [[unlikely]] return; }
L_001BF9C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF9D0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BF9D0u) [[unlikely]] return; }
L_001BF9D0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF9DCu); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BF9DCu) [[unlikely]] return; }
L_001BF9DC:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF9ECu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BF9ECu) [[unlikely]] return; }
L_001BF9EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF9F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BF9F8u) [[unlikely]] return; }
L_001BF9F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA04u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BFA04u) [[unlikely]] return; }
L_001BFA04:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA10u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BFA10u) [[unlikely]] return; }
L_001BFA10:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA1Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BFA1Cu) [[unlikely]] return; }
L_001BFA1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA24u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001BFA24u) [[unlikely]] return; }
L_001BFA24:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA34u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFA34u) [[unlikely]] return; }
L_001BFA34:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA40u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BFA40u) [[unlikely]] return; }
L_001BFA40:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA4Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BFA4Cu) [[unlikely]] return; }
L_001BFA4C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA58u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BFA58u) [[unlikely]] return; }
L_001BFA58:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA64u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BFA64u) [[unlikely]] return; }
L_001BFA64:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA70u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BFA70u) [[unlikely]] return; }
L_001BFA70:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA80u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFA80u) [[unlikely]] return; }
L_001BFA80:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA8Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BFA8Cu) [[unlikely]] return; }
L_001BFA8C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA98u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BFA98u) [[unlikely]] return; }
L_001BFA98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFAA0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BFAA0u) [[unlikely]] return; }
L_001BFAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFAA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BFAA8u) [[unlikely]] return; }
L_001BFAA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BFAD0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFAFCu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BFAFCu) [[unlikely]] return; }
L_001BFAFC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BFB98; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB18u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFB18u) [[unlikely]] return; }
L_001BFB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB20u); set32(c.r[4], c.r[19].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001BFB20u) [[unlikely]] return; }
L_001BFB20:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB30u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFB30u) [[unlikely]] return; }
L_001BFB30:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB40u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BFB40u) [[unlikely]] return; }
L_001BFB40:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB4Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BFB4Cu) [[unlikely]] return; }
L_001BFB4C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB58u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BFB58u) [[unlikely]] return; }
L_001BFB58:
    c.f[0] = ld32((c.r[19].w[0] + 8540u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB70u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFB70u) [[unlikely]] return; }
L_001BFB70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB7Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BFB7Cu) [[unlikely]] return; }
L_001BFB7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB84u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8332u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BFB84u) [[unlikely]] return; }
L_001BFB84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB8Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 8328u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BFB8Cu) [[unlikely]] return; }
L_001BFB8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFC40; } }
    c.budget -= 1;
L_001BFB98:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFBC0u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFBC0u) [[unlikely]] return; }
L_001BFBC0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFBDCu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BFBDCu) [[unlikely]] return; }
L_001BFBDC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 2;
L_001BFBE4:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFBF4u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BFBF4u) [[unlikely]] return; }
L_001BFBF4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC0Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BFC0Cu) [[unlikely]] return; }
L_001BFC0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC18u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BFC18u) [[unlikely]] return; }
L_001BFC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC20u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8332u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BFC20u) [[unlikely]] return; }
L_001BFC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC28u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8328u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BFC28u) [[unlikely]] return; }
L_001BFC28:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC3Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFC3Cu) [[unlikely]] return; }
L_001BFC3C:
    c.budget -= 1;
L_001BFC40:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC50u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFC50u) [[unlikely]] return; }
L_001BFC50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC5Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BFC5Cu) [[unlikely]] return; }
L_001BFC5C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC68u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BFC68u) [[unlikely]] return; }
L_001BFC68:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC74u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BFC74u) [[unlikely]] return; }
L_001BFC74:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC80u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BFC80u) [[unlikely]] return; }
L_001BFC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC88u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BFC88u) [[unlikely]] return; }
L_001BFC88:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC98u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFC98u) [[unlikely]] return; }
L_001BFC98:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFCA4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BFCA4u) [[unlikely]] return; }
L_001BFCA4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFCB0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BFCB0u) [[unlikely]] return; }
L_001BFCB0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFCBCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BFCBCu) [[unlikely]] return; }
L_001BFCBC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFCC8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BFCC8u) [[unlikely]] return; }
L_001BFCC8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFCD4u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001BFCD4u) [[unlikely]] return; }
L_001BFCD4:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFCE4u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFCE4u) [[unlikely]] return; }
L_001BFCE4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFCF0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BFCF0u) [[unlikely]] return; }
L_001BFCF0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFCFCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BFCFCu) [[unlikely]] return; }
L_001BFCFC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD08u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BFD08u) [[unlikely]] return; }
L_001BFD08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD14u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BFD14u) [[unlikely]] return; }
L_001BFD14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD1Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BFD1Cu) [[unlikely]] return; }
L_001BFD1C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD2Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFD2Cu) [[unlikely]] return; }
L_001BFD2C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD38u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BFD38u) [[unlikely]] return; }
L_001BFD38:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD44u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BFD44u) [[unlikely]] return; }
L_001BFD44:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD50u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BFD50u) [[unlikely]] return; }
L_001BFD50:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD5Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BFD5Cu) [[unlikely]] return; }
L_001BFD5C:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD70u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFD70u) [[unlikely]] return; }
L_001BFD70:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD7Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BFD7Cu) [[unlikely]] return; }
L_001BFD7C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD88u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BFD88u) [[unlikely]] return; }
L_001BFD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD90u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BFD90u) [[unlikely]] return; }
L_001BFD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BFD98u) [[unlikely]] return; }
L_001BFD98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BFDC0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFDF4u); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BFDF4u) [[unlikely]] return; }
L_001BFDF4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BFE80; } }
    c.f[13] = ld32((c.r[20].w[0] + 36u));
    c.f[14] = ld32((c.r[20].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFE10u); c.f[12] = ld32((c.r[20].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFE10u) [[unlikely]] return; }
L_001BFE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFE18u); set32(c.r[4], c.r[20].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001BFE18u) [[unlikely]] return; }
L_001BFE18:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFE28u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFE28u) [[unlikely]] return; }
L_001BFE28:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFE38u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BFE38u) [[unlikely]] return; }
L_001BFE38:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFE44u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BFE44u) [[unlikely]] return; }
L_001BFE44:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFE50u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BFE50u) [[unlikely]] return; }
L_001BFE50:
    c.f[0] = ld32((c.r[20].w[0] + 8540u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFE68u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFE68u) [[unlikely]] return; }
L_001BFE68:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFE74u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BFE74u) [[unlikely]] return; }
L_001BFE74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFF20; } }
    c.budget -= 1;
L_001BFE80:
    c.f[5] = ld32((c.r[20].w[0] + 32u));
    c.f[4] = ld32((c.r[18].w[0]));
    c.f[3] = ld32((c.r[20].w[0] + 36u));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFEA8u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFEA8u) [[unlikely]] return; }
L_001BFEA8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFEC4u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BFEC4u) [[unlikely]] return; }
L_001BFEC4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFEDCu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BFEDCu) [[unlikely]] return; }
L_001BFEDC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFEF4u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BFEF4u) [[unlikely]] return; }
L_001BFEF4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF00u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BFF00u) [[unlikely]] return; }
L_001BFF00:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[18].w[0]));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF1Cu); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFF1Cu) [[unlikely]] return; }
L_001BFF1C:
    c.budget -= 1;
L_001BFF20:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF30u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFF30u) [[unlikely]] return; }
L_001BFF30:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF3Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BFF3Cu) [[unlikely]] return; }
L_001BFF3C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF48u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BFF48u) [[unlikely]] return; }
L_001BFF48:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF54u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BFF54u) [[unlikely]] return; }
L_001BFF54:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF60u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BFF60u) [[unlikely]] return; }
L_001BFF60:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF70u); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFF70u) [[unlikely]] return; }
L_001BFF70:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF7Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BFF7Cu) [[unlikely]] return; }
L_001BFF7C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF88u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BFF88u) [[unlikely]] return; }
L_001BFF88:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF94u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BFF94u) [[unlikely]] return; }
L_001BFF94:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFFA0u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BFFA0u) [[unlikely]] return; }
L_001BFFA0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFFACu); set32(c.r[18], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BFFACu) [[unlikely]] return; }
L_001BFFAC:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFFBCu); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFFBCu) [[unlikely]] return; }
L_001BFFBC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_001BFFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFFC8u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BFFC8u) [[unlikely]] return; }
L_001BFFC8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFFD4u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BFFD4u) [[unlikely]] return; }
L_001BFFD4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFFE0u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BFFE0u) [[unlikely]] return; }
L_001BFFE0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFFECu); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BFFECu) [[unlikely]] return; }
L_001BFFEC:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFFFCu); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BFFFCu) [[unlikely]] return; }
L_001BFFFC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
    [[clang::musttail]] return unit_0030(c, 1u, depth);
}

}
