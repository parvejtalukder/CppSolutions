// https://vjudge.net/problem/codeforces-1374a
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
        long long x, y, n;
        cin >> x >> y >> n;
        cout << x * ((n - y) / x) + y << "\n";
    }
    return 0;
}