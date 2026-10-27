#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0031[4096] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0,
    0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0,
    22, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 31, 0, 0, 0, 32,
    0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0,
    43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0,
    53, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63,
    0, 0, 64, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 69, 0, 70, 0, 71, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0,
    0, 79, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0,
    0, 89, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0,
    0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 107, 0, 0, 0, 108, 0,
    0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 118, 0, 0,
    0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0,
    129, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0,
    0, 139, 0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0,
    0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0,
    0, 159, 0, 0, 160, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 168, 0,
    0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0,
    0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189,
    0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 199,
    0, 0, 200, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0,
    0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 0,
    220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 230,
    0, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 239, 0, 240, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244,
    0, 245, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 0,
    255, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0,
    0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 276,
    0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281,
    0, 282, 0, 283, 0, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 0,
    292, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 301, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 307, 0, 308,
    0, 0, 309, 0, 0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0,
    318, 0, 0, 319, 0, 0, 320, 0, 321, 0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0,
    328, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0,
    338, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 343, 0, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 0, 347, 0, 0, 348, 0,
    0, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0, 354, 0, 0, 0, 355, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0,
    0, 359, 0, 0, 360, 0, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 366, 0, 0, 0, 367, 0, 0, 368, 0, 0,
    369, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0, 378, 0, 0,
    379, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 392, 0, 393, 0, 0, 394, 0,
    0, 395, 0, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0,
    0, 405, 0, 0, 406, 0, 407, 0, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 0, 414, 0, 0,
    415, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 419, 0, 0, 0, 420, 0, 0, 421, 0, 0, 422, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0,
    0, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 431, 0, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0,
    436, 0, 0, 437, 0, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444,
    0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 447, 0, 448, 0, 449, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0,
    453, 0, 0, 0, 454, 0, 455, 0, 456, 0, 457, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 461, 0, 462, 0, 463, 0, 464, 0, 465,
    0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0,
    0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0,
    0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0,
    0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0,
    0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 497, 0, 0, 498, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0,
    0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0,
    514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0,
    521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0,
    0, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 0, 0, 0,
    545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0,
    0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0,
    555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0,
    0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0,
    0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0,
    570, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 574, 0, 0,
    0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 0, 580,
    0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 585, 0, 0, 0, 586, 0,
    587, 0, 588, 0, 0, 0, 589, 0, 590, 0, 0, 0, 591, 0, 592, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 597, 0, 0, 0, 598, 0, 599, 0, 0, 0, 600, 0, 601, 0, 602, 0, 0, 0, 0, 603,
    0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 613, 0, 0, 0, 0, 614, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618,
    0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 622, 0, 0,
    0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627,
    0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 632, 0,
    0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 636,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0,
    0, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    643, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0,
    0, 0, 648, 0, 0, 649, 0, 0, 0, 0, 650, 0, 651, 0, 0, 652, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 655, 0,
    0, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0,
    0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0,
    666, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0,
    0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 680,
    0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0,
    689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0,
    0, 0, 693, 0, 694, 0, 0, 0, 695, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0,
    0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 713, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0,
    0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0,
    0, 720, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0,
    0, 0, 723, 0, 724, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 727, 0, 728, 0, 0, 0, 729, 0, 0, 0, 730, 0, 731, 0, 732, 0, 0, 0,
    733, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 736, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 739, 0, 740,
    0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 744,
    0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0,
    749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0,
    0, 0, 751, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 757, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 767, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0031(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001C4000;
    case 2u: goto L_001C4014;
    case 3u: goto L_001C401C;
    case 4u: goto L_001C4024;
    case 5u: goto L_001C402C;
    case 6u: goto L_001C4038;
    case 7u: goto L_001C4044;
    case 8u: goto L_001C4054;
    case 9u: goto L_001C4060;
    case 10u: goto L_001C406C;
    case 11u: goto L_001C4078;
    case 12u: goto L_001C4084;
    case 13u: goto L_001C4090;
    case 14u: goto L_001C40A0;
    case 15u: goto L_001C40AC;
    case 16u: goto L_001C40B8;
    case 17u: goto L_001C40C4;
    case 18u: goto L_001C40D0;
    case 19u: goto L_001C40D8;
    case 20u: goto L_001C40E8;
    case 21u: goto L_001C40F4;
    case 22u: goto L_001C4100;
    case 23u: goto L_001C410C;
    case 24u: goto L_001C4118;
    case 25u: goto L_001C4124;
    case 26u: goto L_001C4134;
    case 27u: goto L_001C4140;
    case 28u: goto L_001C414C;
    case 29u: goto L_001C4158;
    case 30u: goto L_001C4164;
    case 31u: goto L_001C416C;
    case 32u: goto L_001C417C;
    case 33u: goto L_001C4188;
    case 34u: goto L_001C4194;
    case 35u: goto L_001C41A0;
    case 36u: goto L_001C41AC;
    case 37u: goto L_001C41B8;
    case 38u: goto L_001C41C8;
    case 39u: goto L_001C41D4;
    case 40u: goto L_001C41E0;
    case 41u: goto L_001C41EC;
    case 42u: goto L_001C41F8;
    case 43u: goto L_001C4200;
    case 44u: goto L_001C4210;
    case 45u: goto L_001C421C;
    case 46u: goto L_001C4228;
    case 47u: goto L_001C4234;
    case 48u: goto L_001C4240;
    case 49u: goto L_001C424C;
    case 50u: goto L_001C425C;
    case 51u: goto L_001C4268;
    case 52u: goto L_001C4274;
    case 53u: goto L_001C4280;
    case 54u: goto L_001C428C;
    case 55u: goto L_001C4294;
    case 56u: goto L_001C42A4;
    case 57u: goto L_001C42B0;
    case 58u: goto L_001C42BC;
    case 59u: goto L_001C42C8;
    case 60u: goto L_001C42D4;
    case 61u: goto L_001C42E0;
    case 62u: goto L_001C42F0;
    case 63u: goto L_001C42FC;
    case 64u: goto L_001C4308;
    case 65u: goto L_001C4310;
    case 66u: goto L_001C4318;
    case 67u: goto L_001C4340;
    case 68u: goto L_001C436C;
    case 69u: goto L_001C4394;
    case 70u: goto L_001C439C;
    case 71u: goto L_001C43A4;
    case 72u: goto L_001C43AC;
    case 73u: goto L_001C43B8;
    case 74u: goto L_001C43C4;
    case 75u: goto L_001C43D4;
    case 76u: goto L_001C43E0;
    case 77u: goto L_001C43EC;
    case 78u: goto L_001C43F8;
    case 79u: goto L_001C4404;
    case 80u: goto L_001C4418;
    case 81u: goto L_001C4424;
    case 82u: goto L_001C4430;
    case 83u: goto L_001C443C;
    case 84u: goto L_001C4448;
    case 85u: goto L_001C4450;
    case 86u: goto L_001C4460;
    case 87u: goto L_001C446C;
    case 88u: goto L_001C4478;
    case 89u: goto L_001C4484;
    case 90u: goto L_001C4490;
    case 91u: goto L_001C44A4;
    case 92u: goto L_001C44B0;
    case 93u: goto L_001C44BC;
    case 94u: goto L_001C44C8;
    case 95u: goto L_001C44D4;
    case 96u: goto L_001C44DC;
    case 97u: goto L_001C44EC;
    case 98u: goto L_001C44F8;
    case 99u: goto L_001C4504;
    case 100u: goto L_001C4510;
    case 101u: goto L_001C451C;
    case 102u: goto L_001C4530;
    case 103u: goto L_001C453C;
    case 104u: goto L_001C4548;
    case 105u: goto L_001C4554;
    case 106u: goto L_001C4560;
    case 107u: goto L_001C4568;
    case 108u: goto L_001C4578;
    case 109u: goto L_001C4584;
    case 110u: goto L_001C4590;
    case 111u: goto L_001C459C;
    case 112u: goto L_001C45A8;
    case 113u: goto L_001C45BC;
    case 114u: goto L_001C45C8;
    case 115u: goto L_001C45D4;
    case 116u: goto L_001C45E0;
    case 117u: goto L_001C45EC;
    case 118u: goto L_001C45F4;
    case 119u: goto L_001C4604;
    case 120u: goto L_001C4610;
    case 121u: goto L_001C461C;
    case 122u: goto L_001C4628;
    case 123u: goto L_001C4634;
    case 124u: goto L_001C4648;
    case 125u: goto L_001C4654;
    case 126u: goto L_001C4660;
    case 127u: goto L_001C466C;
    case 128u: goto L_001C4678;
    case 129u: goto L_001C4680;
    case 130u: goto L_001C4690;
    case 131u: goto L_001C469C;
    case 132u: goto L_001C46A8;
    case 133u: goto L_001C46B4;
    case 134u: goto L_001C46C0;
    case 135u: goto L_001C46D4;
    case 136u: goto L_001C46E0;
    case 137u: goto L_001C46EC;
    case 138u: goto L_001C46F8;
    case 139u: goto L_001C4704;
    case 140u: goto L_001C470C;
    case 141u: goto L_001C471C;
    case 142u: goto L_001C4728;
    case 143u: goto L_001C4734;
    case 144u: goto L_001C4740;
    case 145u: goto L_001C474C;
    case 146u: goto L_001C4760;
    case 147u: goto L_001C476C;
    case 148u: goto L_001C4778;
    case 149u: goto L_001C4784;
    case 150u: goto L_001C4790;
    case 151u: goto L_001C4798;
    case 152u: goto L_001C47A8;
    case 153u: goto L_001C47B4;
    case 154u: goto L_001C47C0;
    case 155u: goto L_001C47CC;
    case 156u: goto L_001C47D8;
    case 157u: goto L_001C47EC;
    case 158u: goto L_001C47F8;
    case 159u: goto L_001C4804;
    case 160u: goto L_001C4810;
    case 161u: goto L_001C481C;
    case 162u: goto L_001C4824;
    case 163u: goto L_001C4834;
    case 164u: goto L_001C4840;
    case 165u: goto L_001C484C;
    case 166u: goto L_001C4858;
    case 167u: goto L_001C4864;
    case 168u: goto L_001C4878;
    case 169u: goto L_001C4884;
    case 170u: goto L_001C4890;
    case 171u: goto L_001C489C;
    case 172u: goto L_001C48A8;
    case 173u: goto L_001C48B0;
    case 174u: goto L_001C48C0;
    case 175u: goto L_001C48CC;
    case 176u: goto L_001C48D8;
    case 177u: goto L_001C48E4;
    case 178u: goto L_001C48F0;
    case 179u: goto L_001C4904;
    case 180u: goto L_001C4910;
    case 181u: goto L_001C491C;
    case 182u: goto L_001C4928;
    case 183u: goto L_001C4934;
    case 184u: goto L_001C493C;
    case 185u: goto L_001C494C;
    case 186u: goto L_001C4958;
    case 187u: goto L_001C4964;
    case 188u: goto L_001C4970;
    case 189u: goto L_001C497C;
    case 190u: goto L_001C4990;
    case 191u: goto L_001C499C;
    case 192u: goto L_001C49A8;
    case 193u: goto L_001C49B4;
    case 194u: goto L_001C49C0;
    case 195u: goto L_001C49C8;
    case 196u: goto L_001C49D8;
    case 197u: goto L_001C49E4;
    case 198u: goto L_001C49F0;
    case 199u: goto L_001C49FC;
    case 200u: goto L_001C4A08;
    case 201u: goto L_001C4A14;
    case 202u: goto L_001C4A24;
    case 203u: goto L_001C4A30;
    case 204u: goto L_001C4A3C;
    case 205u: goto L_001C4A48;
    case 206u: goto L_001C4A54;
    case 207u: goto L_001C4A5C;
    case 208u: goto L_001C4A6C;
    case 209u: goto L_001C4A78;
    case 210u: goto L_001C4A84;
    case 211u: goto L_001C4A90;
    case 212u: goto L_001C4A9C;
    case 213u: goto L_001C4AA8;
    case 214u: goto L_001C4AB8;
    case 215u: goto L_001C4AC4;
    case 216u: goto L_001C4AD0;
    case 217u: goto L_001C4ADC;
    case 218u: goto L_001C4AE8;
    case 219u: goto L_001C4AF0;
    case 220u: goto L_001C4B00;
    case 221u: goto L_001C4B0C;
    case 222u: goto L_001C4B18;
    case 223u: goto L_001C4B24;
    case 224u: goto L_001C4B30;
    case 225u: goto L_001C4B44;
    case 226u: goto L_001C4B50;
    case 227u: goto L_001C4B5C;
    case 228u: goto L_001C4B68;
    case 229u: goto L_001C4B74;
    case 230u: goto L_001C4B7C;
    case 231u: goto L_001C4B8C;
    case 232u: goto L_001C4B98;
    case 233u: goto L_001C4BA4;
    case 234u: goto L_001C4BB0;
    case 235u: goto L_001C4BBC;
    case 236u: goto L_001C4BD0;
    case 237u: goto L_001C4BDC;
    case 238u: goto L_001C4BE8;
    case 239u: goto L_001C4BF0;
    case 240u: goto L_001C4BF8;
    case 241u: goto L_001C4C20;
    case 242u: goto L_001C4C4C;
    case 243u: goto L_001C4C74;
    case 244u: goto L_001C4C7C;
    case 245u: goto L_001C4C84;
    case 246u: goto L_001C4C8C;
    case 247u: goto L_001C4C98;
    case 248u: goto L_001C4CA4;
    case 249u: goto L_001C4CB4;
    case 250u: goto L_001C4CC0;
    case 251u: goto L_001C4CCC;
    case 252u: goto L_001C4CD8;
    case 253u: goto L_001C4CE4;
    case 254u: goto L_001C4CF0;
    case 255u: goto L_001C4D00;
    case 256u: goto L_001C4D0C;
    case 257u: goto L_001C4D18;
    case 258u: goto L_001C4D24;
    case 259u: goto L_001C4D30;
    case 260u: goto L_001C4D38;
    case 261u: goto L_001C4D48;
    case 262u: goto L_001C4D54;
    case 263u: goto L_001C4D60;
    case 264u: goto L_001C4D6C;
    case 265u: goto L_001C4D78;
    case 266u: goto L_001C4D84;
    case 267u: goto L_001C4D94;
    case 268u: goto L_001C4DA0;
    case 269u: goto L_001C4DAC;
    case 270u: goto L_001C4DB8;
    case 271u: goto L_001C4DC4;
    case 272u: goto L_001C4DCC;
    case 273u: goto L_001C4DDC;
    case 274u: goto L_001C4DE8;
    case 275u: goto L_001C4DF4;
    case 276u: goto L_001C4DFC;
    case 277u: goto L_001C4E04;
    case 278u: goto L_001C4E20;
    case 279u: goto L_001C4E4C;
    case 280u: goto L_001C4E74;
    case 281u: goto L_001C4E7C;
    case 282u: goto L_001C4E84;
    case 283u: goto L_001C4E8C;
    case 284u: goto L_001C4E98;
    case 285u: goto L_001C4EA4;
    case 286u: goto L_001C4EB4;
    case 287u: goto L_001C4EC0;
    case 288u: goto L_001C4ECC;
    case 289u: goto L_001C4ED8;
    case 290u: goto L_001C4EE4;
    case 291u: goto L_001C4EF0;
    case 292u: goto L_001C4F00;
    case 293u: goto L_001C4F0C;
    case 294u: goto L_001C4F18;
    case 295u: goto L_001C4F24;
    case 296u: goto L_001C4F30;
    case 297u: goto L_001C4F38;
    case 298u: goto L_001C4F48;
    case 299u: goto L_001C4F54;
    case 300u: goto L_001C4F60;
    case 301u: goto L_001C4F68;
    case 302u: goto L_001C4F70;
    case 303u: goto L_001C4F90;
    case 304u: goto L_001C4FBC;
    case 305u: goto L_001C4FE4;
    case 306u: goto L_001C4FEC;
    case 307u: goto L_001C4FF4;
    case 308u: goto L_001C4FFC;
    case 309u: goto L_001C5008;
    case 310u: goto L_001C5014;
    case 311u: goto L_001C5024;
    case 312u: goto L_001C5030;
    case 313u: goto L_001C503C;
    case 314u: goto L_001C5048;
    case 315u: goto L_001C5054;
    case 316u: goto L_001C5068;
    case 317u: goto L_001C5074;
    case 318u: goto L_001C5080;
    case 319u: goto L_001C508C;
    case 320u: goto L_001C5098;
    case 321u: goto L_001C50A0;
    case 322u: goto L_001C50B0;
    case 323u: goto L_001C50BC;
    case 324u: goto L_001C50C8;
    case 325u: goto L_001C50D4;
    case 326u: goto L_001C50E0;
    case 327u: goto L_001C50F4;
    case 328u: goto L_001C5100;
    case 329u: goto L_001C510C;
    case 330u: goto L_001C5118;
    case 331u: goto L_001C5124;
    case 332u: goto L_001C512C;
    case 333u: goto L_001C513C;
    case 334u: goto L_001C5148;
    case 335u: goto L_001C5154;
    case 336u: goto L_001C5160;
    case 337u: goto L_001C516C;
    case 338u: goto L_001C5180;
    case 339u: goto L_001C518C;
    case 340u: goto L_001C5198;
    case 341u: goto L_001C51A4;
    case 342u: goto L_001C51B0;
    case 343u: goto L_001C51B8;
    case 344u: goto L_001C51C8;
    case 345u: goto L_001C51D4;
    case 346u: goto L_001C51E0;
    case 347u: goto L_001C51EC;
    case 348u: goto L_001C51F8;
    case 349u: goto L_001C520C;
    case 350u: goto L_001C5218;
    case 351u: goto L_001C5224;
    case 352u: goto L_001C5230;
    case 353u: goto L_001C523C;
    case 354u: goto L_001C5244;
    case 355u: goto L_001C5254;
    case 356u: goto L_001C5260;
    case 357u: goto L_001C526C;
    case 358u: goto L_001C5278;
    case 359u: goto L_001C5284;
    case 360u: goto L_001C5290;
    case 361u: goto L_001C52A0;
    case 362u: goto L_001C52AC;
    case 363u: goto L_001C52B8;
    case 364u: goto L_001C52C4;
    case 365u: goto L_001C52D0;
    case 366u: goto L_001C52D8;
    case 367u: goto L_001C52E8;
    case 368u: goto L_001C52F4;
    case 369u: goto L_001C5300;
    case 370u: goto L_001C530C;
    case 371u: goto L_001C5318;
    case 372u: goto L_001C532C;
    case 373u: goto L_001C5338;
    case 374u: goto L_001C5344;
    case 375u: goto L_001C5350;
    case 376u: goto L_001C535C;
    case 377u: goto L_001C5364;
    case 378u: goto L_001C5374;
    case 379u: goto L_001C5380;
    case 380u: goto L_001C538C;
    case 381u: goto L_001C5398;
    case 382u: goto L_001C53A4;
    case 383u: goto L_001C53B8;
    case 384u: goto L_001C53C4;
    case 385u: goto L_001C53D0;
    case 386u: goto L_001C53D8;
    case 387u: goto L_001C53E0;
    case 388u: goto L_001C5400;
    case 389u: goto L_001C542C;
    case 390u: goto L_001C5454;
    case 391u: goto L_001C545C;
    case 392u: goto L_001C5464;
    case 393u: goto L_001C546C;
    case 394u: goto L_001C5478;
    case 395u: goto L_001C5484;
    case 396u: goto L_001C5494;
    case 397u: goto L_001C54A0;
    case 398u: goto L_001C54AC;
    case 399u: goto L_001C54B8;
    case 400u: goto L_001C54C4;
    case 401u: goto L_001C54D0;
    case 402u: goto L_001C54E0;
    case 403u: goto L_001C54EC;
    case 404u: goto L_001C54F8;
    case 405u: goto L_001C5504;
    case 406u: goto L_001C5510;
    case 407u: goto L_001C5518;
    case 408u: goto L_001C5528;
    case 409u: goto L_001C5534;
    case 410u: goto L_001C5540;
    case 411u: goto L_001C554C;
    case 412u: goto L_001C5558;
    case 413u: goto L_001C5564;
    case 414u: goto L_001C5574;
    case 415u: goto L_001C5580;
    case 416u: goto L_001C558C;
    case 417u: goto L_001C5598;
    case 418u: goto L_001C55A4;
    case 419u: goto L_001C55AC;
    case 420u: goto L_001C55BC;
    case 421u: goto L_001C55C8;
    case 422u: goto L_001C55D4;
    case 423u: goto L_001C55E0;
    case 424u: goto L_001C55EC;
    case 425u: goto L_001C55F8;
    case 426u: goto L_001C5608;
    case 427u: goto L_001C5614;
    case 428u: goto L_001C5620;
    case 429u: goto L_001C562C;
    case 430u: goto L_001C5638;
    case 431u: goto L_001C5640;
    case 432u: goto L_001C5650;
    case 433u: goto L_001C565C;
    case 434u: goto L_001C5668;
    case 435u: goto L_001C5674;
    case 436u: goto L_001C5680;
    case 437u: goto L_001C568C;
    case 438u: goto L_001C569C;
    case 439u: goto L_001C56A8;
    case 440u: goto L_001C56B4;
    case 441u: goto L_001C56BC;
    case 442u: goto L_001C56C4;
    case 443u: goto L_001C56E0;
    case 444u: goto L_001C56FC;
    case 445u: goto L_001C5710;
    case 446u: goto L_001C5720;
    case 447u: goto L_001C5728;
    case 448u: goto L_001C5730;
    case 449u: goto L_001C5738;
    case 450u: goto L_001C5740;
    case 451u: goto L_001C5750;
    case 452u: goto L_001C576C;
    case 453u: goto L_001C5780;
    case 454u: goto L_001C5790;
    case 455u: goto L_001C5798;
    case 456u: goto L_001C57A0;
    case 457u: goto L_001C57A8;
    case 458u: goto L_001C57B0;
    case 459u: goto L_001C57C0;
    case 460u: goto L_001C57D4;
    case 461u: goto L_001C57DC;
    case 462u: goto L_001C57E4;
    case 463u: goto L_001C57EC;
    case 464u: goto L_001C57F4;
    case 465u: goto L_001C57FC;
    case 466u: goto L_001C5810;
    case 467u: goto L_001C5838;
    case 468u: goto L_001C586C;
    case 469u: goto L_001C58A0;
    case 470u: goto L_001C58CC;
    case 471u: goto L_001C58E0;
    case 472u: goto L_001C58F4;
    case 473u: goto L_001C5910;
    case 474u: goto L_001C5930;
    case 475u: goto L_001C5944;
    case 476u: goto L_001C5970;
    case 477u: goto L_001C598C;
    case 478u: goto L_001C59A8;
    case 479u: goto L_001C59D8;
    case 480u: goto L_001C59F0;
    case 481u: goto L_001C5A38;
    case 482u: goto L_001C5A4C;
    case 483u: goto L_001C5A60;
    case 484u: goto L_001C5AA0;
    case 485u: goto L_001C5AB4;
    case 486u: goto L_001C5AD0;
    case 487u: goto L_001C5AEC;
    case 488u: goto L_001C5B08;
    case 489u: goto L_001C5B1C;
    case 490u: goto L_001C5B30;
    case 491u: goto L_001C5B48;
    case 492u: goto L_001C5B60;
    case 493u: goto L_001C5B84;
    case 494u: goto L_001C5B90;
    case 495u: goto L_001C5BAC;
    case 496u: goto L_001C5BBC;
    case 497u: goto L_001C5BC8;
    case 498u: goto L_001C5BD4;
    case 499u: goto L_001C5BE4;
    case 500u: goto L_001C5BEC;
    case 501u: goto L_001C5C04;
    case 502u: goto L_001C5C10;
    case 503u: goto L_001C5C54;
    case 504u: goto L_001C5C94;
    case 505u: goto L_001C5CCC;
    case 506u: goto L_001C5CD8;
    case 507u: goto L_001C5D1C;
    case 508u: goto L_001C5D54;
    case 509u: goto L_001C5D8C;
    case 510u: goto L_001C5DA0;
    case 511u: goto L_001C5DB4;
    case 512u: goto L_001C5DC8;
    case 513u: goto L_001C5DDC;
    case 514u: goto L_001C5E00;
    case 515u: goto L_001C5E2C;
    case 516u: goto L_001C5E34;
    case 517u: goto L_001C5E3C;
    case 518u: goto L_001C5E44;
    case 519u: goto L_001C5E4C;
    case 520u: goto L_001C5E60;
    case 521u: goto L_001C5E80;
    case 522u: goto L_001C5EAC;
    case 523u: goto L_001C5EC0;
    case 524u: goto L_001C5EEC;
    case 525u: goto L_001C5F08;
    case 526u: goto L_001C5F24;
    case 527u: goto L_001C5F3C;
    case 528u: goto L_001C5F54;
    case 529u: goto L_001C5F70;
    case 530u: goto L_001C6020;
    case 531u: goto L_001C6034;
    case 532u: goto L_001C6048;
    case 533u: goto L_001C605C;
    case 534u: goto L_001C6070;
    case 535u: goto L_001C609C;
    case 536u: goto L_001C60B0;
    case 537u: goto L_001C60C4;
    case 538u: goto L_001C60D8;
    case 539u: goto L_001C60F0;
    case 540u: goto L_001C611C;
    case 541u: goto L_001C6130;
    case 542u: goto L_001C6140;
    case 543u: goto L_001C6158;
    case 544u: goto L_001C616C;
    case 545u: goto L_001C6180;
    case 546u: goto L_001C61AC;
    case 547u: goto L_001C61C4;
    case 548u: goto L_001C61CC;
    case 549u: goto L_001C61E4;
    case 550u: goto L_001C61F8;
    case 551u: goto L_001C6214;
    case 552u: goto L_001C6230;
    case 553u: goto L_001C624C;
    case 554u: goto L_001C6260;
    case 555u: goto L_001C6280;
    case 556u: goto L_001C62B0;
    case 557u: goto L_001C62C4;
    case 558u: goto L_001C62F0;
    case 559u: goto L_001C630C;
    case 560u: goto L_001C6328;
    case 561u: goto L_001C6340;
    case 562u: goto L_001C6370;
    case 563u: goto L_001C6390;
    case 564u: goto L_001C63D0;
    case 565u: goto L_001C63E0;
    case 566u: goto L_001C6408;
    case 567u: goto L_001C641C;
    case 568u: goto L_001C6440;
    case 569u: goto L_001C646C;
    case 570u: goto L_001C6480;
    case 571u: goto L_001C6498;
    case 572u: goto L_001C64BC;
    case 573u: goto L_001C64D8;
    case 574u: goto L_001C64F4;
    case 575u: goto L_001C650C;
    case 576u: goto L_001C6520;
    case 577u: goto L_001C654C;
    case 578u: goto L_001C6560;
    case 579u: goto L_001C6568;
    case 580u: goto L_001C657C;
    case 581u: goto L_001C6590;
    case 582u: goto L_001C65BC;
    case 583u: goto L_001C65D0;
    case 584u: goto L_001C65E0;
    case 585u: goto L_001C65E8;
    case 586u: goto L_001C65F8;
    case 587u: goto L_001C6600;
    case 588u: goto L_001C6608;
    case 589u: goto L_001C6618;
    case 590u: goto L_001C6620;
    case 591u: goto L_001C6630;
    case 592u: goto L_001C6638;
    case 593u: goto L_001C6640;
    case 594u: goto L_001C6654;
    case 595u: goto L_001C6670;
    case 596u: goto L_001C669C;
    case 597u: goto L_001C66B0;
    case 598u: goto L_001C66C0;
    case 599u: goto L_001C66C8;
    case 600u: goto L_001C66D8;
    case 601u: goto L_001C66E0;
    case 602u: goto L_001C66E8;
    case 603u: goto L_001C66FC;
    case 604u: goto L_001C6710;
    case 605u: goto L_001C6798;
    case 606u: goto L_001C67A0;
    case 607u: goto L_001C67B0;
    case 608u: goto L_001C67BC;
    case 609u: goto L_001C67D8;
    case 610u: goto L_001C6800;
    case 611u: goto L_001C6870;
    case 612u: goto L_001C6898;
    case 613u: goto L_001C6904;
    case 614u: goto L_001C6918;
    case 615u: goto L_001C6920;
    case 616u: goto L_001C6934;
    case 617u: goto L_001C6950;
    case 618u: goto L_001C697C;
    case 619u: goto L_001C6990;
    case 620u: goto L_001C69BC;
    case 621u: goto L_001C69D8;
    case 622u: goto L_001C69F4;
    case 623u: goto L_001C6A18;
    case 624u: goto L_001C6A20;
    case 625u: goto L_001C6A34;
    case 626u: goto L_001C6A50;
    case 627u: goto L_001C6A7C;
    case 628u: goto L_001C6A90;
    case 629u: goto L_001C6AAC;
    case 630u: goto L_001C6AC8;
    case 631u: goto L_001C6AE4;
    case 632u: goto L_001C6AF8;
    case 633u: goto L_001C6B10;
    case 634u: goto L_001C6B60;
    case 635u: goto L_001C6B74;
    case 636u: goto L_001C6B7C;
    case 637u: goto L_001C6BD4;
    case 638u: goto L_001C6BF0;
    case 639u: goto L_001C6C0C;
    case 640u: goto L_001C6C20;
    case 641u: goto L_001C6C38;
    case 642u: goto L_001C6C44;
    case 643u: goto L_001C6C80;
    case 644u: goto L_001C6C9C;
    case 645u: goto L_001C6CD0;
    case 646u: goto L_001C6D24;
    case 647u: goto L_001C6D78;
    case 648u: goto L_001C6D88;
    case 649u: goto L_001C6D94;
    case 650u: goto L_001C6DA8;
    case 651u: goto L_001C6DB0;
    case 652u: goto L_001C6DBC;
    case 653u: goto L_001C6DCC;
    case 654u: goto L_001C6DD8;
    case 655u: goto L_001C6DF8;
    case 656u: goto L_001C6E10;
    case 657u: goto L_001C6E20;
    case 658u: goto L_001C6E40;
    case 659u: goto L_001C6E48;
    case 660u: goto L_001C6E74;
    case 661u: goto L_001C6E94;
    case 662u: goto L_001C6EB0;
    case 663u: goto L_001C6ECC;
    case 664u: goto L_001C6EE0;
    case 665u: goto L_001C6EF4;
    case 666u: goto L_001C6F00;
    case 667u: goto L_001C6F20;
    case 668u: goto L_001C6F38;
    case 669u: goto L_001C6F60;
    case 670u: goto L_001C6F88;
    case 671u: goto L_001C6F9C;
    case 672u: goto L_001C6FB8;
    case 673u: goto L_001C6FD4;
    case 674u: goto L_001C6FF0;
    case 675u: goto L_001C7004;
    case 676u: goto L_001C7018;
    case 677u: goto L_001C702C;
    case 678u: goto L_001C703C;
    case 679u: goto L_001C7068;
    case 680u: goto L_001C707C;
    case 681u: goto L_001C70A0;
    case 682u: goto L_001C70CC;
    case 683u: goto L_001C70E0;
    case 684u: goto L_001C70F0;
    case 685u: goto L_001C7118;
    case 686u: goto L_001C712C;
    case 687u: goto L_001C7140;
    case 688u: goto L_001C716C;
    case 689u: goto L_001C7180;
    case 690u: goto L_001C71AC;
    case 691u: goto L_001C71C8;
    case 692u: goto L_001C71E4;
    case 693u: goto L_001C7208;
    case 694u: goto L_001C7210;
    case 695u: goto L_001C7220;
    case 696u: goto L_001C7228;
    case 697u: goto L_001C723C;
    case 698u: goto L_001C7250;
    case 699u: goto L_001C7284;
    case 700u: goto L_001C7298;
    case 701u: goto L_001C7330;
    case 702u: goto L_001C7344;
    case 703u: goto L_001C7360;
    case 704u: goto L_001C738C;
    case 705u: goto L_001C73A0;
    case 706u: goto L_001C73CC;
    case 707u: goto L_001C73E8;
    case 708u: goto L_001C7404;
    case 709u: goto L_001C7428;
    case 710u: goto L_001C7438;
    case 711u: goto L_001C744C;
    case 712u: goto L_001C7460;
    case 713u: goto L_001C748C;
    case 714u: goto L_001C74A0;
    case 715u: goto L_001C74CC;
    case 716u: goto L_001C74E8;
    case 717u: goto L_001C7504;
    case 718u: goto L_001C754C;
    case 719u: goto L_001C756C;
    case 720u: goto L_001C7584;
    case 721u: goto L_001C75A0;
    case 722u: goto L_001C75F4;
    case 723u: goto L_001C7608;
    case 724u: goto L_001C7610;
    case 725u: goto L_001C761C;
    case 726u: goto L_001C76B0;
    case 727u: goto L_001C76B8;
    case 728u: goto L_001C76C0;
    case 729u: goto L_001C76D0;
    case 730u: goto L_001C76E0;
    case 731u: goto L_001C76E8;
    case 732u: goto L_001C76F0;
    case 733u: goto L_001C7700;
    case 734u: goto L_001C770C;
    case 735u: goto L_001C7720;
    case 736u: goto L_001C7784;
    case 737u: goto L_001C7794;
    case 738u: goto L_001C77EC;
    case 739u: goto L_001C77F4;
    case 740u: goto L_001C77FC;
    case 741u: goto L_001C7804;
    case 742u: goto L_001C7830;
    case 743u: goto L_001C7868;
    case 744u: goto L_001C787C;
    case 745u: goto L_001C789C;
    case 746u: goto L_001C78B0;
    case 747u: goto L_001C78C8;
    case 748u: goto L_001C78DC;
    case 749u: goto L_001C7900;
    case 750u: goto L_001C7970;
    case 751u: goto L_001C7988;
    case 752u: goto L_001C79A0;
    case 753u: goto L_001C79C0;
    case 754u: goto L_001C7ADC;
    case 755u: goto L_001C7B14;
    case 756u: goto L_001C7B54;
    case 757u: goto L_001C7B8C;
    case 758u: goto L_001C7BA0;
    case 759u: goto L_001C7CE8;
    case 760u: goto L_001C7D20;
    case 761u: goto L_001C7D5C;
    case 762u: goto L_001C7D94;
    case 763u: goto L_001C7DB0;
    case 764u: goto L_001C7ED0;
    case 765u: goto L_001C7F0C;
    case 766u: goto L_001C7F50;
    case 767u: goto L_001C7F8C;
    case 768u: goto L_001C7FA0;
    default: bad_entry(c, 0x001C4000u); return;
    }
