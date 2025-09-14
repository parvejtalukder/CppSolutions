/*https://atcoder.jp/contests/abc193/tasks/abc193_a*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int a, b;
    cin >> a >> b;
    double res = ((double)b / (double)a) * 100;
    cout << 100 - res << endl;
    return 0;
}