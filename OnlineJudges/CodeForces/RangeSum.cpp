#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        long long l, r;
        cin >> l >> r;
        if(l > r) swap(l, r);
        long long a = (r * (r + 1))/2;
        long long b = ((l - 1) * l )/2;
        cout << a - b << "\n";
    }
    return 0;
}