L_001C4000:
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4014u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4014u) [[unlikely]] return; }
L_001C4014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C401Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C401Cu) [[unlikely]] return; }
L_001C401C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4024u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4024u) [[unlikely]] return; }
L_001C4024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C402Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C402Cu) [[unlikely]] return; }
L_001C402C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4038u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4038u) [[unlikely]] return; }
L_001C4038:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4044u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C4044u) [[unlikely]] return; }
L_001C4044:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4054u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4054u) [[unlikely]] return; }
L_001C4054:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4060u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4060u) [[unlikely]] return; }
L_001C4060:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C406Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C406Cu) [[unlikely]] return; }
L_001C406C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4078u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4078u) [[unlikely]] return; }
L_001C4078:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4084u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4084u) [[unlikely]] return; }
L_001C4084:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4090u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C4090u) [[unlikely]] return; }
L_001C4090:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C40A0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C40A0u) [[unlikely]] return; }
L_001C40A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C40ACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C40ACu) [[unlikely]] return; }
L_001C40AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C40B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C40B8u) [[unlikely]] return; }
L_001C40B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C40C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C40C4u) [[unlikely]] return; }
L_001C40C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C40D0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C40D0u) [[unlikely]] return; }
L_001C40D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C40D8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C40D8u) [[unlikely]] return; }
L_001C40D8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C40E8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C40E8u) [[unlikely]] return; }
L_001C40E8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C40F4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C40F4u) [[unlikely]] return; }
L_001C40F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4100u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4100u) [[unlikely]] return; }
L_001C4100:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C410Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C410Cu) [[unlikely]] return; }
L_001C410C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4118u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4118u) [[unlikely]] return; }
L_001C4118:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4124u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C4124u) [[unlikely]] return; }
L_001C4124:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4134u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4134u) [[unlikely]] return; }
L_001C4134:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4140u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4140u) [[unlikely]] return; }
L_001C4140:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C414Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C414Cu) [[unlikely]] return; }
L_001C414C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4158u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4158u) [[unlikely]] return; }
L_001C4158:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4164u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4164u) [[unlikely]] return; }
L_001C4164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C416Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C416Cu) [[unlikely]] return; }
L_001C416C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C417Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C417Cu) [[unlikely]] return; }
L_001C417C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4188u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4188u) [[unlikely]] return; }
L_001C4188:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4194u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4194u) [[unlikely]] return; }
L_001C4194:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C41A0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C41A0u) [[unlikely]] return; }
L_001C41A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C41ACu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C41ACu) [[unlikely]] return; }
L_001C41AC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C41B8u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C41B8u) [[unlikely]] return; }
L_001C41B8:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C41C8u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C41C8u) [[unlikely]] return; }
L_001C41C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C41D4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C41D4u) [[unlikely]] return; }
L_001C41D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C41E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C41E0u) [[unlikely]] return; }
L_001C41E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C41ECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C41ECu) [[unlikely]] return; }
L_001C41EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C41F8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C41F8u) [[unlikely]] return; }
L_001C41F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4200u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C4200u) [[unlikely]] return; }
L_001C4200:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4210u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4210u) [[unlikely]] return; }
L_001C4210:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C421Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C421Cu) [[unlikely]] return; }
L_001C421C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4228u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4228u) [[unlikely]] return; }
L_001C4228:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4234u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4234u) [[unlikely]] return; }
L_001C4234:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4240u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4240u) [[unlikely]] return; }
L_001C4240:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C424Cu); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C424Cu) [[unlikely]] return; }
L_001C424C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C425Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C425Cu) [[unlikely]] return; }
L_001C425C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4268u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4268u) [[unlikely]] return; }
L_001C4268:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4274u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4274u) [[unlikely]] return; }
L_001C4274:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4280u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4280u) [[unlikely]] return; }
L_001C4280:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C428Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C428Cu) [[unlikely]] return; }
L_001C428C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4294u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C4294u) [[unlikely]] return; }
L_001C4294:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C42A4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C42A4u) [[unlikely]] return; }
L_001C42A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C42B0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C42B0u) [[unlikely]] return; }
L_001C42B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C42BCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C42BCu) [[unlikely]] return; }
L_001C42BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C42C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C42C8u) [[unlikely]] return; }
L_001C42C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C42D4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C42D4u) [[unlikely]] return; }
L_001C42D4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C42E0u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C42E0u) [[unlikely]] return; }
L_001C42E0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C42F0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C42F0u) [[unlikely]] return; }
L_001C42F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C42FCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C42FCu) [[unlikely]] return; }
L_001C42FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4308u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4308u) [[unlikely]] return; }
L_001C4308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4310u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4310u) [[unlikely]] return; }
L_001C4310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4318u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4318u) [[unlikely]] return; }
L_001C4318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C4340:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C436Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C436Cu) [[unlikely]] return; }
L_001C436C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4394u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4394u) [[unlikely]] return; }
L_001C4394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C439Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C439Cu) [[unlikely]] return; }
L_001C439C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C43A4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C43A4u) [[unlikely]] return; }
L_001C43A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C43ACu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C43ACu) [[unlikely]] return; }
L_001C43AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C43B8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C43B8u) [[unlikely]] return; }
L_001C43B8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C43C4u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C43C4u) [[unlikely]] return; }
L_001C43C4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C43D4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C43D4u) [[unlikely]] return; }
L_001C43D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C43E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C43E0u) [[unlikely]] return; }
L_001C43E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C43ECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C43ECu) [[unlikely]] return; }
L_001C43EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C43F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C43F8u) [[unlikely]] return; }
L_001C43F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4404u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4404u) [[unlikely]] return; }
L_001C4404:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4418u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4418u) [[unlikely]] return; }
L_001C4418:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4424u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4424u) [[unlikely]] return; }
L_001C4424:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4430u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4430u) [[unlikely]] return; }
L_001C4430:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C443Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C443Cu) [[unlikely]] return; }
L_001C443C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4448u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4448u) [[unlikely]] return; }
L_001C4448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4450u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C4450u) [[unlikely]] return; }
L_001C4450:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4460u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4460u) [[unlikely]] return; }
L_001C4460:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C446Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C446Cu) [[unlikely]] return; }
L_001C446C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4478u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4478u) [[unlikely]] return; }
L_001C4478:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4484u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4484u) [[unlikely]] return; }
L_001C4484:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4490u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4490u) [[unlikely]] return; }
L_001C4490:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C44A4u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C44A4u) [[unlikely]] return; }
L_001C44A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C44B0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C44B0u) [[unlikely]] return; }
L_001C44B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C44BCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C44BCu) [[unlikely]] return; }
L_001C44BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C44C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C44C8u) [[unlikely]] return; }
L_001C44C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C44D4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C44D4u) [[unlikely]] return; }
L_001C44D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C44DCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C44DCu) [[unlikely]] return; }
L_001C44DC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C44ECu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C44ECu) [[unlikely]] return; }
L_001C44EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C44F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C44F8u) [[unlikely]] return; }
L_001C44F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4504u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4504u) [[unlikely]] return; }
L_001C4504:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4510u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4510u) [[unlikely]] return; }
L_001C4510:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C451Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C451Cu) [[unlikely]] return; }
L_001C451C:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4530u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4530u) [[unlikely]] return; }
L_001C4530:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C453Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C453Cu) [[unlikely]] return; }
L_001C453C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4548u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4548u) [[unlikely]] return; }
L_001C4548:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4554u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4554u) [[unlikely]] return; }
L_001C4554:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4560u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4560u) [[unlikely]] return; }
L_001C4560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4568u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C4568u) [[unlikely]] return; }
L_001C4568:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4578u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4578u) [[unlikely]] return; }
L_001C4578:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4584u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4584u) [[unlikely]] return; }
L_001C4584:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4590u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4590u) [[unlikely]] return; }
L_001C4590:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C459Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C459Cu) [[unlikely]] return; }
L_001C459C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C45A8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C45A8u) [[unlikely]] return; }
L_001C45A8:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C45BCu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C45BCu) [[unlikely]] return; }
L_001C45BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C45C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C45C8u) [[unlikely]] return; }
L_001C45C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C45D4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C45D4u) [[unlikely]] return; }
L_001C45D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C45E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C45E0u) [[unlikely]] return; }
L_001C45E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C45ECu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C45ECu) [[unlikely]] return; }
L_001C45EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C45F4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C45F4u) [[unlikely]] return; }
L_001C45F4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4604u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4604u) [[unlikely]] return; }
L_001C4604:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4610u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4610u) [[unlikely]] return; }
L_001C4610:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C461Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C461Cu) [[unlikely]] return; }
L_001C461C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4628u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4628u) [[unlikely]] return; }
L_001C4628:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4634u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4634u) [[unlikely]] return; }
L_001C4634:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4648u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4648u) [[unlikely]] return; }
L_001C4648:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4654u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4654u) [[unlikely]] return; }
L_001C4654:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4660u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4660u) [[unlikely]] return; }
L_001C4660:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C466Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C466Cu) [[unlikely]] return; }
L_001C466C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4678u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4678u) [[unlikely]] return; }
L_001C4678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4680u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C4680u) [[unlikely]] return; }
L_001C4680:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4690u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4690u) [[unlikely]] return; }
L_001C4690:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C469Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C469Cu) [[unlikely]] return; }
L_001C469C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C46A8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C46A8u) [[unlikely]] return; }
L_001C46A8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C46B4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C46B4u) [[unlikely]] return; }
L_001C46B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C46C0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C46C0u) [[unlikely]] return; }
L_001C46C0:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C46D4u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C46D4u) [[unlikely]] return; }
L_001C46D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C46E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C46E0u) [[unlikely]] return; }
L_001C46E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C46ECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C46ECu) [[unlikely]] return; }
L_001C46EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C46F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C46F8u) [[unlikely]] return; }
L_001C46F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4704u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4704u) [[unlikely]] return; }
L_001C4704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C470Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C470Cu) [[unlikely]] return; }
L_001C470C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C471Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C471Cu) [[unlikely]] return; }
L_001C471C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4728u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4728u) [[unlikely]] return; }
L_001C4728:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4734u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4734u) [[unlikely]] return; }
L_001C4734:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4740u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4740u) [[unlikely]] return; }
L_001C4740:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C474Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C474Cu) [[unlikely]] return; }
L_001C474C:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4760u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4760u) [[unlikely]] return; }
L_001C4760:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C476Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C476Cu) [[unlikely]] return; }
L_001C476C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4778u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4778u) [[unlikely]] return; }
L_001C4778:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4784u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4784u) [[unlikely]] return; }
L_001C4784:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4790u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4790u) [[unlikely]] return; }
L_001C4790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4798u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C4798u) [[unlikely]] return; }
L_001C4798:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C47A8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C47A8u) [[unlikely]] return; }
L_001C47A8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C47B4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C47B4u) [[unlikely]] return; }
L_001C47B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C47C0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C47C0u) [[unlikely]] return; }
L_001C47C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C47CCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C47CCu) [[unlikely]] return; }
L_001C47CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C47D8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C47D8u) [[unlikely]] return; }
L_001C47D8:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C47ECu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C47ECu) [[unlikely]] return; }
L_001C47EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C47F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C47F8u) [[unlikely]] return; }
L_001C47F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4804u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4804u) [[unlikely]] return; }
L_001C4804:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4810u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4810u) [[unlikely]] return; }
L_001C4810:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C481Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C481Cu) [[unlikely]] return; }
L_001C481C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4824u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C4824u) [[unlikely]] return; }
L_001C4824:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4834u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4834u) [[unlikely]] return; }
L_001C4834:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4840u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4840u) [[unlikely]] return; }
L_001C4840:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C484Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C484Cu) [[unlikely]] return; }
L_001C484C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4858u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4858u) [[unlikely]] return; }
L_001C4858:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4864u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4864u) [[unlikely]] return; }
L_001C4864:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4878u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4878u) [[unlikely]] return; }
L_001C4878:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4884u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4884u) [[unlikely]] return; }
L_001C4884:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4890u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4890u) [[unlikely]] return; }
L_001C4890:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C489Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C489Cu) [[unlikely]] return; }
L_001C489C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C48A8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C48A8u) [[unlikely]] return; }
L_001C48A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C48B0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C48B0u) [[unlikely]] return; }
L_001C48B0:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C48C0u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C48C0u) [[unlikely]] return; }
L_001C48C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C48CCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C48CCu) [[unlikely]] return; }
L_001C48CC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C48D8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C48D8u) [[unlikely]] return; }
L_001C48D8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C48E4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C48E4u) [[unlikely]] return; }
L_001C48E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C48F0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C48F0u) [[unlikely]] return; }
L_001C48F0:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4904u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4904u) [[unlikely]] return; }
L_001C4904:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4910u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4910u) [[unlikely]] return; }
L_001C4910:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C491Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C491Cu) [[unlikely]] return; }
L_001C491C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4928u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4928u) [[unlikely]] return; }
L_001C4928:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4934u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4934u) [[unlikely]] return; }
L_001C4934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C493Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C493Cu) [[unlikely]] return; }
L_001C493C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C494Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C494Cu) [[unlikely]] return; }
L_001C494C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4958u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4958u) [[unlikely]] return; }
L_001C4958:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4964u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4964u) [[unlikely]] return; }
L_001C4964:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4970u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4970u) [[unlikely]] return; }
L_001C4970:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C497Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C497Cu) [[unlikely]] return; }
L_001C497C:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4990u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4990u) [[unlikely]] return; }
L_001C4990:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C499Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C499Cu) [[unlikely]] return; }
L_001C499C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C49A8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C49A8u) [[unlikely]] return; }
L_001C49A8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C49B4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C49B4u) [[unlikely]] return; }
L_001C49B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C49C0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C49C0u) [[unlikely]] return; }
L_001C49C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C49C8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C49C8u) [[unlikely]] return; }
L_001C49C8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C49D8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C49D8u) [[unlikely]] return; }
L_001C49D8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C49E4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C49E4u) [[unlikely]] return; }
L_001C49E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C49F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C49F0u) [[unlikely]] return; }
L_001C49F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C49FCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C49FCu) [[unlikely]] return; }
L_001C49FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A08u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4A08u) [[unlikely]] return; }
L_001C4A08:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A14u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C4A14u) [[unlikely]] return; }
L_001C4A14:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A24u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4A24u) [[unlikely]] return; }
L_001C4A24:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A30u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4A30u) [[unlikely]] return; }
L_001C4A30:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A3Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4A3Cu) [[unlikely]] return; }
L_001C4A3C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A48u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4A48u) [[unlikely]] return; }
L_001C4A48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A54u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4A54u) [[unlikely]] return; }
L_001C4A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A5Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C4A5Cu) [[unlikely]] return; }
L_001C4A5C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A6Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4A6Cu) [[unlikely]] return; }
L_001C4A6C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A78u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4A78u) [[unlikely]] return; }
L_001C4A78:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A84u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4A84u) [[unlikely]] return; }
L_001C4A84:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A90u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4A90u) [[unlikely]] return; }
L_001C4A90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A9Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4A9Cu) [[unlikely]] return; }
L_001C4A9C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4AA8u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C4AA8u) [[unlikely]] return; }
L_001C4AA8:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4AB8u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4AB8u) [[unlikely]] return; }
L_001C4AB8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4AC4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4AC4u) [[unlikely]] return; }
L_001C4AC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4AD0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4AD0u) [[unlikely]] return; }
L_001C4AD0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4ADCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4ADCu) [[unlikely]] return; }
L_001C4ADC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4AE8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4AE8u) [[unlikely]] return; }
L_001C4AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4AF0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C4AF0u) [[unlikely]] return; }
L_001C4AF0:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B00u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4B00u) [[unlikely]] return; }
L_001C4B00:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B0Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4B0Cu) [[unlikely]] return; }
L_001C4B0C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B18u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4B18u) [[unlikely]] return; }
L_001C4B18:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B24u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4B24u) [[unlikely]] return; }
L_001C4B24:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B30u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4B30u) [[unlikely]] return; }
L_001C4B30:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B44u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4B44u) [[unlikely]] return; }
L_001C4B44:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B50u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4B50u) [[unlikely]] return; }
L_001C4B50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B5Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4B5Cu) [[unlikely]] return; }
L_001C4B5C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B68u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4B68u) [[unlikely]] return; }
L_001C4B68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B74u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4B74u) [[unlikely]] return; }
L_001C4B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B7Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C4B7Cu) [[unlikely]] return; }
L_001C4B7C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B8Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4B8Cu) [[unlikely]] return; }
L_001C4B8C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B98u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4B98u) [[unlikely]] return; }
L_001C4B98:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4BA4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4BA4u) [[unlikely]] return; }
L_001C4BA4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4BB0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4BB0u) [[unlikely]] return; }
L_001C4BB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4BBCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4BBCu) [[unlikely]] return; }
L_001C4BBC:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4BD0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4BD0u) [[unlikely]] return; }
L_001C4BD0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4BDCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4BDCu) [[unlikely]] return; }
L_001C4BDC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4BE8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4BE8u) [[unlikely]] return; }
L_001C4BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4BF0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4BF0u) [[unlikely]] return; }
L_001C4BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4BF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4BF8u) [[unlikely]] return; }
L_001C4BF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C4C20:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4C4Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C4C4Cu) [[unlikely]] return; }
L_001C4C4C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4C74u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4C74u) [[unlikely]] return; }
L_001C4C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4C7Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4C7Cu) [[unlikely]] return; }
L_001C4C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4C84u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4C84u) [[unlikely]] return; }
L_001C4C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4C8Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4C8Cu) [[unlikely]] return; }
L_001C4C8C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4C98u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4C98u) [[unlikely]] return; }
L_001C4C98:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4CA4u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C4CA4u) [[unlikely]] return; }
L_001C4CA4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4CB4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4CB4u) [[unlikely]] return; }
L_001C4CB4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4CC0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4CC0u) [[unlikely]] return; }
L_001C4CC0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4CCCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4CCCu) [[unlikely]] return; }
L_001C4CCC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4CD8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4CD8u) [[unlikely]] return; }
L_001C4CD8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4CE4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4CE4u) [[unlikely]] return; }
L_001C4CE4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4CF0u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C4CF0u) [[unlikely]] return; }
L_001C4CF0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D00u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4D00u) [[unlikely]] return; }
L_001C4D00:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D0Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4D0Cu) [[unlikely]] return; }
L_001C4D0C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D18u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4D18u) [[unlikely]] return; }
L_001C4D18:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D24u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4D24u) [[unlikely]] return; }
L_001C4D24:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D30u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4D30u) [[unlikely]] return; }
L_001C4D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D38u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C4D38u) [[unlikely]] return; }
L_001C4D38:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D48u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4D48u) [[unlikely]] return; }
L_001C4D48:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D54u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4D54u) [[unlikely]] return; }
L_001C4D54:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D60u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4D60u) [[unlikely]] return; }
L_001C4D60:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D6Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4D6Cu) [[unlikely]] return; }
L_001C4D6C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D78u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4D78u) [[unlikely]] return; }
L_001C4D78:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D84u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C4D84u) [[unlikely]] return; }
L_001C4D84:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D94u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4D94u) [[unlikely]] return; }
L_001C4D94:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4DA0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4DA0u) [[unlikely]] return; }
L_001C4DA0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4DACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4DACu) [[unlikely]] return; }
L_001C4DAC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4DB8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4DB8u) [[unlikely]] return; }
L_001C4DB8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4DC4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4DC4u) [[unlikely]] return; }
L_001C4DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4DCCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C4DCCu) [[unlikely]] return; }
L_001C4DCC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4DDCu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4DDCu) [[unlikely]] return; }
L_001C4DDC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4DE8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4DE8u) [[unlikely]] return; }
L_001C4DE8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4DF4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4DF4u) [[unlikely]] return; }
L_001C4DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4DFCu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4DFCu) [[unlikely]] return; }
L_001C4DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4E04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4E04u) [[unlikely]] return; }
L_001C4E04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C4E20:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4E4Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C4E4Cu) [[unlikely]] return; }
L_001C4E4C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4E74u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4E74u) [[unlikely]] return; }
L_001C4E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4E7Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4E7Cu) [[unlikely]] return; }
L_001C4E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4E84u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4E84u) [[unlikely]] return; }
L_001C4E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4E8Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4E8Cu) [[unlikely]] return; }
L_001C4E8C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4E98u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4E98u) [[unlikely]] return; }
L_001C4E98:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4EA4u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C4EA4u) [[unlikely]] return; }
L_001C4EA4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4EB4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4EB4u) [[unlikely]] return; }
L_001C4EB4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4EC0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4EC0u) [[unlikely]] return; }
L_001C4EC0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4ECCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4ECCu) [[unlikely]] return; }
L_001C4ECC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4ED8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4ED8u) [[unlikely]] return; }
L_001C4ED8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4EE4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4EE4u) [[unlikely]] return; }
L_001C4EE4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4EF0u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C4EF0u) [[unlikely]] return; }
L_001C4EF0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4F00u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4F00u) [[unlikely]] return; }
L_001C4F00:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4F0Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4F0Cu) [[unlikely]] return; }
L_001C4F0C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4F18u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4F18u) [[unlikely]] return; }
L_001C4F18:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4F24u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4F24u) [[unlikely]] return; }
L_001C4F24:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4F30u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4F30u) [[unlikely]] return; }
L_001C4F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4F38u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C4F38u) [[unlikely]] return; }
L_001C4F38:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4F48u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4F48u) [[unlikely]] return; }
L_001C4F48:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4F54u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4F54u) [[unlikely]] return; }
L_001C4F54:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4F60u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4F60u) [[unlikely]] return; }
L_001C4F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4F68u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4F68u) [[unlikely]] return; }
L_001C4F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4F70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C4F70u) [[unlikely]] return; }
L_001C4F70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C4F90:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4FBCu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C4FBCu) [[unlikely]] return; }
L_001C4FBC:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4FE4u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C4FE4u) [[unlikely]] return; }
L_001C4FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4FECu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C4FECu) [[unlikely]] return; }
L_001C4FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4FF4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C4FF4u) [[unlikely]] return; }
L_001C4FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4FFCu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C4FFCu) [[unlikely]] return; }
L_001C4FFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5008u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C5008u) [[unlikely]] return; }
L_001C5008:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5014u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C5014u) [[unlikely]] return; }
L_001C5014:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5024u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C5024u) [[unlikely]] return; }
L_001C5024:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5030u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C5030u) [[unlikely]] return; }
L_001C5030:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C503Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C503Cu) [[unlikely]] return; }
L_001C503C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5048u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C5048u) [[unlikely]] return; }
L_001C5048:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5054u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C5054u) [[unlikely]] return; }
L_001C5054:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5068u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C5068u) [[unlikely]] return; }
L_001C5068:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5074u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C5074u) [[unlikely]] return; }
L_001C5074:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5080u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C5080u) [[unlikely]] return; }
L_001C5080:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C508Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C508Cu) [[unlikely]] return; }
L_001C508C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5098u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C5098u) [[unlikely]] return; }
L_001C5098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C50A0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C50A0u) [[unlikely]] return; }
L_001C50A0:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C50B0u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C50B0u) [[unlikely]] return; }
L_001C50B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C50BCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C50BCu) [[unlikely]] return; }
L_001C50BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C50C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C50C8u) [[unlikely]] return; }
L_001C50C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C50D4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C50D4u) [[unlikely]] return; }
L_001C50D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C50E0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C50E0u) [[unlikely]] return; }
L_001C50E0:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C50F4u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C50F4u) [[unlikely]] return; }
L_001C50F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5100u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C5100u) [[unlikely]] return; }
L_001C5100:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C510Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C510Cu) [[unlikely]] return; }
L_001C510C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5118u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C5118u) [[unlikely]] return; }
L_001C5118:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5124u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C5124u) [[unlikely]] return; }
L_001C5124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C512Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C512Cu) [[unlikely]] return; }
L_001C512C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C513Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C513Cu) [[unlikely]] return; }
L_001C513C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5148u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C5148u) [[unlikely]] return; }
L_001C5148:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5154u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C5154u) [[unlikely]] return; }
L_001C5154:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5160u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C5160u) [[unlikely]] return; }
L_001C5160:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C516Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C516Cu) [[unlikely]] return; }
L_001C516C:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5180u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C5180u) [[unlikely]] return; }
L_001C5180:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C518Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C518Cu) [[unlikely]] return; }
L_001C518C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5198u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C5198u) [[unlikely]] return; }
L_001C5198:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C51A4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C51A4u) [[unlikely]] return; }
L_001C51A4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C51B0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C51B0u) [[unlikely]] return; }
L_001C51B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C51B8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C51B8u) [[unlikely]] return; }
L_001C51B8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C51C8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C51C8u) [[unlikely]] return; }
L_001C51C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C51D4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C51D4u) [[unlikely]] return; }
L_001C51D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C51E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C51E0u) [[unlikely]] return; }
L_001C51E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C51ECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C51ECu) [[unlikely]] return; }
L_001C51EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C51F8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C51F8u) [[unlikely]] return; }
L_001C51F8:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C520Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C520Cu) [[unlikely]] return; }
L_001C520C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5218u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C5218u) [[unlikely]] return; }
L_001C5218:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5224u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C5224u) [[unlikely]] return; }
L_001C5224:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5230u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C5230u) [[unlikely]] return; }
L_001C5230:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C523Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C523Cu) [[unlikely]] return; }
L_001C523C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5244u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C5244u) [[unlikely]] return; }
L_001C5244:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5254u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C5254u) [[unlikely]] return; }
L_001C5254:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5260u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C5260u) [[unlikely]] return; }
L_001C5260:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C526Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C526Cu) [[unlikely]] return; }
L_001C526C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5278u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C5278u) [[unlikely]] return; }
L_001C5278:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5284u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C5284u) [[unlikely]] return; }
L_001C5284:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5290u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C5290u) [[unlikely]] return; }
L_001C5290:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C52A0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C52A0u) [[unlikely]] return; }
L_001C52A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C52ACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C52ACu) [[unlikely]] return; }
L_001C52AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C52B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C52B8u) [[unlikely]] return; }
L_001C52B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C52C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C52C4u) [[unlikely]] return; }
L_001C52C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C52D0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C52D0u) [[unlikely]] return; }
L_001C52D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C52D8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C52D8u) [[unlikely]] return; }
L_001C52D8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C52E8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C52E8u) [[unlikely]] return; }
L_001C52E8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C52F4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C52F4u) [[unlikely]] return; }
L_001C52F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5300u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C5300u) [[unlikely]] return; }
L_001C5300:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C530Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C530Cu) [[unlikely]] return; }
L_001C530C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5318u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C5318u) [[unlikely]] return; }
L_001C5318:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C532Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C532Cu) [[unlikely]] return; }
L_001C532C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5338u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C5338u) [[unlikely]] return; }
L_001C5338:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5344u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C5344u) [[unlikely]] return; }
L_001C5344:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5350u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C5350u) [[unlikely]] return; }
L_001C5350:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C535Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C535Cu) [[unlikely]] return; }
L_001C535C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5364u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C5364u) [[unlikely]] return; }
L_001C5364:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5374u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C5374u) [[unlikely]] return; }
L_001C5374:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5380u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C5380u) [[unlikely]] return; }
L_001C5380:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C538Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C538Cu) [[unlikely]] return; }
L_001C538C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5398u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C5398u) [[unlikely]] return; }
L_001C5398:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C53A4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C53A4u) [[unlikely]] return; }
L_001C53A4:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C53B8u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C53B8u) [[unlikely]] return; }
L_001C53B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C53C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C53C4u) [[unlikely]] return; }
L_001C53C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C53D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C53D0u) [[unlikely]] return; }
L_001C53D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C53D8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C53D8u) [[unlikely]] return; }
L_001C53D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C53E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C53E0u) [[unlikely]] return; }
L_001C53E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C5400:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C542Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C542Cu) [[unlikely]] return; }
L_001C542C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5454u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C5454u) [[unlikely]] return; }
L_001C5454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C545Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C545Cu) [[unlikely]] return; }
L_001C545C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5464u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C5464u) [[unlikely]] return; }
L_001C5464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C546Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C546Cu) [[unlikely]] return; }
L_001C546C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5478u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C5478u) [[unlikely]] return; }
L_001C5478:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5484u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C5484u) [[unlikely]] return; }
L_001C5484:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5494u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C5494u) [[unlikely]] return; }
L_001C5494:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C54A0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C54A0u) [[unlikely]] return; }
L_001C54A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C54ACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C54ACu) [[unlikely]] return; }
L_001C54AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C54B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C54B8u) [[unlikely]] return; }
L_001C54B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C54C4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C54C4u) [[unlikely]] return; }
L_001C54C4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C54D0u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C54D0u) [[unlikely]] return; }
L_001C54D0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C54E0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C54E0u) [[unlikely]] return; }
L_001C54E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C54ECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C54ECu) [[unlikely]] return; }
L_001C54EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C54F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C54F8u) [[unlikely]] return; }
L_001C54F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5504u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C5504u) [[unlikely]] return; }
L_001C5504:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5510u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C5510u) [[unlikely]] return; }
L_001C5510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5518u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C5518u) [[unlikely]] return; }
L_001C5518:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5528u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C5528u) [[unlikely]] return; }
L_001C5528:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5534u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C5534u) [[unlikely]] return; }
L_001C5534:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5540u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C5540u) [[unlikely]] return; }
L_001C5540:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C554Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C554Cu) [[unlikely]] return; }
L_001C554C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5558u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C5558u) [[unlikely]] return; }
L_001C5558:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5564u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C5564u) [[unlikely]] return; }
L_001C5564:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5574u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C5574u) [[unlikely]] return; }
L_001C5574:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5580u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C5580u) [[unlikely]] return; }
L_001C5580:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C558Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C558Cu) [[unlikely]] return; }
L_001C558C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5598u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C5598u) [[unlikely]] return; }
L_001C5598:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C55A4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C55A4u) [[unlikely]] return; }
L_001C55A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C55ACu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C55ACu) [[unlikely]] return; }
L_001C55AC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C55BCu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C55BCu) [[unlikely]] return; }
L_001C55BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C55C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C55C8u) [[unlikely]] return; }
L_001C55C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C55D4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C55D4u) [[unlikely]] return; }
L_001C55D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C55E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C55E0u) [[unlikely]] return; }
L_001C55E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C55ECu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C55ECu) [[unlikely]] return; }
L_001C55EC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C55F8u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C55F8u) [[unlikely]] return; }
L_001C55F8:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5608u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C5608u) [[unlikely]] return; }
L_001C5608:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5614u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C5614u) [[unlikely]] return; }
L_001C5614:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5620u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C5620u) [[unlikely]] return; }
L_001C5620:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C562Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C562Cu) [[unlikely]] return; }
L_001C562C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5638u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C5638u) [[unlikely]] return; }
L_001C5638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5640u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C5640u) [[unlikely]] return; }
L_001C5640:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5650u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C5650u) [[unlikely]] return; }
L_001C5650:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C565Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C565Cu) [[unlikely]] return; }
L_001C565C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5668u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C5668u) [[unlikely]] return; }
L_001C5668:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5674u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C5674u) [[unlikely]] return; }
L_001C5674:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5680u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C5680u) [[unlikely]] return; }
L_001C5680:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C568Cu); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C568Cu) [[unlikely]] return; }
L_001C568C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C569Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C569Cu) [[unlikely]] return; }
L_001C569C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C56A8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C56A8u) [[unlikely]] return; }
L_001C56A8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C56B4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C56B4u) [[unlikely]] return; }
L_001C56B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C56BCu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C56BCu) [[unlikely]] return; }
L_001C56BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C56C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C56C4u) [[unlikely]] return; }
L_001C56C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C56E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001C5708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C56FCu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C56FCu) [[unlikely]] return; }
L_001C56FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5710; } }
    c.budget -= 1;
