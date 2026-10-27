#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0030[4096] = {
    1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 0, 10, 11, 0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 18, 19, 0,
    0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0,
    30, 31, 32, 33, 0, 34, 35, 36, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0,
    0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0,
    54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 0,
    64, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74,
    0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84,
    0, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 100, 0, 101, 0, 0, 102, 0,
    0, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108,
    0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116,
    0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126,
    0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 133, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0,
    0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153,
    0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0,
    0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 174,
    0, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184,
    0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0,
    0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0,
    0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0,
    0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0,
    225, 0, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0,
    235, 0, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 244, 245, 0, 0,
    246, 0, 0, 247, 0, 0, 248, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 254, 0, 0, 0, 255, 0, 0, 256,
    0, 0, 257, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 262, 0, 263, 0, 264, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0,
    0, 272, 0, 0, 273, 0, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 283, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0,
    0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 296, 0,
    297, 0, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0,
    0, 307, 0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 315, 316, 0, 317, 0,
    318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 322, 0, 323, 0, 324, 0, 325, 0, 0, 326, 0, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 0,
    333, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 343,
    0, 0, 344, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 0, 351, 0, 0, 352, 0, 0, 353,
    0, 0, 354, 0, 0, 355, 0, 0, 356, 0, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 361, 0, 362, 0, 0, 0, 363, 0,
    0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 0, 368, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0,
    0, 375, 0, 0, 376, 0, 0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 384, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 0, 388, 0, 0, 389, 0, 0, 390,
    0, 391, 392, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 399, 0, 0, 0, 400, 0, 0, 401,
    0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 410, 0, 0, 0, 411,
    0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 421, 0,
    0, 0, 422, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 431,
    0, 432, 0, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 441,
    0, 0, 442, 0, 443, 0, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 451,
    0, 0, 452, 0, 0, 453, 0, 454, 0, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 461,
    0, 0, 462, 0, 0, 463, 0, 0, 464, 0, 465, 0, 0, 0, 466, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 471,
    0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 476, 0, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0, 480, 0, 0, 481, 0, 0,
    0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 486, 0, 487, 0, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 0, 491, 0, 0,
    492, 0, 0, 493, 0, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0, 497, 0, 0, 498, 0, 499, 0, 0, 0, 500, 0, 0, 501, 0, 0, 502,
    0, 0, 503, 0, 0, 504, 505, 0, 506, 0, 0, 0, 507, 0, 0, 508, 0, 509, 510, 0, 0, 511, 0, 0, 512, 0, 513, 0, 0, 0, 514, 0,
    0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 0, 523, 0, 0, 524, 0, 525,
    0, 0, 0, 526, 0, 0, 527, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 0, 531, 0, 0, 0, 532, 0, 0, 533, 0, 0, 534, 0, 0, 535,
    0, 0, 536, 0, 537, 0, 0, 0, 538, 0, 0, 539, 0, 0, 540, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 0, 544, 0, 0, 545, 0,
    0, 546, 0, 0, 547, 0, 0, 548, 0, 549, 0, 0, 0, 550, 0, 0, 551, 0, 0, 552, 0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 0, 0,
    556, 0, 0, 557, 0, 0, 558, 0, 0, 559, 0, 0, 560, 0, 561, 0, 0, 0, 562, 0, 0, 563, 0, 0, 564, 0, 565, 0, 566, 0, 0, 0,
    0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 571, 0, 572,
    0, 0, 573, 0, 0, 574, 0, 0, 0, 575, 0, 0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0, 0, 581, 0, 0, 582,
    0, 0, 583, 0, 0, 584, 0, 0, 585, 0, 586, 0, 0, 0, 587, 0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 0, 591, 0, 0, 0, 0, 592,
    0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 597, 0, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0, 601, 0, 0, 602, 0, 0,
    0, 0, 603, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 0, 607, 0, 608, 0, 0, 0, 609, 0, 0, 610, 0, 0, 611, 0, 0, 612, 0, 0,
    613, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 616, 0, 0, 617, 0, 0, 618, 0, 619, 0, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 0,
    623, 0, 0, 624, 0, 0, 0, 0, 625, 0, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 630, 0, 0, 0, 631, 0, 0, 632, 0, 0,
    633, 0, 0, 634, 0, 0, 635, 0, 0, 0, 0, 636, 637, 0, 638, 0, 0, 639, 0, 0, 640, 0, 0, 641, 0, 642, 0, 0, 0, 643, 0, 0,
    644, 0, 0, 645, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 649, 0, 0, 650, 0, 0, 651, 0, 652, 653, 0, 654, 0, 0, 0,
    655, 0, 0, 656, 0, 0, 657, 0, 0, 658, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 661, 0, 0, 662, 0, 0, 663, 0, 0, 664, 0, 665,
    0, 0, 0, 666, 0, 0, 667, 0, 0, 668, 0, 0, 669, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 673, 0, 0, 674, 0, 0,
    675, 0, 676, 0, 0, 0, 677, 0, 0, 678, 0, 0, 679, 0, 0, 680, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 683, 0, 0, 684, 0, 0,
    685, 0, 0, 686, 0, 687, 0, 0, 0, 688, 0, 0, 689, 0, 0, 690, 0, 0, 691, 0, 0, 692, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0,
    695, 0, 696, 0, 697, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 700, 0, 701, 0, 702, 0, 703, 0, 0, 704, 0, 0, 705, 0, 0, 0, 706, 0, 0, 707, 0, 0, 708, 0, 0, 709, 0, 0, 710, 0, 0,
    711, 0, 0, 0, 712, 0, 0, 713, 0, 0, 714, 0, 0, 715, 0, 0, 716, 0, 717, 0, 0, 0, 718, 0, 0, 719, 0, 0, 720, 0, 0, 721,
    0, 0, 722, 0, 0, 723, 0, 0, 0, 724, 0, 0, 725, 0, 0, 726, 0, 0, 727, 0, 0, 728, 0, 729, 0, 0, 0, 730, 0, 0, 731, 0,
    0, 732, 0, 0, 733, 0, 0, 734, 0, 0, 735, 0, 0, 0, 736, 0, 0, 737, 0, 0, 738, 0, 0, 739, 0, 0, 740, 0, 0, 0, 741, 0,
    0, 742, 0, 0, 743, 0, 0, 744, 0, 0, 745, 0, 0, 0, 0, 746, 0, 0, 747, 0, 0, 748, 0, 0, 749, 0, 0, 750, 0, 751, 0, 0,
    0, 752, 0, 0, 753, 0, 0, 754, 0, 0, 755, 0, 0, 756, 0, 0, 0, 0, 757, 0, 0, 758, 0, 0, 759, 0, 0, 760, 0, 0, 761, 0,
    762, 0, 0, 0, 763, 0, 0, 764, 0, 0, 765, 0, 0, 766, 0, 0, 767, 0, 0, 0, 0, 768, 0, 0, 769, 0, 0, 770, 0, 0, 771, 0,
    0, 772, 0, 773, 0, 0, 0, 774, 0, 0, 775, 0, 0, 776, 0, 0, 777, 0, 0, 778, 0, 0, 779, 0, 0, 0, 780, 0, 0, 781, 0, 0,
    782, 0, 0, 783, 0, 0, 784, 0, 785, 0, 0, 0, 786, 0, 0, 787, 0, 0, 788, 0, 0, 789, 0, 0, 790, 0, 0, 791, 0, 0, 0, 792,
    0, 0, 793, 0, 0, 794, 0, 795, 0, 796, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 799, 0, 800, 0, 801, 0, 802, 0, 0, 803, 0, 0, 804, 0, 0, 0, 805, 0, 0, 806, 0, 0, 807, 0, 0, 808, 0,
    0, 809, 0, 0, 810, 0, 0, 0, 811, 0, 0, 812, 0, 0, 813, 0, 0, 814, 0, 0, 815, 0, 816, 0, 0, 0, 817, 0, 0, 818, 0, 0,
    819, 0, 0, 820, 0, 0, 821, 0, 0, 0, 0, 822, 0, 0, 823, 0, 0, 824, 0, 0, 825, 0, 0, 826, 0, 827, 0, 0, 0, 828, 0, 0,
    829, 0, 0, 830, 0, 0, 831, 0, 0, 832, 0, 0, 0, 0, 833, 0, 0, 834, 0, 0, 835, 0, 0, 836, 0, 0, 837, 0, 838, 0, 0, 0,
    839, 0, 0, 840, 0, 0, 841, 0, 0, 842, 0, 0, 843, 0, 0, 0, 0, 844, 0, 0, 845, 0, 0, 846, 0, 0, 847, 0, 0, 848, 0, 849,
    0, 0, 0, 850, 0, 0, 851, 0, 0, 852, 0, 0, 853, 0, 0, 854, 0, 0, 855, 0, 0, 0, 856, 0, 0, 857, 0, 0, 858, 0, 859, 0,
    860, 0, 0, 0, 0, 0, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 0, 0, 0, 0, 863, 0, 864,
    0, 865, 0, 866, 0, 0, 867, 0, 0, 868, 0, 0, 0, 869, 0, 0, 870, 0, 0, 871, 0, 0, 872, 0, 0, 873, 0, 0, 874, 0, 0, 0,
    875, 0, 0, 876, 0, 0, 877, 0, 0, 878, 0, 0, 879, 0, 880, 0, 0, 0, 881, 0, 0, 882, 0, 0, 883, 0, 0, 884, 0, 0, 885, 0,
    0, 886, 0, 0, 0, 887, 0, 0, 888, 0, 0, 889, 0, 0, 890, 0, 0, 891, 0, 892, 0, 0, 0, 893, 0, 0, 894, 0, 0, 895, 0, 0,
    896, 0, 0, 897, 0, 0, 0, 0, 898, 0, 0, 899, 0, 0, 900, 0, 0, 901, 0, 0, 902, 0, 903, 0, 0, 0, 904, 0, 0, 905, 0, 0,
    906, 0, 0, 907, 0, 0, 908, 0, 0, 0, 0, 909, 0, 0, 910, 0, 0, 911, 0, 0, 912, 0, 0, 913, 0, 914, 0, 0, 0, 915, 0, 0,
    916, 0, 0, 917, 0, 0, 918, 0, 0, 919, 0, 0, 920, 0, 0, 0, 921, 0, 0, 922, 0, 0, 923, 0, 0, 924, 0, 0, 925, 0, 926, 0,
    0, 0, 927, 0, 0, 928, 0, 0, 929, 0, 0, 930, 0, 0, 931, 0, 0, 932, 0, 0, 0, 933, 0, 0, 934, 0, 0, 935, 0, 0, 936, 0,
    0, 937, 0, 0, 0, 938, 0, 0, 939, 0, 0, 940, 0, 941, 0, 942, 0, 0, 0, 0, 0, 0, 0, 0, 943, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 944, 0, 0, 0, 0, 0, 0, 0, 0, 0, 945, 0, 946, 0, 947, 0, 948, 0, 0, 949, 0, 0, 950, 0, 0, 0, 951, 0, 0,
    952, 0, 0, 953, 0, 0, 954, 0, 0, 955, 0, 0, 956, 0, 0, 0, 957, 0, 0, 958, 0, 0, 959, 0, 0, 960, 0, 0, 961, 0, 962, 0,
    0, 0, 963, 0, 0, 964, 0, 0, 965, 0, 0, 966, 0, 0, 967, 0, 0, 968, 0, 0, 0, 969, 0, 0, 970, 0, 0, 971, 0, 0, 972, 0,
    0, 973, 0, 974, 0, 0, 0, 975, 0, 0, 976, 0, 0, 977, 0, 978, 0, 979, 0, 0, 0, 0, 0, 0, 980, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 981, 0, 0, 0, 0, 0, 0, 0, 0, 0, 982, 0, 983, 0, 984, 0, 985, 0, 0, 986, 0, 0, 987, 0, 0, 0, 988, 0, 0,
    989, 0, 0, 990, 0, 0, 991, 0, 0, 992, 0, 0, 993, 0, 0, 0, 994, 0, 0, 995, 0, 0, 996, 0, 0, 997, 0, 0, 998, 0, 999, 0,
    0, 0, 1000, 0, 0, 1001, 0, 0, 1002, 0, 0, 1003, 0, 0, 1004, 0, 0, 0, 0, 1005, 0, 0, 1006, 0, 0, 1007, 0, 0, 1008, 0, 0, 1009,
    0, 1010, 0, 0, 0, 1011, 0, 0, 1012, 0, 0, 1013, 0, 0, 1014, 0, 0, 1015, 0, 0, 0, 0, 1016, 0, 0, 1017, 0, 0, 1018, 0, 1019, 0,
    1020, 0, 0, 0, 0, 0, 0, 0, 1021, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1022, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1023, 0, 1024,
    0, 1025, 0, 1026, 0, 0, 1027, 0, 0, 1028, 0, 0, 0, 1029, 0, 0, 1030, 0, 0, 1031, 0, 0, 1032, 0, 0, 1033, 0, 0, 1034, 0, 0, 0,
    1035, 0, 0, 1036, 0, 0, 1037, 0, 0, 1038, 0, 0, 1039, 0, 1040, 0, 0, 0, 1041, 0, 0, 1042, 0, 0, 1043, 0, 0, 1044, 0, 0, 1045, 0,
    0, 1046, 0, 0, 0, 1047, 0, 0, 1048, 0, 0, 1049, 0, 0, 1050, 0, 0, 1051, 0, 1052, 0, 0, 0, 1053, 0, 0, 1054, 0, 0, 1055, 0, 1056,
    0, 1057, 0, 0, 0, 0, 0, 0, 1058, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1059, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1060, 0, 1061,
    0, 1062, 0, 1063, 0, 0, 1064, 0, 0, 1065, 0, 0, 0, 1066, 0, 0, 1067, 0, 0, 1068, 0, 0, 1069, 0, 0, 1070, 0, 0, 1071, 0, 0, 0,
    1072, 0, 0, 1073, 0, 0, 1074, 0, 1075, 0, 1076, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1077, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1078,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1079, 0, 1080, 0, 1081, 0, 1082, 0, 0, 1083, 0, 0, 1084, 0, 0, 0, 1085, 0, 0, 1086, 0, 0, 1087,
    0, 0, 1088, 0, 0, 1089, 0, 0, 1090, 0, 0, 0, 1091, 0, 0, 1092, 0, 0, 1093, 0, 1094, 0, 1095, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1096, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1098, 0, 1099, 0, 1100, 0, 1101, 0, 0, 1102, 0,
    0, 1103, 0, 0, 0, 1104, 0, 0, 1105, 0, 0, 1106, 0, 0, 1107, 0, 0, 1108, 0, 0, 1109, 0, 0, 0, 1110, 0, 0, 1111, 0, 0, 1112, 0,
    0, 1113, 0, 0, 1114, 0, 1115, 0, 0, 0, 1116, 0, 0, 1117, 0, 0, 1118, 0, 0, 1119, 0, 0, 1120, 0, 0, 1121, 0, 0, 0, 1122, 0, 0,
    1123, 0, 0, 1124, 0, 0, 1125, 0, 0, 1126, 0, 1127, 0, 0, 0, 1128, 0, 0, 1129, 0, 0, 1130, 0, 0, 1131, 0, 0, 1132, 0, 0, 1133, 0,
    0, 0, 1134, 0, 0, 1135, 0, 0, 1136, 0, 0, 1137, 0, 0, 1138, 0, 1139, 0, 0, 0, 1140, 0, 0, 1141, 0, 0, 1142, 0, 0, 1143, 0, 0,
    1144, 0, 0, 1145, 0, 0, 0, 1146, 0, 0, 1147, 0, 0, 1148, 0, 0, 1149, 0, 0, 1150, 0, 1151, 0, 0, 0, 1152, 0, 0, 1153, 0, 0, 1154,
    0, 0, 1155, 0, 0, 1156, 0, 0, 1157, 0, 0, 0, 1158, 0, 0, 1159, 0, 0, 1160, 0, 0, 1161, 0, 0, 1162, 0, 1163, 0, 0, 0, 1164, 0,
    0, 1165, 0, 0, 1166, 0, 1167, 0, 1168, 0, 0, 0, 0, 0, 0, 0, 1169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1170, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1171, 0, 1172, 0, 1173, 0, 1174, 0, 0, 1175, 0, 0, 1176, 0, 0, 0, 1177, 0, 0, 1178, 0, 0, 1179, 0, 0, 1180, 0,
    0, 1181, 0, 0, 1182, 0, 0, 0, 1183, 0, 0, 1184, 0, 0, 1185, 0, 0, 1186, 0, 0, 1187, 0, 1188, 0, 0, 0, 1189, 0, 0, 1190, 0, 0,
    1191, 0, 0, 1192, 0, 0, 1193, 0, 0, 1194, 0, 0, 0, 1195, 0, 0, 1196, 0, 0, 1197, 0, 0, 1198, 0, 0, 1199, 0, 1200, 0, 0, 0, 1201,
    0, 0, 1202, 0, 0, 1203, 0, 0, 1204, 0, 0, 1205, 0, 0, 1206, 0, 0, 0, 1207, 0, 0, 1208, 0, 0, 1209, 0, 0, 1210, 0, 0, 1211, 0,
    1212, 0, 0, 0, 1213, 0, 0, 1214, 0, 0, 1215, 0, 0, 1216, 0, 0, 1217, 0, 0, 1218, 0, 0, 0, 1219, 0, 0, 1220, 0, 0, 1221, 0, 0,
    1222, 0, 0, 1223, 0, 1224, 0, 0, 0, 1225, 0, 0, 1226, 0, 0, 1227, 0, 0, 1228, 0, 0, 1229, 0, 0, 1230, 0, 0, 0, 1231, 0, 0, 1232,
    0, 0, 1233, 0, 1234, 0, 1235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1237, 0, 0, 0, 0,
};

