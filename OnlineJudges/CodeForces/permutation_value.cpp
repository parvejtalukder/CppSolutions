// https://codeforces.com/problemset/problem/1743/B

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
        int n;
        cin >> n;
        cout << n << " ";
        for(int i = 1; i < n; i++ ) {
            // cout << i << " ";
            if (i != n - 1) {
                cout << i << " ";
            } else {
                cout << i << "\n";
            }
        }
    }
    return 0;
}
