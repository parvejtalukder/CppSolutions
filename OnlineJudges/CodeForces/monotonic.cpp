#include <bits/stdc++.h>
using namespace std;

int n;
long long t;
vector<long long> arr;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

bool isTrue(long long x) {
    long long products = 0;
    for (int i = 0; i < n; i++) {
        products += x / arr[i];
        if (products >= t) return true;
    }
    return false;
}

int main() {
    pht();
    cin >> n >> t;
    arr.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long l = 0, r = 1e18, ans = -1;
    while (l <= r) {
        long long mid = (l + r) / 2;
        if (isTrue(mid)) {
            ans = mid;
            r = mid - 1;   
        } else {
            l = mid + 1;   
        }
    }
    cout << ans << '\n';
    return 0;
}
