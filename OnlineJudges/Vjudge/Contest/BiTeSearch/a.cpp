#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int n, q;
vector <int> arr;
vector <int> qrr;

int lowbo(int x) {
    int l = 0, r = n - 1;
    while(l < r) {
        int mid = (l + r) / 2;
        if (arr[mid] >= x) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    return l;
}

int main() {
    pht();
    cin >> n >> q;
    for(int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        arr.push_back(x);
    }
    while(q--) {
        int x;
        cin >> x;
        int ans = lowbo(x);
        if (ans < n && arr[ans] == x) {
            cout << ans << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}