// https://atcoder.jp/contests/abc177/tasks/abc177_c

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

const int mod = 1e9 + 7;
vector <long long> arr;

int main() {
    pht();
    int n;
    cin >> n;
    arr.resize(n);
    long long sum = 0;
    long long ans = 0;
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
        sum = (sum + arr[i]) % mod;
    }
    for(int i = 0; i < n; i++) {
        sum = (sum - arr[i] + mod) % mod;  
        ans = (ans + arr[i] * sum % mod) % mod;
    }
    cout << ans % mod << "\n";
    return 0;
}