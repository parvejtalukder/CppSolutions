#include <bits/stdc++.h>
using namespace std;

void pht() {
    long long number;
    cin >> number;
    long long sumOfN = (number * (number + 1)) / 2;
    // cout << sumOfN << endl;
    long long sumOfNSqr = sumOfN * sumOfN;
    // cout << sumOfNSqr << endl;
    long long sumOfNSqrOf = (number * (number + 1) * (2 * number + 1)) / 6;
    cout << abs(sumOfNSqrOf - sumOfNSqr) << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tcase;
    cin >> tcase;
    while(tcase--) pht();
    return 0;
}
