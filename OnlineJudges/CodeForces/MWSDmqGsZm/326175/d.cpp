// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + b - c == d) {
        cout << "YES" << endl;
    } else if (a + (b * c) == d) {
        cout << "YES" << endl;
    } else if ((a * b) - c == d) {
        cout << "YES" << endl;
    } else if (a - b + c == d) {
        cout << "YES" << endl;
    } else if (a - (b * c) == d) {
        cout << "YES" << endl;
    } else if ((a * b) + c == d) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}