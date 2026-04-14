#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    long long a, b;
    cin >> a >> b;
    long long g = __gcd(a, b);
    long long l = (a / g) * b;
    cout << g << " " << l << "\n";
    // cout << __gcd(a, b) << " " << (a*b)/__gcd(a, b) << "\n";
    return 0;
}