void unit_0030(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001C0000;
    case 2u: goto L_001C0004;
    case 3u: goto L_001C0008;
    case 4u: goto L_001C000C;
    case 5u: goto L_001C0014;
    case 6u: goto L_001C0018;
    case 7u: goto L_001C001C;
    case 8u: goto L_001C0020;
    case 9u: goto L_001C0024;
    case 10u: goto L_001C002C;
    case 11u: goto L_001C0030;
    case 12u: goto L_001C0038;
    case 13u: goto L_001C0040;
    case 14u: goto L_001C0048;
    case 15u: goto L_001C0054;
    case 16u: goto L_001C0060;
    case 17u: goto L_001C006C;
    case 18u: goto L_001C0074;
    case 19u: goto L_001C0078;
    case 20u: goto L_001C0088;
    case 21u: goto L_001C0094;
    case 22u: goto L_001C00A0;
    case 23u: goto L_001C00AC;
    case 24u: goto L_001C00B8;
    case 25u: goto L_001C00C4;
    case 26u: goto L_001C00D4;
    case 27u: goto L_001C00E0;
    case 28u: goto L_001C00EC;
    case 29u: goto L_001C00F8;
    case 30u: goto L_001C0100;
    case 31u: goto L_001C0104;
    case 32u: goto L_001C0108;
    case 33u: goto L_001C010C;
    case 34u: goto L_001C0114;
    case 35u: goto L_001C0118;
    case 36u: goto L_001C011C;
    case 37u: goto L_001C0128;
    case 38u: goto L_001C0134;
    case 39u: goto L_001C0140;
    case 40u: goto L_001C014C;
    case 41u: goto L_001C0160;
    case 42u: goto L_001C016C;
    case 43u: goto L_001C0178;
    case 44u: goto L_001C0184;
    case 45u: goto L_001C0190;
    case 46u: goto L_001C0198;
    case 47u: goto L_001C01A8;
    case 48u: goto L_001C01B4;
    case 49u: goto L_001C01C0;
    case 50u: goto L_001C01CC;
    case 51u: goto L_001C01D8;
    case 52u: goto L_001C01E4;
    case 53u: goto L_001C01F4;
    case 54u: goto L_001C0200;
    case 55u: goto L_001C020C;
    case 56u: goto L_001C0218;
    case 57u: goto L_001C0224;
    case 58u: goto L_001C0234;
    case 59u: goto L_001C0240;
    case 60u: goto L_001C024C;
    case 61u: goto L_001C0258;
    case 62u: goto L_001C0264;
    case 63u: goto L_001C0270;
    case 64u: goto L_001C0280;
    case 65u: goto L_001C028C;
    case 66u: goto L_001C0298;
    case 67u: goto L_001C02A4;
    case 68u: goto L_001C02B0;
    case 69u: goto L_001C02C0;
    case 70u: goto L_001C02CC;
    case 71u: goto L_001C02D8;
    case 72u: goto L_001C02E4;
    case 73u: goto L_001C02F0;
    case 74u: goto L_001C02FC;
    case 75u: goto L_001C030C;
    case 76u: goto L_001C0318;
    case 77u: goto L_001C0324;
    case 78u: goto L_001C0330;
    case 79u: goto L_001C033C;
    case 80u: goto L_001C034C;
    case 81u: goto L_001C0358;
    case 82u: goto L_001C0364;
    case 83u: goto L_001C0370;
    case 84u: goto L_001C037C;
    case 85u: goto L_001C0388;
    case 86u: goto L_001C0398;
    case 87u: goto L_001C03A4;
    case 88u: goto L_001C03B0;
    case 89u: goto L_001C03B8;
    case 90u: goto L_001C03C8;
    case 91u: goto L_001C03D0;
    case 92u: goto L_001C03F0;
    case 93u: goto L_001C0400;
    case 94u: goto L_001C041C;
    case 95u: goto L_001C0430;
    case 96u: goto L_001C0438;
    case 97u: goto L_001C0440;
    case 98u: goto L_001C0450;
    case 99u: goto L_001C0460;
    case 100u: goto L_001C0464;
    case 101u: goto L_001C046C;
    case 102u: goto L_001C0478;
    case 103u: goto L_001C0490;
    case 104u: goto L_001C049C;
    case 105u: goto L_001C04A4;
    case 106u: goto L_001C04AC;
    case 107u: goto L_001C04E0;
    case 108u: goto L_001C04FC;
    case 109u: goto L_001C0514;
    case 110u: goto L_001C052C;
    case 111u: goto L_001C0538;
    case 112u: goto L_001C0540;
    case 113u: goto L_001C0548;
    case 114u: goto L_001C055C;
    case 115u: goto L_001C0570;
    case 116u: goto L_001C057C;
    case 117u: goto L_001C0588;
    case 118u: goto L_001C0594;
    case 119u: goto L_001C05A0;
    case 120u: goto L_001C05B0;
    case 121u: goto L_001C05BC;
    case 122u: goto L_001C05C8;
    case 123u: goto L_001C05D4;
    case 124u: goto L_001C05E0;
    case 125u: goto L_001C05EC;
    case 126u: goto L_001C05FC;
    case 127u: goto L_001C0608;
    case 128u: goto L_001C0614;
    case 129u: goto L_001C0620;
    case 130u: goto L_001C062C;
    case 131u: goto L_001C0634;
    case 132u: goto L_001C0644;
    case 133u: goto L_001C064C;
    case 134u: goto L_001C0650;
    case 135u: goto L_001C065C;
    case 136u: goto L_001C0668;
    case 137u: goto L_001C0674;
    case 138u: goto L_001C0688;
    case 139u: goto L_001C0694;
    case 140u: goto L_001C06A0;
    case 141u: goto L_001C06A8;
    case 142u: goto L_001C06B0;
    case 143u: goto L_001C06D0;
    case 144u: goto L_001C06FC;
    case 145u: goto L_001C0724;
    case 146u: goto L_001C072C;
    case 147u: goto L_001C0734;
    case 148u: goto L_001C073C;
    case 149u: goto L_001C0748;
    case 150u: goto L_001C0754;
    case 151u: goto L_001C0764;
    case 152u: goto L_001C0770;
    case 153u: goto L_001C077C;
    case 154u: goto L_001C0788;
    case 155u: goto L_001C0794;
    case 156u: goto L_001C07A0;
    case 157u: goto L_001C07B0;
    case 158u: goto L_001C07BC;
    case 159u: goto L_001C07C8;
    case 160u: goto L_001C07D4;
    case 161u: goto L_001C07E0;
    case 162u: goto L_001C07E8;
    case 163u: goto L_001C07F8;
    case 164u: goto L_001C0804;
    case 165u: goto L_001C0810;
    case 166u: goto L_001C081C;
    case 167u: goto L_001C0828;
    case 168u: goto L_001C0834;
    case 169u: goto L_001C0844;
    case 170u: goto L_001C0850;
    case 171u: goto L_001C085C;
    case 172u: goto L_001C0868;
    case 173u: goto L_001C0874;
    case 174u: goto L_001C087C;
    case 175u: goto L_001C088C;
    case 176u: goto L_001C0898;
    case 177u: goto L_001C08A4;
    case 178u: goto L_001C08B0;
    case 179u: goto L_001C08BC;
    case 180u: goto L_001C08C8;
    case 181u: goto L_001C08D8;
    case 182u: goto L_001C08E4;
    case 183u: goto L_001C08F0;
    case 184u: goto L_001C08FC;
    case 185u: goto L_001C0908;
    case 186u: goto L_001C0910;
    case 187u: goto L_001C0920;
    case 188u: goto L_001C092C;
    case 189u: goto L_001C0938;
    case 190u: goto L_001C0944;
    case 191u: goto L_001C0950;
    case 192u: goto L_001C095C;
    case 193u: goto L_001C096C;
    case 194u: goto L_001C0978;
    case 195u: goto L_001C0984;
    case 196u: goto L_001C0990;
    case 197u: goto L_001C099C;
    case 198u: goto L_001C09AC;
    case 199u: goto L_001C09B8;
    case 200u: goto L_001C09C4;
    case 201u: goto L_001C09D0;
    case 202u: goto L_001C09DC;
    case 203u: goto L_001C09E8;
    case 204u: goto L_001C09F8;
    case 205u: goto L_001C0A04;
    case 206u: goto L_001C0A10;
    case 207u: goto L_001C0A1C;
    case 208u: goto L_001C0A28;
    case 209u: goto L_001C0A38;
    case 210u: goto L_001C0A44;
    case 211u: goto L_001C0A50;
    case 212u: goto L_001C0A5C;
    case 213u: goto L_001C0A68;
    case 214u: goto L_001C0A74;
    case 215u: goto L_001C0A84;
    case 216u: goto L_001C0A90;
    case 217u: goto L_001C0A9C;
    case 218u: goto L_001C0AA8;
    case 219u: goto L_001C0AB4;
    case 220u: goto L_001C0AC4;
    case 221u: goto L_001C0AD0;
    case 222u: goto L_001C0ADC;
    case 223u: goto L_001C0AE8;
    case 224u: goto L_001C0AF4;
    case 225u: goto L_001C0B00;
    case 226u: goto L_001C0B10;
    case 227u: goto L_001C0B1C;
    case 228u: goto L_001C0B28;
    case 229u: goto L_001C0B34;
    case 230u: goto L_001C0B40;
    case 231u: goto L_001C0B50;
    case 232u: goto L_001C0B5C;
    case 233u: goto L_001C0B68;
    case 234u: goto L_001C0B74;
    case 235u: goto L_001C0B80;
    case 236u: goto L_001C0B8C;
    case 237u: goto L_001C0B9C;
    case 238u: goto L_001C0BA8;
    case 239u: goto L_001C0BB4;
    case 240u: goto L_001C0BC0;
    case 241u: goto L_001C0BCC;
    case 242u: goto L_001C0BDC;
    case 243u: goto L_001C0BE8;
    case 244u: goto L_001C0BF0;
    case 245u: goto L_001C0BF4;
    case 246u: goto L_001C0C00;
    case 247u: goto L_001C0C0C;
    case 248u: goto L_001C0C18;
    case 249u: goto L_001C0C28;
    case 250u: goto L_001C0C34;
    case 251u: goto L_001C0C40;
    case 252u: goto L_001C0C4C;
    case 253u: goto L_001C0C58;
    case 254u: goto L_001C0C60;
    case 255u: goto L_001C0C70;
    case 256u: goto L_001C0C7C;
    case 257u: goto L_001C0C88;
    case 258u: goto L_001C0C90;
    case 259u: goto L_001C0C98;
    case 260u: goto L_001C0CC0;
    case 261u: goto L_001C0CEC;
    case 262u: goto L_001C0D14;
    case 263u: goto L_001C0D1C;
    case 264u: goto L_001C0D24;
    case 265u: goto L_001C0D2C;
    case 266u: goto L_001C0D38;
    case 267u: goto L_001C0D44;
    case 268u: goto L_001C0D54;
    case 269u: goto L_001C0D60;
    case 270u: goto L_001C0D6C;
    case 271u: goto L_001C0D78;
    case 272u: goto L_001C0D84;
    case 273u: goto L_001C0D90;
    case 274u: goto L_001C0DA0;
    case 275u: goto L_001C0DAC;
    case 276u: goto L_001C0DB8;
    case 277u: goto L_001C0DC0;
    case 278u: goto L_001C0DC8;
    case 279u: goto L_001C0DF0;
    case 280u: goto L_001C0E1C;
    case 281u: goto L_001C0E44;
    case 282u: goto L_001C0E4C;
    case 283u: goto L_001C0E54;
    case 284u: goto L_001C0E5C;
    case 285u: goto L_001C0E68;
    case 286u: goto L_001C0E74;
    case 287u: goto L_001C0E84;
    case 288u: goto L_001C0E90;
    case 289u: goto L_001C0E9C;
    case 290u: goto L_001C0EA8;
    case 291u: goto L_001C0EB4;
    case 292u: goto L_001C0EC8;
    case 293u: goto L_001C0ED4;
    case 294u: goto L_001C0EE0;
    case 295u: goto L_001C0EEC;
    case 296u: goto L_001C0EF8;
    case 297u: goto L_001C0F00;
    case 298u: goto L_001C0F10;
    case 299u: goto L_001C0F1C;
    case 300u: goto L_001C0F28;
    case 301u: goto L_001C0F34;
    case 302u: goto L_001C0F40;
    case 303u: goto L_001C0F54;
    case 304u: goto L_001C0F60;
    case 305u: goto L_001C0F6C;
    case 306u: goto L_001C0F78;
    case 307u: goto L_001C0F84;
    case 308u: goto L_001C0F8C;
    case 309u: goto L_001C0F9C;
    case 310u: goto L_001C0FA8;
    case 311u: goto L_001C0FB4;
    case 312u: goto L_001C0FC0;
    case 313u: goto L_001C0FCC;
    case 314u: goto L_001C0FE0;
    case 315u: goto L_001C0FEC;
    case 316u: goto L_001C0FF0;
    case 317u: goto L_001C0FF8;
    case 318u: goto L_001C1000;
    case 319u: goto L_001C1008;
    case 320u: goto L_001C1030;
    case 321u: goto L_001C105C;
    case 322u: goto L_001C1084;
    case 323u: goto L_001C108C;
    case 324u: goto L_001C1094;
    case 325u: goto L_001C109C;
    case 326u: goto L_001C10A8;
    case 327u: goto L_001C10B4;
    case 328u: goto L_001C10C4;
    case 329u: goto L_001C10D0;
    case 330u: goto L_001C10DC;
    case 331u: goto L_001C10E8;
    case 332u: goto L_001C10F4;
    case 333u: goto L_001C1100;
    case 334u: goto L_001C1110;
    case 335u: goto L_001C111C;
    case 336u: goto L_001C1128;
    case 337u: goto L_001C1134;
    case 338u: goto L_001C1140;
    case 339u: goto L_001C1148;
    case 340u: goto L_001C1158;
    case 341u: goto L_001C1164;
    case 342u: goto L_001C1170;
    case 343u: goto L_001C117C;
    case 344u: goto L_001C1188;
    case 345u: goto L_001C1194;
    case 346u: goto L_001C11A4;
    case 347u: goto L_001C11B0;
    case 348u: goto L_001C11BC;
    case 349u: goto L_001C11C8;
    case 350u: goto L_001C11D4;
    case 351u: goto L_001C11E4;
    case 352u: goto L_001C11F0;
    case 353u: goto L_001C11FC;
    case 354u: goto L_001C1208;
    case 355u: goto L_001C1214;
    case 356u: goto L_001C1220;
    case 357u: goto L_001C1230;
    case 358u: goto L_001C123C;
    case 359u: goto L_001C1248;
    case 360u: goto L_001C1254;
    case 361u: goto L_001C1260;
    case 362u: goto L_001C1268;
    case 363u: goto L_001C1278;
    case 364u: goto L_001C1284;
    case 365u: goto L_001C1290;
    case 366u: goto L_001C129C;
    case 367u: goto L_001C12A8;
    case 368u: goto L_001C12B4;
    case 369u: goto L_001C12B8;
    case 370u: goto L_001C12C4;
    case 371u: goto L_001C12D0;
    case 372u: goto L_001C12DC;
    case 373u: goto L_001C12E8;
    case 374u: goto L_001C12F4;
    case 375u: goto L_001C1304;
    case 376u: goto L_001C1310;
    case 377u: goto L_001C131C;
    case 378u: goto L_001C1324;
    case 379u: goto L_001C132C;
    case 380u: goto L_001C1350;
    case 381u: goto L_001C137C;
    case 382u: goto L_001C13A4;
    case 383u: goto L_001C13AC;
    case 384u: goto L_001C13B4;
    case 385u: goto L_001C13BC;
    case 386u: goto L_001C13C8;
    case 387u: goto L_001C13D4;
    case 388u: goto L_001C13E4;
    case 389u: goto L_001C13F0;
    case 390u: goto L_001C13FC;
    case 391u: goto L_001C1404;
    case 392u: goto L_001C1408;
    case 393u: goto L_001C1414;
    case 394u: goto L_001C1428;
    case 395u: goto L_001C1434;
    case 396u: goto L_001C1440;
    case 397u: goto L_001C144C;
    case 398u: goto L_001C1458;
    case 399u: goto L_001C1460;
    case 400u: goto L_001C1470;
    case 401u: goto L_001C147C;
    case 402u: goto L_001C1488;
    case 403u: goto L_001C1494;
    case 404u: goto L_001C14A0;
    case 405u: goto L_001C14B4;
    case 406u: goto L_001C14C0;
    case 407u: goto L_001C14CC;
    case 408u: goto L_001C14D8;
    case 409u: goto L_001C14E4;
    case 410u: goto L_001C14EC;
    case 411u: goto L_001C14FC;
    case 412u: goto L_001C1508;
    case 413u: goto L_001C1514;
    case 414u: goto L_001C1520;
    case 415u: goto L_001C152C;
    case 416u: goto L_001C1540;
    case 417u: goto L_001C154C;
    case 418u: goto L_001C1558;
    case 419u: goto L_001C1564;
    case 420u: goto L_001C1570;
    case 421u: goto L_001C1578;
    case 422u: goto L_001C1588;
    case 423u: goto L_001C1594;
    case 424u: goto L_001C15A0;
    case 425u: goto L_001C15AC;
    case 426u: goto L_001C15B8;
    case 427u: goto L_001C15CC;
    case 428u: goto L_001C15D8;
    case 429u: goto L_001C15E4;
    case 430u: goto L_001C15F0;
    case 431u: goto L_001C15FC;
    case 432u: goto L_001C1604;
    case 433u: goto L_001C1614;
    case 434u: goto L_001C1620;
    case 435u: goto L_001C162C;
    case 436u: goto L_001C1638;
    case 437u: goto L_001C1644;
    case 438u: goto L_001C1658;
    case 439u: goto L_001C1664;
    case 440u: goto L_001C1670;
    case 441u: goto L_001C167C;
    case 442u: goto L_001C1688;
    case 443u: goto L_001C1690;
    case 444u: goto L_001C16A0;
    case 445u: goto L_001C16AC;
    case 446u: goto L_001C16B8;
    case 447u: goto L_001C16C4;
    case 448u: goto L_001C16D0;
    case 449u: goto L_001C16E4;
    case 450u: goto L_001C16F0;
    case 451u: goto L_001C16FC;
    case 452u: goto L_001C1708;
    case 453u: goto L_001C1714;
    case 454u: goto L_001C171C;
    case 455u: goto L_001C172C;
    case 456u: goto L_001C1738;
    case 457u: goto L_001C1744;
    case 458u: goto L_001C1750;
    case 459u: goto L_001C175C;
    case 460u: goto L_001C1770;
    case 461u: goto L_001C177C;
    case 462u: goto L_001C1788;
    case 463u: goto L_001C1794;
    case 464u: goto L_001C17A0;
    case 465u: goto L_001C17A8;
    case 466u: goto L_001C17B8;
    case 467u: goto L_001C17C4;
    case 468u: goto L_001C17D0;
    case 469u: goto L_001C17DC;
    case 470u: goto L_001C17E8;
    case 471u: goto L_001C17FC;
    case 472u: goto L_001C1808;
    case 473u: goto L_001C1814;
    case 474u: goto L_001C1820;
    case 475u: goto L_001C182C;
    case 476u: goto L_001C1834;
    case 477u: goto L_001C1844;
    case 478u: goto L_001C1850;
    case 479u: goto L_001C185C;
    case 480u: goto L_001C1868;
    case 481u: goto L_001C1874;
    case 482u: goto L_001C1888;
    case 483u: goto L_001C1894;
    case 484u: goto L_001C18A0;
    case 485u: goto L_001C18AC;
    case 486u: goto L_001C18B8;
    case 487u: goto L_001C18C0;
    case 488u: goto L_001C18D0;
    case 489u: goto L_001C18DC;
    case 490u: goto L_001C18E8;
    case 491u: goto L_001C18F4;
    case 492u: goto L_001C1900;
    case 493u: goto L_001C190C;
    case 494u: goto L_001C191C;
    case 495u: goto L_001C1928;
    case 496u: goto L_001C1934;
    case 497u: goto L_001C1940;
    case 498u: goto L_001C194C;
    case 499u: goto L_001C1954;
    case 500u: goto L_001C1964;
    case 501u: goto L_001C1970;
    case 502u: goto L_001C197C;
    case 503u: goto L_001C1988;
    case 504u: goto L_001C1994;
    case 505u: goto L_001C1998;
    case 506u: goto L_001C19A0;
    case 507u: goto L_001C19B0;
    case 508u: goto L_001C19BC;
    case 509u: goto L_001C19C4;
    case 510u: goto L_001C19C8;
    case 511u: goto L_001C19D4;
    case 512u: goto L_001C19E0;
    case 513u: goto L_001C19E8;
    case 514u: goto L_001C19F8;
    case 515u: goto L_001C1A04;
    case 516u: goto L_001C1A10;
    case 517u: goto L_001C1A1C;
    case 518u: goto L_001C1A28;
    case 519u: goto L_001C1A34;
    case 520u: goto L_001C1A44;
    case 521u: goto L_001C1A50;
    case 522u: goto L_001C1A5C;
    case 523u: goto L_001C1A68;
    case 524u: goto L_001C1A74;
    case 525u: goto L_001C1A7C;
    case 526u: goto L_001C1A8C;
    case 527u: goto L_001C1A98;
    case 528u: goto L_001C1AA4;
    case 529u: goto L_001C1AB0;
    case 530u: goto L_001C1ABC;
    case 531u: goto L_001C1AC8;
    case 532u: goto L_001C1AD8;
    case 533u: goto L_001C1AE4;
    case 534u: goto L_001C1AF0;
    case 535u: goto L_001C1AFC;
    case 536u: goto L_001C1B08;
    case 537u: goto L_001C1B10;
    case 538u: goto L_001C1B20;
    case 539u: goto L_001C1B2C;
    case 540u: goto L_001C1B38;
    case 541u: goto L_001C1B44;
    case 542u: goto L_001C1B50;
    case 543u: goto L_001C1B5C;
    case 544u: goto L_001C1B6C;
    case 545u: goto L_001C1B78;
    case 546u: goto L_001C1B84;
    case 547u: goto L_001C1B90;
    case 548u: goto L_001C1B9C;
    case 549u: goto L_001C1BA4;
    case 550u: goto L_001C1BB4;
    case 551u: goto L_001C1BC0;
    case 552u: goto L_001C1BCC;
    case 553u: goto L_001C1BD8;
    case 554u: goto L_001C1BE4;
    case 555u: goto L_001C1BF0;
    case 556u: goto L_001C1C00;
    case 557u: goto L_001C1C0C;
    case 558u: goto L_001C1C18;
    case 559u: goto L_001C1C24;
    case 560u: goto L_001C1C30;
    case 561u: goto L_001C1C38;
    case 562u: goto L_001C1C48;
    case 563u: goto L_001C1C54;
    case 564u: goto L_001C1C60;
    case 565u: goto L_001C1C68;
    case 566u: goto L_001C1C70;
    case 567u: goto L_001C1C90;
    case 568u: goto L_001C1CBC;
    case 569u: goto L_001C1CE4;
    case 570u: goto L_001C1CEC;
    case 571u: goto L_001C1CF4;
    case 572u: goto L_001C1CFC;
    case 573u: goto L_001C1D08;
    case 574u: goto L_001C1D14;
    case 575u: goto L_001C1D24;
    case 576u: goto L_001C1D30;
    case 577u: goto L_001C1D3C;
    case 578u: goto L_001C1D48;
    case 579u: goto L_001C1D54;
    case 580u: goto L_001C1D60;
    case 581u: goto L_001C1D70;
    case 582u: goto L_001C1D7C;
    case 583u: goto L_001C1D88;
    case 584u: goto L_001C1D94;
    case 585u: goto L_001C1DA0;
    case 586u: goto L_001C1DA8;
    case 587u: goto L_001C1DB8;
    case 588u: goto L_001C1DC4;
    case 589u: goto L_001C1DD0;
    case 590u: goto L_001C1DDC;
    case 591u: goto L_001C1DE8;
    case 592u: goto L_001C1DFC;
    case 593u: goto L_001C1E08;
    case 594u: goto L_001C1E14;
    case 595u: goto L_001C1E20;
    case 596u: goto L_001C1E2C;
    case 597u: goto L_001C1E34;
    case 598u: goto L_001C1E44;
    case 599u: goto L_001C1E50;
    case 600u: goto L_001C1E5C;
    case 601u: goto L_001C1E68;
    case 602u: goto L_001C1E74;
    case 603u: goto L_001C1E88;
    case 604u: goto L_001C1E94;
    case 605u: goto L_001C1EA0;
    case 606u: goto L_001C1EAC;
    case 607u: goto L_001C1EB8;
    case 608u: goto L_001C1EC0;
    case 609u: goto L_001C1ED0;
    case 610u: goto L_001C1EDC;
    case 611u: goto L_001C1EE8;
    case 612u: goto L_001C1EF4;
    case 613u: goto L_001C1F00;
    case 614u: goto L_001C1F14;
    case 615u: goto L_001C1F20;
    case 616u: goto L_001C1F2C;
    case 617u: goto L_001C1F38;
    case 618u: goto L_001C1F44;
    case 619u: goto L_001C1F4C;
    case 620u: goto L_001C1F5C;
    case 621u: goto L_001C1F68;
    case 622u: goto L_001C1F74;
    case 623u: goto L_001C1F80;
    case 624u: goto L_001C1F8C;
    case 625u: goto L_001C1FA0;
    case 626u: goto L_001C1FAC;
    case 627u: goto L_001C1FB8;
    case 628u: goto L_001C1FC4;
    case 629u: goto L_001C1FD0;
    case 630u: goto L_001C1FD8;
    case 631u: goto L_001C1FE8;
    case 632u: goto L_001C1FF4;
    case 633u: goto L_001C2000;
    case 634u: goto L_001C200C;
    case 635u: goto L_001C2018;
    case 636u: goto L_001C202C;
    case 637u: goto L_001C2030;
    case 638u: goto L_001C2038;
    case 639u: goto L_001C2044;
    case 640u: goto L_001C2050;
    case 641u: goto L_001C205C;
    case 642u: goto L_001C2064;
    case 643u: goto L_001C2074;
    case 644u: goto L_001C2080;
    case 645u: goto L_001C208C;
    case 646u: goto L_001C2098;
    case 647u: goto L_001C20A4;
    case 648u: goto L_001C20B8;
    case 649u: goto L_001C20C4;
    case 650u: goto L_001C20D0;
    case 651u: goto L_001C20DC;
    case 652u: goto L_001C20E4;
    case 653u: goto L_001C20E8;
    case 654u: goto L_001C20F0;
    case 655u: goto L_001C2100;
    case 656u: goto L_001C210C;
    case 657u: goto L_001C2118;
    case 658u: goto L_001C2124;
    case 659u: goto L_001C2130;
    case 660u: goto L_001C2144;
    case 661u: goto L_001C2150;
    case 662u: goto L_001C215C;
    case 663u: goto L_001C2168;
    case 664u: goto L_001C2174;
    case 665u: goto L_001C217C;
    case 666u: goto L_001C218C;
    case 667u: goto L_001C2198;
    case 668u: goto L_001C21A4;
    case 669u: goto L_001C21B0;
    case 670u: goto L_001C21BC;
    case 671u: goto L_001C21D0;
    case 672u: goto L_001C21DC;
    case 673u: goto L_001C21E8;
    case 674u: goto L_001C21F4;
    case 675u: goto L_001C2200;
    case 676u: goto L_001C2208;
    case 677u: goto L_001C2218;
    case 678u: goto L_001C2224;
    case 679u: goto L_001C2230;
    case 680u: goto L_001C223C;
    case 681u: goto L_001C2248;
    case 682u: goto L_001C225C;
    case 683u: goto L_001C2268;
    case 684u: goto L_001C2274;
    case 685u: goto L_001C2280;
    case 686u: goto L_001C228C;
    case 687u: goto L_001C2294;
    case 688u: goto L_001C22A4;
    case 689u: goto L_001C22B0;
    case 690u: goto L_001C22BC;
    case 691u: goto L_001C22C8;
    case 692u: goto L_001C22D4;
    case 693u: goto L_001C22E8;
    case 694u: goto L_001C22F4;
    case 695u: goto L_001C2300;
    case 696u: goto L_001C2308;
    case 697u: goto L_001C2310;
    case 698u: goto L_001C2330;
    case 699u: goto L_001C235C;
    case 700u: goto L_001C2384;
    case 701u: goto L_001C238C;
    case 702u: goto L_001C2394;
    case 703u: goto L_001C239C;
    case 704u: goto L_001C23A8;
    case 705u: goto L_001C23B4;
    case 706u: goto L_001C23C4;
    case 707u: goto L_001C23D0;
    case 708u: goto L_001C23DC;
    case 709u: goto L_001C23E8;
    case 710u: goto L_001C23F4;
    case 711u: goto L_001C2400;
    case 712u: goto L_001C2410;
    case 713u: goto L_001C241C;
    case 714u: goto L_001C2428;
    case 715u: goto L_001C2434;
    case 716u: goto L_001C2440;
    case 717u: goto L_001C2448;
    case 718u: goto L_001C2458;
    case 719u: goto L_001C2464;
    case 720u: goto L_001C2470;
    case 721u: goto L_001C247C;
    case 722u: goto L_001C2488;
    case 723u: goto L_001C2494;
    case 724u: goto L_001C24A4;
    case 725u: goto L_001C24B0;
    case 726u: goto L_001C24BC;
    case 727u: goto L_001C24C8;
    case 728u: goto L_001C24D4;
    case 729u: goto L_001C24DC;
    case 730u: goto L_001C24EC;
    case 731u: goto L_001C24F8;
    case 732u: goto L_001C2504;
    case 733u: goto L_001C2510;
    case 734u: goto L_001C251C;
    case 735u: goto L_001C2528;
    case 736u: goto L_001C2538;
    case 737u: goto L_001C2544;
    case 738u: goto L_001C2550;
    case 739u: goto L_001C255C;
    case 740u: goto L_001C2568;
    case 741u: goto L_001C2578;
    case 742u: goto L_001C2584;
    case 743u: goto L_001C2590;
    case 744u: goto L_001C259C;
    case 745u: goto L_001C25A8;
    case 746u: goto L_001C25BC;
    case 747u: goto L_001C25C8;
    case 748u: goto L_001C25D4;
    case 749u: goto L_001C25E0;
    case 750u: goto L_001C25EC;
    case 751u: goto L_001C25F4;
    case 752u: goto L_001C2604;
    case 753u: goto L_001C2610;
    case 754u: goto L_001C261C;
    case 755u: goto L_001C2628;
    case 756u: goto L_001C2634;
    case 757u: goto L_001C2648;
    case 758u: goto L_001C2654;
    case 759u: goto L_001C2660;
    case 760u: goto L_001C266C;
    case 761u: goto L_001C2678;
    case 762u: goto L_001C2680;
    case 763u: goto L_001C2690;
    case 764u: goto L_001C269C;
    case 765u: goto L_001C26A8;
    case 766u: goto L_001C26B4;
    case 767u: goto L_001C26C0;
    case 768u: goto L_001C26D4;
    case 769u: goto L_001C26E0;
    case 770u: goto L_001C26EC;
    case 771u: goto L_001C26F8;
    case 772u: goto L_001C2704;
    case 773u: goto L_001C270C;
    case 774u: goto L_001C271C;
    case 775u: goto L_001C2728;
    case 776u: goto L_001C2734;
    case 777u: goto L_001C2740;
    case 778u: goto L_001C274C;
    case 779u: goto L_001C2758;
    case 780u: goto L_001C2768;
    case 781u: goto L_001C2774;
    case 782u: goto L_001C2780;
    case 783u: goto L_001C278C;
    case 784u: goto L_001C2798;
    case 785u: goto L_001C27A0;
    case 786u: goto L_001C27B0;
    case 787u: goto L_001C27BC;
    case 788u: goto L_001C27C8;
    case 789u: goto L_001C27D4;
    case 790u: goto L_001C27E0;
    case 791u: goto L_001C27EC;
    case 792u: goto L_001C27FC;
    case 793u: goto L_001C2808;
    case 794u: goto L_001C2814;
    case 795u: goto L_001C281C;
    case 796u: goto L_001C2824;
    case 797u: goto L_001C2840;
    case 798u: goto L_001C286C;
    case 799u: goto L_001C2894;
    case 800u: goto L_001C289C;
    case 801u: goto L_001C28A4;
    case 802u: goto L_001C28AC;
    case 803u: goto L_001C28B8;
    case 804u: goto L_001C28C4;
    case 805u: goto L_001C28D4;
    case 806u: goto L_001C28E0;
    case 807u: goto L_001C28EC;
    case 808u: goto L_001C28F8;
    case 809u: goto L_001C2904;
    case 810u: goto L_001C2910;
    case 811u: goto L_001C2920;
    case 812u: goto L_001C292C;
    case 813u: goto L_001C2938;
    case 814u: goto L_001C2944;
    case 815u: goto L_001C2950;
    case 816u: goto L_001C2958;
    case 817u: goto L_001C2968;
    case 818u: goto L_001C2974;
    case 819u: goto L_001C2980;
    case 820u: goto L_001C298C;
    case 821u: goto L_001C2998;
    case 822u: goto L_001C29AC;
    case 823u: goto L_001C29B8;
    case 824u: goto L_001C29C4;
    case 825u: goto L_001C29D0;
    case 826u: goto L_001C29DC;
    case 827u: goto L_001C29E4;
    case 828u: goto L_001C29F4;
    case 829u: goto L_001C2A00;
    case 830u: goto L_001C2A0C;
    case 831u: goto L_001C2A18;
    case 832u: goto L_001C2A24;
    case 833u: goto L_001C2A38;
    case 834u: goto L_001C2A44;
    case 835u: goto L_001C2A50;
    case 836u: goto L_001C2A5C;
    case 837u: goto L_001C2A68;
    case 838u: goto L_001C2A70;
    case 839u: goto L_001C2A80;
    case 840u: goto L_001C2A8C;
    case 841u: goto L_001C2A98;
    case 842u: goto L_001C2AA4;
    case 843u: goto L_001C2AB0;
    case 844u: goto L_001C2AC4;
    case 845u: goto L_001C2AD0;
    case 846u: goto L_001C2ADC;
    case 847u: goto L_001C2AE8;
    case 848u: goto L_001C2AF4;
    case 849u: goto L_001C2AFC;
    case 850u: goto L_001C2B0C;
    case 851u: goto L_001C2B18;
    case 852u: goto L_001C2B24;
    case 853u: goto L_001C2B30;
    case 854u: goto L_001C2B3C;
    case 855u: goto L_001C2B48;
    case 856u: goto L_001C2B58;
    case 857u: goto L_001C2B64;
    case 858u: goto L_001C2B70;
    case 859u: goto L_001C2B78;
    case 860u: goto L_001C2B80;
    case 861u: goto L_001C2BA0;
    case 862u: goto L_001C2BCC;
    case 863u: goto L_001C2BF4;
    case 864u: goto L_001C2BFC;
    case 865u: goto L_001C2C04;
    case 866u: goto L_001C2C0C;
    case 867u: goto L_001C2C18;
    case 868u: goto L_001C2C24;
    case 869u: goto L_001C2C34;
    case 870u: goto L_001C2C40;
    case 871u: goto L_001C2C4C;
    case 872u: goto L_001C2C58;
    case 873u: goto L_001C2C64;
    case 874u: goto L_001C2C70;
    case 875u: goto L_001C2C80;
    case 876u: goto L_001C2C8C;
    case 877u: goto L_001C2C98;
    case 878u: goto L_001C2CA4;
    case 879u: goto L_001C2CB0;
    case 880u: goto L_001C2CB8;
    case 881u: goto L_001C2CC8;
    case 882u: goto L_001C2CD4;
    case 883u: goto L_001C2CE0;
    case 884u: goto L_001C2CEC;
    case 885u: goto L_001C2CF8;
    case 886u: goto L_001C2D04;
    case 887u: goto L_001C2D14;
    case 888u: goto L_001C2D20;
    case 889u: goto L_001C2D2C;
    case 890u: goto L_001C2D38;
    case 891u: goto L_001C2D44;
    case 892u: goto L_001C2D4C;
    case 893u: goto L_001C2D5C;
    case 894u: goto L_001C2D68;
    case 895u: goto L_001C2D74;
    case 896u: goto L_001C2D80;
    case 897u: goto L_001C2D8C;
    case 898u: goto L_001C2DA0;
    case 899u: goto L_001C2DAC;
    case 900u: goto L_001C2DB8;
    case 901u: goto L_001C2DC4;
    case 902u: goto L_001C2DD0;
    case 903u: goto L_001C2DD8;
    case 904u: goto L_001C2DE8;
    case 905u: goto L_001C2DF4;
    case 906u: goto L_001C2E00;
    case 907u: goto L_001C2E0C;
    case 908u: goto L_001C2E18;
    case 909u: goto L_001C2E2C;
    case 910u: goto L_001C2E38;
    case 911u: goto L_001C2E44;
    case 912u: goto L_001C2E50;
    case 913u: goto L_001C2E5C;
    case 914u: goto L_001C2E64;
    case 915u: goto L_001C2E74;
    case 916u: goto L_001C2E80;
    case 917u: goto L_001C2E8C;
    case 918u: goto L_001C2E98;
    case 919u: goto L_001C2EA4;
    case 920u: goto L_001C2EB0;
    case 921u: goto L_001C2EC0;
    case 922u: goto L_001C2ECC;
    case 923u: goto L_001C2ED8;
    case 924u: goto L_001C2EE4;
    case 925u: goto L_001C2EF0;
    case 926u: goto L_001C2EF8;
    case 927u: goto L_001C2F08;
    case 928u: goto L_001C2F14;
    case 929u: goto L_001C2F20;
    case 930u: goto L_001C2F2C;
    case 931u: goto L_001C2F38;
    case 932u: goto L_001C2F44;
    case 933u: goto L_001C2F54;
    case 934u: goto L_001C2F60;
    case 935u: goto L_001C2F6C;
    case 936u: goto L_001C2F78;
    case 937u: goto L_001C2F84;
    case 938u: goto L_001C2F94;
    case 939u: goto L_001C2FA0;
    case 940u: goto L_001C2FAC;
    case 941u: goto L_001C2FB4;
    case 942u: goto L_001C2FBC;
    case 943u: goto L_001C2FE0;
    case 944u: goto L_001C300C;
    case 945u: goto L_001C3034;
    case 946u: goto L_001C303C;
    case 947u: goto L_001C3044;
    case 948u: goto L_001C304C;
    case 949u: goto L_001C3058;
    case 950u: goto L_001C3064;
    case 951u: goto L_001C3074;
    case 952u: goto L_001C3080;
    case 953u: goto L_001C308C;
    case 954u: goto L_001C3098;
    case 955u: goto L_001C30A4;
    case 956u: goto L_001C30B0;
    case 957u: goto L_001C30C0;
    case 958u: goto L_001C30CC;
    case 959u: goto L_001C30D8;
    case 960u: goto L_001C30E4;
    case 961u: goto L_001C30F0;
    case 962u: goto L_001C30F8;
    case 963u: goto L_001C3108;
    case 964u: goto L_001C3114;
    case 965u: goto L_001C3120;
    case 966u: goto L_001C312C;
    case 967u: goto L_001C3138;
    case 968u: goto L_001C3144;
    case 969u: goto L_001C3154;
    case 970u: goto L_001C3160;
    case 971u: goto L_001C316C;
    case 972u: goto L_001C3178;
    case 973u: goto L_001C3184;
    case 974u: goto L_001C318C;
    case 975u: goto L_001C319C;
    case 976u: goto L_001C31A8;
    case 977u: goto L_001C31B4;
    case 978u: goto L_001C31BC;
    case 979u: goto L_001C31C4;
    case 980u: goto L_001C31E0;
    case 981u: goto L_001C320C;
    case 982u: goto L_001C3234;
    case 983u: goto L_001C323C;
    case 984u: goto L_001C3244;
    case 985u: goto L_001C324C;
    case 986u: goto L_001C3258;
    case 987u: goto L_001C3264;
    case 988u: goto L_001C3274;
    case 989u: goto L_001C3280;
    case 990u: goto L_001C328C;
    case 991u: goto L_001C3298;
    case 992u: goto L_001C32A4;
    case 993u: goto L_001C32B0;
    case 994u: goto L_001C32C0;
    case 995u: goto L_001C32CC;
    case 996u: goto L_001C32D8;
    case 997u: goto L_001C32E4;
    case 998u: goto L_001C32F0;
    case 999u: goto L_001C32F8;
    case 1000u: goto L_001C3308;
    case 1001u: goto L_001C3314;
    case 1002u: goto L_001C3320;
    case 1003u: goto L_001C332C;
    case 1004u: goto L_001C3338;
    case 1005u: goto L_001C334C;
    case 1006u: goto L_001C3358;
    case 1007u: goto L_001C3364;
    case 1008u: goto L_001C3370;
    case 1009u: goto L_001C337C;
    case 1010u: goto L_001C3384;
    case 1011u: goto L_001C3394;
    case 1012u: goto L_001C33A0;
    case 1013u: goto L_001C33AC;
    case 1014u: goto L_001C33B8;
    case 1015u: goto L_001C33C4;
    case 1016u: goto L_001C33D8;
    case 1017u: goto L_001C33E4;
    case 1018u: goto L_001C33F0;
    case 1019u: goto L_001C33F8;
    case 1020u: goto L_001C3400;
    case 1021u: goto L_001C3420;
    case 1022u: goto L_001C344C;
    case 1023u: goto L_001C3474;
    case 1024u: goto L_001C347C;
    case 1025u: goto L_001C3484;
    case 1026u: goto L_001C348C;
    case 1027u: goto L_001C3498;
    case 1028u: goto L_001C34A4;
    case 1029u: goto L_001C34B4;
    case 1030u: goto L_001C34C0;
    case 1031u: goto L_001C34CC;
    case 1032u: goto L_001C34D8;
    case 1033u: goto L_001C34E4;
    case 1034u: goto L_001C34F0;
    case 1035u: goto L_001C3500;
    case 1036u: goto L_001C350C;
    case 1037u: goto L_001C3518;
    case 1038u: goto L_001C3524;
    case 1039u: goto L_001C3530;
    case 1040u: goto L_001C3538;
    case 1041u: goto L_001C3548;
    case 1042u: goto L_001C3554;
    case 1043u: goto L_001C3560;
    case 1044u: goto L_001C356C;
    case 1045u: goto L_001C3578;
    case 1046u: goto L_001C3584;
    case 1047u: goto L_001C3594;
    case 1048u: goto L_001C35A0;
    case 1049u: goto L_001C35AC;
    case 1050u: goto L_001C35B8;
    case 1051u: goto L_001C35C4;
    case 1052u: goto L_001C35CC;
    case 1053u: goto L_001C35DC;
    case 1054u: goto L_001C35E8;
    case 1055u: goto L_001C35F4;
    case 1056u: goto L_001C35FC;
    case 1057u: goto L_001C3604;
    case 1058u: goto L_001C3620;
    case 1059u: goto L_001C364C;
    case 1060u: goto L_001C3674;
    case 1061u: goto L_001C367C;
    case 1062u: goto L_001C3684;
    case 1063u: goto L_001C368C;
    case 1064u: goto L_001C3698;
    case 1065u: goto L_001C36A4;
    case 1066u: goto L_001C36B4;
    case 1067u: goto L_001C36C0;
    case 1068u: goto L_001C36CC;
    case 1069u: goto L_001C36D8;
    case 1070u: goto L_001C36E4;
    case 1071u: goto L_001C36F0;
    case 1072u: goto L_001C3700;
    case 1073u: goto L_001C370C;
    case 1074u: goto L_001C3718;
    case 1075u: goto L_001C3720;
    case 1076u: goto L_001C3728;
    case 1077u: goto L_001C3750;
    case 1078u: goto L_001C377C;
    case 1079u: goto L_001C37A4;
    case 1080u: goto L_001C37AC;
    case 1081u: goto L_001C37B4;
    case 1082u: goto L_001C37BC;
    case 1083u: goto L_001C37C8;
    case 1084u: goto L_001C37D4;
    case 1085u: goto L_001C37E4;
    case 1086u: goto L_001C37F0;
    case 1087u: goto L_001C37FC;
    case 1088u: goto L_001C3808;
    case 1089u: goto L_001C3814;
    case 1090u: goto L_001C3820;
    case 1091u: goto L_001C3830;
    case 1092u: goto L_001C383C;
    case 1093u: goto L_001C3848;
    case 1094u: goto L_001C3850;
    case 1095u: goto L_001C3858;
    case 1096u: goto L_001C3880;
    case 1097u: goto L_001C38AC;
    case 1098u: goto L_001C38D4;
    case 1099u: goto L_001C38DC;
    case 1100u: goto L_001C38E4;
    case 1101u: goto L_001C38EC;
    case 1102u: goto L_001C38F8;
    case 1103u: goto L_001C3904;
    case 1104u: goto L_001C3914;
    case 1105u: goto L_001C3920;
    case 1106u: goto L_001C392C;
    case 1107u: goto L_001C3938;
    case 1108u: goto L_001C3944;
    case 1109u: goto L_001C3950;
    case 1110u: goto L_001C3960;
    case 1111u: goto L_001C396C;
    case 1112u: goto L_001C3978;
    case 1113u: goto L_001C3984;
    case 1114u: goto L_001C3990;
    case 1115u: goto L_001C3998;
    case 1116u: goto L_001C39A8;
    case 1117u: goto L_001C39B4;
    case 1118u: goto L_001C39C0;
    case 1119u: goto L_001C39CC;
    case 1120u: goto L_001C39D8;
    case 1121u: goto L_001C39E4;
    case 1122u: goto L_001C39F4;
    case 1123u: goto L_001C3A00;
    case 1124u: goto L_001C3A0C;
    case 1125u: goto L_001C3A18;
    case 1126u: goto L_001C3A24;
    case 1127u: goto L_001C3A2C;
    case 1128u: goto L_001C3A3C;
    case 1129u: goto L_001C3A48;
    case 1130u: goto L_001C3A54;
    case 1131u: goto L_001C3A60;
    case 1132u: goto L_001C3A6C;
    case 1133u: goto L_001C3A78;
    case 1134u: goto L_001C3A88;
    case 1135u: goto L_001C3A94;
    case 1136u: goto L_001C3AA0;
    case 1137u: goto L_001C3AAC;
    case 1138u: goto L_001C3AB8;
    case 1139u: goto L_001C3AC0;
    case 1140u: goto L_001C3AD0;
    case 1141u: goto L_001C3ADC;
    case 1142u: goto L_001C3AE8;
    case 1143u: goto L_001C3AF4;
    case 1144u: goto L_001C3B00;
    case 1145u: goto L_001C3B0C;
    case 1146u: goto L_001C3B1C;
    case 1147u: goto L_001C3B28;
    case 1148u: goto L_001C3B34;
    case 1149u: goto L_001C3B40;
    case 1150u: goto L_001C3B4C;
    case 1151u: goto L_001C3B54;
    case 1152u: goto L_001C3B64;
    case 1153u: goto L_001C3B70;
    case 1154u: goto L_001C3B7C;
    case 1155u: goto L_001C3B88;
    case 1156u: goto L_001C3B94;
    case 1157u: goto L_001C3BA0;
    case 1158u: goto L_001C3BB0;
    case 1159u: goto L_001C3BBC;
    case 1160u: goto L_001C3BC8;
    case 1161u: goto L_001C3BD4;
    case 1162u: goto L_001C3BE0;
    case 1163u: goto L_001C3BE8;
    case 1164u: goto L_001C3BF8;
    case 1165u: goto L_001C3C04;
    case 1166u: goto L_001C3C10;
    case 1167u: goto L_001C3C18;
    case 1168u: goto L_001C3C20;
    case 1169u: goto L_001C3C40;
    case 1170u: goto L_001C3C6C;
    case 1171u: goto L_001C3C94;
    case 1172u: goto L_001C3C9C;
    case 1173u: goto L_001C3CA4;
    case 1174u: goto L_001C3CAC;
    case 1175u: goto L_001C3CB8;
    case 1176u: goto L_001C3CC4;
    case 1177u: goto L_001C3CD4;
    case 1178u: goto L_001C3CE0;
    case 1179u: goto L_001C3CEC;
    case 1180u: goto L_001C3CF8;
    case 1181u: goto L_001C3D04;
    case 1182u: goto L_001C3D10;
    case 1183u: goto L_001C3D20;
    case 1184u: goto L_001C3D2C;
    case 1185u: goto L_001C3D38;
    case 1186u: goto L_001C3D44;
    case 1187u: goto L_001C3D50;
    case 1188u: goto L_001C3D58;
    case 1189u: goto L_001C3D68;
    case 1190u: goto L_001C3D74;
    case 1191u: goto L_001C3D80;
    case 1192u: goto L_001C3D8C;
    case 1193u: goto L_001C3D98;
    case 1194u: goto L_001C3DA4;
    case 1195u: goto L_001C3DB4;
    case 1196u: goto L_001C3DC0;
    case 1197u: goto L_001C3DCC;
    case 1198u: goto L_001C3DD8;
    case 1199u: goto L_001C3DE4;
    case 1200u: goto L_001C3DEC;
    case 1201u: goto L_001C3DFC;
    case 1202u: goto L_001C3E08;
    case 1203u: goto L_001C3E14;
    case 1204u: goto L_001C3E20;
    case 1205u: goto L_001C3E2C;
    case 1206u: goto L_001C3E38;
    case 1207u: goto L_001C3E48;
    case 1208u: goto L_001C3E54;
    case 1209u: goto L_001C3E60;
    case 1210u: goto L_001C3E6C;
    case 1211u: goto L_001C3E78;
    case 1212u: goto L_001C3E80;
    case 1213u: goto L_001C3E90;
    case 1214u: goto L_001C3E9C;
    case 1215u: goto L_001C3EA8;
    case 1216u: goto L_001C3EB4;
    case 1217u: goto L_001C3EC0;
    case 1218u: goto L_001C3ECC;
    case 1219u: goto L_001C3EDC;
    case 1220u: goto L_001C3EE8;
    case 1221u: goto L_001C3EF4;
    case 1222u: goto L_001C3F00;
    case 1223u: goto L_001C3F0C;
    case 1224u: goto L_001C3F14;
    case 1225u: goto L_001C3F24;
    case 1226u: goto L_001C3F30;
    case 1227u: goto L_001C3F3C;
    case 1228u: goto L_001C3F48;
    case 1229u: goto L_001C3F54;
    case 1230u: goto L_001C3F60;
    case 1231u: goto L_001C3F70;
    case 1232u: goto L_001C3F7C;
    case 1233u: goto L_001C3F88;
    case 1234u: goto L_001C3F90;
    case 1235u: goto L_001C3F98;
    case 1236u: goto L_001C3FC0;
    case 1237u: goto L_001C3FEC;
    default: bad_entry(c, 0x001C0000u); return;
    }
