#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int nCr(int n, int r) {
    if (n < r || r < 0 || n < 0) return 0;
    if (n == 0) return 1;
    return nCr(n - 1, r) + nCr(n - 1, r - 1); 
}

int main() {
    pht();
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;
    return 0;
}