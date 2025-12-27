// https://codeforces.com/problemset/problem/318/A
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    long long n, k;
    cin >> n >> k;
    // 10, 3
    long long nByTwo = (n + 1) / 2;
    if (k <= nByTwo) {
        cout << 2 * k - 1 << "\n";
    } else {
        cout << 2 * (k - nByTwo) << "\n";
    }
    return 0;
}