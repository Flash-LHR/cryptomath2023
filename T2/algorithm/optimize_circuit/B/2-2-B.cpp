/*
辅助位优化
T[24] -> z[0]
T[26] -> z[2]
T[28] -> z[3]
T[29] -> z[4]
T[31] -> z[6]
T[33] -> S[0]
T[34] -> z[7]
T[35] -> z[8]
T[37] -> S[1]
T[39] -> z[9]
T[41] -> S[2]
T[42] -> z[10]
T[44] -> S[3]
T[45] -> S[4]
T[46] -> S[5]
T[47] -> S[6]
T[48] -> S[7]
T[49] -> F[0]
*/

//d
U[0] = U[0] + 1;
z[11] = z[11] + U[1];
z[12] = z[12] + U[2];
z[13] = z[13] + U[3];
z[14] = z[14] + U[4];
z[15] = z[15] + U[5];
z[16] = z[16] + U[6];
z[17] = z[17] + U[7];
Y[0] = Y[0] + 1;
Y[1] = Y[1] + 1;
Y[2] = Y[2] + 1;
Y[4] = Y[4] + 1;
Y[7] = Y[7] + 1;
Y[9] = Y[9] + 1;
Y[13] = Y[13] + 1;
Y[16] = Y[16] + 1;
z[3] = z[3] + 1;
S[0] = S[0] + 1;
z[8] = z[8] + 1;
S[4] = S[4] + 1;
S[7] = S[7] + 1;
//d
z[10] = z[10] + U[0];
Y[0] = Y[0] + z[17];
Y[1] = Y[1] + U[3];
Y[2] = Y[2] + z[14];
Y[6] = Y[6] + U[7];
Y[7] = Y[7] + z[15];
Y[8] = Y[8] + U[4];
Y[9] = Y[9] + z[11];
Y[10] = Y[10] + U[1];
Y[11] = Y[11] + z[12];
Y[12] = Y[12] + U[2];
Y[15] = Y[15] + U[5];
z[0] = z[0] + z[13];
z[3] = z[3] + U[6];
//d
Y[0] = Y[0] + U[4];
Y[1] = Y[1] + U[0];
Y[2] = Y[2] + z[10];
Y[6] = Y[6] + U[3];
Y[7] = Y[7] + z[14];
Y[8] = Y[8] + U[5];
Y[9] = Y[9] + z[15];
Y[10] = Y[10] + U[2];
Y[11] = Y[11] + U[7];
Y[12] = Y[12] + U[6];
Y[13] = Y[13] + z[13];
Y[14] = Y[14] + z[12];
Y[15] = Y[15] + z[17];
Y[16] = Y[16] + z[11];
z[0] = z[0] + z[16];
z[6] = z[6] + U[1];
//d
Y[0] = Y[0] + U[3];
Y[1] = Y[1] + U[5];
Y[3] = Y[3] + z[13];
Y[2] = Y[2] + Y[6];
Y[4] = Y[4] + U[1];
Y[7] = Y[7] + U[2];
Y[8] = Y[8] + U[7];
Y[9] = Y[9] + U[0];
Y[10] = Y[10] + U[6];
Y[11] = Y[11] + z[10];
Y[13] = Y[13] + z[17];
Y[14] = Y[14] + U[4];
Y[15] = Y[15] + z[14];
Y[16] = Y[16] + z[12];
z[0] = z[0] + z[15];
z[4] = z[4] + Y[12];
S[4] = S[4] + z[16];
//d
Y[0] = Y[0] + z[10];
Y[2] = Y[2] + Y[12];
Y[3] = Y[3] + Y[9];
Y[4] = Y[4] + U[5];
Y[6] = Y[6] + z[11];
Y[7] = Y[7] + U[3];
Y[11] = Y[11] + U[4];
Y[13] = Y[13] + z[15];
Y[14] = Y[14] + Y[1];
Y[15] = Y[15] + Y[10];
Y[16] = Y[16] + Y[8];
z[2] = z[2] + U[0];
z[4] = z[4] + U[7];
z[6] = z[6] + U[2];
S[0] = S[0] + z[12];
S[3] = S[3] + z[17];
S[7] = S[7] + z[13];
F[0] = F[0] + U[6];
//d
z[6] = z[6] + z[10];
z[8] = z[8] + U[2];
S[7] = S[7] + U[5];
F[0] = F[0] + U[3];
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
z[0] = z[0] + T[4];
z[2] = z[2] + Y[3];
z[3] = z[3] + T[5];
z[4] = z[4] + T[7];
z[6] = z[6] + U[4];
S[0] = S[0] + Y[13];
z[7] = z[7] + T[6];
z[8] = z[8] + T[10];
S[1] = S[1] + U[0];
S[2] = S[2] + T[12];
z[10] = z[10] + Y[14];
S[3] = S[3] + Y[12];
S[4] = S[4] + T[11];
S[5] = S[5] + Y[0];
S[6] = S[6] + Y[8];
S[7] = S[7] + T[8];
F[0] = F[0] + U[5];
//d
z[0] = z[0] + T[6];
z[2] = z[2] + Y[14];
z[3] = z[3] + T[4];
z[4] = z[4] + T[5];
z[6] = z[6] + T[10];
S[0] = S[0] + T[7];
z[7] = z[7] + Y[6];
z[8] = z[8] + Y[13];
S[1] = S[1] + T[12];
S[2] = S[2] + T[11];
z[10] = z[10] + Y[3];
S[3] = S[3] + T[8];
S[5] = S[5] + T[9];
S[6] = S[6] + Y[9];
//d
z[0] = z[0] + T[8];
z[2] = z[2] + T[4];
z[3] = z[3] + T[10];
z[4] = z[4] + T[11];
z[6] = z[6] + T[6];
S[0] = S[0] + T[5];
z[7] = z[7] + T[12];
z[8] = z[8] + T[9];
S[1] = S[1] + Y[14];
S[2] = S[2] + Y[6];
S[3] = S[3] + T[7];
S[5] = S[5] + Y[4];
//d
z[0] = z[0] + T[9];
z[2] = z[2] + T[6];
z[3] = z[3] + T[11];
z[4] = z[4] + T[4];
z[6] = z[6] + T[12];
S[0] = S[0] + T[10];
z[7] = z[7] + T[5];
z[8] = z[8] + T[7];
S[1] = S[1] + Y[3];
S[2] = S[2] + Y[2];
S[6] = S[6] + T[8];
//d
z[0] = z[0] + T[10];
z[2] = z[2] + T[12];
z[4] = z[4] + T[8];
z[6] = z[6] + T[4];
S[0] = S[0] + T[6];
z[7] = z[7] + T[11];
z[8] = z[8] + T[5];
S[5] = S[5] + T[7];
S[7] = S[7] + T[9];
//d
z[0] = z[0] + T[11];
z[2] = z[2] + T[10];
z[4] = z[4] + T[12];
S[0] = S[0] + T[9];
z[7] = z[7] + Y[2];
z[8] = z[8] + T[6];
S[1] = S[1] + T[4];
S[2] = S[2] + T[5];
S[6] = S[6] + T[7];
F[0] = F[0] + T[8];
//d
QAND(z[0], z[3], T[30]);
S[0] = S[0] + T[12];
S[1] = S[1] + T[6];
z[10] = z[10] + T[10];
S[3] = S[3] + T[4];
S[4] = S[4] + T[5];
F[0] = F[0] + T[9];
//d
z[6] = z[6] + T[30];
z[8] = z[8] + T[12];
S[1] = S[1] + T[10];
S[2] = S[2] + T[6];
z[10] = z[10] + T[4];
S[3] = S[3] + T[5];
F[0] = F[0] + T[11];
//d
QAND(z[4], z[6], T[32]);
z[8] = z[8] + T[30];
z[10] = z[10] + T[6];
S[3] = S[3] + T[12];
S[4] = S[4] + T[4];
S[5] = S[5] + T[5];
F[0] = F[0] + T[10];
//d
QAND(z[7], z[8], T[36]);
S[0] = S[0] + T[32];
z[9] = z[9] + T[30];
z[10] = z[10] + T[12];
S[3] = S[3] + T[11];
S[4] = S[4] + T[10];
S[5] = S[5] + T[4];
S[6] = S[6] + T[6];
S[7] = S[7] + T[5];
//d
S[1] = S[1] + T[36];
z[10] = z[10] + T[30];
S[5] = S[5] + T[32];
S[6] = S[6] + T[4];
S[7] = S[7] + T[6];
//d
z[9] = z[9] + T[36];
S[7] = S[7] + T[32];
F[0] = F[0] + T[4];
//d
QAND(z[2], z[9], T[40]);
S[2] = S[2] + T[36];
F[0] = F[0] + T[6];
//d
S[2] = S[2] + T[40];
S[5] = S[5] + T[36];
F[0] = F[0] + T[32];
//d
z[10] = z[10] + T[40];
S[6] = S[6] + T[36];
//d
QAND(S[0], z[10], T[43]);
S[4] = S[4] + T[40];
//d
S[3] = S[3] + T[43];
S[6] = S[6] + T[40];
//d
S[6] = S[6] + T[43];
S[7] = S[7] + T[40];
//d
S[7] = S[7] + T[43];
//d
F[0] = F[0] + T[43];
//d
QAND(S[0], Y[1], z[11]);
QAND(S[1], Y[3], z[17]);
QAND(S[2], Y[2], z[15]);
QAND(S[3], Y[0], z[9]);
QAND(S[4], Y[16], z[7]);
QAND(S[5], U[1], z[12]);
QAND(S[6], Y[12], z[13]);
QAND(S[7], Y[11], z[5]);
QAND(F[0], Y[8], z[10]);
//d
QAND(S[0], U[0], z[2]);
QAND(S[1], Y[7], z[8]);
QAND(S[2], Y[6], z[6]);
QAND(S[3], Y[4], z[0]);
QAND(S[4], Y[15], z[16]);
QAND(S[5], Y[14], z[3]);
QAND(S[6], Y[13], z[4]);
QAND(S[7], Y[10], z[14]);
QAND(F[0], Y[9], z[1]);
//d
S[0] = S[0] + U[0] + U[2] + U[5] + U[6] + z[9] + z[10] + z[15] + z[16] + T[4] + T[5] + T[7] + T[9] + T[32] + T[36] + T[40] + Y[3] + Y[13] + Y[14];
S[1] = S[1] + U[3] + U[5] + z[1] + z[2] + z[3] + z[5] + z[6] + z[8] + z[10] + z[11] + z[13] + z[14] + z[15] + z[16] + T[4] + T[6] + T[7] + T[9] + T[11] + T[12] + T[30] + T[36] + T[40] + Y[3] + Y[13] + Y[14] + 1;
S[2] = S[2] + U[0] + U[1] + U[3] + U[6] + U[7] + z[3] + z[4] + z[7] + z[8] + z[10] + z[11] + z[12] + z[13] + T[4] + T[5] + T[8] + T[9] + T[10] + T[12] + T[36] + Y[3] + Y[12] + Y[13] + Y[14];
S[3] = S[3] + U[0] + U[2] + U[3] + U[7] + z[1] + z[2] + z[3] + z[4] + z[12] + z[13] + z[16] + z[17] + T[5] + T[6] + T[11] + T[12] + T[43] + Y[3] + Y[14];
S[4] = S[4] + U[2] + U[4] + U[5] + z[12] + z[14] + z[15] + z[16] + T[4] + T[5] + T[10] + T[11] + T[40] + 1;
S[5] = S[5] + U[4] + U[5] + U[6] + z[0] + z[1] + z[6] + z[7] + z[10] + z[11] + z[12] + z[13] + T[7] + T[8] + T[10] + T[12] + T[32] + T[36] + T[40] + Y[0] + Y[2] + Y[3] + Y[4] + Y[6] + Y[14];
S[6] = S[6] + U[1] + U[3] + U[4] + U[5] + U[7] + z[1] + z[2] + z[3] + z[4] + z[10] + z[11] + z[13] + z[14] + z[15] + z[16] + T[4] + T[6] + T[10] + T[12] + T[30] + T[36] + T[43] + Y[8] + Y[9] + Y[12];
S[7] = S[7] + U[1] + U[3] + U[4] + U[6] + z[0] + z[2] + z[3] + z[4] + z[6] + z[7] + z[12] + z[13] + z[16] + z[17] + T[4] + T[6] + T[7] + T[8] + T[30] + T[32] + T[40] + T[43] + Y[2] + Y[3] + Y[6] + Y[12] + Y[14] + 1;
