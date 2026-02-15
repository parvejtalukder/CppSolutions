#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

long long solve(long long num) {
    if (num == 0) return 1;
    return 2 * solve(num - 1);
}

int main() {
    pht();
    int n;
    cin >> n;
    if (n == 1 || n == 2) {
        cout << 1 << endl;
        return 0;
    }
    n -= 2;
    cout << solve(n) << endl;
    return 0;
}