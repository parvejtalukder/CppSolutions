/*https://atcoder.jp/contests/abc152/tasks/abc152_a*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int a , b; cin >> a >> b;
    if (b == a) {
        cout << "Yes" << endl;
    } else if (b < a) {
        cout << "No" << endl;
    }
    return 0;
}