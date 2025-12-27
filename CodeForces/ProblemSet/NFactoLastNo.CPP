#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

long long fact(long long number) {
    if (number == 1) {
        return number;
    }
    return number * fact(number - 1);
}

void func() {
    int number;
    cin >> number;
    cout << fact(number) % 10 << "\n";
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) func();
    return 0;
}