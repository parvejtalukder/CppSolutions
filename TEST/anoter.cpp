#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i == n) {
            cout << "Ho!";
        } else {
            cout << "Ho ";
        }
    }
    cout << endl;
    return 0;
}
