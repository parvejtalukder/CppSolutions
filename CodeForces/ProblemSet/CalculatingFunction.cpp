// https://codeforces.com/problemset/problem/486/A
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    long long n;
    cin >> n; 
    if (n % 2 == 0) {
        cout << n / 2 << endl;
    } else {
        long long res = n - 1;
        cout << (res / 2) - n << endl;
    }
    return 0;
}