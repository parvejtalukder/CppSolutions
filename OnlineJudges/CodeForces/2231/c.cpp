#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}

int main() {
    pht();
    int t_case;
    cin >> t_case;
    while(t_case--) {
        int n;
        cin >> n;
        int cnt = 0;
        vector <int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        } 
        bool all_same = true;
        for(int i = 1; i < n; i++) {
            if (arr[i - 1] != arr[i]) {
                all_same = false;
                break;
            }
        } 
        if (all_same) {
            cout << 0 << "\n";
            continue;
        }
    }
    return 0;
}