#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve() {
    int n;
    cin >> n;
    int cnt = 0;
    set <int> arr;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.insert(x);
    }
    // sort(arr.begin(), arr.end());
    auto min = arr.begin();
    auto max = arr.end(); max--;
    while((*min + *max) % 2 != 0) {
        if(*min % 2 == 0 && *max % 2 != 0) {
            max--;
            cnt++;
        } else if (*min % 2 != 0 && *max % 2 == 0) {
            min++;
            cnt++;
        } else {
            max--;
        }
    }
    cout << cnt << "\n";
    // cout << *min + *max << "\n";

}

int main() {
    pht();
    int tCase;
    cin >> tCase;
    while(tCase--) solve();
    return 0;
}
