// https://codeforces.com/problemset/problem/1370/A
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
        // long long gcd = 0;
        // for(int i = 1; i <= n; i++) {
        //     long long currGcd = 0;
        //     for(int j = i + 1; j <= n; j++) {
        //         currGcd = __gcd(i, j);
        //         // cout << currGcd < 
        //         if (currGcd > gcd) swap(currGcd, gcd);
        //     }
        // }
        cout << n / 2 << "\n";
    }
    return 0;
}