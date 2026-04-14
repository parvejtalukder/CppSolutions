#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    string s;
    cin >> s;
    int n = s.size();
    bool ok = true;
    for (int i = 0; i < n; i++) {
        int j = n - 1 - i;
        if (s[i] == '?' && s[j] == '?') {
            s[i] = s[j] = 'a';
        } else if (s[i] == '?') {
            s[i] = s[j];
        } else if (s[j] == '?') {
            s[j] = s[i];
        } else if (s[i] != s[j]) {
            ok = false;
            break;
        }
    }
    if (!ok) cout << -1 << "\n";
    else cout << s << "\n";
    return 0;
}