#include <bits/stdc++.h>
using namespace std;

long long MOD = 1e9+7;

void pht() {
    long long number;
    cin >> number;
    long long fact = 1;
    for(long long i = 1; i <= number; i++) {
        fact = fact * i % MOD;
    }
    cout << fact << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tcase;
    cin >> tcase;
    while(tcase--) pht();
    return 0;
}
