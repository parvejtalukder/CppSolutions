#include <bits/stdc++.h>
using namespace std;

double pht(double ans, long long n) {
    if (n == 1) {
        return ans;
    }
    return pht(ans + (1.0/n), n - 1);
}

int main() {
    double n;
    cin >> n;
    double ans = pht(1, n);
    cout << fixed << setprecision(4) << ans << endl;
    return 0;
}