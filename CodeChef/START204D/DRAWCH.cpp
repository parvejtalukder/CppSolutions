#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);            
    // nothing
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        string s; cin >> s;
        int alicaWon = 0, bobWon = 0;
        for(int i = 0; i < m; i++) {
            if (s[i] == '0') {
                bobWon++;
            } else {
                alicaWon++;
            }
        }
    }

    return 0;
}