#include <iostream>
#include <cstring>
#include <cassert>
#include "bitDomain.h"

using std::cin;
using std::cout;
using std::endl;

extern bitDomain U[8];
extern bitDomain Y[21];
extern bitDomain T[50];
extern bitDomain z[18];
extern bitDomain S[8];
//bitDomain EX[16]; 连同Y[5]\Y[17]都没用到

void QAND(bitDomain x, bitDomain y, bitDomain& z) {
    assert(z == 0);
    z = x * y + z;
}

void QAND_INV(bitDomain x, bitDomain y, bitDomain& z) {
    assert(z == x * y);
    z = x * y + z;
}

void clean_up() {
    //d
    S[7] = S[7] + 1;
    S[6] = S[6] + 1;
    S[3] = S[3] + 1;
    S[1] = S[1] + 1;
    S[0] = S[0] + 1;
    //d 51 7
    S[1] = S[1] + z[16];
    //d 50 7
    S[1] = S[1] + z[15];
    //d 49 7
    S[7] = S[7] + z[0];
    S[6] = S[6] + z[1];
    S[1] = S[1] + z[14];
    //d 48 7
    S[7] = S[7] + z[3];
    S[6] = S[6] + z[2];
    S[1] = S[1] + z[13];
    //d 47 7
    S[7] = S[7] + z[2];
    S[6] = S[6] + z[4];
    S[5] = S[5] + z[0];
    S[3] = S[3] + z[1];
    S[2] = S[2] + z[3];
    S[1] = S[1] + z[11];
    //d 46 7
    S[7] = S[7] + z[4];
    S[6] = S[6] + z[3];
    S[5] = S[5] + z[1];
    S[3] = S[3] + z[2];
    S[2] = S[2] + z[4];
    S[1] = S[1] + z[10];
    //d 45 7
    S[7] = S[7] + z[12];
    S[6] = S[6] + z[10];
    S[5] = S[5] + z[6];
    S[3] = S[3] + z[3];
    S[2] = S[2] + z[7];
    S[1] = S[1] + z[8];
    //d 44 7
    S[7] = S[7] + z[16];
    S[6] = S[6] + z[13];
    S[5] = S[5] + z[10];
    S[3] = S[3] + z[4];
    S[2] = S[2] + z[8];
    S[1] = S[1] + z[6];
    //d 43 7
    S[7] = S[7] + z[13];
    S[6] = S[6] + z[16];
    S[5] = S[5] + z[7];
    S[4] = S[4] + z[15];
    S[3] = S[3] + z[12];
    S[2] = S[2] + z[10];
    S[0] = S[0] + z[9];
    S[1] = S[1] + z[5];
    //d 42 7
    S[7] = S[7] + z[6];
    S[6] = S[6] + z[14];
    S[5] = S[5] + z[12];
    S[4] = S[4] + z[16];
    S[3] = S[3] + z[13];
    S[2] = S[2] + z[11];
    S[0] = S[0] + z[10];
    S[1] = S[1] + z[3];
    //d 41 7
    S[7] = S[7] + z[17];
    S[6] = S[6] + z[11];
    S[5] = S[5] + z[13];
    S[4] = S[4] + z[14];
    S[3] = S[3] + z[16];
    S[2] = S[2] + z[12];
    S[0] = S[0] + z[15];
    S[1] = S[1] + z[2];
    //d 40 7
    S[7] = S[7] + z[7];
    S[6] = S[6] + z[15];
    S[5] = S[5] + z[11];
    S[4] = S[4] + z[12];
    S[3] = S[3] + z[17];
    S[2] = S[2] + z[13];
    S[0] = S[0] + z[16];
    S[1] = S[1] + z[1];
    //d 39 7
    QAND_INV(T[44], Y[4], z[0]);
    QAND_INV(T[49], Y[9], z[1]);
    QAND_INV(T[33], U[0], z[2]);
    QAND_INV(T[46], Y[14], z[3]);
    QAND_INV(T[47], Y[13], z[4]);
    QAND_INV(T[48], Y[11], z[5]);
    QAND_INV(T[41], Y[6], z[6]);
    QAND_INV(T[45], Y[16], z[7]);
    QAND_INV(T[37], Y[7], z[8]);
    QAND_INV(T[44], Y[0], z[9]);
    QAND_INV(T[49], Y[8], z[10]);
    QAND_INV(T[33], Y[1], z[11]);
    QAND_INV(T[46], U[1], z[12]);
    QAND_INV(T[47], Y[12], z[13]);
    QAND_INV(T[48], Y[10], z[14]);
    QAND_INV(T[41], Y[2], z[15]);
    QAND_INV(T[45], Y[15], z[16]);
    QAND_INV(T[37], Y[3], z[17]);
    //d 38 7
    T[49] = T[49] + T[44];
    T[48] = T[48] + T[47];
    //d 37 6
    T[47] = T[47] + T[44];
    //d 36 6
    T[44] = T[44] + T[43];
    //d 35 6
    T[47] = T[47] + T[41];
    QAND_INV(T[33], T[42], T[43]);
    //d 34 6
    T[48] = T[48] + T[46];
    T[45] = T[45] + T[41];
    T[42] = T[42] + T[40];
    //d 33 5
    T[46] = T[46] + T[37];
    T[41] = T[41] + T[40];
    //d 32 5
    T[45] = T[45] + T[37];
    QAND_INV(T[26], T[39], T[40]);
    //d 31 5
    T[41] = T[41] + T[38];
    T[39] = T[39] + T[37];
    //d 30 4
    T[49] = T[49] + T[33];
    T[38] = T[38] + T[37];
    //d 29 4
    T[46] = T[46] + T[33];
    T[42] = T[42] + T[31];
    T[37] = T[37] + T[36];
    //d 28 4
    T[39] = T[39] + T[31];
    QAND_INV(T[34],T[35],T[36]);
    T[33] = T[33] + T[32];
    //d 27 4
    T[35] = T[35] + T[30];
    QAND_INV(T[29], T[31], T[32]);
    //d 26 3
    T[35] = T[35] + T[20];
    T[31] = T[31] + T[30];
    //d 25 2
    T[44] = T[44] + T[29];
    T[37] = T[37] + T[26];
    T[33] = T[33] + T[20];
    QAND_INV(T[24], T[28], T[30]);
    //d 24 2
    T[29] = T[29] + T[24];
    //d 23 1
    T[38] = T[38] + T[28];
    T[34] = T[34] + T[26];
    T[29] = T[29] + T[20];
    //d 22 1
    T[34] = T[34] + T[28];
    T[31] = T[31] + T[26];
    T[24] = T[24] + T[23];
    T[20] = T[20] + T[19];
    //d 21 1
    T[28] = T[28] + T[27];
    T[26] = T[26] + T[25];
    T[23] = T[23] + T[22];
    T[19] = T[19] + T[18];
    //d 20 1
    T[27] = T[27] + T[16];
    T[25] = T[25] + T[14];
    T[22] = T[22] + T[21];
    T[18] = T[18] + T[17];
    //d 19 1
    T[21] = T[21] + T[16];
    T[17] = T[17] + T[14];
    //d 18 1
    T[16] = T[16] + T[15];
    T[14] = T[14] + T[13];
    //d 17 1
    T[27] = T[27] + T[5];
    T[25] = T[25] + T[4];
    T[22] = T[22] + T[9];
    T[21] = T[21] + T[6];
    T[15] = T[15] + T[11];
    T[13] = T[13] + T[10];
    //d 16 1
    T[23] = T[23] + T[8];
    T[19] = T[19] + T[7];
    T[18] = T[18] + T[9];
    T[17] = T[17] + T[5];
    T[16] = T[16] + T[4];
    T[15] = T[15] + T[10];
    T[14] = T[14] + T[6];
    T[13] = T[13] + T[12];
    //d 15 1
    T[26] = T[26] + Y[18];
    QAND_INV(Y[4], Y[0], T[12]);
    QAND_INV(Y[9], Y[8], T[11]);
    QAND_INV(U[0], Y[1], T[10]);
    QAND_INV(Y[14], U[1], T[9]);
    QAND_INV(Y[11], Y[10], T[8]);
    QAND_INV(Y[13], Y[12], T[7]);
    QAND_INV(Y[6], Y[2], T[6]);
    QAND_INV(Y[15], Y[16], T[5]);
    QAND_INV(Y[7], Y[3], T[4]);
    //d 14 1
    Y[18] = Y[18] + Y[7];
    //d 13 0
    Y[13] = Y[13] + Y[14];
    Y[6] = Y[6] + Y[7];
    //d 12 0
    Y[13] = Y[13] + Y[11];
    Y[14] = Y[14] + Y[7];
    //d 11 0
    Y[6] = Y[6] + Y[16];
    Y[7] = Y[7] + Y[11];
    //d 10 0
    Y[11] = Y[11] + Y[16];
    //d 9 0
    Y[16] = Y[16] + Y[15];
    //d 8 0
    Y[18] = Y[18] + Y[3];
    Y[7] = Y[7] + T[2];
    Y[11] = Y[11] + Y[9];
    Y[15] = Y[15] + Y[2];
    //d 7 0
    T[20] = T[20] + Y[20];
    T[2] = T[2] + Y[1];
    Y[15] = Y[15] + Y[3];
    Y[2] = Y[2] + Y[0];
    Y[4] = Y[4] + Y[9];
    //d 6 0
    T[28] = T[28] + U[6];
    T[24] = T[24] + Y[19];
    Y[20] = Y[20] + T[0];
    Y[0] = Y[0] + Y[1];
    Y[9] = Y[9] + Y[3];
    //d 5 0
    Y[20] = Y[20] + T[3];
    Y[14] = Y[14] + U[0];
    Y[16] = Y[16] + U[6];
    Y[2] = Y[2] + Y[12];
    Y[0] = Y[0] + Y[8];
    Y[19] = Y[19] + T[0];
    Y[3] = Y[3] + Y[1];
    //d 4 0
    T[3] = T[3] + U[7];
    U[6] = U[6] + 1;
    Y[8] = Y[8] + T[1];
    Y[4] = Y[4] + U[0];
    Y[1] = Y[1] + T[0];
    Y[10] = Y[10] + Y[12];
    //d 3 0
    T[3] = T[3] + U[2];
    T[1] = T[1] + U[7];
    U[0] = U[0] + 1;
    Y[9] = Y[9] + U[3];
    Y[3] = Y[3] + U[1];
    T[0] = T[0] + U[5];
    Y[12] = Y[12] + U[6];
    //d 2 0
    T[2] = T[2] + U[7];
    Y[8] = Y[8] + U[5];
    T[1] = T[1] + U[4];
    Y[19] = Y[19] + U[6];
    Y[1] = Y[1] + U[0];
    T[0] = T[0] + U[3];
    Y[10] = Y[10] + U[1];
    Y[12] = Y[12] + U[2];
}

