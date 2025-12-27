// https://codeforces.com/problemset/problem/742/A
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
    if (n == 0) {
        cout << 1 << "\n";
        return 0;
    }
    if (n % 4 == 0) {
        cout << 6 << "\n";
    } else if (n % 4 == 1) {
        cout << 8 << "\n";
    } else if (n % 4 == 2) {
        cout << 4 << "\n";
    } else if (n % 4 == 3) {
        cout << 2 << "\n";
    }
    return 0;
}