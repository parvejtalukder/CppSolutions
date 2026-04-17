// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/j
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 
}

bool isLuckyNumber(int n) {
    while (n > 0) {
        int dig = n % 10;
        if (dig != 4 && dig != 7) return false;
        n /= 10;
    }
    return true;
}

int main() {
    pht();
    int n;
    cin >> n;
    int x = n;
    if (isLuckyNumber(n)) {
        cout << "YES" << "\n";
    } else if (x % 4 == 0 || x % 7 == 0) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}