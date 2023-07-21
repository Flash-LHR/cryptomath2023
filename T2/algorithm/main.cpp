#include <iostream>
#include <cstring>
#include "bitDomain.h"
// #include "S-box.cpp"

using std::cout;
using std::endl;

bitDomain X1[32],X2[32],X3[32],X4[32];
//F(X1, X2, X3, X4) = (X2, X3, X4, X1 + L(S(X2^X3^X4)))
bitDomain U[8];
bitDomain Y[21];
bitDomain T[50];
bitDomain z[18];
bitDomain S[8];

bitDomain x[32]; //改成并行后使用y数组代替
bitDomain y[32];

int main() {
    //input
    for (int i = 0;i < 32; i++) {
        X1[i] = 1;
        X2[i] = 1;
        X3[i] = 1;
        X4[i] = 1;
    }
    X1[0] = 0;
    X4[31] = 0;

    //slove
    for(int i = 0;i < 4; i++) {
        memset(U, 0, sizeof U);
        memset(S, 0, sizeof S);
        for(int j = 0;j < 8; j++) {
            U[j] = U[j] + X2[7 - j + i * 8];
            U[j] = U[j] + X3[7 - j + i * 8];
            U[j] = U[j] + X4[7 - j + i * 8];
            // cout << U[j].bit << " ";
        }
        // cout << endl;
        S_box();
        for(int j = 0;j < 8; j++)
            x[i * 8 + j] = S[j];
        
        // int output = 0;
        // for (int j = 0; j < 8; j++) 
        //     if (x[j + i * 8] == 1) output |= 1 << (7-j);
        // printf("%02X ", output);
    }
    L();
    for (int i = 0; i < 32; i++) { //并行 
        X1[i] = X1[i] + y[i];
    }
    // L_INV();
    //最终结果 X1 + L(S(X2^X3^X4)), X2, X3, X4,交换不需要花费

    //output
    for (int j = 0; j < 4; j++) {
        int output = 0;
        for (int i = 0; i < 8; i++) 
            if (X1[i + j * 8] == 1) output |= 1 << (7-i);
        printf("%02X", output);
    }
    return 0;
}

/*
dep: 2 + 37 + 7 + 37 + 2 = 85
T-dep: 14
width: 128 + 72 * 4 = 416
T-DW: 5,824
DW: 35,360
*/