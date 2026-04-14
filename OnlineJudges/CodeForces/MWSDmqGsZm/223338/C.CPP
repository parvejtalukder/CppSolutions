#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

long long sum(long long n) {
    return n * (n + 1) / 2;
}

long long evenSum(long long n) {
    long long k = n / 2;
    return k * (k + 1);
}

int main() {
    pht();
    long long x, y;
    cin >> x >> y;
    if (y <= x) {
        swap(x, y);
    }
    long long solidSum = sum(y) - sum(x - 1);
    long long even = evenSum(y) - evenSum(x - 1);
    long long odd = solidSum - even;
    cout << solidSum << "\n" << even << "\n" << odd << "\n";
    return 0;
}