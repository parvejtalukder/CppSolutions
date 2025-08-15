#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio();
    cin.tie(0);
    int a, b, q, r;
    cin >> a >> b; 
    q = a / b;
    r = a % b;
        if (r < 0) {
        if (b > 0) {
            q = a / b - 1;
        } else {
            q = a / b + 1;
        }
        r = a - q * b;
    }
    cout << q << " " << r;
    cout << endl;
    return 0;
} 
