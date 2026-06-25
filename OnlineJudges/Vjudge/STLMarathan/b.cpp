#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    pht();
    int n, q;
    cin >> n >> q;
    vector<vector<int>> arr(n);
    while(q--) {
        int o, t, x;
        cin >> o;
        if (o == 0) {
            cin >> t >> x;
            arr[t].push_back(x);
        } else if (o == 1) {
            cin >> t;
            for(int i = 0; i < arr[t].size(); i++) {
                // if (i) {
                    if (i) cout << ' ';
                    cout << arr[t][i];
                // } else {
                    // cout << arr[t][i];
                // }
            }
            cout << "\n";
        } else if (o == 2) {
            cin >> t;
            // if(!arr[t].empty()) {
                arr[t].clear();
            // }
        }
    }
    return 0;
}
