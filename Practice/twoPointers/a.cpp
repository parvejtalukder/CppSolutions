#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int n;
    cin >> n;
    int l, r;
    cin >> l >> r;
    long long arr[n + 1];
    long long pref[n + 1];
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    pref[0] = 0;
    for(int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + arr[i];
    }
    cout << pref[r] - pref[l - 1] << '\n';
    return 0;
}