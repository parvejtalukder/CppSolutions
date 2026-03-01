#include <bits/stdc++.h>
using namespace std;

int n, k;
vector <int> arr;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

bool Ok(double dst) {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cnt += floor(arr[i]/dst);
        if (cnt >= k) {
            return true;
        }
    }
    return false;
}

int main() {
    pht();
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }
    double ans = 0;
    double l = 0, r = 1e7 + 9;
    while(r - l >= 1e-7) {
        double poss = (l + r)/2;
        if (Ok(poss)) {
            ans = poss;
            l = poss; 
        } else {
            r = poss;
        }
    }
    cout << fixed << setprecision(10) << ans << "\n";
    return 0;
}