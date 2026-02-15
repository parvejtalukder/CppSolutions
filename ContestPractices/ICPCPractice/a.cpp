#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    int a, b;
    cin >> a >> b;
    if (a < b) {
        cout << a << "\n";
    } else {
        cout << b << "\n";
    }
    return 0;
}