#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int testCase; cin >> testCase;
    int i = 1;
    while(i <= testCase) {
        int n, k, m, h;
        cin >> n >> k;
        if ((n*k) < 60) {
            cout << 0 << " " << (n*k) << endl;
        } else {
            h = (n*k) / 60;
        m = (n*k) % 60;
        cout << h << " " << (n*k) << endl;
        }
    }
    return 0;
}