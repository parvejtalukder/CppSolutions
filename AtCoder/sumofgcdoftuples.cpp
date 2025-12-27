// https://atcoder.jp/contests/abc162/tasks/abc162_c

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


int main() {
    pht();
    
    int n;
    cin >> n;
    
    long long sum = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = 1; k <= n; k++) {
                sum += gcd(i, gcd(j, k));
            }
        }
    }

    cout << sum << "\n";

    return 0;
}
