// https://vjudge.net/problem/eolymp-4815

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        int a, b, n;
        cin >> a >> b >> n;
        if (n % 3 == 0) {
            cout << a << "\n";
        } else if (n % 3 == 1) {
            cout << b << "\n";
        } else {
            cout << (a ^ b) << "\n";
        }
    }
    // cout << ( 5 ^ 4) << "\n";
    return 0;
}