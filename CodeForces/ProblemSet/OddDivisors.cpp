// https://vjudge.net/problem/codeforces-1475a
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
        long long n;
        cin >> n;
        if (n == 2) {
            cout << "NO" << "\n";
        } else if (n % 2 == 1) {
            cout << "YES" << "\n";
        } else {
            if ((n & (n - 1)) == 0) {
                cout << "NO" << "\n";
            } else {
                cout << "YES" << "\n";
            }
        }
    }
    return 0;
}