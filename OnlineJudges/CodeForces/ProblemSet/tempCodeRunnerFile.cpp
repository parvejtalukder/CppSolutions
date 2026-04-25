// https://codeforces.com/problemset/problem/2220/A
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int t_case;
    cin >> t_case;
    while(t_case--) {
        int n;
        cin >> n;
        vector <int> arr(n);
        vector <int> freq(1e7);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        int val = 0;
        for(int i = 0; i < n; i++) {
            val += freq[arr[i]];
        }
        if (val > n) {
            cout << -1 << "\n";
        } else {
            sort(arr.rbegin(), arr.rend());
            for(int one: arr) {
                cout << one << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}