#include <bits/stdc++.h>
using namespace std;

long long w, h, n;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

bool Ans(long long l) {
    // bool ans = false;
    // return (l / w) * (l / h) >= n;
    long long a = l/w;
    long long b = l/h;
    if (b == 0) return false;
    return a >= (double)n / b;
}

int main() {
    pht();
    long long ans;
    cin >> w >> h >> n;
    long long l = 1, r = 1e14;
    while(l <= r) {
        long long mid = (l + r) / 2;
        if (Ans(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << "\n";
    // for(long long l = 0 ; l <= 1e14; l++) {
    //     if(Ans(l)) {
    //         cout << l << "\n";
    //         return 0;
    //     }
    // }
    return 0;
}
