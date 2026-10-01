#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector <int> carr(n);
    int x = 1, t = m, howmuch = INT_MIN;
    for(int i = 0; i < n; i++) cin >> carr[i];
    while(t--) {
        for(int i = 0; i < n; i++) {
            if (carr[i] == x) {
                howmuch++;
            }
        }
    }
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