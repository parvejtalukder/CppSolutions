#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int t_case, k;
    cin >> t_case >> k;
    int cnt = 0;
    while(t_case--) {
        string num;
        cin >> num;
        set<char> arr(num.begin(), num.end());
        bool ok = true;
        for(int d = 0; d <= k; d++) {
            if(arr.find(char('0' + d)) == arr.end()) {
                ok = false;
                break;
            }
        }
        if(ok) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}