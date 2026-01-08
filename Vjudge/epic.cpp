/*https://codeforces.com/problemset/problem/1506/D*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    map <int, int> freq;
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    priority_queue <pair<int, int>> pq;
    for(auto elm: freq) {
        int a = elm.first, b = elm.second;
        pq.push({b, a});
    }
    int ans = n;
    while(pq.size() > 1) {
        auto [c1, v1] = pq.top();
        pq.pop();
        auto [c2, v2] = pq.top();
        pq.pop();
        c1--; c2--;
        ans -= 2;
        if (c1 > 0) pq.push({c1, v1});
        if (c2 > 0) pq.push({c2, v2});
    }
    cout << ans << "\n";
}

int main() {
    pht();
    int n;
    cin >> n;
    while(n--) solve();
    return 0;
}