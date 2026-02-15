#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve() {
    int n;
    cin >> n;
    // vector <int> arr(n);
    vector <pair<int, string>> maap(n);
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            maap.push_back({x, "red"});
        } else {
            maap.push_back({x, "blue"});
        }
    }
    // cout << "in" << "\n";ccclear
    for(auto it: maap) {
        // if (maap[i].second)
        cout << it.second << "\n";
    }

}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