L_001C5708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5710u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C5710u) [[unlikely]] return; }
L_001C5710:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5720u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C5720u) [[unlikely]] return; }
L_001C5720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5728u); c.r[4].d[0] = ld16((c.r[16].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C5728u) [[unlikely]] return; }
L_001C5728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5730u); c.r[4].d[0] = ld16((c.r[16].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C5730u) [[unlikely]] return; }
L_001C5730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5738u); c.r[4].d[0] = ld16((c.r[16].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C5738u) [[unlikely]] return; }
L_001C5738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5740u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C5740u) [[unlikely]] return; }
L_001C5740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001C5778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C576Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C576Cu) [[unlikely]] return; }
L_001C576C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5780; } }
    c.budget -= 1;
L_001C5778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5780u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C5780u) [[unlikely]] return; }
L_001C5780:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5790u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C5790u) [[unlikely]] return; }
L_001C5790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5798u); c.r[4].d[0] = ld16((c.r[16].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C5798u) [[unlikely]] return; }
L_001C5798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C57A0u); c.r[4].d[0] = ld16((c.r[16].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C57A0u) [[unlikely]] return; }
L_001C57A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C57A8u); c.r[4].d[0] = ld16((c.r[16].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C57A8u) [[unlikely]] return; }
L_001C57A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C57B0u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C57B0u) [[unlikely]] return; }
L_001C57B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C57C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C57D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C57D4u) [[unlikely]] return; }
L_001C57D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C57DCu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C57DCu) [[unlikely]] return; }
L_001C57DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C57E4u); c.r[4].d[0] = ld16((c.r[16].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C57E4u) [[unlikely]] return; }
L_001C57E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C57ECu); c.r[4].d[0] = ld16((c.r[16].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C57ECu) [[unlikely]] return; }
L_001C57EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C57F4u); c.r[4].d[0] = ld16((c.r[16].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C57F4u) [[unlikely]] return; }
L_001C57F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C57FCu); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C57FCu) [[unlikely]] return; }
L_001C57FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 8668u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001C5888; } }
L_001C5838:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C5870; } }
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 7504u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C586Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C586Cu) [[unlikely]] return; }
L_001C586C:
    c.budget -= 1;
