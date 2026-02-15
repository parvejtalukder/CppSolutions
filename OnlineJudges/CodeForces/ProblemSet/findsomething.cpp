#include <bits/stdc++.h>
using namespace std;

void pht() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b != c) {
        cout << c << endl;
        return;
    } else if (a == c && a != b) {
        cout << b << endl;
        return;
    } else {
        cout << a << endl;
        return;
    }
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        pht();
    }
    return 0;
}