L_001C0000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0008u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0008u) [[unlikely]] return; }
    goto L_001C0008;
L_001C0004:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_001C0008:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_001C000C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0014u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0014u) [[unlikely]] return; }
L_001C0014:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_001C0018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0020u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0020u) [[unlikely]] return; }
    goto L_001C0020;
L_001C001C:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_001C0020:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001C0024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C002Cu); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C002Cu) [[unlikely]] return; }
L_001C002C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C0030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0038u); set32(c.r[18], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C0038u) [[unlikely]] return; }
L_001C0038:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 2;
L_001C0040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0048u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0048u) [[unlikely]] return; }
L_001C0048:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0054u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0054u) [[unlikely]] return; }
L_001C0054:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0060u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0060u) [[unlikely]] return; }
L_001C0060:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C006Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C006Cu) [[unlikely]] return; }
L_001C006C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0078u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0078u) [[unlikely]] return; }
    goto L_001C0078;
L_001C0074:
    set32(c.r[19], c.r[4].w[0] + 64u);
    c.budget -= 1;
L_001C0078:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0088u); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0088u) [[unlikely]] return; }
L_001C0088:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0094u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0094u) [[unlikely]] return; }
L_001C0094:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C00A0u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C00A0u) [[unlikely]] return; }
L_001C00A0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C00ACu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C00ACu) [[unlikely]] return; }
L_001C00AC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C00B8u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C00B8u) [[unlikely]] return; }
L_001C00B8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C00C4u); set32(c.r[18], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C00C4u) [[unlikely]] return; }
L_001C00C4:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C00D4u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C00D4u) [[unlikely]] return; }
L_001C00D4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C00E0u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C00E0u) [[unlikely]] return; }
L_001C00E0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C00ECu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C00ECu) [[unlikely]] return; }
L_001C00EC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C00F8u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C00F8u) [[unlikely]] return; }
L_001C00F8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0104u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0104u) [[unlikely]] return; }
    goto L_001C0104;
