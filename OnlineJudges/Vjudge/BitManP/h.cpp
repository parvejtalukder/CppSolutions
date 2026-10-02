#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int n, q;
    cin >> n >> q;
    vector<long long> pre_xor(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        pre_xor[i] = pre_xor[i - 1] ^ x;
    }
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << (pre_xor[b] ^ pre_xor[a - 1]) << '\n';
    }
    return 0;
}