// https://codeforces.com/problemset/problem/2209/A
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
    int t_case;
    cin >> t_case;
    while(t_case--) {
        int n, c, k;
        cin >> n >> c >> k;
        vector <int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if (arr[i] <= c) {
                cnt++;
                c += arr[i];
            } else {
                break;
            }
        }
        ll flip_flop = min((ll)k, (ll)cnt);
        cout << c + flip_flop << "\n";

    }
    return 0;
}