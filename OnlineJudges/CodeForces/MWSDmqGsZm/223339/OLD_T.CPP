#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

long long facto(int n) {
    if (n == 1) return 1;
    return n * facto(n - 1);
}

long long nCr(int n, int r) {
    return facto(n) / (facto(r) * facto(n - r));
}

int main() {
    pht();
    int n, r;
    cin >> n >> r;
    if (r == 1) {
        cout << n << endl;
        return 0;
    }
    cout << nCr(n, r) << endl;
    return 0;
}