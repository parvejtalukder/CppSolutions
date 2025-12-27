/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int n; int ijj = 0;
    cin >> n; int iii = 0;
    for(int i = 1;; i++) {
        // iii++; ijj++;
        iii++;
        // ijj++;
        // cout << iii << " " << ijj << endl;
        if (iii == 3) {
            cout << i << " ";
            cout << "PUM" << endl;
            ijj++;
            if (ijj == n) break;
            iii = 0;
            i++;
            // continue;
        } else {
            cout << i << " ";
        }
        // if (ijj == 4) {
        //     ijj = 0;
        //     continue;
        // } 
    }
    return 0;
}