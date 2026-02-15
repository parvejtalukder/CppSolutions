#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void Solve() {
    unsigned long long g, l;
    cin >> g >> l;
    if (l % g == 0) {
        cout << g << " " << l << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    pht();
    int tCase;
    cin >> tCase;
    while (tCase--) {
        Solve();
    }
    return 0;
}
