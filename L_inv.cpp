#include <iostream>
#include <vector>
#include <bitset>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::bitset;

typedef vector<bitset<32>> word;

void left_shift(word &res, const word &ori, int offset)
{
    for (int i = 0; i < 32; i++)
        res[i] ^= ori[(i + offset) % 32];
}

bool check(const word& w)
{
    for (int i = 0; i < 32; i++) {
        if (w[i].count() != 1) return false;
        if (w[i][31 - i] != 1) return false;
    }
    return true;
}

int main()
{
    word B(32, bitset<32>(0));
    word L(32, bitset<32>(0));
    for (int i = 0; i < 32; i++) B[i].set(i);
    int n; cin >> n;
    for (int i = 0, offset; i < n; i++) {
        cin >> offset;
        left_shift(L, B, offset);
    }
    for (int i = 0; i < 32; i++) cout << L[i] << endl;
    for (long long i = 0; i < (1ll<<32); i++) {
        word L_inv(32, bitset<32>(0));
        for (int j = 0; j < 32; i++) if ((i >> j) & 1) {
            left_shift(L_inv, L, j);
        }
        if (check(L_inv)) {
            cout << bitset<32>(i) << endl;
        }
    }
    // int m; cin >> m;
    // for (int i = 0, offset; i < m; i++) {
    //     cin >> offset;
    //     left_shift(L_inv, L, offset);
    // }
    // for (int i = 0; i < 32; i++) cout << L_inv[i] << endl; 
    return 0;
}