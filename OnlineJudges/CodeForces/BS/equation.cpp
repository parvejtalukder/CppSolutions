#include <bits/stdc++.h>
using namespace std;
 
void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

double ans(double x) {
    return (x * x) + sqrt(x); 
    // cout << "CALLED FOR " << x;
}
 
int main() {
    pht();
    double c;
    cin >> c;
    int it = 100;
    double x = 0.0, r = 1e5;;
    while (it--) {
        double mid = (x + r)/2;
        if (ans(mid) < c) {
            x = mid;
        } else {
            r = mid;
        }
    }
    cout << fixed << setprecision(6) << x << "\n";
    return 0;
}