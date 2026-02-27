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
        vector <int> arr;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            arr.push_back(x);
        }
        if (n == 1) {
            cout << 1 << "\n";
            continue;
        }
        bool sorted = true;
        for(int i = 0; i < n - 1; i++) {
            if (!(arr[i] <= arr[i + 1])) {
                sorted = false;
            }
        }
        if (sorted) {
            cout << n << "\n";
        } else {
            cout << 1 << "\n";
        }
        // if (sorted) {
        //     cout << n << "\n";
        //     continue;
        // } else {
        //     cout 
        // }
        // if ()
    }
    return 0;
}