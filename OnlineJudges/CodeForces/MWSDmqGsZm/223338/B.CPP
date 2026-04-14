#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    long long n;
    cin >> n;
    if (n <= 1) {
        cout << "NO" << "\n";
        return 0;
    }
    // int cnt = 0;
    for(int i = 2; 1LL * i * i <= n; i++) {
        if (n % i == 0) {
            cout << "NO" << "\n";
            return 0;
        } 
    }
    cout << "YES" << "\n";
    // if (cnt == 2) {
    //     cout << "YES" << "\n";
    // } else {
    //     cout << "NO" << "\n";
    // }
    return 0;
}