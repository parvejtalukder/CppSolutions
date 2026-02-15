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
        int sm, md, lg;
        if (slices <= 2) {
            cout << slices << "\n";
        } else {
            do {
                int one = rand() * slices - 2;
                int another = rand() * slices - 1;
                // int sm = one;
                if (one > another) swap(one, another);
                sm = one;
                md = another - one;
                lg = slices - another;

                if (sm < md && md < lg && sm + md + lg == slices) {
                    sm = slices;
                }
            }
            while(sm <= 2);
            if (sm <= 2) {
                cout << sm << "\n";
            }
        }
    }
    return 0;
}