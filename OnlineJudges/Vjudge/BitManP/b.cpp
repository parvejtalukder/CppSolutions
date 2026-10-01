#include <bits/stdc++.h>
using namespace std;
#define get_bit(x, i) ((x >> i) & 1)

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    unsigned int a, b;
    cin >> a >> b;
    unsigned int andd = a & b;
    unsigned int orr = a | b;
    unsigned int xorr = a ^ b;
    for (int i = 31; i >= 0; i--) {
        cout << get_bit(andd, i);
    }
    cout << "\n";
    for (int i = 31; i >= 0; i--) {
        cout << get_bit(orr, i);
    }
    cout << "\n";
    for (int i = 31; i >= 0; i--) {
        cout << get_bit(xorr, i);
    }
    cout << "\n";
    return 0;
}