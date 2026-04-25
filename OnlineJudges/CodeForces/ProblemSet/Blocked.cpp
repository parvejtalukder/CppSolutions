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
        set<int> arr;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            arr.insert(x);
        }

        if(arr.size() != n) {
            cout << -1 << "\n";
        } else {
            vector<int> v(arr.begin(), arr.end());
            sort(v.rbegin(), v.rend()); 
            for(int x: v) cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}