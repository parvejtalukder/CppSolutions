#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        int even = 0;
        for(auto ch: s) {
            if (ch == '1') even++;
        }
        if (even%2 == 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}