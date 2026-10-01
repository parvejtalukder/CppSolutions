#include <bits/stdc++.h>
using namespace std;
#define get_bit(x, i) ((x >> i) & 1)
#define toggle_bit(x, i) (x ^= (1U << i))

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    unsigned int x;
    cin >> x;
    unsigned int poor = x;
    for (int i = 31; i >= 0; i--) {
        cout << get_bit(x, i);
    }
    cout << '\n';
    for (int i = 31; i >= 0; i--) {
        toggle_bit(x, i);
    }
    for (int i = 31; i >= 0; i--) {
        cout << get_bit(x, i);
    }
    cout << '\n';
    x = poor << 1;
    for (int i = 31; i >= 0; i--) {
        cout << get_bit(x, i);
    }
    cout << '\n';
    x = poor >> 1;
    for (int i = 31; i >= 0; i--) {
        cout << get_bit(x, i);
    }
    cout << '\n';
    return 0;
}