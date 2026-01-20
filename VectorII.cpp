#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int q; 
    cin >> q;
    while(q--) {
        int n;
        cin >> n;
        if (n == 2 || n == 3) {
            cout << n << "\n";
            continue;
        }
        if (n % 2 == 0) {
            cout << 0 << "\n";
        } else {
            cout << 1 << "\n";
        }
    }
    return 0;
}