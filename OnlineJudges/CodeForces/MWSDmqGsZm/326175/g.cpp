// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    long long n, m, k;
    cin >> n >> m >> k;
    long long x = min({n, m, k});
    n -= x;
    k -= x;
    long long y = min(n / 2, k);
    cout << x + y << endl;
    return 0;
}