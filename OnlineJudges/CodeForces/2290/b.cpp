#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve() {
    int s;
    cin >> s;
    string str;
    cin >> str;
    int cnt = 0;
    bool withBlue = false;
    if (str[0] == 'B') {
        cnt++;
        withBlue = true;
    } else {
        cnt = 0;
    }
    int sameAttempt = 0;
    for(int i = 1; i < s; i++) {
        if (str[i - 1] == str[i]) sameAttempt++; 
    }
    if (withBlue) {
        cout << sameAttempt + 1 << "\n";
    } else {
        cout << sameAttempt << "\n";
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