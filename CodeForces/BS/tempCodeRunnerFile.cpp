#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    pht();
    int n;
    cin >> n;
    while(n--) {
        int p;
        cin >> p;
        for(int i = 2; i <= p; i++) {
            cout << i << " ";
        }
        cout << 1 << "\n";
    }
    return 0;
}
