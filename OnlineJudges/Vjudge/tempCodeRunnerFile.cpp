// https://vjudge.net/problem/toph-subset-and

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int test_case;
    cin >> test_case;
    while(test_case--) {
        int n, k;
        cin >> n >> k;
        vector <int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        // bool what_is = false;
        for (int i = 0; i < n; i++) {
            // int ans = 0;
            for (int j = i; j < n; j++) { 
                if ((i & j) < k) {
                    cout << "YES" << "\n";
                    break;
                    // break;
                }
            }
        }
        cout << "NO" << "\n";
    }
    return 0;
}
