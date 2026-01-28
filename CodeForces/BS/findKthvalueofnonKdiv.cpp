#include <bits/stdc++.h>
using namespace std;

int n, k;
vector <long long> arr;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

bool isIt(long long x) {
    return (x - x/n) >= k;
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        long long ans = -1;
        long long l = 0, r = 2e9;
        while(l <= r) {
            long long mid = (l + r) / 2;
            if (isIt(mid)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
