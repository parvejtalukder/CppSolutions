/*https://atcoder.jp/contests/abc125/tasks/abc125_a*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int a, b, t;
    cin >> a >> b >> t;
    int neetB = 0, i = 1;
    if (a > t) {
        cout << "0" << endl;
        return 0;
    }
    while (i < t) {
        neetB += b;
        i+=a;
    }
    cout << neetB << endl;
    return 0;
}