L_001C5870:
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5838u | kUnwind; return; } goto L_001C5838; } }
    c.budget -= 1;
L_001C5888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C58A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C58CCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C58CCu) [[unlikely]] return; }
L_001C58CC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C58E0u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C58E0u) [[unlikely]] return; }
L_001C58E0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C58F4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C58F4u) [[unlikely]] return; }
L_001C58F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C5910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5930u); set32(c.r[4], c.r[17].w[0] + 2752u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C5930u) [[unlikely]] return; }
L_001C5930:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5944u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C5944u) [[unlikely]] return; }
L_001C5944:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 850u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C59B0; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5970u); set32(c.r[4], ld32((c.r[2].w[0] + 5056u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C5970u) [[unlikely]] return; }
L_001C5970:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C598Cu); set32(c.r[4], ld32((c.r[2].w[0] + 5060u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C598Cu) [[unlikely]] return; }
L_001C598C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C59A8u); set32(c.r[4], ld32((c.r[2].w[0] + 5064u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C59A8u) [[unlikely]] return; }
L_001C59A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5A38; } }
L_001C59B0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C59E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 848u)));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 8554u);  if (t) { goto L_001C59E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C59D8u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C59D8u) [[unlikely]] return; }
L_001C59D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5A38; } }
L_001C59E0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C59F0u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_002E(c, 292u, depth + 1u); else { c.pc = 0x001BAE80u; return; } if (c.pc != 0x001C59F0u) [[unlikely]] return; }
L_001C59F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C5A08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 2730u);  if (t) { goto L_001C5A10; } }
    c.budget -= 1;
