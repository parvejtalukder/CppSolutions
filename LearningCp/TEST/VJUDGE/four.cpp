#include <bits/stdc++.h>
using namespace std;

long long pw(int a, int b) {
    long long pow = 1;
    for(int i = 0; i < b; ++i) {
        pow *= a;
    }
    return pow;
}

int main() {
    int a, b;
    cin >> a >> b;
    long long ans = pw(a, b) + pw(b, a);
    cout << ans << endl;
    return 0;
}