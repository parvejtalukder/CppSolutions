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
        vector <int> arr;
        arr.push_back(0);
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());
        for(int i = 1; i < n; i++) {
            if (i % 2 == 0) {
                cout << arr[i + 1] << " ";
            } else {
                cout << arr[i - 1] << " ";
            }
        }
    }
    return 0;
}