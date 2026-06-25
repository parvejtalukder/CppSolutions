#include <bits/stdc++.h>
using namespace std;
#define ll long long

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    
    int n;
    ll k;
    cin >> n >> k;
    
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    int mid = n / 2;

    auto can = [&](ll x) {
        ll need = 0;
        for (int i = mid; i < n; i++) {
            if (arr[i] < x) {
                need += (x - arr[i]);
            }
        }
        return need <= k;
    };

    ll lo = arr[mid];
    ll hi = 2e9;
    ll ans = arr[mid];

    while (lo <= hi) {
        ll m = lo + (hi - lo) / 2;
        if (can(m)) {
            ans = m;
            lo = m + 1;
        }
        else {
            hi = m - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}