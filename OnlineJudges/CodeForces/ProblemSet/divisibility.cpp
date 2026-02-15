// https://codeforces.com/problemset/problem/1328/A
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        if (a % b != 0) {
            cout << b - (a % b) << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
    return 0;
}