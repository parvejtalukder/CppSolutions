#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    int lmt;
    cin >> lmt;

    long long a = 0, b = 1;

    for (int i = 1; i <= lmt; i++) {
        if (i == 1) cout << 0 << " ";
        else if (i == 2) cout << 1 << " ";
        else {
            long long c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }

    return 0;
}