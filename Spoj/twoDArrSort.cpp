#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

double dist(int x, int y) {
    return sqrt(x * x + y * y);
}

void solve() {
    int n;
    cin >> n;
    vector <pair<double, pair<int, int>>> arr;
    for(int i= 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arr.push_back(make_pair(dist(x, y), make_pair(x, y)));
    }
    sort(arr.begin(), arr.end());
    for(auto [d, p]: arr) {
        cout << p.first << " " << p.second << "\n"; 
    }
}

int main() {
    pht();
    int n;
    cin >> n;
    while(n--) solve();
    return 0;
}