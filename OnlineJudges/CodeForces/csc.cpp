#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int n;
    cin >> n;
    int ans = 0;
    while (n--) {
        long long x;
        cin >> x;
        int cnt = 0;
        while (x % 2 == 0) {
            cnt++;
            x /= 2;
        }
        ans = max(ans, cnt);
    }
    cout << ans << '\n';
    return 0;
}