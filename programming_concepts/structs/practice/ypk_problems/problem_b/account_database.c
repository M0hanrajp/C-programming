#include "bank_database.h"

bank_database account_data[200] = {
    { 1, "AB", 5432.17},
    { 2, "CD", 7290.34},
    { 3, "EF", 1623.56},
    { 4, "GH", 8429.45},
    { 5, "IJ", 2749.19},
    { 6, "KL", 4532.76},
    { 7, "MN", 9123.11},
    { 8, "OP", 4892.50},
    { 9, "QR", 1002.33},
    {10, "ST", 7923.28},
    {11, "UV", 3823.76},
    {12, "WX", 5872.45},
    {13, "YZ", 925.34},
    {14, "AA", 7364.23},
    {15, "BB", 1832.19},
    {16, "CC", 9401.78},
    {17, "DD", 5729.44},
    {18, "EE", 2732.56},
    {19, "FF", 6823.12},
    {20, "GG", 1293.76},
    {21, "HH", 4821.89},
    {22, "II", 9328.34},
    {23, "JJ", 2734.67},
    {24, "KK", 5837.56},
    {25, "LL", 7932.10},
    {26, "MM", 4923.34},
    {27, "NN", 1293.67},
    {28, "OO", 6732.12},
    {29, "PP", 2938.45},
    {30, "QQ", 4721.33},
    {31, "RR", 8232.45},
    {32, "SS", 1298.67},
    {33, "TT", 7321.34},
    {34, "UU", 2832.56},
    {35, "VV", 9421.23},
    {36, "WW", 5732.45},
    {37, "XX", 2823.12},
    {38, "YY", 6821.76},
    {39, "ZZ", 1282.34},
    {40, "AB", 4821.23},
    {41, "BC", 9327.89},
    {42, "CD", 2738.45},
    {43, "DE", 5834.56},
    {44, "EF", 7921.89},
    {45, "FG", 4912.23},
    {46, "GH", 1283.67},
    {47, "HI", 6721.45},
    {48, "IJ", 2921.89},
    {49, "JK", 4712.34},
    {50, "KL", 8221.76},
    {51, "LM", 1293.34},
    {52, "MN", 7312.23},
    {53, "NO", 2821.67},
    {54, "OP", 9412.45},
    {55, "PQ", 5721.89},
    {56, "QR", 2812.34},
    {57, "RS", 6812.23},
    {58, "ST", 1272.45},
    {59, "TU", 4812.89},
    {60, "UV", 9312.34},
    {61, "VW", 2721.76},
    {62, "WX", 5821.23},
    {63, "XY", 7912.45},
    {64, "YZ", 4902.89},
    {65, "ZA", 1263.34},
    {66, "AB", 6702.23},
    {67, "BC", 2912.45},
    {68, "CD", 4702.89},
    {69, "DE", 8212.34},
    {70, "EF", 1253.76},
    {71, "FG", 7302.23},
    {72, "GH", 2812.45},
    {73, "HI", 9402.89},
    {74, "IJ", 5712.34},
    {75, "JK", 2802.76},
    {76, "KL", 6802.23},
    {77, "LM", 1242.45},
    {78, "MN", 4802.89},
    {79, "NO", 9302.34},
    {80, "OP", 2712.76},
    {81, "PQ", 5812.23},
    {82, "QR", 7902.45},
    {83, "RS", 4892.89},
    {84, "ST", 1232.34},
    {85, "TU", 6792.23},
    {86, "UV", 2902.45},
    {87, "VW", 4692.89},
    {88, "WX", 8202.34},
    {89, "XY", 1221.76},
    {90, "YZ", 7292.23},
    {91, "ZA", 2792.45},
    {92, "AB", 9392.89},
    {93, "BC", 5702.34},
    {94, "CD", 2782.76},
    {95, "DE", 6792.23},
    {96, "EF", 1212.45},
    {97, "FG", 4782.89},
    {98, "GH", 9292.34},
    {99, "HI", 2702.76},
    {100, "IJ", 5782.23},
    {101, "JK", 7882.45},
    {102, "KL", 4872.89},
    {103, "LM", 1202.34},
    {104, "MN", 6772.23},
    {105, "NO", 2892.45},
    {106, "OP", 4672.89},
    {107, "PQ", 8182.34},
    {108, "QR", 1191.76},
    {109, "RS", 7272.23},
    {110, "ST", 2772.45},
    {111, "TU", 9372.89},
    {112, "UV", 5692.34},
    {113, "VW", 2762.76},
    {114, "WX", 6772.23},
    {115, "XY", 1182.45},
    {116, "YZ", 4762.89},
    {117, "ZA", 9272.34},
    {118, "AB", 2692.76},
    {119, "BC", 5762.23},
    {120, "CD", 7862.45},
    {121, "DE", 4852.89},
    {122, "EF", 1172.34},
    {123, "FG", 6752.23},
    {124, "GH", 2872.45},
    {125, "HI", 4652.89},
    {126, "IJ", 8162.34},
    {127, "JK", 1161.76},
    {128, "KL", 7252.23},
    {129, "LM", 2752.45},
    {130, "MN", 9352.89},
    {131, "NO", 5672.34},
    {132, "OP", 2742.76},
    {133, "PQ", 6752.23},
    {134, "QR", 1152.45},
    {135, "RS", 4742.89},
    {136, "ST", 9252.34},
    {137, "TU", 2682.76},
    {138, "UV", 5742.23},
    {139, "VW", 7842.45},
    {140, "WX", 4832.89},
    {141, "XY", 1142.34},
    {142, "YZ", 6732.23},
    {143, "ZA", 2852.45},
    {144, "AB", 4632.89},
    {145, "BC", 8142.34},
    {146, "CD", 1131.76},
    {147, "DE", 7232.23},
    {148, "EF", 2732.45},
    {149, "FG", 9332.89},
    {150, "GH", 5652.34},
    {151, "HI", 2722.76},
};