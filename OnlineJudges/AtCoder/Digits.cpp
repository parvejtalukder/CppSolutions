// https://atcoder.jp/contests/abc156/tasks/abc156_b

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


int main() {
    pht();

    long long n, k;
    cin >> n >> k;
    long long ans = 0;
    while(n > 0) {
        int dig = n % k;
        ans++;
        n /= k;
    }

    cout << ans << "\n";

    return 0;
}
