
/*https://atcoder.jp/contests/abc051/tasks/abc051_b*/
#include <bits/stdc++.h>
using namespace std;

inline void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int K, S; cin >> K >> S; int cnt = 0;
    for(int x = 0; x <= K; x++) {
        for(int y = 0; y <= K; y++) {
            int z = S - x - y;
            if (z >= 0 && z <= K) {
                cnt++;
            }
            // if (x + y + (S - x - y))
        }
    } 
    cout << cnt << endl;
    return 0;
}