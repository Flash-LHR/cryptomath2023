/*
辅助位优化
T[24] -> z[0]
T[26] -> z[1]
T[28] -> z[2]
T[29] -> z[3]
T[31] -> z[4]
T[33] -> S[0]
T[34] -> z[5]
T[35] -> z[6]
T[37] -> S[1]
T[39] -> z[7]
T[41] -> S[2]
T[42] -> z[8]
T[44] -> S[3]
T[45] -> S[4]
T[46] -> S[5]
T[47] -> S[6]
T[48] -> S[7]
T[49] -> F[0]
*/

QAND(Y[7], Y[3], T[4]);
QAND(Y[15], Y[16], T[5]);
QAND(Y[6], Y[2], T[6]);
QAND(Y[13], Y[12], T[7]);
QAND(Y[11], Y[10], T[8]);
QAND(Y[14], U[1], T[9]);
QAND(U[0], Y[1], T[10]);
QAND(Y[9], Y[8], T[11]);
QAND(Y[4], Y[0], T[12]);
z[0] = z[0] + U[3] + U[5] + U[6] + T[4] + T[6] + T[8] + T[9] + T[10] + T[11];
z[1] = z[1] + U[0] + Y[3] + Y[14] + T[4] + T[6] + T[10] + T[12];
z[2] = z[2] + U[6] + T[4] + T[5] + T[10] + T[11] + 1;
z[3] = z[3] + Y[12] + U[7] + T[4] + T[5] + T[7] + T[8] + T[11] + T[12];
QAND(z[0], z[2], T[30]);
z[4] = z[4] + U[0] + U[1] + U[2] + U[4] + T[4] + T[6] + T[10] + T[12] + T[30];
QAND(z[3], z[4], T[32]);
S[0] = S[0] + U[2] + Y[13] + T[5] + T[6] + T[7] + T[9] + T[10] + T[12] + T[32] + 1;
z[5] = z[5] + Y[2] + Y[6] + T[5] + T[6] + T[11] + T[12];
z[6] = z[6] + U[2] + Y[13] + T[5] + T[6] + T[7] + T[9] + T[10] + T[12] + T[30] + 1;
QAND(z[5], z[6], T[36]);
S[1] = S[1] + U[0] + Y[3] + Y[14] + T[4] + T[6] + T[10] + T[12] + T[36];
z[7] = z[7] + T[30] + T[36];
QAND(z[1], z[7], T[40]);
S[2] = S[2] + Y[2] + Y[6] + T[5] + T[6] + T[11] + T[12] + T[36] + T[40];
z[8] = z[8] + U[0] + Y[3] + Y[14] + T[4] + T[6] + T[10] + T[12] + T[30] + T[40];
QAND(S[0], z[8], T[43]);
S[3] = S[3] + Y[12] + U[7] + T[4] + T[5] + T[7] + T[8] + T[11] + T[12] + T[43];
S[4] = S[4] + U[6] + T[4] + T[5] + T[10] + T[11] + T[40] + 1;
S[5] = S[5] + Y[0] + Y[4] + T[4] + T[5] + T[7] + T[9] + T[32] + T[36];
S[6] = S[6] + Y[8] + Y[9] + T[4] + T[6] + T[7] + T[8] + T[36] + T[40] + T[43];
S[7] = S[7] + 1 + U[3] + U[5] + T[5] + T[6] + T[8] + T[9] + T[32] + T[40] + T[43];
F[0] = F[0] + U[3] + U[5] + U[6] + T[4] + T[6] + T[8] + T[9] + T[10] + T[11] + T[32] + T[43];
QAND(S[0], Y[1], z[11]);
QAND(S[1], Y[3], z[17]);
QAND(S[2], Y[2], z[15]);
QAND(S[3], Y[0], z[9]);
QAND(S[4], Y[16], z[7]);
QAND(S[5], U[1], z[12]);
QAND(S[6], Y[12], z[13]);
QAND(S[7], Y[11], z[5]);
QAND(F[0], Y[8], z[10]);
QAND(S[0], U[0], z[2]);
QAND(S[1], Y[7], z[8]);
QAND(S[2], Y[6], z[6]);
QAND(S[3], Y[4], z[0]);
QAND(S[4], Y[15], z[16]);
QAND(S[5], Y[14], z[3]);
QAND(S[6], Y[13], z[4]);
QAND(S[7], Y[10], z[14]);
QAND(F[0], Y[9], z[1]);