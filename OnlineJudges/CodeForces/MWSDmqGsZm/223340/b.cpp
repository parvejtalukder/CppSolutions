#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    string s, t;
    cin >> s;
    cin >> t;
    int pos = 0;
    for (char c : t) {
        if (s[pos] == c) {
            pos++;
        }
    }
    cout << pos + 1 << "\n";
    return 0;
}