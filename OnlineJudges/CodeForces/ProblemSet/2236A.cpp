#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int mn = INT_MAX;
        int mx = INT_MIN;
        vector <int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] >= mx) {
                mx = arr[i];
            }
            if (arr[i] <= mn) {
                mn = arr[i];
            }
        }
        cout << (mx - mn) + 1 << "\n";
    }
    return 0;
}