L_001C0100:
    set32(c.r[19], c.r[4].w[0] + 64u);
    c.budget -= 1;
L_001C0104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C010Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C010Cu) [[unlikely]] return; }
    goto L_001C010C;
L_001C0108:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C010C:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 2;
L_001C0114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C011Cu); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C011Cu) [[unlikely]] return; }
    goto L_001C011C;
L_001C0118:
    c.f[12] = ld32((c.r[18].w[0] + 16u));
    c.budget -= 1;
L_001C011C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0128u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0128u) [[unlikely]] return; }
L_001C0128:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0134u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0134u) [[unlikely]] return; }
L_001C0134:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0140u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0140u) [[unlikely]] return; }
L_001C0140:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C014Cu); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C014Cu) [[unlikely]] return; }
L_001C014C:
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0160u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0160u) [[unlikely]] return; }
L_001C0160:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C016Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C016Cu) [[unlikely]] return; }
L_001C016C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0178u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0178u) [[unlikely]] return; }
L_001C0178:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0184u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0184u) [[unlikely]] return; }
L_001C0184:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0190u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0190u) [[unlikely]] return; }
L_001C0190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0198u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C0198u) [[unlikely]] return; }
L_001C0198:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C01A8u); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C01A8u) [[unlikely]] return; }
L_001C01A8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C01B4u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C01B4u) [[unlikely]] return; }
L_001C01B4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C01C0u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C01C0u) [[unlikely]] return; }
L_001C01C0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C01CCu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C01CCu) [[unlikely]] return; }
L_001C01CC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C01D8u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C01D8u) [[unlikely]] return; }
L_001C01D8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C01E4u); set32(c.r[18], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C01E4u) [[unlikely]] return; }
L_001C01E4:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C01F4u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C01F4u) [[unlikely]] return; }
L_001C01F4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0200u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0200u) [[unlikely]] return; }
L_001C0200:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C020Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C020Cu) [[unlikely]] return; }
L_001C020C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0218u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0218u) [[unlikely]] return; }
L_001C0218:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0224u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0224u) [[unlikely]] return; }
L_001C0224:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0234u); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0234u) [[unlikely]] return; }
L_001C0234:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0240u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0240u) [[unlikely]] return; }
L_001C0240:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C024Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C024Cu) [[unlikely]] return; }
L_001C024C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0258u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0258u) [[unlikely]] return; }
L_001C0258:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0264u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0264u) [[unlikely]] return; }
L_001C0264:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0270u); set32(c.r[18], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C0270u) [[unlikely]] return; }
L_001C0270:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0280u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0280u) [[unlikely]] return; }
L_001C0280:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C028Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C028Cu) [[unlikely]] return; }
L_001C028C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0298u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0298u) [[unlikely]] return; }
L_001C0298:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C02A4u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C02A4u) [[unlikely]] return; }
L_001C02A4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C02B0u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C02B0u) [[unlikely]] return; }
L_001C02B0:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C02C0u); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C02C0u) [[unlikely]] return; }
L_001C02C0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C02CCu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C02CCu) [[unlikely]] return; }
L_001C02CC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C02D8u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C02D8u) [[unlikely]] return; }
L_001C02D8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C02E4u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C02E4u) [[unlikely]] return; }
L_001C02E4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C02F0u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C02F0u) [[unlikely]] return; }
L_001C02F0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C02FCu); set32(c.r[18], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C02FCu) [[unlikely]] return; }
L_001C02FC:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C030Cu); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C030Cu) [[unlikely]] return; }
L_001C030C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0318u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0318u) [[unlikely]] return; }
L_001C0318:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0324u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0324u) [[unlikely]] return; }
L_001C0324:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0330u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0330u) [[unlikely]] return; }
L_001C0330:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C033Cu); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C033Cu) [[unlikely]] return; }
L_001C033C:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C034Cu); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C034Cu) [[unlikely]] return; }
L_001C034C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0358u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0358u) [[unlikely]] return; }
L_001C0358:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0364u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0364u) [[unlikely]] return; }
L_001C0364:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0370u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0370u) [[unlikely]] return; }
L_001C0370:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C037Cu); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C037Cu) [[unlikely]] return; }
L_001C037C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0388u); set32(c.r[18], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C0388u) [[unlikely]] return; }
L_001C0388:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0398u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0398u) [[unlikely]] return; }
L_001C0398:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C03A4u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C03A4u) [[unlikely]] return; }
L_001C03A4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C03B0u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C03B0u) [[unlikely]] return; }
L_001C03B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C03B8u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C03B8u) [[unlikely]] return; }
L_001C03B8:
    c.f[13] = ld32((c.r[16].w[0] + 276u));
    c.f[14] = ld32((c.r[16].w[0] + 280u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C03C8u); c.f[12] = ld32((c.r[16].w[0] + 272u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001C03C8u) [[unlikely]] return; }
L_001C03C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C03D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C03D0u) [[unlikely]] return; }
L_001C03D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001C03F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 4;
L_001C0400:
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C041Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C041Cu) [[unlikely]] return; }
L_001C041C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C04B8; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 2;
L_001C0430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0438u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0438u) [[unlikely]] return; }
L_001C0438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0440u); set32(c.r[4], c.r[19].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001C0440u) [[unlikely]] return; }
L_001C0440:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0450u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0450u) [[unlikely]] return; }
L_001C0450:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0460u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0460u) [[unlikely]] return; }
L_001C0460:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001C0464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C046Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C046Cu) [[unlikely]] return; }
L_001C046C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0478u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0478u) [[unlikely]] return; }
L_001C0478:
    c.f[0] = ld32((c.r[19].w[0] + 8540u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0490u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0490u) [[unlikely]] return; }
L_001C0490:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C049Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C049Cu) [[unlikely]] return; }
L_001C049C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C04A4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8332u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C04A4u) [[unlikely]] return; }
L_001C04A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C04ACu); c.r[4].d[0] = ld16((c.r[19].w[0] + 8328u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C04ACu) [[unlikely]] return; }
L_001C04AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C0560; } }
    c.budget -= 1;
L_001C04B8:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C04E0u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C04E0u) [[unlikely]] return; }
L_001C04E0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C04FCu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C04FCu) [[unlikely]] return; }
L_001C04FC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0514u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0514u) [[unlikely]] return; }
L_001C0514:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C052Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C052Cu) [[unlikely]] return; }
L_001C052C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0538u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0538u) [[unlikely]] return; }
L_001C0538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0540u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8332u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0540u) [[unlikely]] return; }
L_001C0540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0548u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8328u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0548u) [[unlikely]] return; }
L_001C0548:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C055Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C055Cu) [[unlikely]] return; }
L_001C055C:
    c.budget -= 1;
L_001C0560:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0570u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0570u) [[unlikely]] return; }
L_001C0570:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C057Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C057Cu) [[unlikely]] return; }
L_001C057C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0588u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0588u) [[unlikely]] return; }
L_001C0588:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0594u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0594u) [[unlikely]] return; }
L_001C0594:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C05A0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C05A0u) [[unlikely]] return; }
L_001C05A0:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C05B0u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C05B0u) [[unlikely]] return; }
L_001C05B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C05BCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C05BCu) [[unlikely]] return; }
L_001C05BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C05C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C05C8u) [[unlikely]] return; }
L_001C05C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C05D4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C05D4u) [[unlikely]] return; }
L_001C05D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C05E0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C05E0u) [[unlikely]] return; }
L_001C05E0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C05ECu); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C05ECu) [[unlikely]] return; }
L_001C05EC:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C05FCu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C05FCu) [[unlikely]] return; }
L_001C05FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0608u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0608u) [[unlikely]] return; }
L_001C0608:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0614u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0614u) [[unlikely]] return; }
L_001C0614:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0620u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0620u) [[unlikely]] return; }
L_001C0620:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C062Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C062Cu) [[unlikely]] return; }
L_001C062C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0634u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C0634u) [[unlikely]] return; }
L_001C0634:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0644u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0644u) [[unlikely]] return; }
L_001C0644:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0650u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0650u) [[unlikely]] return; }
    goto L_001C0650;
