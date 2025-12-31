// https://vjudge.net/problem/codechef-oddpairs

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        long long odd = (n + 1) / 2;
        long long even = n / 2;
        cout << 2 * odd * even << "\n";
        // cout << (((n + 1)/2) * (n/2)) * 2 << "\n";
    }
    return 0;
}