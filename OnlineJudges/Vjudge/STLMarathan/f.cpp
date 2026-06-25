#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a = 0, b = 0;
        for(int i = 0; i < n; i++) {
            char x;
            cin >> x;
            if (x == 'A') a++;
            else b++;
        }
        if (a > b) {
            cout << 'A' << "\n";
        } else if (b < a) {
            cout << 'B' << "\n";
        } else {
            cout << '?' << "\n";
        }
    }
    return 0;
}
