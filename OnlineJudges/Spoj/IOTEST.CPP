/* https://vjudge.net/problem/SPOJ-INTEST/origin */
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    pht();
    int n, k, a = 0;
    cin >> n >> k;
    while(n--) {
        int t;
        cin >> t;
        if (t % k == 0) {
            a++;
        }
    }
    cout << a << "\n";
}