#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; 1LL * i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    pht();
     int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (isPrime(n + 1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}