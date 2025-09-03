#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k, a;
    cin >> n >> k >> a;
    // int num = n + k + a;
    int num = (n*k)/a;
    if (num == (double)num) {
        cout << "double" << endl;
    } else if (num == (int)num) {
        cout << "int" << endl;
    } else if (num == (long long)num) {
        cout << "long long" << endl;
    }
    return 0;
}