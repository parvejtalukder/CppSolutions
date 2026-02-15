/*https://codeforces.com/problemset/problem/2178/A*/

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int q;
    cin >> q;
    while(q--) {
        string YN;
        cin >> YN;
        int ans = 0;
        vector <int> arr;
        int si = YN.size();
        for(int i = 0; i < si; i++) {
            if (YN[i] == 'Y') arr.push_back(1);
            else if (YN[i] == 'N') arr.push_back(0);
        }
    }
    return 0;
}