#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int n, k, a;
    cin >> n >> k >> a;
    long long product = 1LL * n * k;
    if (product % a != 0) {
        cout << "double" << "\n";
    } else {
        product = product/a;
        if (product >= INT_MIN && product <= INT_MAX) {
        cout << "int" << "\n";
    } else {
        cout << "long long" << "\n";
    }
    }
    return 0;
}