// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P

#include <bits/stdc++.h>
using namespace std;

long long maxNum = LONG_LONG_MIN;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

long long log2(long long num) {
    if (num == 1) return 0;
    return 1 + log2(num / 2);
}

int main() {
    pht();
    long long n; cin >> n;
    cout << log2(n) << endl;
    return 0;
}