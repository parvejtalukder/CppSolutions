// https://codeforces.com/problemset/problem/1370/A
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int tCase;
    cin >> tCase;
    while(tCase--) {
        long long l, r;
        cin >> l >> r;
        long long x = l, y = 2*l;
        if (y <= r) {
            cout << x << ' ' << y << "\n";
        } else {
            cout << -1 << ' ' << -1 << "\n";
        }
    }
    return 0;
}