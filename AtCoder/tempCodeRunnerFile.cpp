// 
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

const int mod = 1e9 + 7;
vector <long long> arr;

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        cout << ((a + 1) / 2) * ((b + 1) / 2) + (a/2) * (b/2) << "\n";
        // cout << (abs(a) * abs(b)) << "\n";
    }
    return 0;
}