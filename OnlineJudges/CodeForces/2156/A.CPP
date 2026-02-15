#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        int slices;
        cin >> slices;
        int sm, md, lg, cnt = 0;
        
        if (slices <= 2) {
            cout << slices << "\n";
        } else {
            while(1) {
                int one = 1 + rand() % (slices - 2);
                int another = 1 + rand() % (slices - 1);
                // int sm = one;
                if (one > another) swap(one, another);
                sm = one;
                md = another - one;
                lg = slices - another;

                if (sm <= md && md <= lg && sm + md + lg == slices) {
                    if (lg > 2) {
                        cnt += sm;
                        slices = lg;
                    } else {
                        cnt += lg;
                        break;
                    }
                }
            }
            // while(!(lg <= 2));
            // cnt += lg;
            cout << cnt << "\n";
        }
    }
    return 0;
}