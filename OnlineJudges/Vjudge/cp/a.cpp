#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    long long bb = 120, ss = 80, dd= 40;
    long long b, s, d;
    cin >> b >> s >> d;
    long long sum = (b * bb) + (ss * s) + (dd * d);
    if (sum >= 500) {
        long long dss = sum * 0.10;
        if (d == 0 && s == 0 && d == 0) {
            cout << (sum - dss) << "\n";
        } else {
            cout << (sum - dss) + 5 << "\n";
        }
    } else {
        if (b == 0 && s == 0 && d == 0) {
            cout << sum << "\n";
        } else {
            cout << sum + 5 << "\n";
        }
    }
    return 0;
}