L_001C5A08:
    set32(c.r[2], c.r[2].w[0] + 3640u);
    c.budget -= 2;
L_001C5A10:
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C5A30; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001C5A30; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001C5A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5A38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C5A38u) [[unlikely]] return; }
L_001C5A38:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5A4Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C5A4Cu) [[unlikely]] return; }
L_001C5A4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C5A60:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 850u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C5B28; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5AA0u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C5AA0u) [[unlikely]] return; }
L_001C5AA0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5AB4u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C5AB4u) [[unlikely]] return; }
L_001C5AB4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5AD0u); set32(c.r[4], ld32((c.r[2].w[0] + 5056u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C5AD0u) [[unlikely]] return; }
L_001C5AD0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5AECu); set32(c.r[4], ld32((c.r[2].w[0] + 5060u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C5AECu) [[unlikely]] return; }
L_001C5AEC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5B08u); set32(c.r[4], ld32((c.r[2].w[0] + 5064u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C5B08u) [[unlikely]] return; }
L_001C5B08:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5B1Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C5B1Cu) [[unlikely]] return; }
L_001C5B1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5DE0; } }
    c.budget -= 1;
L_001C5B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5B30u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x001C5B30u) [[unlikely]] return; }
L_001C5B30:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5B48u); set32(c.r[5], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001C5B48u) [[unlikely]] return; }
L_001C5B48:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5B60u); set32(c.r[5], c.r[2].w[0] + 2000u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001C5B60u) [[unlikely]] return; }
L_001C5B60:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 1236u)));
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001C5B98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5B84u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001C5B84u) [[unlikely]] return; }
L_001C5B84:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5B90u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001C5B90u) [[unlikely]] return; }
L_001C5B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5BF0; } }
L_001C5B98:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5BACu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C5BACu) [[unlikely]] return; }
L_001C5BAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5BBCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001C5BBCu) [[unlikely]] return; }
L_001C5BBC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5BC8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001C5BC8u) [[unlikely]] return; }
L_001C5BC8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5BD4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001C5BD4u) [[unlikely]] return; }
L_001C5BD4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5BE4u); st32((c.r[29].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001C5BE4u) [[unlikely]] return; }
L_001C5BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5BECu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001C5BECu) [[unlikely]] return; }
L_001C5BEC:
    c.budget -= 1;
