/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    for(int i = 1; i < 4; i++) {
        for (int j = i + 1; j <= 4; j++) {
            cout << i << " " << j << endl;
        }
    }
    return 0;
}