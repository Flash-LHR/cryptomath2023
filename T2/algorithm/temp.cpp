QAND(Y[7], Y[3], T[4]);
QAND(Y[15], Y[16], T[5]);
QAND(Y[6], Y[2], T[6]);
QAND(Y[13], Y[12], T[7]);
QAND(Y[11], Y[10], T[8]);
QAND(Y[14], U[1], T[9]);
QAND(U[0], Y[1], T[10]);
QAND(Y[9], Y[8], T[11]);
QAND(Y[4], Y[0], T[12]);

T[24] = T[24] + T[4];
T[24] = T[24] + T[6];
T[24] = T[24] + T[8];
T[24] = T[24] + T[9];
T[24] = T[24] + T[10];
T[24] = T[24] + T[11];
T[24] = T[24] + Y[19];

T[26] = T[26] + T[4];
T[26] = T[26] + T[6];
T[26] = T[26] + T[10];
T[26] = T[26] + T[12];
T[26] = T[26] + Y[18];

T[28] = T[28] + T[4];
T[28] = T[28] + T[5];
T[28] = T[28] + T[10];
T[28] = T[28] + T[11];
T[28] = T[28] + U[6];

T[29] = T[29] + T[4];
T[29] = T[29] + T[5];
T[29] = T[29] + T[7];
T[29] = T[29] + T[8];
T[29] = T[29] + T[11];
T[29] = T[29] + T[12];
T[29] = T[29] + Y[19];
T[29] = T[29] + Y[20];

QAND(T[24], T[28], T[30]);


T[31] = T[31] + T[26];
T[31] = T[31] + T[30];

QAND(T[29], T[31], T[32]);

T[33] = T[33] + T[5];
T[33] = T[33] + T[6];
T[33] = T[33] + T[7];
T[33] = T[33] + T[9];
T[33] = T[33] + T[10];
T[33] = T[33] + T[12];
T[33] = T[33] + T[32];
T[33] = T[33] + Y[20];

T[34] = T[34] + T[26];
T[34] = T[34] + T[28];

T[35] = T[35] + T[5];
T[35] = T[35] + T[6];
T[35] = T[35] + T[7];
T[35] = T[35] + T[9];
T[35] = T[35] + T[10];
T[35] = T[35] + T[12];
T[35] = T[35] + T[30];
T[35] = T[35] + Y[20];

QAND(T[34], T[35], T[36]);

T[37] = T[37] + T[26];
T[37] = T[37] + T[36];

T[39] = T[39] + T[30];
T[39] = T[39] + T[36];

QAND(T[26], T[39], T[40]);

T[41] = T[41] + T[5];
T[41] = T[41] + T[6];
T[41] = T[41] + T[11];
T[41] = T[41] + T[12];
T[41] = T[41] + T[36];
T[41] = T[41] + T[40];
T[41] = T[41] + U[6];
T[41] = T[41] + Y[18];

T[42] = T[42] + T[31];
T[42] = T[42] + T[40];

QAND(T[33], T[42], T[43]);

T[44] = T[44] + T[29];
T[44] = T[44] + T[43];

T[45] = T[45] + T[37];
T[45] = T[45] + T[41];

T[46] = T[46] + T[33];
T[46] = T[46] + T[37];

T[47] = T[47] + T[41];
T[47] = T[47] + T[44];

T[48] = T[48] + T[46];
T[48] = T[48] + T[47];

T[49] = T[49] + T[33];
T[49] = T[49] + T[44];