L_001C5BF0:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5C04u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C5C04u) [[unlikely]] return; }
L_001C5C04:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5C10u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001C5C10u) [[unlikely]] return; }
L_001C5C10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_001C5C30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_001C5C4C; } }
L_001C5C30:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C5C4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_001C5C4C; } }
L_001C5C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5C54u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001C5C54u) [[unlikely]] return; }
L_001C5C54:
    c.f[0] = c.r[2].w[0];
    set32(c.r[16], c.r[29].w[0] + 128u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5C94u); c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001C5C94u) [[unlikely]] return; }
L_001C5C94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[19].d[0] << 48;  if (t) { goto L_001C5CC0; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 5;
L_001C5CC0:
    c.r[4].d[0] = c.r[19].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5CCCu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C5CCCu) [[unlikely]] return; }
L_001C5CCC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5CD8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001C5CD8u) [[unlikely]] return; }
L_001C5CD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_001C5CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_001C5D14; } }
L_001C5CF8:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C5D14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_001C5D14; } }
L_001C5D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5D1Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001C5D1Cu) [[unlikely]] return; }
L_001C5D1C:
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5D54u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001C5D54u) [[unlikely]] return; }
L_001C5D54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_001C5D80; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 5;
L_001C5D80:
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5D8Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C5D8Cu) [[unlikely]] return; }
L_001C5D8C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5DA0u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C5DA0u) [[unlikely]] return; }
L_001C5DA0:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5DB4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C5DB4u) [[unlikely]] return; }
L_001C5DB4:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5DC8u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C5DC8u) [[unlikely]] return; }
L_001C5DC8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5DDCu); set32(c.r[4], c.r[2].w[0] + 2032u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001C5DDCu) [[unlikely]] return; }
L_001C5DDC:
    c.budget -= 1;
L_001C5DE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001C5E00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5E2Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C5E2Cu) [[unlikely]] return; }
L_001C5E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5E34u); set32(c.r[4], c.r[17].w[0] + 928u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C5E34u) [[unlikely]] return; }
L_001C5E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5E3Cu); set32(c.r[4], ld32((c.r[17].w[0] + 916u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C5E3Cu) [[unlikely]] return; }
L_001C5E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5E44u); set32(c.r[4], ld32((c.r[17].w[0] + 912u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C5E44u) [[unlikely]] return; }
L_001C5E44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5E4Cu); set32(c.r[4], ld32((c.r[17].w[0] + 908u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C5E4Cu) [[unlikely]] return; }
L_001C5E4C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5E60u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C5E60u) [[unlikely]] return; }
L_001C5E60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C5E80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5EACu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C5EACu) [[unlikely]] return; }
L_001C5EAC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5EC0u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C5EC0u) [[unlikely]] return; }
L_001C5EC0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 850u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C5F30; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5EECu); set32(c.r[4], ld32((c.r[2].w[0] + 5056u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C5EECu) [[unlikely]] return; }
L_001C5EEC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5F08u); set32(c.r[4], ld32((c.r[2].w[0] + 5060u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C5F08u) [[unlikely]] return; }
L_001C5F08:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5F24u); set32(c.r[4], ld32((c.r[2].w[0] + 5064u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C5F24u) [[unlikely]] return; }
L_001C5F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5F40; } }
    c.budget -= 1;
L_001C5F30:
    set32(c.r[2], ld32((c.r[17].w[0] + 1244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5F3Cu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C5F3Cu) [[unlikely]] return; }
L_001C5F3C:
    c.budget -= 1;
L_001C5F40:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5F54u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C5F54u) [[unlikely]] return; }
L_001C5F54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C5F70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2000u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2004u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2008u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1984u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1988u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1992u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[2].w[0] + 1984u);
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6020u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x001C6020u) [[unlikely]] return; }
L_001C6020:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6034u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C6034u) [[unlikely]] return; }
L_001C6034:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6048u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C6048u) [[unlikely]] return; }
L_001C6048:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C605Cu); set32(c.r[4], c.r[2].w[0] + 2032u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001C605Cu) [[unlikely]] return; }
L_001C605C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C6070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C609Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C609Cu) [[unlikely]] return; }
L_001C609C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C60B0u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C60B0u) [[unlikely]] return; }
L_001C60B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C60C4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001C60C4u) [[unlikely]] return; }
L_001C60C4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C60D8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C60D8u) [[unlikely]] return; }
L_001C60D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C60F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C611Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C611Cu) [[unlikely]] return; }
L_001C611C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6130u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C6130u) [[unlikely]] return; }
L_001C6130:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6140u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 306u, depth + 1u); else { c.pc = 0x001BB090u; return; } if (c.pc != 0x001C6140u) [[unlikely]] return; }
L_001C6140:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-32767ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C6150; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C6150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6158u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C6158u) [[unlikely]] return; }
L_001C6158:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C616Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C616Cu) [[unlikely]] return; }
L_001C616C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C6180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C61ACu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C61ACu) [[unlikely]] return; }
L_001C61AC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C61D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C61C4u); c.r[4].d[0] = ld16((c.r[17].w[0] + 8428u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C61C4u) [[unlikely]] return; }
L_001C61C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C61CCu); c.r[4].d[0] = ld16((c.r[17].w[0] + 8424u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C61CCu) [[unlikely]] return; }
L_001C61CC:
    c.budget -= 1;
L_001C61D0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C61E4u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C61E4u) [[unlikely]] return; }
L_001C61E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 357u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 2048u);  if (t) { goto L_001C61F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C61F8u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001C61F8u) [[unlikely]] return; }
L_001C61F8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6214u); set32(c.r[4], ld32((c.r[2].w[0] + 5056u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C6214u) [[unlikely]] return; }
L_001C6214:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6230u); set32(c.r[4], ld32((c.r[2].w[0] + 5060u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C6230u) [[unlikely]] return; }
L_001C6230:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C624Cu); set32(c.r[4], ld32((c.r[2].w[0] + 5064u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C624Cu) [[unlikely]] return; }
L_001C624C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6260u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C6260u) [[unlikely]] return; }
L_001C6260:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C6280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C62B0u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C62B0u) [[unlikely]] return; }
L_001C62B0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C62C4u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C62C4u) [[unlikely]] return; }
L_001C62C4:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 850u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C6330; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C62F0u); set32(c.r[4], ld32((c.r[2].w[0] + 5056u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C62F0u) [[unlikely]] return; }
L_001C62F0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C630Cu); set32(c.r[4], ld32((c.r[2].w[0] + 5060u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C630Cu) [[unlikely]] return; }
L_001C630C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6328u); set32(c.r[4], ld32((c.r[2].w[0] + 5064u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C6328u) [[unlikely]] return; }
L_001C6328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6408; } }
L_001C6330:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6340u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 306u, depth + 1u); else { c.pc = 0x001BB090u; return; } if (c.pc != 0x001C6340u) [[unlikely]] return; }
L_001C6340:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001C6400; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15792u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001C4000u < 16384u) { entry = entries_0031[(t - 0x001C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001C6370:
    c.r[1].d[0] = c.r[16].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001C6380; } }
    set32(c.r[16], 0u + 8192u);
    c.budget -= 1;
L_001C6380:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_001C6400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001C6400; } }
L_001C6390:
    c.r[2].d[0] = c.r[16].sd[0] < -8192ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 57345ull;  if (t) { goto L_001C63A8; } }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001C63B0; } }
L_001C63A8:
    set32(c.r[16], 0u - 8192u);
    c.budget -= 2;
L_001C63B0:
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C6400; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_001C6400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001C6400; } }
L_001C63D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C63E0u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_002E(c, 306u, depth + 1u); else { c.pc = 0x001BB090u; return; } if (c.pc != 0x001C63E0u) [[unlikely]] return; }
L_001C63E0:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C6400; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_001C6400; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C6400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6408u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C6408u) [[unlikely]] return; }
L_001C6408:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C641Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C641Cu) [[unlikely]] return; }
L_001C641C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C6440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C646Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C646Cu) [[unlikely]] return; }
L_001C646C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6480u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C6480u) [[unlikely]] return; }
L_001C6480:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 848u)));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 9100u);  if (t) { goto L_001C64A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6498u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C6498u) [[unlikely]] return; }
L_001C6498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C64F8; } }
L_001C64A0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C64BCu); set32(c.r[4], ld32((c.r[2].w[0] + 5056u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C64BCu) [[unlikely]] return; }
L_001C64BC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C64D8u); set32(c.r[4], ld32((c.r[2].w[0] + 5060u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C64D8u) [[unlikely]] return; }
L_001C64D8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C64F4u); set32(c.r[4], ld32((c.r[2].w[0] + 5064u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C64F4u) [[unlikely]] return; }
L_001C64F4:
    c.budget -= 1;
L_001C64F8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C650Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C650Cu) [[unlikely]] return; }
L_001C650C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C6520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C654Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C654Cu) [[unlikely]] return; }
L_001C654C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6560u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C6560u) [[unlikely]] return; }
L_001C6560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6568u); set32(c.r[4], ld32((c.r[16].w[0] + 304u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C6568u) [[unlikely]] return; }
L_001C6568:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C657Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C657Cu) [[unlikely]] return; }
L_001C657C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C6590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C65BCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C65BCu) [[unlikely]] return; }
L_001C65BC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C65D0u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C65D0u) [[unlikely]] return; }
L_001C65D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C65E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 306u, depth + 1u); else { c.pc = 0x001BB090u; return; } if (c.pc != 0x001C65E0u) [[unlikely]] return; }
L_001C65E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C65E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00116310u; return; } if (c.pc != 0x001C65E8u) [[unlikely]] return; }
L_001C65E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FD00000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C65F8u); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x001C65F8u) [[unlikely]] return; }
L_001C65F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6600u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 88u, depth + 1u); else { c.pc = 0x001163C8u; return; } if (c.pc != 0x001C6600u) [[unlikely]] return; }
L_001C6600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6608u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C6608u) [[unlikely]] return; }
L_001C6608:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6618u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 292u, depth + 1u); else { c.pc = 0x001BAE80u; return; } if (c.pc != 0x001C6618u) [[unlikely]] return; }
L_001C6618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6620u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00116310u; return; } if (c.pc != 0x001C6620u) [[unlikely]] return; }
L_001C6620:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FD00000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6630u); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x001C6630u) [[unlikely]] return; }
L_001C6630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6638u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 88u, depth + 1u); else { c.pc = 0x001163C8u; return; } if (c.pc != 0x001C6638u) [[unlikely]] return; }
L_001C6638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6640u); set32(c.r[4], c.r[2].w[0] + 3094u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C6640u) [[unlikely]] return; }
L_001C6640:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6654u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C6654u) [[unlikely]] return; }
L_001C6654:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C6670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C669Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C669Cu) [[unlikely]] return; }
L_001C669C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C66B0u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C66B0u) [[unlikely]] return; }
L_001C66B0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C66C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 292u, depth + 1u); else { c.pc = 0x001BAE80u; return; } if (c.pc != 0x001C66C0u) [[unlikely]] return; }
L_001C66C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C66C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00116310u; return; } if (c.pc != 0x001C66C8u) [[unlikely]] return; }
L_001C66C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE80000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C66D8u); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x001C66D8u) [[unlikely]] return; }
L_001C66D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C66E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 88u, depth + 1u); else { c.pc = 0x001163C8u; return; } if (c.pc != 0x001C66E0u) [[unlikely]] return; }
L_001C66E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C66E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C66E8u) [[unlikely]] return; }
L_001C66E8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C66FCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C66FCu) [[unlikely]] return; }
L_001C66FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C6710:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 100u);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[16], c.r[29].w[0] + 104u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2032u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2036u));
    st32((c.r[17].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2040u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2160u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2164u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2168u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6798u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x001C6798u) [[unlikely]] return; }
