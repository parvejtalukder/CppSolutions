// https://atcoder.jp/contests/arc088/tasks/arc088_a

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    long long x, y;
    cin >> x >> y;
    int ans = 0;
    for(; x <= y; x*=2) {
        ans++;
    }
    cout << ans << "\n";
    return 0;
}
