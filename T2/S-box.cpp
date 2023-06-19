#include <iostream>
#include <bitset>
#include <cstring>
#include <cassert>

using std::cin;
using std::cout;
using std::endl;
using std::bitset;

struct bitDomain {
    int bit;

    bitDomain(int _bit = 0) {
        bit = _bit;
    }

    bitDomain operator+(const bitDomain& _bitDomain) {
        return bit ^ _bitDomain.bit;
    }

    bitDomain operator*(const bitDomain& _bitDomain) {
        return bit & _bitDomain.bit;
    }

    bool operator==(const bitDomain& _bitDomain) {
        return bit == _bitDomain.bit;
    }
};

bitDomain U[8];
bitDomain Y[21];
bitDomain T[72];
bitDomain z[18];
bitDomain S[8];
// bitDomain EX[16]; 连同Y[5]\Y[17]都没用到

void QAND(bitDomain x, bitDomain y, bitDomain& z) {
    assert(z == 0);
    z = x * y + z;
}

void QAND_INV(bitDomain x, bitDomain y, bitDomain& z) {
    assert(z == x * y);
    z = x * y + z;
}

void clean_up() {
    //S[1] = S[1] + T[71] + T[70];
    T[71] = T[71] + T[68] + S[2];
    T[70] = T[70] + T[59] + T[57];
    //S[0] = T[69] + 1;
    T[69] = T[69] + T[55] + T[51];
    //S[6] = S[6] + T[68] + T[62];
    T[68] = T[68] + T[64] + S[4];
    //S[2] = S[2] + T[67] + T[58];
    T[67] = T[67] + T[62] + T[56];
    //S[7] = S[7] + T[66] + S[3];
    //S[5] = S[5] + T[66] + T[62];
    T[66] = T[66] + T[61] + T[57];
    //S[3] = S[3] + T[65] + T[64];
    T[65] = T[65] + T[52] + T[50];
    T[64] = T[64] + T[63] + T[58];
    T[63] = T[63] + T[63]; //T[63] = T[60] + 1;
    T[62] = T[62] + T[52] + T[54]; // T[62] = T[62] + T[51] + T[54];
    //S[4] = S[4] + T[53] + T[51];
    T[61] = T[61] + z[1] + z[0];
    T[60] = T[60] + z[1] + z[2];
    T[59] = T[59] + z[5] + z[3];
    T[58] = T[58] + z[4] + z[3];
    T[57] = T[57] + z[7] + z[6];
    T[56] = T[56] + z[7] + z[8];
    T[55] = T[55] + z[10] + z[9];
    T[54] = T[54] + z[10] + z[11];
    T[53] = T[53] + z[14] + z[12];
    T[52] = T[52] + z[13] + z[12];
    T[51] = T[51] + z[16] + z[15];
    T[50] = T[50] + z[16] + z[17];
    QAND_INV(T[44], Y[4], z[0]);
    QAND_INV(T[49], Y[9], z[1]);
    QAND_INV(T[33], U[0], z[2]);
    QAND_INV(T[46], Y[14], z[3]); // before: QAND_INV(T[46], Y[15], z[3]);
    QAND_INV(T[47], Y[13], z[4]);
    QAND_INV(T[48], Y[11], z[5]);
    QAND_INV(T[41], Y[6], z[6]);
    QAND_INV(T[45], Y[16], z[7]); // before: QAND_INV(T[45], U[6], z[7]);
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
    T[49] = T[49] + T[44] + T[33];
    T[48] = T[48] + T[47] + T[46];
    T[47] = T[47] + T[44] + T[41];
    T[46] = T[46] + T[33] + T[37];
    T[45] = T[45] + T[41] + T[37];
    T[44] = T[44] + T[29] + T[43];
    QAND_INV(T[33], T[42], T[43]);
    T[42] = T[42] + T[40] + T[31];
    T[41] = T[41] + T[38] + T[40];
    QAND_INV(T[26], T[39], T[40]);
    T[39] = T[39] + T[37] + T[31];
    T[38] = T[38] + T[37] + T[28];
    T[37] = T[37] + T[36] + T[26];
    QAND_INV(T[34],T[35],T[36]);
    T[35] = T[35] + T[30] + T[20];
    T[34] = T[34] + T[28] + T[26];
    T[33] = T[33] + T[32] + T[20];
    QAND_INV(T[29], T[31], T[32]);
    T[31] = T[31] + T[30] + T[26];
    QAND_INV(T[24], T[28], T[30]);
    T[29] = T[29] + T[24] + T[20];
    T[28] = T[28] + U[6] + T[27];
    T[27] = T[27] + T[5] + T[16];
    T[26] = T[26] + Y[18] + T[25];
    T[25] = T[25] + T[4] + T[14];
    T[24] = T[24] + Y[19] + T[23];
    T[23] = T[23] + T[8] + T[22];
    T[22] = T[22] + T[9] + T[21];
    T[21] = T[21] + T[6] + T[16];
    T[20] = T[20] + Y[20] + T[19];
    T[19] = T[19] + T[7] + T[18];
    T[18] = T[18] + T[9] + T[17];
    T[17] = T[17] + T[5] + T[14];
    T[16] = T[16] + T[4] + T[15];
    T[15] = T[15] + T[11] + T[10];
    T[14] = T[14] + T[13] + T[6];
    T[13] = T[13] + T[12] + T[10];
    QAND_INV(Y[4], Y[0], T[12]);
    QAND_INV(Y[9], Y[8], T[11]);
    QAND_INV(U[0], Y[1], T[10]);
    QAND_INV(Y[14], U[1], T[9]);
    QAND_INV(Y[11], Y[10], T[8]);
    QAND_INV(Y[13], Y[12], T[7]);
    QAND_INV(Y[6], Y[2], T[6]);
    QAND_INV(Y[15], Y[16], T[5]);
    QAND_INV(Y[7], Y[3], T[4]);
    Y[20] = Y[20] + T[3] + T[0];
    T[3] = T[3] + U[2] + U[7];
    Y[18] = Y[18] + Y[7] + Y[3];
    Y[13] = Y[13] + Y[14] + Y[11];
    Y[14] = Y[14] + Y[7] + U[0];
    Y[6] = Y[6] + Y[7] + Y[16];
    Y[7] = Y[7] + T[2] + Y[11];
    T[2] = T[2] + Y[1] + U[7];
    Y[11] = Y[11] + Y[16] + Y[9];
    Y[16] = Y[16] + Y[15] + U[6];
    Y[15] = Y[15] + Y[2] + Y[3];
    Y[2] = Y[2]+ Y[0] + Y[12];
    Y[0] = Y[0] + Y[8] + Y[1];
    U[6] = U[6] + 1;
    Y[8] = Y[8] + T[1] + U[5];
    T[1] = T[1] + U[4] + U[7];
    Y[19] = Y[19] + T[0] + U[6];
    Y[4] = Y[4] + U[0] + Y[9];
    U[0] = U[0] + 1;
    Y[9] = Y[9] + Y[3] + U[3];
    Y[3] = Y[3] + U[1] + Y[1];
    Y[1] = Y[1] + T[0] + U[0];
    T[0] = T[0] + U[3] + U[5];
    Y[10] = Y[10] + Y[12] + U[1];
    Y[12] = Y[12] + U[2] + U[6];
}

