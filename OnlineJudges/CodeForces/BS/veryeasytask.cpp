#include <bits/stdc++.h>
using namespace std;
 
long long MAX = 1e17;
long long copy_need, printer_one, printer_two;
 
void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
 
bool Corr(long long n) {

    long long p1 = min(printer_one, printer_two);
    long long p2 = max(printer_one, printer_two);

    if (n < p1) return false;

    long long cps = 1;
    n -= p1;

    cps += n / p1;
    cps += n / p2;

    return cps >= copy_need;
}
 
int main() {
    pht();
    long long ans = -1;
    cin >> copy_need >> printer_one >> printer_two;
    long long l = 1, r = MAX;
    while(l <= r) {
        long long mid = (l + r)/2;
        if(Corr(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << "\n";
    return 0;
}