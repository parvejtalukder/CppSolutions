#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    unsigned long long a, b; 
    cin >> a >> b;
    cout << (a/__gcd(a, b) * b) << "\n";
    return 0;
}