L_001C6798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C67A0u); set32(c.r[4], c.r[19].w[0] + 2112u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C67A0u) [[unlikely]] return; }
L_001C67A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C67B0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001C67B0u) [[unlikely]] return; }
L_001C67B0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C67BCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001C67BCu) [[unlikely]] return; }
L_001C67BC:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001C6868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C67D8u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001C67D8u) [[unlikely]] return; }
L_001C67D8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001C67F0; } }
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_001C67F0:
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6800u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001C6800u) [[unlikely]] return; }
L_001C6800:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[2].w[0] + 5060u);
    set32(c.r[2], ld32((c.r[2].w[0] + 5060u)));
    set32(c.r[3], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] <= 0; c.r[1].d[0] = c.r[3].sd[0] < 513ll ? 1ull : 0ull;  if (t) { goto L_001C6840; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001C6850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 512u);  if (t) { goto L_001C6850; } }
    c.budget -= 1;
L_001C6840:
    c.r[1].d[0] = c.r[3].sd[0] < -512ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C6850; } }
    set32(c.r[16], c.r[2].w[0] - 512u);
    c.budget -= 1;
L_001C6850:
    c.r[2].d[0] = c.r[16].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C68F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001C68F8; } }
    c.budget -= 1;
L_001C6868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6870u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001C6870u) [[unlikely]] return; }
L_001C6870:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_001C6888; } }
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_001C6888:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[12] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6898u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001C6898u) [[unlikely]] return; }
L_001C6898:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 5060u)));
    set32(c.r[4], c.r[2].w[0] + 5060u);
    set32(c.r[2], c.r[16].w[0] - c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].d[0] = c.r[2].sd[0] < 513ll ? 1ull : 0ull;  if (t) { goto L_001C68D8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001C68E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + 512u);  if (t) { goto L_001C68E8; } }
    c.budget -= 1;
L_001C68D8:
    c.r[1].d[0] = c.r[2].sd[0] < -512ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C68E8; } }
    set32(c.r[16], c.r[3].w[0] - 512u);
    c.budget -= 1;
L_001C68E8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_001C68F8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001C68F8:
    st32((c.r[4].w[0]), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6904u); set32(c.r[4], c.r[19].w[0] + 2112u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C6904u) [[unlikely]] return; }
L_001C6904:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6918u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C6918u) [[unlikely]] return; }
L_001C6918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6920u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C6920u) [[unlikely]] return; }
L_001C6920:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6934u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C6934u) [[unlikely]] return; }
L_001C6934:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001C6950:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C697Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C697Cu) [[unlikely]] return; }
L_001C697C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6990u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C6990u) [[unlikely]] return; }
L_001C6990:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 850u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C6A00; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C69BCu); set32(c.r[4], ld32((c.r[2].w[0] + 5056u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C69BCu) [[unlikely]] return; }
L_001C69BC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C69D8u); set32(c.r[4], ld32((c.r[2].w[0] + 5060u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C69D8u) [[unlikely]] return; }
L_001C69D8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C69F4u); set32(c.r[4], ld32((c.r[2].w[0] + 5064u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C69F4u) [[unlikely]] return; }
L_001C69F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6A20; } }
    c.budget -= 1;
L_001C6A00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 2112u);
    set32(c.r[5], c.r[17].w[0] + 2752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6A18u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_002E(c, 248u, depth + 1u); else { c.pc = 0x001BA910u; return; } if (c.pc != 0x001C6A18u) [[unlikely]] return; }
L_001C6A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6A20u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001C6A20u) [[unlikely]] return; }
L_001C6A20:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6A34u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C6A34u) [[unlikely]] return; }
L_001C6A34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001C6A50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6A7Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C6A7Cu) [[unlikely]] return; }
L_001C6A7C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6A90u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C6A90u) [[unlikely]] return; }
L_001C6A90:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6AACu); set32(c.r[4], ld32((c.r[2].w[0] + 5056u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C6AACu) [[unlikely]] return; }
L_001C6AAC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6AC8u); set32(c.r[4], ld32((c.r[2].w[0] + 5060u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C6AC8u) [[unlikely]] return; }
L_001C6AC8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6AE4u); set32(c.r[4], ld32((c.r[2].w[0] + 5064u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C6AE4u) [[unlikely]] return; }
L_001C6AE4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6AF8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C6AF8u) [[unlikely]] return; }
L_001C6AF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C6B10:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[19].w[0] + 304u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    c.r[3].d[0] = c.r[3].d[0] ^ 24ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6B60u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C6B60u) [[unlikely]] return; }
L_001C6B60:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6B74u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C6B74u) [[unlikely]] return; }
L_001C6B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6B7Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C6B7Cu) [[unlikely]] return; }
L_001C6B7C:
    set32(c.r[4], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[3], 0u + 3u);
    set32(c.r[20], c.r[4].w[0] + 32u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001C6E18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001C6C28; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001C6C28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C6BB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6F38; } }
L_001C6BB8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6BD4u); set32(c.r[4], ld32((c.r[2].w[0] + 5056u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C6BD4u) [[unlikely]] return; }
L_001C6BD4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6BF0u); set32(c.r[4], ld32((c.r[2].w[0] + 5060u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C6BF0u) [[unlikely]] return; }
L_001C6BF0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6C0Cu); set32(c.r[4], ld32((c.r[2].w[0] + 5064u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C6C0Cu) [[unlikely]] return; }
L_001C6C0C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6C20u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C6C20u) [[unlikely]] return; }
L_001C6C20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6F38; } }
L_001C6C28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6C38u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001C6C38u) [[unlikely]] return; }
L_001C6C38:
    set32(c.r[4], c.r[19].w[0] + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6C44u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001C6C44u) [[unlikely]] return; }
L_001C6C44:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001C6C74; } }
    c.f[1] = ld32((c.r[19].w[0] + 8440u));
    c.f[0] = ld32((c.r[19].w[0] + 8264u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 20u, c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6C78; } }
L_001C6C74:
    c.f[20] = c.r[2].w[0];
    c.budget -= 1;
L_001C6C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6C80u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001C6C80u) [[unlikely]] return; }
L_001C6C80:
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6C9Cu);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001C6C9Cu) [[unlikely]] return; }
L_001C6C9C:
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 34u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[21].d[0] = c.r[2].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6CD0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001C6CD0u) [[unlikely]] return; }
L_001C6CD0:
    c.r[1].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C6D00; } }
    c.r[2].d[0] = c.r[21].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u - c.r[20].w[0]);  if (t) { goto L_001C6CF8; } }
    c.r[21].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);  if (t) { goto L_001C6D00; } }
L_001C6CF8:
    c.r[21].d[0] = c.r[20].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 2;
L_001C6D00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 152u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6D24u); st32((c.r[29].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001C6D24u) [[unlikely]] return; }
L_001C6D24:
    set32(c.r[4], c.r[29].w[0] + 132u);
    set32(c.r[3], c.r[29].w[0] + 136u);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C6D70; } }
    st32((c.r[29].w[0] + 140u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_001C6D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6D78u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C6D78u) [[unlikely]] return; }
L_001C6D78:
    c.r[5].d[0] = c.r[21].d[0] << 48;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6D88u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x001C6D88u) [[unlikely]] return; }
L_001C6D88:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6D94u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001C6D94u) [[unlikely]] return; }
L_001C6D94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6DA8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001C6DA8u) [[unlikely]] return; }
L_001C6DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6DB0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C6DB0u) [[unlikely]] return; }
L_001C6DB0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6DBCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001C6DBCu) [[unlikely]] return; }
L_001C6DBC:
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6DCCu); set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001C6DCCu) [[unlikely]] return; }
L_001C6DCC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6DD8u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001C6DD8u) [[unlikely]] return; }
L_001C6DD8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6DF8u); set32(c.r[7], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x001C6DF8u) [[unlikely]] return; }
L_001C6DF8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6E10u); set32(c.r[4], c.r[2].w[0] + 2032u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001C6E10u) [[unlikely]] return; }
L_001C6E10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6F38; } }
L_001C6E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6E20u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C6E20u) [[unlikely]] return; }
L_001C6E20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    set32(c.r[16], c.r[17].w[0] + c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6E40u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001C6E40u) [[unlikely]] return; }
L_001C6E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6E48u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001C6E48u) [[unlikely]] return; }
L_001C6E48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C6EE8; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6E74u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001C6E74u) [[unlikely]] return; }
L_001C6E74:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6E94u); set32(c.r[4], ld32((c.r[2].w[0] + 5056u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C6E94u) [[unlikely]] return; }
L_001C6E94:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6EB0u); set32(c.r[4], ld32((c.r[2].w[0] + 5060u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C6EB0u) [[unlikely]] return; }
L_001C6EB0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6ECCu); set32(c.r[4], ld32((c.r[2].w[0] + 5064u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C6ECCu) [[unlikely]] return; }
L_001C6ECC:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6EE0u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C6EE0u) [[unlikely]] return; }
L_001C6EE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6F38; } }
L_001C6EE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6EF4u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001C6EF4u) [[unlikely]] return; }
L_001C6EF4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6F00u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001C6F00u) [[unlikely]] return; }
L_001C6F00:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6F20u); set32(c.r[7], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x001C6F20u) [[unlikely]] return; }
L_001C6F20:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6F38u); set32(c.r[4], c.r[2].w[0] + 2032u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001C6F38u) [[unlikely]] return; }
L_001C6F38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001C6F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 324u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C7010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6F88u); set32(c.r[4], c.r[17].w[0] + 2752u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C6F88u) [[unlikely]] return; }
L_001C6F88:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6F9Cu); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C6F9Cu) [[unlikely]] return; }
L_001C6F9C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6FB8u); set32(c.r[4], ld32((c.r[2].w[0] + 5056u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C6FB8u) [[unlikely]] return; }
L_001C6FB8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6FD4u); set32(c.r[4], ld32((c.r[2].w[0] + 5060u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C6FD4u) [[unlikely]] return; }
L_001C6FD4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6FF0u); set32(c.r[4], ld32((c.r[2].w[0] + 5064u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C6FF0u) [[unlikely]] return; }
L_001C6FF0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7004u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C7004u) [[unlikely]] return; }
L_001C7004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7080; } }
    c.budget -= 1;
L_001C7010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7018u); set32(c.r[4], c.r[17].w[0] + 2752u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C7018u) [[unlikely]] return; }
L_001C7018:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C702Cu); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C702Cu) [[unlikely]] return; }
L_001C702C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C703Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_002E(c, 292u, depth + 1u); else { c.pc = 0x001BAE80u; return; } if (c.pc != 0x001C703Cu) [[unlikely]] return; }
L_001C703C:
    set32(c.r[2], c.r[2].w[0] + 3640u);
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C7060; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001C7060; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001C7060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7068u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C7068u) [[unlikely]] return; }
L_001C7068:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C707Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C707Cu) [[unlikely]] return; }
L_001C707C:
    c.budget -= 1;
L_001C7080:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C70A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C70CCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C70CCu) [[unlikely]] return; }
L_001C70CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C70E0u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C70E0u) [[unlikely]] return; }
L_001C70E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C70F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 306u, depth + 1u); else { c.pc = 0x001BB090u; return; } if (c.pc != 0x001C70F0u) [[unlikely]] return; }
L_001C70F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C7108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 2730u);  if (t) { goto L_001C7110; } }
L_001C7108:
    set32(c.r[2], c.r[2].w[0] + 2730u);
    c.budget -= 2;
L_001C7110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7118u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C7118u) [[unlikely]] return; }
L_001C7118:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C712Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C712Cu) [[unlikely]] return; }
L_001C712C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C7140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C716Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C716Cu) [[unlikely]] return; }
L_001C716C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7180u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C7180u) [[unlikely]] return; }
L_001C7180:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 850u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C71F0; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C71ACu); set32(c.r[4], ld32((c.r[2].w[0] + 5056u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C71ACu) [[unlikely]] return; }
L_001C71AC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C71C8u); set32(c.r[4], ld32((c.r[2].w[0] + 5060u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C71C8u) [[unlikely]] return; }
L_001C71C8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C71E4u); set32(c.r[4], ld32((c.r[2].w[0] + 5064u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C71E4u) [[unlikely]] return; }
L_001C71E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7228; } }
    c.budget -= 1;