void S_box() {
    Y[12] = Y[12] + U[2] + U[6];
    Y[10] = Y[10] + Y[12] + U[1];
    T[0] = T[0] + U[3] + U[5];
    Y[1] = Y[1] + T[0] + U[0];
    Y[3] = Y[3] + U[1] + Y[1];
    Y[9] = Y[9] + Y[3] + U[3];
    U[0] = U[0] + 1;
    Y[4] = Y[4] + U[0] + Y[9];
    Y[19] = Y[19] + T[0] + U[6];
    T[1] = T[1] + U[4] + U[7];
    Y[8] = Y[8] + T[1] + U[5];
    U[6] = U[6] + 1;
    Y[0] = Y[0] + Y[8] + Y[1];
    Y[2] = Y[2]+ Y[0] + Y[12];
    Y[15] = Y[15] + Y[2] + Y[3];
    Y[16] = Y[16] + Y[15] + U[6];
    Y[11] = Y[11] + Y[16] + Y[9];
    T[2] = T[2] + Y[1] + U[7];
    Y[7] = Y[7] + T[2] + Y[11];
    Y[6] = Y[6] + Y[7] + Y[16];
    Y[14] = Y[14] + Y[7] + U[0];
    Y[13] = Y[13] + Y[14] + Y[11];
    Y[18] = Y[18] + Y[7] + Y[3];
    T[3] = T[3] + U[2] + U[7];
    Y[20] = Y[20] + T[3] + T[0];
    QAND(Y[7], Y[3], T[4]);
    QAND(Y[15], Y[16], T[5]);
    QAND(Y[6], Y[2], T[6]);
    QAND(Y[13], Y[12], T[7]);
    QAND(Y[11], Y[10], T[8]);
    QAND(Y[14], U[1], T[9]);
    QAND(U[0], Y[1], T[10]);
    QAND(Y[9], Y[8], T[11]);
    QAND(Y[4], Y[0], T[12]);
    T[13] = T[13] + T[12] + T[10];
    T[14] = T[14] + T[13] + T[6];
    T[15] = T[15] + T[11] + T[10];
    T[16] = T[16] + T[4] + T[15];
    T[17] = T[17] + T[5] + T[14];
    T[18] = T[18] + T[9] + T[17];
    T[19] = T[19] + T[7] + T[18];
    T[20] = T[20] + Y[20] + T[19];
    T[21] = T[21] + T[6] + T[16];
    T[22] = T[22] + T[9] + T[21];
    T[23] = T[23] + T[8] + T[22];
    T[24] = T[24] + Y[19] + T[23];
    T[25] = T[25] + T[4] + T[14];
    T[26] = T[26] + Y[18] + T[25];
    T[27] = T[27] + T[5] + T[16];
    T[28] = T[28] + U[6] + T[27];
    T[29] = T[29] + T[24] + T[20];
    QAND(T[24], T[28], T[30]);
    T[31] = T[31] + T[30] + T[26];
    QAND(T[29], T[31], T[32]);
    T[33] = T[33] + T[32] + T[20];
    T[34] = T[34] + T[28] + T[26];
    T[35] = T[35] + T[30] + T[20];
    QAND(T[34],T[35],T[36]);
    T[37] = T[37] + T[36] + T[26];
    T[38] = T[38] + T[37] + T[28];
    T[39] = T[39] + T[37] + T[31];
    QAND(T[26], T[39], T[40]);
    T[41] = T[41] + T[38] + T[40];
    T[42] = T[42] + T[40] + T[31];
    QAND(T[33], T[42], T[43]);
    T[44] = T[44] + T[29] + T[43];
    T[45] = T[45] + T[41] + T[37];
    T[46] = T[46] + T[33] + T[37];
    T[47] = T[47] + T[44] + T[41];
    T[48] = T[48] + T[47] + T[46];
    T[49] = T[49] + T[44] + T[33];
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
    QAND(T[45], Y[16], z[7]); // before: QAND(T[45], U[6], z[7]);
    QAND(T[41], Y[6], z[6]);
    QAND(T[48], Y[11], z[5]);
    QAND(T[47], Y[13], z[4]);
    QAND(T[46], Y[14], z[3]); // before: QAND(T[46], Y[15], z[3]);
    QAND(T[33], U[0], z[2]);
    QAND(T[49], Y[9], z[1]);
    QAND(T[44], Y[4], z[0]);
    T[50] = T[50] + z[16] + z[17];
    T[51] = T[51] + z[16] + z[15];
    T[52] = T[52] + z[13] + z[12];
    T[53] = T[53] + z[14] + z[12];
    T[54] = T[54] + z[10] + z[11];
    T[55] = T[55] + z[10] + z[9];
    T[56] = T[56] + z[7] + z[8];
    T[57] = T[57] + z[7] + z[6];
    T[58] = T[58] + z[4] + z[3];
    T[59] = T[59] + z[5] + z[3];
    T[60] = T[60] + z[1] + z[2];
    T[61] = T[61] + z[1] + z[0];
    S[4] = S[4] + T[53] + T[51];
    T[62] = T[62] + T[52] + T[54]; // T[62] = T[62] + T[51] + T[54];
    T[63] = T[60] + 1;  
    T[64] = T[64] + T[63] + T[58];
    T[65] = T[65] + T[52] + T[50];
    S[3] = S[3] + T[65] + T[64];
    T[66] = T[66] + T[61] + T[57];
    S[5] = S[5] + T[66] + T[62];
    S[7] = S[7] + T[66] + S[3];
    T[67] = T[67] + T[62] + T[56];
    S[2] = S[2] + T[67] + T[58];
    T[68] = T[68] + T[64] + S[4];
    S[6] = S[6] + T[68] + T[62];
    T[69] = T[69] + T[55] + T[51];
    S[0] = T[69] + 1;
    T[70] = T[70] + T[59] + T[57];
    T[71] = T[71] + T[68] + S[2];
    S[1] = S[1] + T[71] + T[70];

    clean_up();
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
        
        int ys = 0; for (int i = 0; i < 21; i++) ys += Y[i].bit;
        int ts = 0; for (int i = 0; i < 72; i++) {
            if (T[i].bit == 1) cout << "i = " << i << endl;
            ts += T[i].bit;
        }
        int zs = 0; for (int i = 0; i < 18; i++) zs += z[i].bit;
        assert(ys == 0);
        assert(ts == 0);
        assert(zs == 0);

        int output = 0;
        for (int i = 0; i < 8; i++) if (S[i].bit == 1) output |= 1<<(7-i);
        printf("%02X%c", output, " \n"[(X + 1) % 16 == 0]);
    }
    return 0;
}