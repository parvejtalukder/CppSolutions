#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        bool ans = false;
        for(int mask = 1; mask < (1 << n); mask++) { 
            long long mult = 1;
            bool valid = true;
            for(int i = 0; i < n; i++) {
                if(mask & (1 << i)) { 
                    mult *= arr[i];
                    if(mult > 67) { 
                        valid = false;
                        break;
                    }
                }
            }
            if(valid && mult == 67) {
                ans = true;
                break; 
            }
        }

        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
