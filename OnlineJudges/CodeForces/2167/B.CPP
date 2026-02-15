// https://codeforces.com/contest/2167/problem/B
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int tcase;
    cin >> tcase;
    while(tcase--) {
        int n;
        string s, t;
        cin >> n;
        cin >> s >> t;
        // multiset <char> S;
        // multiset <char> T;
        vector <char> S;
        vector <char> T;
        int ss[n], tt[n];
        for(int i = 0; i < n; i++) {
            S.push_back(s[i]);
            T.push_back(t[i]);
        }  
        sort(S.begin(), S.end());
        sort(T.begin(), T.end());
        bool isOk = true;
        for(int i = 0; i < n; i++) {
            if (S[i] != T[i]) {
                isOk = false;
                break;
            }
        }
        if (isOk) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}