#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int n, k;
vector <int> arr;

int main() {
    pht();
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int l = 0, r = 1e4 + 9, ans = 0;
    while(l <= r) {
        int mid = (l + r) / 2;
        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << "\n";
    return 0;
}
