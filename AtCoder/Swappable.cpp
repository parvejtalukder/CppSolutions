// https://atcoder.jp/contests/abc206/tasks/abc206_c
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

const int N = 1e6+9;
int arr[N];

int main() {
    pht();
    int n;
    cin >> n;
    // vector <int> arr(n);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    long long ans = 0;
    map <int, int> cnt;
    for(int j = 1; j <= n; j++) {
        ans += j - 1 - cnt[arr[j]];
        cnt[arr[j]]++;
    }
    cout << ans << '\n';
    return 0;
}