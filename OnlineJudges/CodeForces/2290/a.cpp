#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + 1) == b && b == (c - 1)) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    pht();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}