L_001C064C:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_001C0650:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C065Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C065Cu) [[unlikely]] return; }
L_001C065C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0668u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0668u) [[unlikely]] return; }
L_001C0668:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0674u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0674u) [[unlikely]] return; }
L_001C0674:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0688u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0688u) [[unlikely]] return; }
L_001C0688:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0694u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0694u) [[unlikely]] return; }
L_001C0694:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C06A0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C06A0u) [[unlikely]] return; }
L_001C06A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C06A8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C06A8u) [[unlikely]] return; }
L_001C06A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C06B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C06B0u) [[unlikely]] return; }
L_001C06B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C06D0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C06FCu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C06FCu) [[unlikely]] return; }
L_001C06FC:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0724u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0724u) [[unlikely]] return; }
L_001C0724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C072Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C072Cu) [[unlikely]] return; }
L_001C072C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0734u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0734u) [[unlikely]] return; }
L_001C0734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C073Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C073Cu) [[unlikely]] return; }
L_001C073C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0748u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0748u) [[unlikely]] return; }
L_001C0748:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0754u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C0754u) [[unlikely]] return; }
L_001C0754:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0764u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0764u) [[unlikely]] return; }
L_001C0764:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0770u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0770u) [[unlikely]] return; }
L_001C0770:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C077Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C077Cu) [[unlikely]] return; }
L_001C077C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0788u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0788u) [[unlikely]] return; }
L_001C0788:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0794u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0794u) [[unlikely]] return; }
L_001C0794:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C07A0u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C07A0u) [[unlikely]] return; }
L_001C07A0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C07B0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C07B0u) [[unlikely]] return; }
L_001C07B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C07BCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C07BCu) [[unlikely]] return; }
L_001C07BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C07C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C07C8u) [[unlikely]] return; }
L_001C07C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C07D4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C07D4u) [[unlikely]] return; }
L_001C07D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C07E0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C07E0u) [[unlikely]] return; }
L_001C07E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C07E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C07E8u) [[unlikely]] return; }
L_001C07E8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C07F8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C07F8u) [[unlikely]] return; }
L_001C07F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0804u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0804u) [[unlikely]] return; }
L_001C0804:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0810u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0810u) [[unlikely]] return; }
L_001C0810:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C081Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C081Cu) [[unlikely]] return; }
L_001C081C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0828u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0828u) [[unlikely]] return; }
L_001C0828:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0834u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C0834u) [[unlikely]] return; }
L_001C0834:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0844u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0844u) [[unlikely]] return; }
L_001C0844:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0850u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0850u) [[unlikely]] return; }
L_001C0850:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C085Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C085Cu) [[unlikely]] return; }
L_001C085C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0868u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0868u) [[unlikely]] return; }
L_001C0868:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0874u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0874u) [[unlikely]] return; }
L_001C0874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C087Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C087Cu) [[unlikely]] return; }
L_001C087C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C088Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C088Cu) [[unlikely]] return; }
L_001C088C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0898u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0898u) [[unlikely]] return; }
L_001C0898:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C08A4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C08A4u) [[unlikely]] return; }
L_001C08A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C08B0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C08B0u) [[unlikely]] return; }
L_001C08B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C08BCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C08BCu) [[unlikely]] return; }
L_001C08BC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C08C8u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C08C8u) [[unlikely]] return; }
L_001C08C8:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C08D8u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C08D8u) [[unlikely]] return; }
L_001C08D8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C08E4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C08E4u) [[unlikely]] return; }
L_001C08E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C08F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C08F0u) [[unlikely]] return; }
L_001C08F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C08FCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C08FCu) [[unlikely]] return; }
L_001C08FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0908u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0908u) [[unlikely]] return; }
L_001C0908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0910u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C0910u) [[unlikely]] return; }
L_001C0910:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0920u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0920u) [[unlikely]] return; }
L_001C0920:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C092Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C092Cu) [[unlikely]] return; }
L_001C092C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0938u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0938u) [[unlikely]] return; }
L_001C0938:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0944u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0944u) [[unlikely]] return; }
L_001C0944:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0950u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0950u) [[unlikely]] return; }
L_001C0950:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C095Cu); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C095Cu) [[unlikely]] return; }
L_001C095C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C096Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C096Cu) [[unlikely]] return; }
L_001C096C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0978u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0978u) [[unlikely]] return; }
L_001C0978:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0984u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0984u) [[unlikely]] return; }
L_001C0984:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0990u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0990u) [[unlikely]] return; }
L_001C0990:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C099Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C099Cu) [[unlikely]] return; }
L_001C099C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C09ACu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C09ACu) [[unlikely]] return; }
L_001C09AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C09B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C09B8u) [[unlikely]] return; }
L_001C09B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C09C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C09C4u) [[unlikely]] return; }
L_001C09C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C09D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C09D0u) [[unlikely]] return; }
L_001C09D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C09DCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C09DCu) [[unlikely]] return; }
L_001C09DC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C09E8u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C09E8u) [[unlikely]] return; }
L_001C09E8:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C09F8u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C09F8u) [[unlikely]] return; }
L_001C09F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0A04u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0A04u) [[unlikely]] return; }
L_001C0A04:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0A10u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0A10u) [[unlikely]] return; }
L_001C0A10:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0A1Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0A1Cu) [[unlikely]] return; }
L_001C0A1C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0A28u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0A28u) [[unlikely]] return; }
L_001C0A28:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0A38u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0A38u) [[unlikely]] return; }
L_001C0A38:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0A44u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0A44u) [[unlikely]] return; }
L_001C0A44:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0A50u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0A50u) [[unlikely]] return; }
L_001C0A50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0A5Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0A5Cu) [[unlikely]] return; }
L_001C0A5C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0A68u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0A68u) [[unlikely]] return; }
L_001C0A68:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0A74u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C0A74u) [[unlikely]] return; }
L_001C0A74:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0A84u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0A84u) [[unlikely]] return; }
L_001C0A84:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0A90u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0A90u) [[unlikely]] return; }
L_001C0A90:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0A9Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0A9Cu) [[unlikely]] return; }
L_001C0A9C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0AA8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0AA8u) [[unlikely]] return; }
L_001C0AA8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0AB4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0AB4u) [[unlikely]] return; }
L_001C0AB4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0AC4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0AC4u) [[unlikely]] return; }
L_001C0AC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0AD0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0AD0u) [[unlikely]] return; }
L_001C0AD0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0ADCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0ADCu) [[unlikely]] return; }
L_001C0ADC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0AE8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0AE8u) [[unlikely]] return; }
L_001C0AE8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0AF4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0AF4u) [[unlikely]] return; }
L_001C0AF4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0B00u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C0B00u) [[unlikely]] return; }
L_001C0B00:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0B10u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0B10u) [[unlikely]] return; }
L_001C0B10:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0B1Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0B1Cu) [[unlikely]] return; }
L_001C0B1C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0B28u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0B28u) [[unlikely]] return; }
L_001C0B28:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0B34u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0B34u) [[unlikely]] return; }
L_001C0B34:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0B40u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0B40u) [[unlikely]] return; }
L_001C0B40:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0B50u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0B50u) [[unlikely]] return; }
L_001C0B50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0B5Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0B5Cu) [[unlikely]] return; }
L_001C0B5C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0B68u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0B68u) [[unlikely]] return; }
L_001C0B68:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0B74u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0B74u) [[unlikely]] return; }
L_001C0B74:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0B80u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0B80u) [[unlikely]] return; }
L_001C0B80:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0B8Cu); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C0B8Cu) [[unlikely]] return; }
L_001C0B8C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0B9Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0B9Cu) [[unlikely]] return; }
L_001C0B9C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0BA8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0BA8u) [[unlikely]] return; }
L_001C0BA8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0BB4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0BB4u) [[unlikely]] return; }
L_001C0BB4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0BC0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0BC0u) [[unlikely]] return; }
L_001C0BC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0BCCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0BCCu) [[unlikely]] return; }
L_001C0BCC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0BDCu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0BDCu) [[unlikely]] return; }
L_001C0BDC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0BE8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0BE8u) [[unlikely]] return; }
L_001C0BE8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0BF4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0BF4u) [[unlikely]] return; }
    goto L_001C0BF4;
L_001C0BF0:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_001C0BF4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C00u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0C00u) [[unlikely]] return; }
L_001C0C00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C0Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0C0Cu) [[unlikely]] return; }
L_001C0C0C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C18u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C0C18u) [[unlikely]] return; }
L_001C0C18:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C28u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0C28u) [[unlikely]] return; }
L_001C0C28:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C34u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0C34u) [[unlikely]] return; }
L_001C0C34:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C40u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0C40u) [[unlikely]] return; }
L_001C0C40:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C4Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0C4Cu) [[unlikely]] return; }
L_001C0C4C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C58u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0C58u) [[unlikely]] return; }
L_001C0C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C60u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C0C60u) [[unlikely]] return; }
L_001C0C60:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C70u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0C70u) [[unlikely]] return; }
L_001C0C70:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C7Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0C7Cu) [[unlikely]] return; }
L_001C0C7C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C88u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0C88u) [[unlikely]] return; }
L_001C0C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C90u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0C90u) [[unlikely]] return; }
L_001C0C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0C98u) [[unlikely]] return; }
L_001C0C98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C0CC0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0CECu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C0CECu) [[unlikely]] return; }
L_001C0CEC:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D14u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0D14u) [[unlikely]] return; }
L_001C0D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D1Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0D1Cu) [[unlikely]] return; }
L_001C0D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D24u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0D24u) [[unlikely]] return; }
L_001C0D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D2Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0D2Cu) [[unlikely]] return; }
L_001C0D2C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D38u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0D38u) [[unlikely]] return; }
L_001C0D38:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D44u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C0D44u) [[unlikely]] return; }
L_001C0D44:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D54u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0D54u) [[unlikely]] return; }
L_001C0D54:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D60u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0D60u) [[unlikely]] return; }
L_001C0D60:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D6Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0D6Cu) [[unlikely]] return; }
L_001C0D6C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D78u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0D78u) [[unlikely]] return; }
L_001C0D78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D84u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0D84u) [[unlikely]] return; }
L_001C0D84:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0D90u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C0D90u) [[unlikely]] return; }
L_001C0D90:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0DA0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0DA0u) [[unlikely]] return; }
L_001C0DA0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0DACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0DACu) [[unlikely]] return; }
L_001C0DAC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0DB8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0DB8u) [[unlikely]] return; }
L_001C0DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0DC0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0DC0u) [[unlikely]] return; }
L_001C0DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0DC8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0DC8u) [[unlikely]] return; }
L_001C0DC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C0DF0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0E1Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C0E1Cu) [[unlikely]] return; }
L_001C0E1C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0E44u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0E44u) [[unlikely]] return; }
L_001C0E44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0E4Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0E4Cu) [[unlikely]] return; }
L_001C0E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0E54u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0E54u) [[unlikely]] return; }
L_001C0E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0E5Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0E5Cu) [[unlikely]] return; }
L_001C0E5C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0E68u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0E68u) [[unlikely]] return; }
L_001C0E68:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0E74u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C0E74u) [[unlikely]] return; }
L_001C0E74:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0E84u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0E84u) [[unlikely]] return; }
L_001C0E84:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0E90u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0E90u) [[unlikely]] return; }
L_001C0E90:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0E9Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0E9Cu) [[unlikely]] return; }
L_001C0E9C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0EA8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0EA8u) [[unlikely]] return; }
L_001C0EA8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0EB4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0EB4u) [[unlikely]] return; }
L_001C0EB4:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0EC8u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0EC8u) [[unlikely]] return; }
L_001C0EC8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0ED4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0ED4u) [[unlikely]] return; }
L_001C0ED4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0EE0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0EE0u) [[unlikely]] return; }
L_001C0EE0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0EECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0EECu) [[unlikely]] return; }
L_001C0EEC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0EF8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0EF8u) [[unlikely]] return; }
L_001C0EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0F00u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C0F00u) [[unlikely]] return; }
L_001C0F00:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0F10u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0F10u) [[unlikely]] return; }
L_001C0F10:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0F1Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0F1Cu) [[unlikely]] return; }
L_001C0F1C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0F28u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0F28u) [[unlikely]] return; }
L_001C0F28:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0F34u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0F34u) [[unlikely]] return; }
L_001C0F34:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0F40u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0F40u) [[unlikely]] return; }
L_001C0F40:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0F54u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0F54u) [[unlikely]] return; }
L_001C0F54:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0F60u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0F60u) [[unlikely]] return; }
L_001C0F60:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0F6Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0F6Cu) [[unlikely]] return; }
L_001C0F6C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0F78u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0F78u) [[unlikely]] return; }
L_001C0F78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0F84u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0F84u) [[unlikely]] return; }
L_001C0F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0F8Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C0F8Cu) [[unlikely]] return; }
L_001C0F8C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0F9Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0F9Cu) [[unlikely]] return; }
L_001C0F9C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0FA8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0FA8u) [[unlikely]] return; }
L_001C0FA8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0FB4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0FB4u) [[unlikely]] return; }
L_001C0FB4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0FC0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C0FC0u) [[unlikely]] return; }
L_001C0FC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0FCCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C0FCCu) [[unlikely]] return; }
L_001C0FCC:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0FE0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C0FE0u) [[unlikely]] return; }
L_001C0FE0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0FECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C0FECu) [[unlikely]] return; }
L_001C0FEC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001C0FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0FF8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C0FF8u) [[unlikely]] return; }
L_001C0FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1000u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1000u) [[unlikely]] return; }
L_001C1000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1008u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1008u) [[unlikely]] return; }
L_001C1008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C1030:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C105Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C105Cu) [[unlikely]] return; }
L_001C105C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1084u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1084u) [[unlikely]] return; }
L_001C1084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C108Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C108Cu) [[unlikely]] return; }
L_001C108C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1094u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1094u) [[unlikely]] return; }
L_001C1094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C109Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C109Cu) [[unlikely]] return; }
L_001C109C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C10A8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C10A8u) [[unlikely]] return; }
L_001C10A8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C10B4u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C10B4u) [[unlikely]] return; }
L_001C10B4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C10C4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C10C4u) [[unlikely]] return; }
L_001C10C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C10D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C10D0u) [[unlikely]] return; }
L_001C10D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C10DCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C10DCu) [[unlikely]] return; }
L_001C10DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C10E8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C10E8u) [[unlikely]] return; }
L_001C10E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C10F4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C10F4u) [[unlikely]] return; }
L_001C10F4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1100u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1100u) [[unlikely]] return; }
L_001C1100:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1110u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1110u) [[unlikely]] return; }
L_001C1110:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C111Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C111Cu) [[unlikely]] return; }
L_001C111C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1128u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1128u) [[unlikely]] return; }
L_001C1128:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1134u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1134u) [[unlikely]] return; }
L_001C1134:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1140u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1140u) [[unlikely]] return; }
L_001C1140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1148u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C1148u) [[unlikely]] return; }
L_001C1148:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1158u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1158u) [[unlikely]] return; }
L_001C1158:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1164u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1164u) [[unlikely]] return; }
L_001C1164:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1170u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1170u) [[unlikely]] return; }
L_001C1170:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C117Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C117Cu) [[unlikely]] return; }
L_001C117C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1188u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1188u) [[unlikely]] return; }
L_001C1188:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1194u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C1194u) [[unlikely]] return; }
L_001C1194:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C11A4u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C11A4u) [[unlikely]] return; }
L_001C11A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C11B0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C11B0u) [[unlikely]] return; }
L_001C11B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C11BCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C11BCu) [[unlikely]] return; }
L_001C11BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C11C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C11C8u) [[unlikely]] return; }
L_001C11C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C11D4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C11D4u) [[unlikely]] return; }
L_001C11D4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C11E4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C11E4u) [[unlikely]] return; }
L_001C11E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C11F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C11F0u) [[unlikely]] return; }
L_001C11F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C11FCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C11FCu) [[unlikely]] return; }
L_001C11FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1208u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1208u) [[unlikely]] return; }
L_001C1208:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1214u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1214u) [[unlikely]] return; }
L_001C1214:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1220u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C1220u) [[unlikely]] return; }
L_001C1220:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1230u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1230u) [[unlikely]] return; }
L_001C1230:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C123Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C123Cu) [[unlikely]] return; }
L_001C123C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1248u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1248u) [[unlikely]] return; }
L_001C1248:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1254u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1254u) [[unlikely]] return; }
L_001C1254:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1260u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1260u) [[unlikely]] return; }
L_001C1260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1268u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C1268u) [[unlikely]] return; }
L_001C1268:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1278u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1278u) [[unlikely]] return; }
L_001C1278:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1284u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1284u) [[unlikely]] return; }
L_001C1284:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1290u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1290u) [[unlikely]] return; }
L_001C1290:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C129Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C129Cu) [[unlikely]] return; }
L_001C129C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C12A8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C12A8u) [[unlikely]] return; }
L_001C12A8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C12B4u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C12B4u) [[unlikely]] return; }
L_001C12B4:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 1;
L_001C12B8:
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C12C4u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C12C4u) [[unlikely]] return; }
L_001C12C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C12D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C12D0u) [[unlikely]] return; }
L_001C12D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C12DCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C12DCu) [[unlikely]] return; }
L_001C12DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C12E8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C12E8u) [[unlikely]] return; }
L_001C12E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C12F4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C12F4u) [[unlikely]] return; }
L_001C12F4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1304u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1304u) [[unlikely]] return; }
L_001C1304:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1310u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1310u) [[unlikely]] return; }
L_001C1310:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C131Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C131Cu) [[unlikely]] return; }
L_001C131C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1324u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1324u) [[unlikely]] return; }
L_001C1324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C132Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C132Cu) [[unlikely]] return; }
L_001C132C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C1350:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C137Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C137Cu) [[unlikely]] return; }
L_001C137C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C13A4u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C13A4u) [[unlikely]] return; }
L_001C13A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C13ACu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C13ACu) [[unlikely]] return; }
L_001C13AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C13B4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C13B4u) [[unlikely]] return; }
L_001C13B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C13BCu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C13BCu) [[unlikely]] return; }
L_001C13BC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C13C8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C13C8u) [[unlikely]] return; }
L_001C13C8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C13D4u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C13D4u) [[unlikely]] return; }
L_001C13D4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C13E4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C13E4u) [[unlikely]] return; }
L_001C13E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C13F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C13F0u) [[unlikely]] return; }
L_001C13F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C13FCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C13FCu) [[unlikely]] return; }
L_001C13FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1408u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1408u) [[unlikely]] return; }
    goto L_001C1408;