void S_box() {
    //d 1 0
    Y[12] = Y[12] + U[2];
    Y[10] = Y[10] + U[1];
    T[0] = T[0] + U[3];
    Y[1] = Y[1] + U[0];
    Y[19] = Y[19] + U[6];
    T[1] = T[1] + U[4];
    Y[8] = Y[8] + U[5];
    T[2] = T[2] + U[7];
    //d 2 0
    Y[12] = Y[12] + U[6];
    T[0] = T[0] + U[5];
    Y[3] = Y[3] + U[1];
    Y[9] = Y[9] + U[3];
    U[0] = U[0] + 1;
    T[1] = T[1] + U[7];
    T[3] = T[3] + U[2];
    //d 3 0
    Y[10] = Y[10] + Y[12];
    Y[1] = Y[1] + T[0];
    Y[4] = Y[4] + U[0];
    Y[8] = Y[8] + T[1];
    U[6] = U[6] + 1;
    T[3] = T[3] + U[7];
    //d 4 0
    Y[3] = Y[3] + Y[1];
    Y[19] = Y[19] + T[0];
    Y[0] = Y[0] + Y[8];
    Y[2] = Y[2] + Y[12];
    Y[16] = Y[16] + U[6];
    Y[14] = Y[14] + U[0];
    Y[20] = Y[20] + T[3];
    //d 5 0
    Y[9] = Y[9] + Y[3];
    Y[0] = Y[0] + Y[1];
    Y[20] = Y[20] + T[0];
    T[24] = T[24] + Y[19];
    T[28] = T[28] + U[6];
    //d 6 0
    Y[4] = Y[4] + Y[9];
    Y[2] = Y[2] + Y[0];
    Y[15] = Y[15] + Y[3];
    T[2] = T[2] + Y[1];
    T[20] = T[20] + Y[20];
    //d 7 0
    Y[15] = Y[15] + Y[2];
    Y[11] = Y[11] + Y[9];
    Y[7] = Y[7] + T[2];
    Y[18] = Y[18] + Y[3];
    //d 8 0
    Y[16] = Y[16] + Y[15];
    //d 9 0
    Y[11] = Y[11] + Y[16];
    //d 10 0
    Y[7] = Y[7] + Y[11];
    Y[6] = Y[6] + Y[16];
    //d 11 0
    Y[14] = Y[14] + Y[7];
    Y[13] = Y[13] + Y[11];
    //d 12 0
    Y[6] = Y[6] + Y[7];
    Y[13] = Y[13] + Y[14];
    //d 13 0
    Y[18] = Y[18] + Y[7];
    //d 14 1
    QAND(Y[7], Y[3], T[4]);
    QAND(Y[15], Y[16], T[5]);
    QAND(Y[6], Y[2], T[6]);
    QAND(Y[13], Y[12], T[7]);
    QAND(Y[11], Y[10], T[8]);
    QAND(Y[14], U[1], T[9]);
    QAND(U[0], Y[1], T[10]);
    QAND(Y[9], Y[8], T[11]);
    QAND(Y[4], Y[0], T[12]);
    T[26] = T[26] + Y[18];
    //d 15 1
    T[13] = T[13] + T[12];
    T[14] = T[14] + T[6];
    T[15] = T[15] + T[10];
    T[16] = T[16] + T[4];
    T[17] = T[17] + T[5];
    T[18] = T[18] + T[9];
    T[19] = T[19] + T[7];
    T[23] = T[23] + T[8];
    //d 16 1
    T[13] = T[13] + T[10];
    T[15] = T[15] + T[11];
    T[21] = T[21] + T[6];
    T[22] = T[22] + T[9];
    T[25] = T[25] + T[4];
    T[27] = T[27] + T[5];
    //d 17 1
    T[14] = T[14] + T[13];
    T[16] = T[16] + T[15];
    //d 18 1
    T[17] = T[17] + T[14];
    T[21] = T[21] + T[16];
    //d 19 1
    T[18] = T[18] + T[17];
    T[22] = T[22] + T[21];
    T[25] = T[25] + T[14];
    T[27] = T[27] + T[16];
    //d 20 1
    T[19] = T[19] + T[18];
    T[23] = T[23] + T[22];
    T[26] = T[26] + T[25];
    T[28] = T[28] + T[27];
    //d 21 1
    T[20] = T[20] + T[19];
    T[24] = T[24] + T[23];
    T[31] = T[31] + T[26];
    T[34] = T[34] + T[28];
    //d 22 1
    T[29] = T[29] + T[20];
    T[34] = T[34] + T[26];
    T[38] = T[38] + T[28];
    //d 23 1
    T[29] = T[29] + T[24];
    //d 24 2
    QAND(T[24], T[28], T[30]);
    T[33] = T[33] + T[20];
    T[37] = T[37] + T[26];
    T[44] = T[44] + T[29];
    //d 25 2
    T[31] = T[31] + T[30];
    T[35] = T[35] + T[20];
    //d 26 3
    QAND(T[29], T[31], T[32]);
    T[35] = T[35] + T[30];
    //d 27 4
    T[33] = T[33] + T[32];
    QAND(T[34],T[35],T[36]);
    T[39] = T[39] + T[31];
    //d 28 4
    T[37] = T[37] + T[36];
    T[42] = T[42] + T[31];
    T[46] = T[46] + T[33];
    //d 29 4
    T[38] = T[38] + T[37];
    T[49] = T[49] + T[33];
    //d 30 4
    T[39] = T[39] + T[37];
    T[41] = T[41] + T[38];
    //d 31 5
    QAND(T[26], T[39], T[40]);
    T[45] = T[45] + T[37];
    //d 32 5
    T[41] = T[41] + T[40];
    T[46] = T[46] + T[37];
    //d 33 5
    T[42] = T[42] + T[40];
    T[45] = T[45] + T[41];
    T[48] = T[48] + T[46];
    //d 34 6
    QAND(T[33], T[42], T[43]);
    T[47] = T[47] + T[41];
    //d 35 6
    T[44] = T[44] + T[43];
    //d 36 6
    T[47] = T[47] + T[44];
    //d 37 6
    T[48] = T[48] + T[47];
    T[49] = T[49] + T[44];
    //d 38 7
    QAND(T[37], Y[3], z[17]);
    QAND(T[45], Y[15], z[16]);
    QAND(T[41], Y[2], z[15]);
    QAND(T[48], Y[10], z[14]);
    QAND(T[47], Y[12], z[13]);
    QAND(T[46], U[1], z[12]);
    QAND(T[33], Y[1], z[11]);
    QAND(T[49], Y[8], z[10]);
    QAND(T[44], Y[0], z[9]);
    QAND(T[37], Y[7], z[8]);
    QAND(T[45], Y[16], z[7]);
    QAND(T[41], Y[6], z[6]);
    QAND(T[48], Y[11], z[5]);
    QAND(T[47], Y[13], z[4]);
    QAND(T[46], Y[14], z[3]);
    QAND(T[33], U[0], z[2]);
    QAND(T[49], Y[9], z[1]);
    QAND(T[44], Y[4], z[0]);
    //d 39 7
    S[1] = S[1] + z[1];
    S[0] = S[0] + z[16];
    S[2] = S[2] + z[13];
    S[3] = S[3] + z[17];
    S[4] = S[4] + z[12];
    S[5] = S[5] + z[11];
    S[6] = S[6] + z[15];
    S[7] = S[7] + z[7];
    //d 40 7
    S[1] = S[1] + z[2];
    S[0] = S[0] + z[15];
    S[2] = S[2] + z[12];
    S[3] = S[3] + z[16];
    S[4] = S[4] + z[14];
    S[5] = S[5] + z[13];
    S[6] = S[6] + z[11];
    S[7] = S[7] + z[17];
    //d 41 7
    S[1] = S[1] + z[3];
    S[0] = S[0] + z[10];
    S[2] = S[2] + z[11];
    S[3] = S[3] + z[13];
    S[4] = S[4] + z[16];
    S[5] = S[5] + z[12];
    S[6] = S[6] + z[14];
    S[7] = S[7] + z[6];
    //d 42 7
    S[1] = S[1] + z[5];
    S[0] = S[0] + z[9];
    S[2] = S[2] + z[10];
    S[3] = S[3] + z[12];
    S[4] = S[4] + z[15];
    S[5] = S[5] + z[7];
    S[6] = S[6] + z[16];
    S[7] = S[7] + z[13];
    //d 43 7
    S[1] = S[1] + z[6];
    S[2] = S[2] + z[8];
    S[3] = S[3] + z[4];
    S[5] = S[5] + z[10];
    S[6] = S[6] + z[13];
    S[7] = S[7] + z[16];
    //d 44 7
    S[1] = S[1] + z[8];
    S[2] = S[2] + z[7];
    S[3] = S[3] + z[3];
    S[5] = S[5] + z[6];
    S[6] = S[6] + z[10];
    S[7] = S[7] + z[12];
    //d 45 7
    S[1] = S[1] + z[10];
    S[2] = S[2] + z[4];
    S[3] = S[3] + z[2];
    S[5] = S[5] + z[1];
    S[6] = S[6] + z[3];
    S[7] = S[7] + z[4];
    //d 46 7
    S[1] = S[1] + z[11];
    S[2] = S[2] + z[3];
    S[3] = S[3] + z[1];
    S[5] = S[5] + z[0];
    S[6] = S[6] + z[4];
    S[7] = S[7] + z[2];
    //d 47 7
    S[1] = S[1] + z[13];
    S[6] = S[6] + z[2];
    S[7] = S[7] + z[3];
    //d 48 7
    S[1] = S[1] + z[14];
    S[6] = S[6] + z[1];
    S[7] = S[7] + z[0];
    //d 49 7
    S[1] = S[1] + z[15];
    //d 50 7
    S[1] = S[1] + z[16];
    //d 51 7
    S[0] = S[0] + 1;
    S[1] = S[1] + 1;
    S[3] = S[3] + 1;
    S[6] = S[6] + 1;
    S[7] = S[7] + 1;
}

// int main() {

//     for (int X = 0; X < 256; ++X)
//     {
//         for (int i = 0; i < 8; i++) U[i] = (X >> i) & 1;
//         memset(Y, 0, sizeof Y);
//         memset(T, 0, sizeof T);
//         memset(z, 0, sizeof z);
//         memset(S, 0, sizeof S);

//         S_box();

//         int output = 0;
//         for (int i = 0; i < 8; i++) if (S[i] == 1) output |= 1<<(7-i);
//         printf("%02X%c", output, " \n"[(X + 1) % 16 == 0]);

//         clean_up();

//         int ys = 0; for (int i = 0; i < 21; i++) ys += Y[i].bit;
//         int ts = 0; for (int i = 0; i < 50; i++) ts += T[i].bit;
//         int zs = 0; for (int i = 0; i < 18; i++) zs += z[i].bit;
//         int ss = 0; for (int i = 0; i < 8; i++) ss += S[i].bit;
//         assert(ys == 0);
//         assert(ts == 0);
//         assert(zs == 0);
//         assert(ss == 0);
//     }
//     return 0;
// }