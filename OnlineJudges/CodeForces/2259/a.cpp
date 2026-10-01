#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n; i += k) {
        bool hasZero = false;
        for (int j = i; j < i + k; j++) {
            if (s[j] == '0') {
                hasZero = true;
                break;
            }
        }
        if (!hasZero) {
            ans++;
        }
    }
    cout << ans << '\n';
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