L_001C71F0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 21u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 527u);  if (t) { goto L_001C7218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7208u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C7208u) [[unlikely]] return; }
L_001C7208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7210u); set32(c.r[4], 0u + 4823u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C7210u) [[unlikely]] return; }
L_001C7210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7228; } }
L_001C7218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7220u); set32(c.r[4], 0u - 527u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C7220u) [[unlikely]] return; }
L_001C7220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7228u); set32(c.r[4], 0u - 4823u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C7228u) [[unlikely]] return; }
L_001C7228:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C723Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C723Cu) [[unlikely]] return; }
L_001C723C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C7250:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[16], c.r[18].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7284u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C7284u) [[unlikely]] return; }
L_001C7284:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7298u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C7298u) [[unlikely]] return; }
L_001C7298:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C72F8; } }
    c.f[0] = ld32((c.r[18].w[0] + 8292u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 4552ll ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 4551u);  if (t) { goto L_001C7328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001C7328; } }
L_001C72F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
L_001C7328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7330u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C7330u) [[unlikely]] return; }
L_001C7330:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7344u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C7344u) [[unlikely]] return; }
L_001C7344:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C7360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C738Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C738Cu) [[unlikely]] return; }
L_001C738C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C73A0u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C73A0u) [[unlikely]] return; }
L_001C73A0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 850u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7410; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C73CCu); set32(c.r[4], ld32((c.r[2].w[0] + 5056u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C73CCu) [[unlikely]] return; }
L_001C73CC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C73E8u); set32(c.r[4], ld32((c.r[2].w[0] + 5060u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C73E8u) [[unlikely]] return; }
L_001C73E8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7404u); set32(c.r[4], ld32((c.r[2].w[0] + 5064u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C7404u) [[unlikely]] return; }
L_001C7404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7438; } }
    c.budget -= 1;
L_001C7410:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 7280u);  if (t) { goto L_001C7430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7428u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C7428u) [[unlikely]] return; }
L_001C7428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7438; } }
L_001C7430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7438u); set32(c.r[4], 0u - 7280u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C7438u) [[unlikely]] return; }
L_001C7438:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C744Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C744Cu) [[unlikely]] return; }
L_001C744C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C7460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C748Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C748Cu) [[unlikely]] return; }
L_001C748C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C74A0u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C74A0u) [[unlikely]] return; }
L_001C74A0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 850u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7510; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C74CCu); set32(c.r[4], ld32((c.r[2].w[0] + 5056u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C74CCu) [[unlikely]] return; }
L_001C74CC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C74E8u); set32(c.r[4], ld32((c.r[2].w[0] + 5060u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C74E8u) [[unlikely]] return; }
L_001C74E8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7504u); set32(c.r[4], ld32((c.r[2].w[0] + 5064u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C7504u) [[unlikely]] return; }
L_001C7504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7570; } }
    c.budget -= 1;
L_001C7510:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 5ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 20u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 304u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7558; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C754Cu); set32(c.r[4], ld32((c.r[2].w[0] + 5064u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C754Cu) [[unlikely]] return; }
L_001C754C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7570; } }
    c.budget -= 1;
L_001C7558:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C756Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001C756Cu) [[unlikely]] return; }
L_001C756C:
    c.budget -= 1;
L_001C7570:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7584u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C7584u) [[unlikely]] return; }
L_001C7584:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C75A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[16], c.r[19].w[0] + 304u);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[6].w[0] << 6);
    set32(c.r[20], c.r[6].w[0] - 19u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[3].w[0] + 1984u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C75F4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C75F4u) [[unlikely]] return; }
L_001C75F4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7608u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C7608u) [[unlikely]] return; }
L_001C7608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7610u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001C7610u) [[unlikely]] return; }
L_001C7610:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C761Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0011(c, 222u, depth + 1u); else { c.pc = 0x00146F90u; return; } if (c.pc != 0x001C761Cu) [[unlikely]] return; }
L_001C761C:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0; c.r[2].d[0] = c.r[20].d[0] & 1ull;  if (t) { goto L_001C7630; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_001C7634; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_001C7630:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.budget -= 1;
L_001C7634:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 7392u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[20].w[0] << 2);  if (t) { goto L_001C76C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[3].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C76B0u); set32(c.r[16], c.r[3].w[0] + 52u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C76B0u) [[unlikely]] return; }
L_001C76B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C76B8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C76B8u) [[unlikely]] return; }
L_001C76B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C76C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C76C0u) [[unlikely]] return; }
L_001C76C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7808; } }
L_001C76C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C76D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C76D0u) [[unlikely]] return; }
L_001C76D0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C76E0u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0011(c, 224u, depth + 1u); else { c.pc = 0x00146FE0u; return; } if (c.pc != 0x001C76E0u) [[unlikely]] return; }
L_001C76E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C76E8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C76E8u) [[unlikely]] return; }
L_001C76E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C76F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001C76F0u) [[unlikely]] return; }
L_001C76F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7700u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x001C7700u) [[unlikely]] return; }
L_001C7700:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C770Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001C770Cu) [[unlikely]] return; }
L_001C770C:
    set32(c.r[18], c.r[29].w[0] + 116u);
    set32(c.r[19], c.r[29].w[0] + 120u);
    c.f[13] = ld32((c.r[18].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7720u); c.f[12] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001C7720u) [[unlikely]] return; }
L_001C7720:
    set32(c.r[21], c.r[20].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], c.r[21].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[20], c.r[4].w[0] + 4u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[3] = fp::cvt_s_w(c.f[2]);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[19].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7784u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001C7784u) [[unlikely]] return; }
L_001C7784:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7794u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001C7794u) [[unlikely]] return; }
L_001C7794:
    set32(c.r[3], c.r[21].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[0] = c.r[2].w[0];
    set32(c.r[16], c.r[3].w[0] + 52u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C77ECu); st32((c.r[3].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C77ECu) [[unlikely]] return; }
L_001C77EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C77F4u); set32(c.r[4], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C77F4u) [[unlikely]] return; }
L_001C77F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C77FCu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C77FCu) [[unlikely]] return; }
L_001C77FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7804u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C7804u) [[unlikely]] return; }
L_001C7804:
    c.budget -= 1;
L_001C7808:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001C7830:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[16], c.r[18].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7868u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C7868u) [[unlikely]] return; }
L_001C7868:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C787Cu); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001C787Cu) [[unlikely]] return; }
L_001C787C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[19], c.r[2].w[0] - 19u);
    c.r[1].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] << 14);  if (t) { goto L_001C78B8; } }
    set32(c.r[2], c.r[2].w[0] - 8192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C789Cu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C789Cu) [[unlikely]] return; }
L_001C789C:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C78B0u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C78B0u) [[unlikely]] return; }
L_001C78B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C78C8; } }
L_001C78B8:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C78C8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C78C8u) [[unlikely]] return; }
L_001C78C8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C78DCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C78DCu) [[unlikely]] return; }
L_001C78DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C7900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001C7928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C79A8; } }
    c.budget -= 1;
L_001C7928:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C7940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C79A8; } }
    c.budget -= 1;
L_001C7940:
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C7968; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C7968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C79A8; } }
    c.budget -= 1;
L_001C7968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7970u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 763u, depth + 1u); else { c.pc = 0x001C7DB0u; return; } if (c.pc != 0x001C7970u) [[unlikely]] return; }
L_001C7970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C79A8; } }
L_001C7980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7988u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 758u, depth + 1u); else { c.pc = 0x001C7BA0u; return; } if (c.pc != 0x001C7988u) [[unlikely]] return; }
L_001C7988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C79A8; } }
L_001C7998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C79A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 753u, depth + 1u); else { c.pc = 0x001C79C0u; return; } if (c.pc != 0x001C79A0u) [[unlikely]] return; }
L_001C79A0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001C79A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C79C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 777u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C79E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7B90; } }
L_001C79E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 800u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7A58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8677u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C7A40; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[3].d[0] = c.r[2].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C7A18; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7A20; } }
L_001C7A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C7B90; } }
L_001C7A20:
    st8((c.r[4].w[0] + 775u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 696u)));
    set32(c.r[3], 0u - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 696u), c.r[3].w[0]);  if (t) { goto L_001C7B90; } }
    c.budget -= 1;
L_001C7A40:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C7A58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7B90; } }
    c.budget -= 1;
L_001C7A58:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 775u));
    c.r[2].d[0] = c.r[3].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7A78; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 696u), c.r[2].w[0]);  if (t) { goto L_001C7A90; } }
L_001C7A78:
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C7A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7B90; } }
L_001C7A90:
    st8((c.r[4].w[0] + 775u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 753u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 696u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8677u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[3].d[0] & 8ull;  if (t) { goto L_001C7B20; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C7AE4; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 7372u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7ADCu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0031(c, 768u, depth + 1u); else { c.pc = 0x001C7FA0u; return; } if (c.pc != 0x001C7ADCu) [[unlikely]] return; }
L_001C7ADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7B14; } }
L_001C7AE4:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    set32(c.r[3], c.r[3].w[0] - 7376u);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7B14u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0031(c, 768u, depth + 1u); else { c.pc = 0x001C7FA0u; return; } if (c.pc != 0x001C7B14u) [[unlikely]] return; }
L_001C7B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7B90; } }
    c.budget -= 1;
L_001C7B20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C7B5C; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 7372u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7B54u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0032(c, 22u, depth + 1u); else { c.pc = 0x001C8360u; return; } if (c.pc != 0x001C7B54u) [[unlikely]] return; }
L_001C7B54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7B8C; } }
L_001C7B5C:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    set32(c.r[3], c.r[3].w[0] - 7376u);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7B8Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0032(c, 22u, depth + 1u); else { c.pc = 0x001C8360u; return; } if (c.pc != 0x001C7B8Cu) [[unlikely]] return; }
L_001C7B8C:
    c.budget -= 1;
L_001C7B90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C7BA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 777u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C7BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7D98; } }
L_001C7BC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 800u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7C38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8678u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C7C20; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[3].d[0] = c.r[2].d[0] & 18ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C7BF8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7C00; } }
L_001C7BF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C7D98; } }
L_001C7C00:
    st8((c.r[4].w[0] + 775u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 696u)));
    set32(c.r[3], 0u - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 696u), c.r[3].w[0]);  if (t) { goto L_001C7D98; } }
    c.budget -= 1;
L_001C7C20:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C7C38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7D98; } }
    c.budget -= 1;
L_001C7C38:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 775u));
    c.r[2].d[0] = c.r[3].d[0] & 18ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7C58; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 696u), c.r[2].w[0]);  if (t) { goto L_001C7C70; } }
L_001C7C58:
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] & 18ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C7C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7D98; } }
L_001C7C70:
    st8((c.r[4].w[0] + 775u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 753u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 696u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 114u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[3].d[0] & 16ull;  if (t) { goto L_001C7CA8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1626u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7CA8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001C7CA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8678u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C7D28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C7CF0; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 6268u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7CE8u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0031(c, 768u, depth + 1u); else { c.pc = 0x001C7FA0u; return; } if (c.pc != 0x001C7CE8u) [[unlikely]] return; }
L_001C7CE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7D20; } }
L_001C7CF0:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    set32(c.r[3], c.r[3].w[0] - 6272u);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7D20u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0031(c, 768u, depth + 1u); else { c.pc = 0x001C7FA0u; return; } if (c.pc != 0x001C7D20u) [[unlikely]] return; }
L_001C7D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7D98; } }
L_001C7D28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C7D64; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 6268u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7D5Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0032(c, 22u, depth + 1u); else { c.pc = 0x001C8360u; return; } if (c.pc != 0x001C7D5Cu) [[unlikely]] return; }
L_001C7D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7D94; } }
L_001C7D64:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    set32(c.r[3], c.r[3].w[0] - 6272u);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7D94u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0032(c, 22u, depth + 1u); else { c.pc = 0x001C8360u; return; } if (c.pc != 0x001C7D94u) [[unlikely]] return; }
L_001C7D94:
    c.budget -= 1;
L_001C7D98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C7DB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 777u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C7DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7F90; } }
L_001C7DD0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 800u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7E48; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8679u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C7E30; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[3].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C7E08; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7E10; } }
L_001C7E08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C7F90; } }
L_001C7E10:
    st8((c.r[4].w[0] + 775u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 696u)));
    set32(c.r[3], 0u - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 696u), c.r[3].w[0]);  if (t) { goto L_001C7F90; } }
    c.budget -= 1;
L_001C7E30:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C7E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7F90; } }
    c.budget -= 1;
L_001C7E48:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 775u));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C7E68; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 696u), c.r[2].w[0]);  if (t) { goto L_001C7E80; } }
L_001C7E68:
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C7E80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7F90; } }
L_001C7E80:
    st8((c.r[4].w[0] + 775u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 753u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8679u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C7F18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C7ED8; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 5164u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7ED0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 768u, depth + 1u); else { c.pc = 0x001C7FA0u; return; } if (c.pc != 0x001C7ED0u) [[unlikely]] return; }
L_001C7ED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7F0C; } }
L_001C7ED8:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    set32(c.r[3], c.r[3].w[0] - 5168u);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7F0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 768u, depth + 1u); else { c.pc = 0x001C7FA0u; return; } if (c.pc != 0x001C7F0Cu) [[unlikely]] return; }
L_001C7F0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7F90; } }
    c.budget -= 1;
L_001C7F18:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C7F58; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 5164u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7F50u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0032(c, 22u, depth + 1u); else { c.pc = 0x001C8360u; return; } if (c.pc != 0x001C7F50u) [[unlikely]] return; }
L_001C7F50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7F8C; } }
L_001C7F58:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    set32(c.r[3], c.r[3].w[0] - 5168u);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7F8Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0032(c, 22u, depth + 1u); else { c.pc = 0x001C8360u; return; } if (c.pc != 0x001C7F8Cu) [[unlikely]] return; }
L_001C7F8C:
    c.budget -= 1;
L_001C7F90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C7FA0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 749u));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001C7FF0; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C7FF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0032(c, 21u, depth); } }
    c.budget -= 1;
L_001C7FF0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0032(c, 2u, depth); } }
    [[clang::musttail]] return unit_0032(c, 1u, depth);
}

}
