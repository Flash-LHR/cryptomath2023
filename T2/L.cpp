#include <iostream>

void L() {
// y[0] = x[0] + x[2] + x[10] + x[14] + x[18] + x[24] + x[29],
// y[1] = x[1] + x[3] + x[11] + x[15] + x[19] + x[25] + x[30],
// y[2] = x[2] + x[4] + x[12] + x[16] + x[20] + x[26] + x[31],
// y[3] = x[0] + x[3] + x[5] + x[13] + x[17] + x[21] + x[27],
// y[4] = x[1] + x[4] + x[6] + x[14] + x[18] + x[22] + x[28],
// y[5] = x[2] + x[5] + x[7] + x[15] + x[19] + x[23] + x[29],
// y[6] = x[3] + x[6] + x[8] + x[16] + x[20] + x[24] + x[30],
// y[7] = x[4] + x[7] + x[9] + x[17] + x[21] + x[25] + x[31],
// y[8] = x[0] + x[5] + x[8] + x[10] + x[18] + x[22] + x[26],
// y[9] = x[1] + x[6] + x[9] + x[11] + x[19] + x[23] + x[27],
// y[10] = x[2] + x[7] + x[10] + x[12] + x[20] + x[24] + x[28],
// y[11] = x[3] + x[8] + x[11] + x[13] + x[21] + x[25] + x[29],
// y[12] = x[4] + x[9] + x[12] + x[14] + x[22] + x[26] + x[30],
// y[13] = x[5] + x[10] + x[13] + x[15] + x[23] + x[27] + x[31],
// y[14] = x[0] + x[6] + x[11] + x[14] + x[16] + x[24] + x[28],
// y[15] = x[1] + x[7] + x[12] + x[15] + x[17] + x[25] + x[29],
// y[16] = x[2] + x[8] + x[13] + x[16] + x[18] + x[26] + x[30],
// y[17] = x[3] + x[9] + x[14] + x[17] + x[19] + x[27] + x[31],
// y[18] = x[0] + x[4] + x[10] + x[15] + x[18] + x[20] + x[28],
// y[19] = x[1] + x[5] + x[11] + x[16] + x[19] + x[21] + x[29],
// y[20] = x[2] + x[6] + x[12] + x[17] + x[20] + x[22] + x[30],
// y[21] = x[3] + x[7] + x[13] + x[18] + x[21] + x[23] + x[31],
// y[22] = x[0] + x[4] + x[8] + x[14] + x[19] + x[22] + x[24],
// y[23] = x[1] + x[5] + x[9] + x[15] + x[20] + x[23] + x[25],
// y[24] = x[2] + x[6] + x[10] + x[16] + x[21] + x[24] + x[26],
// y[25] = x[3] + x[7] + x[11] + x[17] + x[22] + x[25] + x[27],
// y[26] = x[4] + x[8] + x[12] + x[18] + x[23] + x[26] + x[28],
// y[27] = x[5] + x[9] + x[13] + x[19] + x[24] + x[27] + x[29],
// y[28] = x[6] + x[10] + x[14] + x[20] + x[25] + x[28] + x[30],
// y[29] = x[7] + x[11] + x[15] + x[21] + x[26] + x[29] + x[31],
// y[30] = x[0] + x[8] + x[12] + x[16] + x[22] + x[27] + x[30],
// y[31] = x[1] + x[9] + x[13] + x[17] + x[23] + x[28] + x[31]

    y[0] = y[0] + x[0];
    y[1] = y[1] + x[1];
    y[2] = y[2] + x[2];
    y[3] = y[3] + x[3];
    y[4] = y[4] + x[4];
    y[5] = y[5] + x[5];
    y[6] = y[6] + x[6];
    y[7] = y[7] + x[7];
    y[8] = y[8] + x[8];
    y[9] = y[9] + x[9];

    y[0] = y[0] + x[2];
    y[1] = y[1] + x[3];
    y[2] = y[2] + x[4];
    y[3] = y[3] + x[5];
    y[4] = y[4] + x[6];
    y[5] = y[5] + x[7];
    y[6] = y[6] + x[8];
    y[7] = y[7] + x[9];
    y[8] = y[8] + x[10];
    y[9] = y[9] + x[11];

    y[0] = y[0] + x[10];
    y[1] = y[1] + x[11];
    y[2] = y[2] + x[12];
    y[3] = y[3] + x[13];
    y[4] = y[4] + x[14];
    y[5] = y[5] + x[15];
    y[6] = y[6] + x[16];
    y[7] = y[7] + x[17];
    y[8] = y[8] + x[18];
    y[9] = y[9] + x[19];

    y[0] = y[0] + x[14];
    y[1] = y[1] + x[15];
    y[2] = y[2] + x[16];
    y[3] = y[3] + x[17];
    y[4] = y[4] + x[18];
    y[5] = y[5] + x[19];
    y[6] = y[6] + x[20];
    y[7] = y[7] + x[21];
    y[8] = y[8] + x[22];
    y[9] = y[9] + x[23];

    y[0] = y[0] + x[18];
    y[1] = y[1] + x[19];
    y[2] = y[2] + x[20];
    y[3] = y[3] + x[21];
    y[4] = y[4] + x[22];
    y[5] = y[5] + x[23];
    y[6] = y[6] + x[24];
    y[7] = y[7] + x[25];
    y[8] = y[8] + x[26];
    y[9] = y[9] + x[27];

    y[0] = y[0] + x[24];
    y[1] = y[1] + x[25];
    y[2] = y[2] + x[26];
    y[3] = y[3] + x[27];
    y[4] = y[4] + x[28];
    y[5] = y[5] + x[29];
    y[6] = y[6] + x[30];
    y[7] = y[7] + x[31];
    y[8] = y[8] + x[0];
    y[9] = y[9] + x[1];

    y[0] = y[0] + x[29];
    y[1] = y[1] + x[30];
    y[2] = y[2] + x[31];
    y[3] = y[3] + x[0];
    y[4] = y[4] + x[1];
    y[5] = y[5] + x[2];
    y[6] = y[6] + x[3];
    y[7] = y[7] + x[4];
    y[8] = y[8] + x[5];
    y[9] = y[9] + x[6];
    

    
    
    
    
    
    

    y[10] = y[10] + x[2];
    y[10] = y[10] + x[2] + x[7];
    y[10] = y[10] + x[2] + x[7] + x[10];
    y[10] = y[10] + x[2] + x[7] + x[10] + x[12];
    y[10] = y[10] + x[2] + x[7] + x[10] + x[12] + x[20];
    y[10] = y[10] + x[2] + x[7] + x[10] + x[12] + x[20] + x[24];
    y[10] = y[10] + x[2] + x[7] + x[10] + x[12] + x[20] + x[24] + x[28];

y[11] = x[3] + x[8] + x[11] + x[13] + x[21] + x[25] + x[29],
y[12] = x[4] + x[9] + x[12] + x[14] + x[22] + x[26] + x[30],
y[13] = x[5] + x[10] + x[13] + x[15] + x[23] + x[27] + x[31],
y[14] = x[0] + x[6] + x[11] + x[14] + x[16] + x[24] + x[28],
y[15] = x[1] + x[7] + x[12] + x[15] + x[17] + x[25] + x[29],
y[16] = x[2] + x[8] + x[13] + x[16] + x[18] + x[26] + x[30],
y[17] = x[3] + x[9] + x[14] + x[17] + x[19] + x[27] + x[31],
y[18] = x[0] + x[4] + x[10] + x[15] + x[18] + x[20] + x[28],
y[19] = x[1] + x[5] + x[11] + x[16] + x[19] + x[21] + x[29],
y[20] = x[2] + x[6] + x[12] + x[17] + x[20] + x[22] + x[30],
y[21] = x[3] + x[7] + x[13] + x[18] + x[21] + x[23] + x[31],
y[22] = x[0] + x[4] + x[8] + x[14] + x[19] + x[22] + x[24],
y[23] = x[1] + x[5] + x[9] + x[15] + x[20] + x[23] + x[25],
y[24] = x[2] + x[6] + x[10] + x[16] + x[21] + x[24] + x[26],
y[25] = x[3] + x[7] + x[11] + x[17] + x[22] + x[25] + x[27],
y[26] = x[4] + x[8] + x[12] + x[18] + x[23] + x[26] + x[28],
y[27] = x[5] + x[9] + x[13] + x[19] + x[24] + x[27] + x[29],
y[28] = x[6] + x[10] + x[14] + x[20] + x[25] + x[28] + x[30],
y[29] = x[7] + x[11] + x[15] + x[21] + x[26] + x[29] + x[31],
y[30] = x[0] + x[8] + x[12] + x[16] + x[22] + x[27] + x[30],
y[31] = x[1] + x[9] + x[13] + x[17] + x[23] + x[28] + x[31]
}

int main() {

}