/*https://codeforces.com/problemset/problem/621/A*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int n;
    cin >> n;
    int a[n]; int midOdd = 1e9;
    long long sumOf = 0;
    for(int i = 0;  i < n; i++) {
        cin >> a[i]; 
        sumOf += a[i];
        if (a[i] % 2 == 1) {
            midOdd = min(midOdd, a[i]);
        }
    }
    if (sumOf % 2 == 0) {
        cout << sumOf << endl;
    } else {
        sumOf -= midOdd;
        cout << sumOf << endl;
    }
    return 0;
}
