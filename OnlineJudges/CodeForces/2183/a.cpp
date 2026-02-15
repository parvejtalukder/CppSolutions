#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        // int one = 0;
        // int zero = 0;
        vector <int> arr(n);
        // vector <int> arrTwo(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            // if (arr[i] == 1) one++;
            // if (arr[i] == 0) zero++;
        }
        if (arr[0] == 0 && arr[n - 1] == 0) {
            cout << "Bob" << "\n";
        } else {
            cout << "Alice" << '\n';
        }
        // if (arr.size() == 1) {
        //     // break;;
        //     if (arr[0] == 0) {
        //         cout << "Alice" << '\n';
        //         continue;
        //     } else {
        //         cout << "Bob" << '\n';
        //         continue;
        //     }
        // } else {
        //     one >= zero ? cout << "Alice" << '\n' : cout << "Bob" << '\n';
        // }
        
        // int ans = 0;
        // vector <int> arr(n);
        // // vector <int> arr_ans;
        // for(int i = 0; i < n; i++) {
        //     cin >> arr[i];
        // }
        // for(int i = 0; i < n - 1; i++) {
        //     if (arr[i] == arr[i + 1] && arr[i] == 0) {
        //         int x = 1;
        //         ans = ans | arr[i] | x;
        //     } else {
        //         ans |= arr[i];
        //     }
        // }
        // if (arr[0] == arr[n - 1] && arr[0] == 1) {
        //     cout << "Alice" << '\n';
        // } else {
        //     cout << "Bob" << "\n";
        // }
        // cout << ans << "\n";
    } 
    return 0;
}