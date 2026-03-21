#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (i != n/i) {
                cnt++;
            }
        } 
    }
    if (cnt == 2) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}