// https://vjudge.net/problem/eolymp-4815

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// const int N = 1e10;
vector <int> arr;
vector <int> xor_sum; 

int main() {
    pht();
    int s, q;
    cin >> s >> q;
    arr.resize(s + 1);
    xor_sum.resize(s + 1);
    for(int i = 1; i <= s; i++) {
        cin >> arr[i];
    }
    for(int i = 1; i <= s; i++) {
        xor_sum[i] = xor_sum[i - 1] ^ arr[i];
    }
    while(q--) {
        int l, r;
        cin >> l >> r;
        int ans = xor_sum[r] ^ xor_sum[l - 1];
        cout << ans << "\n";
    }
    return 0;
}