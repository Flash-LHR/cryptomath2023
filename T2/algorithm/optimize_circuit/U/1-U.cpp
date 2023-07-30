/*
替身优化
U[0..7] copy to z[10..17]
*/
z[10] = z[10] + U[0];
z[11] = z[11] + U[1];
z[12] = z[12] + U[2];
z[13] = z[13] + U[3];
z[14] = z[14] + U[4];
z[15] = z[15] + U[5];
z[16] = z[16] + U[6];
z[17] = z[17] + U[7];

Y[0] = U[0] + U[3] + U[4] + U[7];
Y[1] = U[0] + U[3] + U[5];
Y[2] = U[0] + U[2] + U[3] + U[4] + U[6] + U[7];
Y[3] = U[0] + U[1] + U[3] + U[5];
Y[4] = U[1] + U[5] + 1;
Y[6] = U[1] + U[3] + U[7];
Y[7] = U[2] + U[3] + U[4] + U[5] + 1;
Y[8] = U[4] + U[5] + U[7];
Y[9] = U[0] + U[1] + U[5];
Y[10] = U[1] + U[2] + U[6];
Y[11] = U[0] + U[2] + U[4] + U[7] + 1;
Y[12] = U[2] + U[6];
Y[13] = U[3] + U[5] + U[7] + 1;
Y[14] = U[0] + U[2] + U[3] + U[4] + U[5];
Y[15] = U[1] + U[2] + U[4] + U[5] + U[6] + U[7];
Y[16] = U[1] + U[2] + U[4] + U[5] + U[7] + 1;
U[0] = U[0] + 1;
U[6] = U[6] + 1;

z[10] = z[10] + U[0];
z[11] = z[11] + U[1];
z[12] = z[12] + U[2];
z[13] = z[13] + U[3];
z[14] = z[14] + U[4];
z[15] = z[15] + U[5];
z[16] = z[16] + U[6];
z[17] = z[17] + U[7];