L_001C1404:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_001C1408:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1414u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1414u) [[unlikely]] return; }
L_001C1414:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1428u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1428u) [[unlikely]] return; }
L_001C1428:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1434u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1434u) [[unlikely]] return; }
L_001C1434:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1440u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1440u) [[unlikely]] return; }
L_001C1440:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C144Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C144Cu) [[unlikely]] return; }
L_001C144C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1458u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1458u) [[unlikely]] return; }
L_001C1458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1460u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1460u) [[unlikely]] return; }
L_001C1460:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1470u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1470u) [[unlikely]] return; }
L_001C1470:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C147Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C147Cu) [[unlikely]] return; }
L_001C147C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1488u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1488u) [[unlikely]] return; }
L_001C1488:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1494u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1494u) [[unlikely]] return; }
L_001C1494:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C14A0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C14A0u) [[unlikely]] return; }
L_001C14A0:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C14B4u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C14B4u) [[unlikely]] return; }
L_001C14B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C14C0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C14C0u) [[unlikely]] return; }
L_001C14C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C14CCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C14CCu) [[unlikely]] return; }
L_001C14CC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C14D8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C14D8u) [[unlikely]] return; }
L_001C14D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C14E4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C14E4u) [[unlikely]] return; }
L_001C14E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C14ECu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C14ECu) [[unlikely]] return; }
L_001C14EC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C14FCu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C14FCu) [[unlikely]] return; }
L_001C14FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1508u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1508u) [[unlikely]] return; }
L_001C1508:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1514u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1514u) [[unlikely]] return; }
L_001C1514:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1520u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1520u) [[unlikely]] return; }
L_001C1520:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C152Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C152Cu) [[unlikely]] return; }
L_001C152C:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1540u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1540u) [[unlikely]] return; }
L_001C1540:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C154Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C154Cu) [[unlikely]] return; }
L_001C154C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1558u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1558u) [[unlikely]] return; }
L_001C1558:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1564u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1564u) [[unlikely]] return; }
L_001C1564:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1570u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1570u) [[unlikely]] return; }
L_001C1570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1578u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1578u) [[unlikely]] return; }
L_001C1578:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1588u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1588u) [[unlikely]] return; }
L_001C1588:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1594u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1594u) [[unlikely]] return; }
L_001C1594:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C15A0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C15A0u) [[unlikely]] return; }
L_001C15A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C15ACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C15ACu) [[unlikely]] return; }
L_001C15AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C15B8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C15B8u) [[unlikely]] return; }
L_001C15B8:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C15CCu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C15CCu) [[unlikely]] return; }
L_001C15CC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C15D8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C15D8u) [[unlikely]] return; }
L_001C15D8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C15E4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C15E4u) [[unlikely]] return; }
L_001C15E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C15F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C15F0u) [[unlikely]] return; }
L_001C15F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C15FCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C15FCu) [[unlikely]] return; }
L_001C15FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1604u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1604u) [[unlikely]] return; }
L_001C1604:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1614u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1614u) [[unlikely]] return; }
L_001C1614:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1620u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1620u) [[unlikely]] return; }
L_001C1620:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C162Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C162Cu) [[unlikely]] return; }
L_001C162C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1638u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1638u) [[unlikely]] return; }
L_001C1638:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1644u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1644u) [[unlikely]] return; }
L_001C1644:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1658u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1658u) [[unlikely]] return; }
L_001C1658:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1664u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1664u) [[unlikely]] return; }
L_001C1664:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1670u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1670u) [[unlikely]] return; }
L_001C1670:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C167Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C167Cu) [[unlikely]] return; }
L_001C167C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1688u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1688u) [[unlikely]] return; }
L_001C1688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1690u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1690u) [[unlikely]] return; }
L_001C1690:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C16A0u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C16A0u) [[unlikely]] return; }
L_001C16A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C16ACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C16ACu) [[unlikely]] return; }
L_001C16AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C16B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C16B8u) [[unlikely]] return; }
L_001C16B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C16C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C16C4u) [[unlikely]] return; }
L_001C16C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C16D0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C16D0u) [[unlikely]] return; }
L_001C16D0:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C16E4u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C16E4u) [[unlikely]] return; }
L_001C16E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C16F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C16F0u) [[unlikely]] return; }
L_001C16F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C16FCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C16FCu) [[unlikely]] return; }
L_001C16FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1708u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1708u) [[unlikely]] return; }
L_001C1708:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1714u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1714u) [[unlikely]] return; }
L_001C1714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C171Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C171Cu) [[unlikely]] return; }
L_001C171C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C172Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C172Cu) [[unlikely]] return; }
L_001C172C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1738u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1738u) [[unlikely]] return; }
L_001C1738:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1744u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1744u) [[unlikely]] return; }
L_001C1744:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1750u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1750u) [[unlikely]] return; }
L_001C1750:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C175Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C175Cu) [[unlikely]] return; }
L_001C175C:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1770u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1770u) [[unlikely]] return; }
L_001C1770:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C177Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C177Cu) [[unlikely]] return; }
L_001C177C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1788u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1788u) [[unlikely]] return; }
L_001C1788:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1794u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1794u) [[unlikely]] return; }
L_001C1794:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C17A0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C17A0u) [[unlikely]] return; }
L_001C17A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C17A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C17A8u) [[unlikely]] return; }
L_001C17A8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C17B8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C17B8u) [[unlikely]] return; }
L_001C17B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C17C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C17C4u) [[unlikely]] return; }
L_001C17C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C17D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C17D0u) [[unlikely]] return; }
L_001C17D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C17DCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C17DCu) [[unlikely]] return; }
L_001C17DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C17E8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C17E8u) [[unlikely]] return; }
L_001C17E8:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C17FCu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C17FCu) [[unlikely]] return; }
L_001C17FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1808u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1808u) [[unlikely]] return; }
L_001C1808:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1814u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1814u) [[unlikely]] return; }
L_001C1814:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1820u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1820u) [[unlikely]] return; }
L_001C1820:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C182Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C182Cu) [[unlikely]] return; }
L_001C182C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1834u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1834u) [[unlikely]] return; }
L_001C1834:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1844u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1844u) [[unlikely]] return; }
L_001C1844:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1850u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1850u) [[unlikely]] return; }
L_001C1850:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C185Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C185Cu) [[unlikely]] return; }
L_001C185C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1868u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1868u) [[unlikely]] return; }
L_001C1868:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1874u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1874u) [[unlikely]] return; }
L_001C1874:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1888u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1888u) [[unlikely]] return; }
L_001C1888:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1894u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1894u) [[unlikely]] return; }
L_001C1894:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C18A0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C18A0u) [[unlikely]] return; }
L_001C18A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C18ACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C18ACu) [[unlikely]] return; }
L_001C18AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C18B8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C18B8u) [[unlikely]] return; }
L_001C18B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C18C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C18C0u) [[unlikely]] return; }
L_001C18C0:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C18D0u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C18D0u) [[unlikely]] return; }
L_001C18D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C18DCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C18DCu) [[unlikely]] return; }
L_001C18DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C18E8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C18E8u) [[unlikely]] return; }
L_001C18E8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C18F4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C18F4u) [[unlikely]] return; }
L_001C18F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1900u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1900u) [[unlikely]] return; }
L_001C1900:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C190Cu); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C190Cu) [[unlikely]] return; }
L_001C190C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C191Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C191Cu) [[unlikely]] return; }
L_001C191C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1928u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1928u) [[unlikely]] return; }
L_001C1928:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1934u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1934u) [[unlikely]] return; }
L_001C1934:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1940u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1940u) [[unlikely]] return; }
L_001C1940:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C194Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C194Cu) [[unlikely]] return; }
L_001C194C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1954u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1954u) [[unlikely]] return; }
L_001C1954:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1964u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1964u) [[unlikely]] return; }
L_001C1964:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1970u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1970u) [[unlikely]] return; }
L_001C1970:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C197Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C197Cu) [[unlikely]] return; }
L_001C197C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1988u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1988u) [[unlikely]] return; }
L_001C1988:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1994u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1994u) [[unlikely]] return; }
L_001C1994:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C1998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C19A0u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C19A0u) [[unlikely]] return; }
L_001C19A0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C19B0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C19B0u) [[unlikely]] return; }
L_001C19B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C19BCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C19BCu) [[unlikely]] return; }
L_001C19BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C19C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C19C8u) [[unlikely]] return; }
    goto L_001C19C8;
L_001C19C4:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_001C19C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C19D4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C19D4u) [[unlikely]] return; }
L_001C19D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C19E0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C19E0u) [[unlikely]] return; }
L_001C19E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C19E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C19E8u) [[unlikely]] return; }
L_001C19E8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C19F8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C19F8u) [[unlikely]] return; }
L_001C19F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A04u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1A04u) [[unlikely]] return; }
L_001C1A04:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A10u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1A10u) [[unlikely]] return; }
L_001C1A10:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A1Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1A1Cu) [[unlikely]] return; }
L_001C1A1C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A28u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1A28u) [[unlikely]] return; }
L_001C1A28:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A34u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1A34u) [[unlikely]] return; }
L_001C1A34:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A44u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1A44u) [[unlikely]] return; }
L_001C1A44:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A50u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1A50u) [[unlikely]] return; }
L_001C1A50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A5Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1A5Cu) [[unlikely]] return; }
L_001C1A5C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A68u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1A68u) [[unlikely]] return; }
L_001C1A68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A74u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1A74u) [[unlikely]] return; }
L_001C1A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A7Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1A7Cu) [[unlikely]] return; }
L_001C1A7C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A8Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1A8Cu) [[unlikely]] return; }
L_001C1A8C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A98u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1A98u) [[unlikely]] return; }
L_001C1A98:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1AA4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1AA4u) [[unlikely]] return; }
L_001C1AA4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1AB0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1AB0u) [[unlikely]] return; }
L_001C1AB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1ABCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1ABCu) [[unlikely]] return; }
L_001C1ABC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1AC8u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1AC8u) [[unlikely]] return; }
L_001C1AC8:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1AD8u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1AD8u) [[unlikely]] return; }
L_001C1AD8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1AE4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1AE4u) [[unlikely]] return; }
L_001C1AE4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1AF0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1AF0u) [[unlikely]] return; }
L_001C1AF0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1AFCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1AFCu) [[unlikely]] return; }
L_001C1AFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1B08u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1B08u) [[unlikely]] return; }
L_001C1B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1B10u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1B10u) [[unlikely]] return; }
L_001C1B10:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1B20u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1B20u) [[unlikely]] return; }
L_001C1B20:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1B2Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1B2Cu) [[unlikely]] return; }
L_001C1B2C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1B38u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1B38u) [[unlikely]] return; }
L_001C1B38:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1B44u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1B44u) [[unlikely]] return; }
L_001C1B44:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1B50u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1B50u) [[unlikely]] return; }
L_001C1B50:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1B5Cu); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1B5Cu) [[unlikely]] return; }
L_001C1B5C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1B6Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1B6Cu) [[unlikely]] return; }
L_001C1B6C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1B78u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1B78u) [[unlikely]] return; }
L_001C1B78:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1B84u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1B84u) [[unlikely]] return; }
L_001C1B84:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1B90u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1B90u) [[unlikely]] return; }
L_001C1B90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1B9Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1B9Cu) [[unlikely]] return; }
L_001C1B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1BA4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1BA4u) [[unlikely]] return; }
L_001C1BA4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1BB4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1BB4u) [[unlikely]] return; }
L_001C1BB4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1BC0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1BC0u) [[unlikely]] return; }
L_001C1BC0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1BCCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1BCCu) [[unlikely]] return; }
L_001C1BCC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1BD8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1BD8u) [[unlikely]] return; }
L_001C1BD8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1BE4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1BE4u) [[unlikely]] return; }
L_001C1BE4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1BF0u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1BF0u) [[unlikely]] return; }
L_001C1BF0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C00u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1C00u) [[unlikely]] return; }
L_001C1C00:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C0Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1C0Cu) [[unlikely]] return; }
L_001C1C0C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C18u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1C18u) [[unlikely]] return; }
L_001C1C18:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C24u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1C24u) [[unlikely]] return; }
L_001C1C24:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C30u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1C30u) [[unlikely]] return; }
L_001C1C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C38u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C1C38u) [[unlikely]] return; }
L_001C1C38:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C48u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1C48u) [[unlikely]] return; }
L_001C1C48:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C54u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1C54u) [[unlikely]] return; }
L_001C1C54:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C60u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1C60u) [[unlikely]] return; }
L_001C1C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C68u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1C68u) [[unlikely]] return; }
L_001C1C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1C70u) [[unlikely]] return; }
L_001C1C70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C1C90:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1CBCu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C1CBCu) [[unlikely]] return; }
L_001C1CBC:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1CE4u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1CE4u) [[unlikely]] return; }
L_001C1CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1CECu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1CECu) [[unlikely]] return; }
L_001C1CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1CF4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1CF4u) [[unlikely]] return; }
L_001C1CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1CFCu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1CFCu) [[unlikely]] return; }
L_001C1CFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1D08u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1D08u) [[unlikely]] return; }
L_001C1D08:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1D14u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C1D14u) [[unlikely]] return; }
L_001C1D14:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1D24u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1D24u) [[unlikely]] return; }
L_001C1D24:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1D30u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1D30u) [[unlikely]] return; }
L_001C1D30:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1D3Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1D3Cu) [[unlikely]] return; }
L_001C1D3C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1D48u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1D48u) [[unlikely]] return; }
L_001C1D48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1D54u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1D54u) [[unlikely]] return; }
L_001C1D54:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1D60u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1D60u) [[unlikely]] return; }
L_001C1D60:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1D70u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1D70u) [[unlikely]] return; }
L_001C1D70:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1D7Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1D7Cu) [[unlikely]] return; }
L_001C1D7C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1D88u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1D88u) [[unlikely]] return; }
L_001C1D88:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1D94u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1D94u) [[unlikely]] return; }
L_001C1D94:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1DA0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1DA0u) [[unlikely]] return; }
L_001C1DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1DA8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1DA8u) [[unlikely]] return; }
L_001C1DA8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1DB8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1DB8u) [[unlikely]] return; }
L_001C1DB8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1DC4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1DC4u) [[unlikely]] return; }
L_001C1DC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1DD0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1DD0u) [[unlikely]] return; }
L_001C1DD0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1DDCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1DDCu) [[unlikely]] return; }
L_001C1DDC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1DE8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1DE8u) [[unlikely]] return; }
L_001C1DE8:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1DFCu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1DFCu) [[unlikely]] return; }
L_001C1DFC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1E08u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1E08u) [[unlikely]] return; }
L_001C1E08:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1E14u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1E14u) [[unlikely]] return; }
L_001C1E14:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1E20u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1E20u) [[unlikely]] return; }
L_001C1E20:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1E2Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1E2Cu) [[unlikely]] return; }
L_001C1E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1E34u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1E34u) [[unlikely]] return; }
L_001C1E34:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1E44u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1E44u) [[unlikely]] return; }
L_001C1E44:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1E50u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1E50u) [[unlikely]] return; }
L_001C1E50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1E5Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1E5Cu) [[unlikely]] return; }
L_001C1E5C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1E68u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1E68u) [[unlikely]] return; }
L_001C1E68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1E74u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1E74u) [[unlikely]] return; }
L_001C1E74:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1E88u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1E88u) [[unlikely]] return; }
L_001C1E88:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1E94u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1E94u) [[unlikely]] return; }
L_001C1E94:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1EA0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1EA0u) [[unlikely]] return; }
L_001C1EA0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1EACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1EACu) [[unlikely]] return; }
L_001C1EAC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1EB8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1EB8u) [[unlikely]] return; }
L_001C1EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1EC0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1EC0u) [[unlikely]] return; }
L_001C1EC0:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1ED0u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1ED0u) [[unlikely]] return; }
L_001C1ED0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1EDCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1EDCu) [[unlikely]] return; }
L_001C1EDC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1EE8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1EE8u) [[unlikely]] return; }
L_001C1EE8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1EF4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1EF4u) [[unlikely]] return; }
L_001C1EF4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1F00u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1F00u) [[unlikely]] return; }
L_001C1F00:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1F14u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1F14u) [[unlikely]] return; }
L_001C1F14:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1F20u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1F20u) [[unlikely]] return; }
L_001C1F20:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1F2Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1F2Cu) [[unlikely]] return; }
L_001C1F2C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1F38u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1F38u) [[unlikely]] return; }
L_001C1F38:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1F44u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1F44u) [[unlikely]] return; }
L_001C1F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1F4Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1F4Cu) [[unlikely]] return; }
L_001C1F4C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1F5Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1F5Cu) [[unlikely]] return; }
L_001C1F5C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1F68u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1F68u) [[unlikely]] return; }
L_001C1F68:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1F74u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1F74u) [[unlikely]] return; }
L_001C1F74:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1F80u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1F80u) [[unlikely]] return; }
L_001C1F80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1F8Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1F8Cu) [[unlikely]] return; }
L_001C1F8C:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1FA0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1FA0u) [[unlikely]] return; }
L_001C1FA0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1FACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1FACu) [[unlikely]] return; }
L_001C1FAC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1FB8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C1FB8u) [[unlikely]] return; }
L_001C1FB8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1FC4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C1FC4u) [[unlikely]] return; }
L_001C1FC4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1FD0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C1FD0u) [[unlikely]] return; }
L_001C1FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1FD8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C1FD8u) [[unlikely]] return; }
L_001C1FD8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1FE8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C1FE8u) [[unlikely]] return; }
L_001C1FE8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1FF4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C1FF4u) [[unlikely]] return; }
L_001C1FF4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2000u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2000u) [[unlikely]] return; }
L_001C2000:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C200Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C200Cu) [[unlikely]] return; }
L_001C200C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2018u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2018u) [[unlikely]] return; }
L_001C2018:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C202Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C202Cu) [[unlikely]] return; }
L_001C202C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001C2030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2038u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2038u) [[unlikely]] return; }
L_001C2038:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2044u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2044u) [[unlikely]] return; }
L_001C2044:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2050u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2050u) [[unlikely]] return; }
L_001C2050:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C205Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C205Cu) [[unlikely]] return; }
L_001C205C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2064u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2064u) [[unlikely]] return; }
L_001C2064:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2074u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2074u) [[unlikely]] return; }
L_001C2074:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2080u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2080u) [[unlikely]] return; }
L_001C2080:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C208Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C208Cu) [[unlikely]] return; }
L_001C208C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2098u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2098u) [[unlikely]] return; }
L_001C2098:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C20A4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C20A4u) [[unlikely]] return; }
L_001C20A4:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C20B8u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C20B8u) [[unlikely]] return; }
L_001C20B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C20C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C20C4u) [[unlikely]] return; }
L_001C20C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C20D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C20D0u) [[unlikely]] return; }
L_001C20D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C20DCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C20DCu) [[unlikely]] return; }
L_001C20DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C20E8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C20E8u) [[unlikely]] return; }
    goto L_001C20E8;
L_001C20E4:
    set32(c.r[18], c.r[4].w[0] + 64u);
    c.budget -= 1;
