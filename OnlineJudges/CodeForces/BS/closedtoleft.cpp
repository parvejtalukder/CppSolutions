#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k;
vector <int> arr;
map <ll, ll> frq;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];

    }
    cin >> k;
    for (int i = 0; i < k; i++) {
        ll l, r;
        cin >> l >> r;
        // cout << findNums(l, r);
        if (i + 1 < k) cout << " ";
    }
    cout << "\n";
    return 0;
}