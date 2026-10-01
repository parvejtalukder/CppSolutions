#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c) {
        cout << "Largest: " << a << "\n";
    } else if (b >= a && b >= c) {
        cout << "Largest: " << b << "\n";
    } else {
        cout << "Largest: " << c << "\n";
    }
    return 0;
}