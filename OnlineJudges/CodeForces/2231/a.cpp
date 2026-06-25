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
        for(int i = 0; i < n; i++) {
            cout << 2 * n - i;
            if (i != n - 1) {
                cout << " ";
            } else {
                cout << "\n";
            }
        }
    }
    return 0;
}