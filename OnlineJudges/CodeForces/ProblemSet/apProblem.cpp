#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void Solve() {
    int a, b, c;
    cin >> a >> b >> c;

    if ((a + c) % 2 == 0 && (a + c)/2 == b) {
        cout << "YES\n";
        return;
    }

    if ((2*b - c) > 0 && (2*b - c) % 1 == 0 && 2*b - c == a) {
        cout << "YES\n";
        return;
    }

    if ((2*b - a) > 0 && (2*b - a) % 1 == 0 && 2*b - a == c) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
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