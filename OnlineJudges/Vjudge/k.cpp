//https://vjudge.net/contest/786209#problem/K
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int tCase;
    cin >> tCase;
    while(tCase--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        bool ans = false;
        // int cnt = 0;
        for(int i = 0; i < n; i++) {
            int curr = 0;
            for(int j = i; j < n; j++) {
                // cout << arr[j] << " ";
                if (arr[j] % 2 == 0) curr++;
                if (curr == k) {
                    ans = true;
                    break;
                }
            }
            // if (curr == k) {
            //     ans = true;
            //     break;
            // } else {
            //     curr = 0;
            // }
            // cout << "\n";
        }
        if (ans) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}