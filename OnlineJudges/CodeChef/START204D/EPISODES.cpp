#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);            

    int testCase;
    cin >> testCase;

    for (int i = 1; i <= testCase; i++) {
        int n, k;
        cin >> n >> k;
        int total = n * k;
        if (total < 60) {
            cout << 0 << ' ' << total << '\n';
        } else {
            int h = total / 60;
            int m = total % 60;
            cout << h << ' ' << m << '\n';
        }
    }
    return 0;
}
