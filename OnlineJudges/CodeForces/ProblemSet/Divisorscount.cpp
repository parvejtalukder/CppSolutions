#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    const int maxc = 1e6+1;
    vector<int> divsr(maxc, 0);
    for (int i = 1; i < maxc; i++) {
        for (int j = i; j < maxc; j += i) {
            divsr[j]++;
        }
    }

    int tcase; cin >> tcase;
    while(tcase--) {
        int n;
        cin >> n;
        cout << divsr[n] << endl;
    }
    return 0;
}