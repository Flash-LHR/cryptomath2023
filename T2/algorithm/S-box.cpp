#include <iostream>
#include <cstring>
#include <cassert>
#include "bitDomain.h"

using std::cin;
using std::cout;
using std::endl;

 bitDomain U[8];
 bitDomain Y[21];
 bitDomain T[50];
 bitDomain z[18];
 bitDomain S[8];
//bitDomain EX[16]; 连同Y[5]\Y[17]都没用到

void QAND(bitDomain x, bitDomain y, bitDomain& z) {
    assert(z == 0);
    z = x * y + z;
}

void QAND_INV(bitDomain x, bitDomain y, bitDomain& z) {
    // assert(z == x * y);
    z = x * y + z;
}

void clean_up() {
    // just reverse the s_box()
}

void S_box() {
    //d
    U[0] = U[0] + 1;
    U[6] = U[6] + 1;
    Y[0] = Y[0] + 1;
    Y[1] = Y[1] + 1;
    Y[3] = Y[3] + U[1];
    Y[4] = Y[4] + 1;
    Y[6] = Y[6] + U[3];
    Y[7] = Y[7] + 1;
    Y[8] = Y[8] + U[4];
    Y[11] = Y[11] + U[7];
    Y[12] = Y[12] + 1;
    Y[13] = Y[13] + U[5];
    Y[16] = Y[16] + U[2];
    T[24] = T[24] + 1;
    T[29] = T[29] + 1;
    T[44] = T[44] + 1;
    T[47] = T[47] + 1;
    T[48] = T[48] + 1;
    T[49] = T[49] + 1;
    //d
    Y[2] = Y[2] + U[6];
    Y[4] = Y[4] + U[1];
    Y[6] = Y[6] + U[7];
    Y[8] = Y[8] + U[5];
    Y[9] = Y[9] + U[0];
    Y[12] = Y[12] + U[2];
    Y[13] = Y[13] + U[3];
    Y[16] = Y[16] + U[4];
    //d
    Y[0] = Y[0] + Y[6];
    Y[1] = Y[1] + U[3];
    Y[4] = Y[4] + U[5];
    Y[7] = Y[7] + Y[8];
    Y[10] = Y[10] + U[1];
    Y[11] = Y[11] + U[0];
    Y[12] = Y[12] + U[6];
    Y[13] = Y[13] + 1;
    Y[14] = Y[14] + Y[9];
    Y[16] = Y[16] + U[7];
    T[26] = T[26] + U[2];
    T[31] = T[31] + U[4];
    //d
    Y[1] = Y[1] + U[0];
    Y[2] = Y[2] + U[3];
    Y[6] = Y[6] + U[1];
    Y[8] = Y[8] + U[7];
    Y[9] = Y[9] + U[5];
    Y[10] = Y[10] + Y[12];
    Y[11] = Y[11] + U[2];
    Y[14] = Y[14] + U[4];
    Y[16] = Y[16] + Y[4];
    T[24] = T[24] + U[6];
    //d
    Y[0] = Y[0] + U[0];
    Y[1] = Y[1] + U[5];
    Y[7] = Y[7] + U[2];
    Y[9] = Y[9] + U[1];
    Y[11] = Y[11] + U[4];
    Y[14] = Y[14] + Y[13];
    Y[15] = Y[15] + Y[16];
    T[24] = T[24] + U[3];
    T[28] = T[28] + U[6];
    T[29] = T[29] + U[7];
    //d
    Y[0] = Y[0] + U[4];
    Y[2] = Y[2] + Y[11];
    Y[3] = Y[3] + Y[1];
    Y[7] = Y[7] + U[3];
    Y[9] = Y[9] + 1;
    Y[13] = Y[13] + U[7];
    Y[14] = Y[14] + U[2];
    Y[15] = Y[15] + U[6];
    T[24] = T[24] + U[5];
    T[26] = T[26] + U[0];
    T[31] = T[31] + U[1];
    //d
    T[26] = T[26] + U[4];
    T[29] = T[29] + U[2];
    T[33] = T[33] + U[3];
    T[34] = T[34] + U[6];
    T[35] = T[35] + U[5];
    T[44] = T[44] + U[7];
    QAND(Y[7], Y[3], T[4]);
    QAND(Y[15], Y[16], T[5]);
    QAND(Y[6], Y[2], T[6]);
    QAND(Y[13], Y[12], T[7]);
    QAND(Y[11], Y[10], T[8]);
    QAND(Y[14], U[1], T[9]);
    QAND(U[0], Y[1], T[10]);
    QAND(Y[9], Y[8], T[11]);
    QAND(Y[4], Y[0], T[12]);
    //d
    T[24] = T[24] + T[4];
    T[26] = T[26] + U[1];
    T[28] = T[28] + T[5];
    T[29] = T[29] + T[11];
    T[31] = T[31] + T[6];
    T[33] = T[33] + U[2];
    T[34] = T[34] + U[0];
    T[35] = T[35] + U[3];
    T[37] = T[37] + T[10];
    T[41] = T[41] + U[4];
    T[42] = T[42] + T[12];
    T[44] = T[44] + T[8];
    T[45] = T[45] + U[6];
    T[46] = T[46] + U[7];
    T[47] = T[47] + T[7];
    T[48] = T[48] + U[5];
    T[49] = T[49] + T[9];
    //d
    T[24] = T[24] + T[6];
    T[26] = T[26] + T[4];
    T[28] = T[28] + T[10];
    T[29] = T[29] + T[5];
    T[31] = T[31] + U[0];
    T[33] = T[33] + U[5];
    T[34] = T[34] + U[2];
    T[35] = T[35] + U[7];
    T[37] = T[37] + U[4];
    T[41] = T[41] + U[1];
    T[44] = T[44] + T[12];
    T[45] = T[45] + T[11];
    T[46] = T[46] + U[3];
    T[47] = T[47] + T[8];
    T[48] = T[48] + T[9];
    T[49] = T[49] + U[6];
    //d
    T[24] = T[24] + T[8];
    T[26] = T[26] + T[6];
    T[28] = T[28] + T[4];
    T[29] = T[29] + T[7];
    T[31] = T[31] + U[2];
    T[33] = T[33] + U[7];
    T[34] = T[34] + U[1];
    T[35] = T[35] + T[5];
    T[37] = T[37] + T[12];
    T[41] = T[41] + U[0];
    T[42] = T[42] + U[4];
    T[44] = T[44] + U[6];
    T[45] = T[45] + T[10];
    T[46] = T[46] + T[9];
    T[48] = T[48] + U[3];
    T[49] = T[49] + U[5];
    //d
    T[24] = T[24] + T[9];
    T[26] = T[26] + T[10];
    T[28] = T[28] + T[11];
    T[29] = T[29] + T[4];
    T[31] = T[31] + T[12];
    T[33] = T[33] + T[5];
    T[34] = T[34] + U[4];
    T[35] = T[35] + T[6];
    T[37] = T[37] + U[0];
    T[41] = T[41] + U[2];
    T[42] = T[42] + U[1];
    T[44] = T[44] + T[7];
    T[46] = T[46] + U[5];
    T[47] = T[47] + U[7];
    T[48] = T[48] + T[8];
    T[49] = T[49] + U[3];
    //d
    T[24] = T[24] + T[10];
    T[26] = T[26] + T[12];
    T[29] = T[29] + T[8];
    T[31] = T[31] + T[4];
    T[33] = T[33] + T[6];
    T[34] = T[34] + T[5];
    T[35] = T[35] + U[2];
    T[37] = T[37] + U[1];
    T[41] = T[41] + U[6];
    T[42] = T[42] + U[0];
    T[44] = T[44] + T[11];
    T[46] = T[46] + U[4];
    //d
    T[24] = T[24] + T[11];
    T[29] = T[29] + U[6];
    T[31] = T[31] + T[10];
    T[33] = T[33] + T[9];
    T[34] = T[34] + T[6];
    T[35] = T[35] + T[7];
    T[37] = T[37] + U[2];
    T[41] = T[41] + T[12];
    T[42] = T[42] + T[4];
    T[44] = T[44] + T[5];
    T[46] = T[46] + U[0];
    T[47] = T[47] + U[1];
    T[49] = T[49] + T[8];
    //d
    T[29] = T[29] + T[12];
    QAND(T[24], T[28], T[30]);
    T[33] = T[33] + T[7];
    T[34] = T[34] + T[11];
    T[35] = T[35] + T[9];
    T[37] = T[37] + T[6];
    T[41] = T[41] + T[5];
    T[42] = T[42] + U[2];
    T[44] = T[44] + T[4];
    T[46] = T[46] + U[1];
    T[47] = T[47] + U[0];
    T[49] = T[49] + T[10];
    //d
    T[31] = T[31] + T[30];
    T[33] = T[33] + T[10];
    T[35] = T[35] + T[12];
    T[37] = T[37] + T[4];
    T[41] = T[41] + T[11];
    T[42] = T[42] + T[6];
    T[44] = T[44] + U[2];
    T[45] = T[45] + T[5];
    T[46] = T[46] + T[7];
    T[47] = T[47] + U[4];
    //d
    QAND(T[29], T[31], T[32]);
    T[33] = T[33] + T[12];
    T[35] = T[35] + T[10];
    T[41] = T[41] + T[6];
    T[39] = T[39] + T[30];
    T[45] = T[45] + T[4];
    T[46] = T[46] + T[5];
    T[49] = T[49] + T[11];
    //d
    T[33] = T[33] + T[32];
    T[34] = T[34] + T[12];
    T[35] = T[35] + T[30];
    T[42] = T[42] + T[10];
    T[46] = T[46] + T[4];
    T[47] = T[47] + T[6];
    T[48] = T[48] + T[5];
    //d
    QAND(T[34], T[35], T[36]);
    T[42] = T[42] + T[30];
    T[46] = T[46] + T[32];
    T[47] = T[47] + T[4];
    T[48] = T[48] + T[6];
    //d
    T[39] = T[39] + T[36];
    T[48] = T[48] + T[32];
    T[49] = T[49] + T[4];
    //d
    QAND(T[26], T[39], T[40]);
    T[37] = T[37] + T[36];
    T[49] = T[49] + T[6];
    //d
    T[41] = T[41] + T[36];
    T[42] = T[42] + T[40];
    T[49] = T[49] + T[32];
    //d
    T[41] = T[41] + T[40];
    QAND(T[33], T[42], T[43]);
    T[47] = T[47] + T[36];
    //d
    T[45] = T[45] + T[40];
    T[46] = T[46] + T[36];
    T[47] = T[47] + T[43];
    //d
    T[47] = T[47] + T[40];
    T[48] = T[48] + T[43];
    //d
    T[44] = T[44] + T[43];
    T[48] = T[48] + T[40];
    //d
    T[49] = T[49] + T[43];
    //d 38 7
    QAND(T[33], Y[1], z[11]);
    QAND(T[37], Y[3], z[17]);
    QAND(T[41], Y[2], z[15]);
    QAND(T[44], Y[0], z[9]);
    QAND(T[45], Y[16], z[7]);
    QAND(T[46], U[1], z[12]);
    QAND(T[47], Y[12], z[13]);
    QAND(T[48], Y[11], z[5]);
    QAND(T[49], Y[8], z[10]);
    //d
    QAND(T[33], U[0], z[2]);
    QAND(T[37], Y[7], z[8]);
    QAND(T[41], Y[6], z[6]);
    QAND(T[44], Y[4], z[0]);
    QAND(T[45], Y[15], z[16]);
    QAND(T[46], Y[14], z[3]);
    QAND(T[47], Y[13], z[4]);
    QAND(T[48], Y[10], z[14]);
    QAND(T[49], Y[9], z[1]);
    S[0] = S[0] + 1;
    S[3] = S[3] + 1;
    S[6] = S[6] + 1;
    S[7] = S[7] + 1;
    //d
    S[0] = S[0] + z[9];
    S[1] = S[1] + z[5];
    S[2] = S[2] + z[3];
    S[3] = S[3] + z[1];
    S[4] = S[4] + z[12];
    S[5] = S[5] + z[10];
    S[6] = S[6] + z[4];
    S[7] = S[7] + z[2];
    //d
    S[0] = S[0] + z[15];
    S[1] = S[1] + z[6];
    S[2] = S[2] + z[4];
    S[3] = S[3] + z[2];
    S[4] = S[4] + z[16];
    S[5] = S[5] + z[1];
    S[6] = S[6] + z[3];
    S[7] = S[7] + z[0];
    //d
    S[0] = S[0] + z[16];
    S[1] = S[1] + z[8];
    S[2] = S[2] + z[7];
    S[3] = S[3] + z[3];
    S[5] = S[5] + z[11];
    S[6] = S[6] + z[2];
    S[7] = S[7] + S[4];
    //d
    S[0] = S[0] + z[10];
    S[1] = S[1] + z[11];
    S[2] = S[2] + z[8];
    S[3] = S[3] + z[16];
    S[4] = S[4] + z[14];
    S[5] = S[5] + z[13];
    S[6] = S[6] + z[15];
    S[7] = S[7] + z[3];
    //d
    S[1] = S[1] + S[3];
    S[2] = S[2] + z[10];
    S[4] = S[4] + z[15];
    S[6] = S[6] + S[5];
    S[7] = S[7] + z[4];
    //d
    S[1] = S[1] + z[10];
    S[2] = S[2] + z[11];
    S[3] = S[3] + z[12];
    S[5] = S[5] + z[0];
    S[6] = S[6] + z[14];
    S[7] = S[7] + z[13];
    //d
    S[1] = S[1] + z[13];
    S[2] = S[2] + z[12];
    S[3] = S[3] + z[4];
    S[5] = S[5] + z[6];
    S[6] = S[6] + z[16];
    S[7] = S[7] + z[7];
    //d
    S[1] = S[1] + z[14];
    S[2] = S[2] + z[13];
    S[3] = S[3] + z[17];
    S[5] = S[5] + z[7];
    S[7] = S[7] + z[6];
    //d
    S[1] = S[1] + z[15];
    S[3] = S[3] + z[13];
    S[5] = S[5] + z[12];
    S[7] = S[7] + z[17];

    // printf("U:"); for (int i = 0; i < 8; i++) printf(" %d(%d)", i, U[i].bit); printf("\n");
    // printf("Y:"); for (int i = 0; i < 21; i++) printf(" %d(%d)", i, Y[i].bit); printf("\n");
    // printf("T:"); for (int i = 0; i < 50; i++) printf(" %d(%d)", i, T[i].bit); printf("\n");
    // printf("z:"); for (int i = 0; i < 18; i++) printf(" %d(%d)", i, z[i].bit); printf("\n");
    // printf("S:"); for (int i = 0; i < 8; i++) printf(" %d(%d)", i, S[i].bit); printf("\n");
}

int main() {

    for (int X = 0; X < 256; ++X)
    {
        for (int i = 0; i < 8; i++) U[i] = (X >> i) & 1;
        memset(Y, 0, sizeof Y);
        memset(T, 0, sizeof T);
        memset(z, 0, sizeof z);
        memset(S, 0, sizeof S);

        S_box();

        int output = 0;
        for (int i = 0; i < 8; i++) if (S[i] == 1) output |= 1<<(7-i);
        printf("%02X%c", output, " \n"[(X + 1) % 16 == 0]);

        clean_up();

        // int ys = 0; for (int i = 0; i < 21; i++) ys += Y[i].bit;
        // int ts = 0; for (int i = 0; i < 50; i++) ts += T[i].bit;
        // int zs = 0; for (int i = 0; i < 18; i++) zs += z[i].bit;
        // int ss = 0; for (int i = 0; i < 8; i++) ss += S[i].bit;
        // assert(ys == 0);
        // assert(ts == 0);
        // assert(zs == 0);
        // assert(ss == 0);
        // break;
    }
    return 0;
}