/*https://atcoder.jp/contests/abc199/tasks/abc199_a*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    long long int a, b, c;
    if ((a*a) + (b*b) < (c*c)) {
        cout << "Yes" << endl; 
    } else {
        cout << "No" << endl;
    }
    return 0;
}