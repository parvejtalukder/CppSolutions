/*https://codeforces.com/contest/2148/problem/A*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        int x, n, sum = 0;
        cin >> x >> n;
        for(int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                sum = sum + (-x);
            } else {
                sum = sum + x;
            }
        }
        cout << sum << endl;
    }
    return 0;
}