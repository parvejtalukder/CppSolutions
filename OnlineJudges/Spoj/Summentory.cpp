// https://vjudge.net/problem/spoj-pucmm210
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

const int N = 1e6 + 9, mod = 1e9+3;

int fun(long long x) {
    int ans = ((1LL * x * (x + 1)) / 2) % mod;
    return (1LL * ans * ans) % mod;
}

int pref[N];

int main() {
    pht();
    for(int i = 1; i <= N; i++) {
        pref[i] = (pref[i - 1] + fun(i)) % mod;
    }
    int n;
    cin >> n;
    while(n--) {
        long long num;
        cin >> num;
        cout << pref[num] << "\n";
    }
    return 0;
}