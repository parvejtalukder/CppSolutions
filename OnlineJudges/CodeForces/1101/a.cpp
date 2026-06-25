#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int t_case;
    cin >> t_case;
    while(t_case--) {
        int n;
        cin >> n;
        int call = 0;
        int mx = INT_MIN;
        vector <int> pos(n);
        map <int, int> cnt;
        for(int i = 0; i < n; i++) {
            cin >> pos[i];
            cnt[pos[i]]++;
        }

        for(auto [x, y]: cnt) {
            mx = max(mx, y);
        }

        while(mx < n) {
            if (n >= 2) {
                call++;
                mx += 2;
            } else {
                call++;
                mx++;
            }
        }
        cout << call << "\n";
    }
    return 0;
}