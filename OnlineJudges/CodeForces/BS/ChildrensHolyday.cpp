#include <bits/stdc++.h>
using namespace std;
#define MAX_TIME 1e9

vector <int> t;
vector <int> z;
vector <int> y;
int required_ballons, n;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

bool Ok(int t_time) {
    int t_ballons = 0;
    for(int i = 0; i < n; i++) {
        int t_block = t[i] * z[i] + y[i];
        int count_ballon = t_time / t_block;
    }
}
 
int main() {
    pht();
    cin >> required_ballons >> n;
    for(int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        t.push_back(a); 
        z.push_back(b);
        y.push_back(c);
        // cin >> t[i] >> z[i] >> y;
    }
    int l = 0, r = MAX_TIME, ans = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (Ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << "\n";
    return 0;
}