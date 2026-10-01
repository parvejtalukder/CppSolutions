#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr;
    int one = 0;
    int even = 0;
    int two = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
        if(x % 2 != 0) {
            one++;
        } else if(x % 4 == 0) {
            even++;
        } else {
            two++;
        }
    }
    if (one >= even && one >= two) {
        cout << one << '\n';
    } else if(even >= one && even >= two) {
        cout << even << '\n';
    } else {
        cout << two << '\n';
    }
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}