L_001C20E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C20F0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C20F0u) [[unlikely]] return; }
L_001C20F0:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2100u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2100u) [[unlikely]] return; }
L_001C2100:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C210Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C210Cu) [[unlikely]] return; }
L_001C210C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2118u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2118u) [[unlikely]] return; }
L_001C2118:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2124u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2124u) [[unlikely]] return; }
L_001C2124:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2130u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2130u) [[unlikely]] return; }
L_001C2130:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2144u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2144u) [[unlikely]] return; }
L_001C2144:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2150u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2150u) [[unlikely]] return; }
L_001C2150:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C215Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C215Cu) [[unlikely]] return; }
L_001C215C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2168u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2168u) [[unlikely]] return; }
L_001C2168:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2174u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2174u) [[unlikely]] return; }
L_001C2174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C217Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C217Cu) [[unlikely]] return; }
L_001C217C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C218Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C218Cu) [[unlikely]] return; }
L_001C218C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2198u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2198u) [[unlikely]] return; }
L_001C2198:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C21A4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C21A4u) [[unlikely]] return; }
L_001C21A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C21B0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C21B0u) [[unlikely]] return; }
L_001C21B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C21BCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C21BCu) [[unlikely]] return; }
L_001C21BC:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C21D0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C21D0u) [[unlikely]] return; }
L_001C21D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C21DCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C21DCu) [[unlikely]] return; }
L_001C21DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C21E8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C21E8u) [[unlikely]] return; }
L_001C21E8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C21F4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C21F4u) [[unlikely]] return; }
L_001C21F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2200u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2200u) [[unlikely]] return; }
L_001C2200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2208u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2208u) [[unlikely]] return; }
L_001C2208:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2218u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2218u) [[unlikely]] return; }
L_001C2218:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2224u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2224u) [[unlikely]] return; }
L_001C2224:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2230u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2230u) [[unlikely]] return; }
L_001C2230:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C223Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C223Cu) [[unlikely]] return; }
L_001C223C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2248u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2248u) [[unlikely]] return; }
L_001C2248:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C225Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C225Cu) [[unlikely]] return; }
L_001C225C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2268u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2268u) [[unlikely]] return; }
L_001C2268:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2274u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2274u) [[unlikely]] return; }
L_001C2274:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2280u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2280u) [[unlikely]] return; }
L_001C2280:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C228Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C228Cu) [[unlikely]] return; }
L_001C228C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2294u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C2294u) [[unlikely]] return; }
L_001C2294:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C22A4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C22A4u) [[unlikely]] return; }
L_001C22A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C22B0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C22B0u) [[unlikely]] return; }
L_001C22B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C22BCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C22BCu) [[unlikely]] return; }
L_001C22BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C22C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C22C8u) [[unlikely]] return; }
L_001C22C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C22D4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C22D4u) [[unlikely]] return; }
L_001C22D4:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C22E8u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C22E8u) [[unlikely]] return; }
L_001C22E8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C22F4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C22F4u) [[unlikely]] return; }
L_001C22F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2300u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2300u) [[unlikely]] return; }
L_001C2300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2308u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2308u) [[unlikely]] return; }
L_001C2308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2310u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2310u) [[unlikely]] return; }
L_001C2310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C2330:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C235Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C235Cu) [[unlikely]] return; }
L_001C235C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2384u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2384u) [[unlikely]] return; }
L_001C2384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C238Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C238Cu) [[unlikely]] return; }
L_001C238C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2394u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2394u) [[unlikely]] return; }
L_001C2394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C239Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C239Cu) [[unlikely]] return; }
L_001C239C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C23A8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C23A8u) [[unlikely]] return; }
L_001C23A8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C23B4u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C23B4u) [[unlikely]] return; }
L_001C23B4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C23C4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C23C4u) [[unlikely]] return; }
L_001C23C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C23D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C23D0u) [[unlikely]] return; }
L_001C23D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C23DCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C23DCu) [[unlikely]] return; }
L_001C23DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C23E8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C23E8u) [[unlikely]] return; }
L_001C23E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C23F4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C23F4u) [[unlikely]] return; }
L_001C23F4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2400u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2400u) [[unlikely]] return; }
L_001C2400:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2410u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2410u) [[unlikely]] return; }
L_001C2410:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C241Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C241Cu) [[unlikely]] return; }
L_001C241C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2428u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2428u) [[unlikely]] return; }
L_001C2428:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2434u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2434u) [[unlikely]] return; }
L_001C2434:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2440u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2440u) [[unlikely]] return; }
L_001C2440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2448u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2448u) [[unlikely]] return; }
L_001C2448:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2458u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2458u) [[unlikely]] return; }
L_001C2458:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2464u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2464u) [[unlikely]] return; }
L_001C2464:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2470u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2470u) [[unlikely]] return; }
L_001C2470:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C247Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C247Cu) [[unlikely]] return; }
L_001C247C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2488u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2488u) [[unlikely]] return; }
L_001C2488:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2494u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2494u) [[unlikely]] return; }
L_001C2494:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C24A4u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C24A4u) [[unlikely]] return; }
L_001C24A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C24B0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C24B0u) [[unlikely]] return; }
L_001C24B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C24BCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C24BCu) [[unlikely]] return; }
L_001C24BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C24C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C24C8u) [[unlikely]] return; }
L_001C24C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C24D4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C24D4u) [[unlikely]] return; }
L_001C24D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C24DCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C24DCu) [[unlikely]] return; }
L_001C24DC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C24ECu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C24ECu) [[unlikely]] return; }
L_001C24EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C24F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C24F8u) [[unlikely]] return; }
L_001C24F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2504u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2504u) [[unlikely]] return; }
L_001C2504:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2510u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2510u) [[unlikely]] return; }
L_001C2510:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C251Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C251Cu) [[unlikely]] return; }
L_001C251C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2528u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2528u) [[unlikely]] return; }
L_001C2528:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2538u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2538u) [[unlikely]] return; }
L_001C2538:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2544u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2544u) [[unlikely]] return; }
L_001C2544:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2550u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2550u) [[unlikely]] return; }
L_001C2550:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C255Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C255Cu) [[unlikely]] return; }
L_001C255C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2568u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2568u) [[unlikely]] return; }
L_001C2568:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2578u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2578u) [[unlikely]] return; }
L_001C2578:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2584u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2584u) [[unlikely]] return; }
L_001C2584:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2590u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2590u) [[unlikely]] return; }
L_001C2590:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C259Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C259Cu) [[unlikely]] return; }
L_001C259C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C25A8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C25A8u) [[unlikely]] return; }
L_001C25A8:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C25BCu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C25BCu) [[unlikely]] return; }
L_001C25BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C25C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C25C8u) [[unlikely]] return; }
L_001C25C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C25D4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C25D4u) [[unlikely]] return; }
L_001C25D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C25E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C25E0u) [[unlikely]] return; }
L_001C25E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C25ECu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C25ECu) [[unlikely]] return; }
L_001C25EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C25F4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C25F4u) [[unlikely]] return; }
L_001C25F4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2604u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2604u) [[unlikely]] return; }
L_001C2604:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2610u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2610u) [[unlikely]] return; }
L_001C2610:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C261Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C261Cu) [[unlikely]] return; }
L_001C261C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2628u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2628u) [[unlikely]] return; }
L_001C2628:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2634u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2634u) [[unlikely]] return; }
L_001C2634:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2648u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2648u) [[unlikely]] return; }
L_001C2648:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2654u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2654u) [[unlikely]] return; }
L_001C2654:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2660u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2660u) [[unlikely]] return; }
L_001C2660:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C266Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C266Cu) [[unlikely]] return; }
L_001C266C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2678u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2678u) [[unlikely]] return; }
L_001C2678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2680u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2680u) [[unlikely]] return; }
L_001C2680:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2690u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2690u) [[unlikely]] return; }
L_001C2690:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C269Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C269Cu) [[unlikely]] return; }
L_001C269C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C26A8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C26A8u) [[unlikely]] return; }
L_001C26A8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C26B4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C26B4u) [[unlikely]] return; }
L_001C26B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C26C0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C26C0u) [[unlikely]] return; }
L_001C26C0:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C26D4u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C26D4u) [[unlikely]] return; }
L_001C26D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C26E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C26E0u) [[unlikely]] return; }
L_001C26E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C26ECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C26ECu) [[unlikely]] return; }
L_001C26EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C26F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C26F8u) [[unlikely]] return; }
L_001C26F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2704u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2704u) [[unlikely]] return; }
L_001C2704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C270Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C270Cu) [[unlikely]] return; }
L_001C270C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C271Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C271Cu) [[unlikely]] return; }
L_001C271C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2728u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2728u) [[unlikely]] return; }
L_001C2728:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2734u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2734u) [[unlikely]] return; }
L_001C2734:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2740u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2740u) [[unlikely]] return; }
L_001C2740:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C274Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C274Cu) [[unlikely]] return; }
L_001C274C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2758u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2758u) [[unlikely]] return; }
L_001C2758:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2768u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2768u) [[unlikely]] return; }
L_001C2768:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2774u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2774u) [[unlikely]] return; }
L_001C2774:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2780u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2780u) [[unlikely]] return; }
L_001C2780:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C278Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C278Cu) [[unlikely]] return; }
L_001C278C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2798u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2798u) [[unlikely]] return; }
L_001C2798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C27A0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C27A0u) [[unlikely]] return; }
L_001C27A0:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C27B0u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C27B0u) [[unlikely]] return; }
L_001C27B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C27BCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C27BCu) [[unlikely]] return; }
L_001C27BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C27C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C27C8u) [[unlikely]] return; }
L_001C27C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C27D4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C27D4u) [[unlikely]] return; }
L_001C27D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C27E0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C27E0u) [[unlikely]] return; }
L_001C27E0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C27ECu); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C27ECu) [[unlikely]] return; }
L_001C27EC:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C27FCu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C27FCu) [[unlikely]] return; }
L_001C27FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2808u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2808u) [[unlikely]] return; }
L_001C2808:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2814u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2814u) [[unlikely]] return; }
L_001C2814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C281Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C281Cu) [[unlikely]] return; }
L_001C281C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2824u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2824u) [[unlikely]] return; }
L_001C2824:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C2840:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C286Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C286Cu) [[unlikely]] return; }
L_001C286C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2894u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2894u) [[unlikely]] return; }
L_001C2894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C289Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C289Cu) [[unlikely]] return; }
L_001C289C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C28A4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C28A4u) [[unlikely]] return; }
L_001C28A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C28ACu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C28ACu) [[unlikely]] return; }
L_001C28AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C28B8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C28B8u) [[unlikely]] return; }
L_001C28B8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C28C4u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C28C4u) [[unlikely]] return; }
L_001C28C4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C28D4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C28D4u) [[unlikely]] return; }
L_001C28D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C28E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C28E0u) [[unlikely]] return; }
L_001C28E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C28ECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C28ECu) [[unlikely]] return; }
L_001C28EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C28F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C28F8u) [[unlikely]] return; }
L_001C28F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2904u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2904u) [[unlikely]] return; }
L_001C2904:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2910u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2910u) [[unlikely]] return; }
L_001C2910:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2920u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2920u) [[unlikely]] return; }
L_001C2920:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C292Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C292Cu) [[unlikely]] return; }
L_001C292C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2938u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2938u) [[unlikely]] return; }
L_001C2938:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2944u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2944u) [[unlikely]] return; }
L_001C2944:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2950u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2950u) [[unlikely]] return; }
L_001C2950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2958u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2958u) [[unlikely]] return; }
L_001C2958:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2968u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2968u) [[unlikely]] return; }
L_001C2968:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2974u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2974u) [[unlikely]] return; }
L_001C2974:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2980u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2980u) [[unlikely]] return; }
L_001C2980:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C298Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C298Cu) [[unlikely]] return; }
L_001C298C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2998u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2998u) [[unlikely]] return; }
L_001C2998:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C29ACu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C29ACu) [[unlikely]] return; }
L_001C29AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C29B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C29B8u) [[unlikely]] return; }
L_001C29B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C29C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C29C4u) [[unlikely]] return; }
L_001C29C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C29D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C29D0u) [[unlikely]] return; }
L_001C29D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C29DCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C29DCu) [[unlikely]] return; }
L_001C29DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C29E4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C29E4u) [[unlikely]] return; }
L_001C29E4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C29F4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C29F4u) [[unlikely]] return; }
L_001C29F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A00u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2A00u) [[unlikely]] return; }
L_001C2A00:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A0Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2A0Cu) [[unlikely]] return; }
L_001C2A0C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A18u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2A18u) [[unlikely]] return; }
L_001C2A18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A24u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2A24u) [[unlikely]] return; }
L_001C2A24:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A38u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2A38u) [[unlikely]] return; }
L_001C2A38:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A44u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2A44u) [[unlikely]] return; }
L_001C2A44:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A50u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2A50u) [[unlikely]] return; }
L_001C2A50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A5Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2A5Cu) [[unlikely]] return; }
L_001C2A5C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A68u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2A68u) [[unlikely]] return; }
L_001C2A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A70u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2A70u) [[unlikely]] return; }
L_001C2A70:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A80u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2A80u) [[unlikely]] return; }
L_001C2A80:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A8Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2A8Cu) [[unlikely]] return; }
L_001C2A8C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A98u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2A98u) [[unlikely]] return; }
L_001C2A98:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2AA4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2AA4u) [[unlikely]] return; }
L_001C2AA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2AB0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2AB0u) [[unlikely]] return; }
L_001C2AB0:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2AC4u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2AC4u) [[unlikely]] return; }
L_001C2AC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2AD0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2AD0u) [[unlikely]] return; }
L_001C2AD0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2ADCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2ADCu) [[unlikely]] return; }
L_001C2ADC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2AE8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2AE8u) [[unlikely]] return; }
L_001C2AE8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2AF4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2AF4u) [[unlikely]] return; }
L_001C2AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2AFCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2AFCu) [[unlikely]] return; }
L_001C2AFC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B0Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2B0Cu) [[unlikely]] return; }
L_001C2B0C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B18u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2B18u) [[unlikely]] return; }
L_001C2B18:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B24u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2B24u) [[unlikely]] return; }
L_001C2B24:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B30u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2B30u) [[unlikely]] return; }
L_001C2B30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B3Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2B3Cu) [[unlikely]] return; }
L_001C2B3C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B48u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C2B48u) [[unlikely]] return; }
L_001C2B48:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B58u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2B58u) [[unlikely]] return; }
L_001C2B58:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B64u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2B64u) [[unlikely]] return; }
L_001C2B64:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B70u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2B70u) [[unlikely]] return; }
L_001C2B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B78u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2B78u) [[unlikely]] return; }
L_001C2B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B80u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2B80u) [[unlikely]] return; }
L_001C2B80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C2BA0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2BCCu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C2BCCu) [[unlikely]] return; }
L_001C2BCC:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2BF4u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2BF4u) [[unlikely]] return; }
L_001C2BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2BFCu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2BFCu) [[unlikely]] return; }
L_001C2BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C04u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2C04u) [[unlikely]] return; }
L_001C2C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C0Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2C0Cu) [[unlikely]] return; }
L_001C2C0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C18u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2C18u) [[unlikely]] return; }
L_001C2C18:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C24u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C2C24u) [[unlikely]] return; }
L_001C2C24:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C34u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2C34u) [[unlikely]] return; }
L_001C2C34:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C40u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2C40u) [[unlikely]] return; }
L_001C2C40:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C4Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2C4Cu) [[unlikely]] return; }
L_001C2C4C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C58u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2C58u) [[unlikely]] return; }
L_001C2C58:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C64u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2C64u) [[unlikely]] return; }
L_001C2C64:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C70u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2C70u) [[unlikely]] return; }
L_001C2C70:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C80u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2C80u) [[unlikely]] return; }
L_001C2C80:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C8Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2C8Cu) [[unlikely]] return; }
L_001C2C8C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C98u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2C98u) [[unlikely]] return; }
L_001C2C98:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2CA4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2CA4u) [[unlikely]] return; }
L_001C2CA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2CB0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2CB0u) [[unlikely]] return; }
L_001C2CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2CB8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2CB8u) [[unlikely]] return; }
L_001C2CB8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2CC8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2CC8u) [[unlikely]] return; }
L_001C2CC8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2CD4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2CD4u) [[unlikely]] return; }
L_001C2CD4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2CE0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2CE0u) [[unlikely]] return; }
L_001C2CE0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2CECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2CECu) [[unlikely]] return; }
L_001C2CEC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2CF8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2CF8u) [[unlikely]] return; }
L_001C2CF8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2D04u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2D04u) [[unlikely]] return; }
L_001C2D04:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2D14u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2D14u) [[unlikely]] return; }
L_001C2D14:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2D20u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2D20u) [[unlikely]] return; }
L_001C2D20:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2D2Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2D2Cu) [[unlikely]] return; }
L_001C2D2C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2D38u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2D38u) [[unlikely]] return; }
L_001C2D38:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2D44u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2D44u) [[unlikely]] return; }
L_001C2D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2D4Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2D4Cu) [[unlikely]] return; }
L_001C2D4C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2D5Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2D5Cu) [[unlikely]] return; }
L_001C2D5C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2D68u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2D68u) [[unlikely]] return; }
L_001C2D68:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2D74u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2D74u) [[unlikely]] return; }
L_001C2D74:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2D80u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2D80u) [[unlikely]] return; }
L_001C2D80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2D8Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2D8Cu) [[unlikely]] return; }
L_001C2D8C:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2DA0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2DA0u) [[unlikely]] return; }
L_001C2DA0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2DACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2DACu) [[unlikely]] return; }
L_001C2DAC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2DB8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2DB8u) [[unlikely]] return; }
L_001C2DB8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2DC4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2DC4u) [[unlikely]] return; }
L_001C2DC4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2DD0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2DD0u) [[unlikely]] return; }
L_001C2DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2DD8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2DD8u) [[unlikely]] return; }
L_001C2DD8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2DE8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2DE8u) [[unlikely]] return; }
L_001C2DE8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2DF4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2DF4u) [[unlikely]] return; }
L_001C2DF4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2E00u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2E00u) [[unlikely]] return; }
L_001C2E00:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2E0Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2E0Cu) [[unlikely]] return; }
L_001C2E0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2E18u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2E18u) [[unlikely]] return; }
L_001C2E18:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2E2Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2E2Cu) [[unlikely]] return; }
L_001C2E2C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2E38u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2E38u) [[unlikely]] return; }
L_001C2E38:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2E44u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2E44u) [[unlikely]] return; }
L_001C2E44:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2E50u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2E50u) [[unlikely]] return; }
L_001C2E50:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2E5Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2E5Cu) [[unlikely]] return; }
L_001C2E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2E64u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2E64u) [[unlikely]] return; }
L_001C2E64:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2E74u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2E74u) [[unlikely]] return; }
L_001C2E74:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2E80u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2E80u) [[unlikely]] return; }
L_001C2E80:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2E8Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2E8Cu) [[unlikely]] return; }
L_001C2E8C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2E98u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2E98u) [[unlikely]] return; }
L_001C2E98:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2EA4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2EA4u) [[unlikely]] return; }
L_001C2EA4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2EB0u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2EB0u) [[unlikely]] return; }
L_001C2EB0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2EC0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2EC0u) [[unlikely]] return; }
L_001C2EC0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2ECCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2ECCu) [[unlikely]] return; }
L_001C2ECC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2ED8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2ED8u) [[unlikely]] return; }
L_001C2ED8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2EE4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2EE4u) [[unlikely]] return; }
L_001C2EE4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2EF0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2EF0u) [[unlikely]] return; }
L_001C2EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2EF8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C2EF8u) [[unlikely]] return; }
L_001C2EF8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F08u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2F08u) [[unlikely]] return; }
L_001C2F08:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F14u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2F14u) [[unlikely]] return; }
L_001C2F14:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F20u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2F20u) [[unlikely]] return; }
L_001C2F20:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F2Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2F2Cu) [[unlikely]] return; }
L_001C2F2C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F38u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2F38u) [[unlikely]] return; }
L_001C2F38:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F44u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C2F44u) [[unlikely]] return; }
L_001C2F44:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F54u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2F54u) [[unlikely]] return; }
L_001C2F54:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F60u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2F60u) [[unlikely]] return; }
L_001C2F60:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F6Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2F6Cu) [[unlikely]] return; }
L_001C2F6C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F78u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2F78u) [[unlikely]] return; }
L_001C2F78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F84u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2F84u) [[unlikely]] return; }
L_001C2F84:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F94u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C2F94u) [[unlikely]] return; }
L_001C2F94:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2FA0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C2FA0u) [[unlikely]] return; }
L_001C2FA0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2FACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C2FACu) [[unlikely]] return; }
L_001C2FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2FB4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C2FB4u) [[unlikely]] return; }
L_001C2FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2FBCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C2FBCu) [[unlikely]] return; }
L_001C2FBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C2FE0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C300Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C300Cu) [[unlikely]] return; }
L_001C300C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3034u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3034u) [[unlikely]] return; }
L_001C3034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C303Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C303Cu) [[unlikely]] return; }
L_001C303C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3044u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3044u) [[unlikely]] return; }
L_001C3044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C304Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C304Cu) [[unlikely]] return; }
L_001C304C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3058u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3058u) [[unlikely]] return; }
L_001C3058:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3064u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C3064u) [[unlikely]] return; }
L_001C3064:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3074u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3074u) [[unlikely]] return; }
L_001C3074:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3080u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3080u) [[unlikely]] return; }
L_001C3080:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C308Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C308Cu) [[unlikely]] return; }
L_001C308C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3098u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3098u) [[unlikely]] return; }
L_001C3098:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C30A4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C30A4u) [[unlikely]] return; }
L_001C30A4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C30B0u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C30B0u) [[unlikely]] return; }
L_001C30B0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C30C0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C30C0u) [[unlikely]] return; }
L_001C30C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C30CCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C30CCu) [[unlikely]] return; }
L_001C30CC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C30D8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C30D8u) [[unlikely]] return; }
L_001C30D8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C30E4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C30E4u) [[unlikely]] return; }
L_001C30E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C30F0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C30F0u) [[unlikely]] return; }
L_001C30F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C30F8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C30F8u) [[unlikely]] return; }
L_001C30F8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3108u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3108u) [[unlikely]] return; }
L_001C3108:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3114u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3114u) [[unlikely]] return; }
L_001C3114:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3120u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3120u) [[unlikely]] return; }
L_001C3120:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C312Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C312Cu) [[unlikely]] return; }
L_001C312C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3138u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3138u) [[unlikely]] return; }
L_001C3138:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3144u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3144u) [[unlikely]] return; }
L_001C3144:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3154u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3154u) [[unlikely]] return; }
L_001C3154:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3160u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3160u) [[unlikely]] return; }
L_001C3160:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C316Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C316Cu) [[unlikely]] return; }
L_001C316C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3178u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3178u) [[unlikely]] return; }
L_001C3178:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3184u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3184u) [[unlikely]] return; }
L_001C3184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C318Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C318Cu) [[unlikely]] return; }
L_001C318C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C319Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C319Cu) [[unlikely]] return; }
L_001C319C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C31A8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C31A8u) [[unlikely]] return; }
L_001C31A8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C31B4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C31B4u) [[unlikely]] return; }
L_001C31B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C31BCu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C31BCu) [[unlikely]] return; }
L_001C31BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C31C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C31C4u) [[unlikely]] return; }
L_001C31C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C31E0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C320Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C320Cu) [[unlikely]] return; }
L_001C320C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3234u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3234u) [[unlikely]] return; }
L_001C3234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C323Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C323Cu) [[unlikely]] return; }
L_001C323C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3244u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3244u) [[unlikely]] return; }
L_001C3244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C324Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C324Cu) [[unlikely]] return; }
L_001C324C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3258u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3258u) [[unlikely]] return; }
L_001C3258:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3264u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C3264u) [[unlikely]] return; }
L_001C3264:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3274u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3274u) [[unlikely]] return; }
L_001C3274:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3280u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3280u) [[unlikely]] return; }
L_001C3280:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C328Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C328Cu) [[unlikely]] return; }
L_001C328C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3298u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3298u) [[unlikely]] return; }
L_001C3298:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C32A4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C32A4u) [[unlikely]] return; }
L_001C32A4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C32B0u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C32B0u) [[unlikely]] return; }
L_001C32B0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C32C0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C32C0u) [[unlikely]] return; }
L_001C32C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C32CCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C32CCu) [[unlikely]] return; }
L_001C32CC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C32D8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C32D8u) [[unlikely]] return; }
L_001C32D8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C32E4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C32E4u) [[unlikely]] return; }
L_001C32E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C32F0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C32F0u) [[unlikely]] return; }
L_001C32F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C32F8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C32F8u) [[unlikely]] return; }
L_001C32F8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3308u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3308u) [[unlikely]] return; }
L_001C3308:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3314u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3314u) [[unlikely]] return; }
L_001C3314:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3320u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3320u) [[unlikely]] return; }
L_001C3320:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C332Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C332Cu) [[unlikely]] return; }
L_001C332C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3338u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3338u) [[unlikely]] return; }
L_001C3338:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C334Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C334Cu) [[unlikely]] return; }
L_001C334C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3358u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3358u) [[unlikely]] return; }
L_001C3358:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3364u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3364u) [[unlikely]] return; }
L_001C3364:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3370u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3370u) [[unlikely]] return; }
L_001C3370:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C337Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C337Cu) [[unlikely]] return; }
L_001C337C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3384u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C3384u) [[unlikely]] return; }
L_001C3384:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3394u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3394u) [[unlikely]] return; }
L_001C3394:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C33A0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C33A0u) [[unlikely]] return; }
L_001C33A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C33ACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C33ACu) [[unlikely]] return; }
L_001C33AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C33B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C33B8u) [[unlikely]] return; }
L_001C33B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C33C4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C33C4u) [[unlikely]] return; }
L_001C33C4:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C33D8u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C33D8u) [[unlikely]] return; }
L_001C33D8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C33E4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C33E4u) [[unlikely]] return; }
L_001C33E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C33F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C33F0u) [[unlikely]] return; }
L_001C33F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C33F8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C33F8u) [[unlikely]] return; }
L_001C33F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3400u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3400u) [[unlikely]] return; }
L_001C3400:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C3420:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C344Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C344Cu) [[unlikely]] return; }
L_001C344C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3474u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3474u) [[unlikely]] return; }
L_001C3474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C347Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C347Cu) [[unlikely]] return; }
L_001C347C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3484u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3484u) [[unlikely]] return; }
L_001C3484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C348Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C348Cu) [[unlikely]] return; }
L_001C348C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3498u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3498u) [[unlikely]] return; }
L_001C3498:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C34A4u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C34A4u) [[unlikely]] return; }
L_001C34A4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C34B4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C34B4u) [[unlikely]] return; }
L_001C34B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C34C0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C34C0u) [[unlikely]] return; }
L_001C34C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C34CCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C34CCu) [[unlikely]] return; }
L_001C34CC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C34D8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C34D8u) [[unlikely]] return; }
L_001C34D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C34E4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C34E4u) [[unlikely]] return; }
L_001C34E4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C34F0u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C34F0u) [[unlikely]] return; }
L_001C34F0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3500u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3500u) [[unlikely]] return; }
L_001C3500:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C350Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C350Cu) [[unlikely]] return; }
L_001C350C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3518u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3518u) [[unlikely]] return; }
L_001C3518:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3524u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3524u) [[unlikely]] return; }
L_001C3524:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3530u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3530u) [[unlikely]] return; }
L_001C3530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3538u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3538u) [[unlikely]] return; }
L_001C3538:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3548u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3548u) [[unlikely]] return; }
L_001C3548:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3554u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3554u) [[unlikely]] return; }
L_001C3554:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3560u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3560u) [[unlikely]] return; }
L_001C3560:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C356Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C356Cu) [[unlikely]] return; }
L_001C356C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3578u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3578u) [[unlikely]] return; }
L_001C3578:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3584u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3584u) [[unlikely]] return; }
L_001C3584:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3594u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3594u) [[unlikely]] return; }
L_001C3594:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C35A0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C35A0u) [[unlikely]] return; }
L_001C35A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C35ACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C35ACu) [[unlikely]] return; }
L_001C35AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C35B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C35B8u) [[unlikely]] return; }
L_001C35B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C35C4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C35C4u) [[unlikely]] return; }
L_001C35C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C35CCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C35CCu) [[unlikely]] return; }
L_001C35CC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C35DCu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C35DCu) [[unlikely]] return; }
L_001C35DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C35E8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C35E8u) [[unlikely]] return; }
L_001C35E8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C35F4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C35F4u) [[unlikely]] return; }
L_001C35F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C35FCu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C35FCu) [[unlikely]] return; }
L_001C35FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3604u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3604u) [[unlikely]] return; }
L_001C3604:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C3620:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C364Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C364Cu) [[unlikely]] return; }
L_001C364C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3674u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3674u) [[unlikely]] return; }
L_001C3674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C367Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C367Cu) [[unlikely]] return; }
L_001C367C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3684u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3684u) [[unlikely]] return; }
L_001C3684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C368Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C368Cu) [[unlikely]] return; }
L_001C368C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3698u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3698u) [[unlikely]] return; }
L_001C3698:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C36A4u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C36A4u) [[unlikely]] return; }
L_001C36A4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C36B4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C36B4u) [[unlikely]] return; }
L_001C36B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C36C0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C36C0u) [[unlikely]] return; }
L_001C36C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C36CCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C36CCu) [[unlikely]] return; }
L_001C36CC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C36D8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C36D8u) [[unlikely]] return; }
L_001C36D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C36E4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C36E4u) [[unlikely]] return; }
L_001C36E4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C36F0u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C36F0u) [[unlikely]] return; }
L_001C36F0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3700u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3700u) [[unlikely]] return; }
L_001C3700:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C370Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C370Cu) [[unlikely]] return; }
L_001C370C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3718u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3718u) [[unlikely]] return; }
L_001C3718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3720u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3720u) [[unlikely]] return; }
L_001C3720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3728u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3728u) [[unlikely]] return; }
L_001C3728:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C3750:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C377Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C377Cu) [[unlikely]] return; }
L_001C377C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C37A4u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C37A4u) [[unlikely]] return; }
L_001C37A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C37ACu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C37ACu) [[unlikely]] return; }
L_001C37AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C37B4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C37B4u) [[unlikely]] return; }
L_001C37B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C37BCu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C37BCu) [[unlikely]] return; }
L_001C37BC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C37C8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C37C8u) [[unlikely]] return; }
L_001C37C8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C37D4u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C37D4u) [[unlikely]] return; }
L_001C37D4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C37E4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C37E4u) [[unlikely]] return; }
L_001C37E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C37F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C37F0u) [[unlikely]] return; }
L_001C37F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C37FCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C37FCu) [[unlikely]] return; }
L_001C37FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3808u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3808u) [[unlikely]] return; }
L_001C3808:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3814u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3814u) [[unlikely]] return; }
L_001C3814:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3820u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C3820u) [[unlikely]] return; }
L_001C3820:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3830u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3830u) [[unlikely]] return; }
L_001C3830:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C383Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C383Cu) [[unlikely]] return; }
L_001C383C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3848u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3848u) [[unlikely]] return; }
L_001C3848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3850u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3850u) [[unlikely]] return; }
L_001C3850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3858u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3858u) [[unlikely]] return; }
L_001C3858:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C3880:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C38ACu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C38ACu) [[unlikely]] return; }
L_001C38AC:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C38D4u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C38D4u) [[unlikely]] return; }
L_001C38D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C38DCu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C38DCu) [[unlikely]] return; }
L_001C38DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C38E4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C38E4u) [[unlikely]] return; }
L_001C38E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C38ECu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C38ECu) [[unlikely]] return; }
L_001C38EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C38F8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C38F8u) [[unlikely]] return; }
L_001C38F8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3904u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C3904u) [[unlikely]] return; }
L_001C3904:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3914u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3914u) [[unlikely]] return; }
L_001C3914:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3920u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3920u) [[unlikely]] return; }
L_001C3920:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C392Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C392Cu) [[unlikely]] return; }
L_001C392C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3938u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3938u) [[unlikely]] return; }
L_001C3938:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3944u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3944u) [[unlikely]] return; }
L_001C3944:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3950u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3950u) [[unlikely]] return; }
L_001C3950:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3960u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3960u) [[unlikely]] return; }
L_001C3960:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C396Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C396Cu) [[unlikely]] return; }
L_001C396C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3978u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3978u) [[unlikely]] return; }
L_001C3978:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3984u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3984u) [[unlikely]] return; }
L_001C3984:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3990u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3990u) [[unlikely]] return; }
L_001C3990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3998u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3998u) [[unlikely]] return; }
L_001C3998:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C39A8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C39A8u) [[unlikely]] return; }
L_001C39A8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C39B4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C39B4u) [[unlikely]] return; }
L_001C39B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C39C0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C39C0u) [[unlikely]] return; }
L_001C39C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C39CCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C39CCu) [[unlikely]] return; }
L_001C39CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C39D8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C39D8u) [[unlikely]] return; }
L_001C39D8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C39E4u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C39E4u) [[unlikely]] return; }
L_001C39E4:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C39F4u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C39F4u) [[unlikely]] return; }
L_001C39F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3A00u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3A00u) [[unlikely]] return; }
L_001C3A00:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3A0Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3A0Cu) [[unlikely]] return; }
L_001C3A0C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3A18u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3A18u) [[unlikely]] return; }
L_001C3A18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3A24u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3A24u) [[unlikely]] return; }
L_001C3A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3A2Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3A2Cu) [[unlikely]] return; }
L_001C3A2C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3A3Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3A3Cu) [[unlikely]] return; }
L_001C3A3C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3A48u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3A48u) [[unlikely]] return; }
L_001C3A48:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3A54u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3A54u) [[unlikely]] return; }
L_001C3A54:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3A60u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3A60u) [[unlikely]] return; }
L_001C3A60:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3A6Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3A6Cu) [[unlikely]] return; }
L_001C3A6C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3A78u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3A78u) [[unlikely]] return; }
L_001C3A78:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3A88u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3A88u) [[unlikely]] return; }
L_001C3A88:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3A94u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3A94u) [[unlikely]] return; }
L_001C3A94:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3AA0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3AA0u) [[unlikely]] return; }
L_001C3AA0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3AACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3AACu) [[unlikely]] return; }
L_001C3AAC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3AB8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3AB8u) [[unlikely]] return; }
L_001C3AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3AC0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3AC0u) [[unlikely]] return; }
L_001C3AC0:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3AD0u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3AD0u) [[unlikely]] return; }
L_001C3AD0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3ADCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3ADCu) [[unlikely]] return; }
L_001C3ADC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3AE8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3AE8u) [[unlikely]] return; }
L_001C3AE8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3AF4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3AF4u) [[unlikely]] return; }
L_001C3AF4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B00u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3B00u) [[unlikely]] return; }
L_001C3B00:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B0Cu); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3B0Cu) [[unlikely]] return; }
L_001C3B0C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B1Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3B1Cu) [[unlikely]] return; }
L_001C3B1C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B28u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3B28u) [[unlikely]] return; }
L_001C3B28:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B34u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3B34u) [[unlikely]] return; }
L_001C3B34:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B40u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3B40u) [[unlikely]] return; }
L_001C3B40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B4Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3B4Cu) [[unlikely]] return; }
L_001C3B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B54u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3B54u) [[unlikely]] return; }
L_001C3B54:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B64u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3B64u) [[unlikely]] return; }
L_001C3B64:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B70u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3B70u) [[unlikely]] return; }
L_001C3B70:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B7Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3B7Cu) [[unlikely]] return; }
L_001C3B7C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B88u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3B88u) [[unlikely]] return; }
L_001C3B88:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B94u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3B94u) [[unlikely]] return; }
L_001C3B94:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3BA0u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3BA0u) [[unlikely]] return; }
L_001C3BA0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3BB0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3BB0u) [[unlikely]] return; }
L_001C3BB0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3BBCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3BBCu) [[unlikely]] return; }
L_001C3BBC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3BC8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3BC8u) [[unlikely]] return; }
L_001C3BC8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3BD4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3BD4u) [[unlikely]] return; }
L_001C3BD4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3BE0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3BE0u) [[unlikely]] return; }
L_001C3BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3BE8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C3BE8u) [[unlikely]] return; }
L_001C3BE8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3BF8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3BF8u) [[unlikely]] return; }
L_001C3BF8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3C04u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3C04u) [[unlikely]] return; }
L_001C3C04:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3C10u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3C10u) [[unlikely]] return; }
L_001C3C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3C18u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3C18u) [[unlikely]] return; }
L_001C3C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3C20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3C20u) [[unlikely]] return; }
L_001C3C20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C3C40:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3C6Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C3C6Cu) [[unlikely]] return; }
L_001C3C6C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3C94u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3C94u) [[unlikely]] return; }
L_001C3C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3C9Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3C9Cu) [[unlikely]] return; }
L_001C3C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3CA4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3CA4u) [[unlikely]] return; }
L_001C3CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3CACu); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3CACu) [[unlikely]] return; }
L_001C3CAC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3CB8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3CB8u) [[unlikely]] return; }
L_001C3CB8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3CC4u); set32(c.r[16], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001C3CC4u) [[unlikely]] return; }
L_001C3CC4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3CD4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3CD4u) [[unlikely]] return; }
L_001C3CD4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3CE0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3CE0u) [[unlikely]] return; }
L_001C3CE0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3CECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3CECu) [[unlikely]] return; }
L_001C3CEC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3CF8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3CF8u) [[unlikely]] return; }
L_001C3CF8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D04u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3D04u) [[unlikely]] return; }
L_001C3D04:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D10u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3D10u) [[unlikely]] return; }
L_001C3D10:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D20u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3D20u) [[unlikely]] return; }
L_001C3D20:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D2Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3D2Cu) [[unlikely]] return; }
L_001C3D2C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D38u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3D38u) [[unlikely]] return; }
L_001C3D38:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D44u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3D44u) [[unlikely]] return; }
L_001C3D44:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D50u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3D50u) [[unlikely]] return; }
L_001C3D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D58u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3D58u) [[unlikely]] return; }
L_001C3D58:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D68u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3D68u) [[unlikely]] return; }
L_001C3D68:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D74u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3D74u) [[unlikely]] return; }
L_001C3D74:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D80u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3D80u) [[unlikely]] return; }
L_001C3D80:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D8Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3D8Cu) [[unlikely]] return; }
L_001C3D8C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D98u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3D98u) [[unlikely]] return; }
L_001C3D98:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3DA4u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3DA4u) [[unlikely]] return; }
L_001C3DA4:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3DB4u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3DB4u) [[unlikely]] return; }
L_001C3DB4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3DC0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3DC0u) [[unlikely]] return; }
L_001C3DC0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3DCCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3DCCu) [[unlikely]] return; }
L_001C3DCC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3DD8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3DD8u) [[unlikely]] return; }
L_001C3DD8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3DE4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3DE4u) [[unlikely]] return; }
L_001C3DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3DECu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3DECu) [[unlikely]] return; }
L_001C3DEC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3DFCu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3DFCu) [[unlikely]] return; }
L_001C3DFC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E08u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3E08u) [[unlikely]] return; }
L_001C3E08:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E14u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3E14u) [[unlikely]] return; }
L_001C3E14:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E20u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3E20u) [[unlikely]] return; }
L_001C3E20:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E2Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3E2Cu) [[unlikely]] return; }
L_001C3E2C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E38u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3E38u) [[unlikely]] return; }
L_001C3E38:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E48u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3E48u) [[unlikely]] return; }
L_001C3E48:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E54u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3E54u) [[unlikely]] return; }
L_001C3E54:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E60u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3E60u) [[unlikely]] return; }
L_001C3E60:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E6Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3E6Cu) [[unlikely]] return; }
L_001C3E6C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E78u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3E78u) [[unlikely]] return; }
L_001C3E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E80u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3E80u) [[unlikely]] return; }
L_001C3E80:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E90u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3E90u) [[unlikely]] return; }
L_001C3E90:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3E9Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3E9Cu) [[unlikely]] return; }
L_001C3E9C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3EA8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3EA8u) [[unlikely]] return; }
L_001C3EA8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3EB4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3EB4u) [[unlikely]] return; }
L_001C3EB4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3EC0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3EC0u) [[unlikely]] return; }
L_001C3EC0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3ECCu); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3ECCu) [[unlikely]] return; }
L_001C3ECC:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3EDCu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3EDCu) [[unlikely]] return; }
L_001C3EDC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3EE8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3EE8u) [[unlikely]] return; }
L_001C3EE8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3EF4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3EF4u) [[unlikely]] return; }
L_001C3EF4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F00u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3F00u) [[unlikely]] return; }
L_001C3F00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F0Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3F0Cu) [[unlikely]] return; }
L_001C3F0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F14u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001C3F14u) [[unlikely]] return; }
L_001C3F14:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F24u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3F24u) [[unlikely]] return; }
L_001C3F24:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F30u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3F30u) [[unlikely]] return; }
L_001C3F30:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F3Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3F3Cu) [[unlikely]] return; }
L_001C3F3C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F48u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3F48u) [[unlikely]] return; }
L_001C3F48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F54u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3F54u) [[unlikely]] return; }
L_001C3F54:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F60u); set32(c.r[17], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001C3F60u) [[unlikely]] return; }
L_001C3F60:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F70u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001C3F70u) [[unlikely]] return; }
L_001C3F70:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F7Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001C3F7Cu) [[unlikely]] return; }
L_001C3F7C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F88u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C3F88u) [[unlikely]] return; }
L_001C3F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F90u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001C3F90u) [[unlikely]] return; }
L_001C3F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C3F98u) [[unlikely]] return; }
L_001C3F98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C3FC0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3FECu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C3FECu) [[unlikely]] return; }
L_001C3FEC:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 5;
    [[clang::musttail]] return unit_0031(c, 1u, depth);
}

}
