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
    int btc;
    cin >> btc;
    int cnt = 0;
    while(btc >> 0) {
        if (get_bit(btc, 0) == 1) cnt++;
        btc >>= 1;
    }
    cout << cnt << '\n';
    return 0;
}