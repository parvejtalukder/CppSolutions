// https://codeforces.com/contest/2167/problem/C
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
        cin >> n;
        vector <int> row(n);
        for(int i = 0; i < n; i++) {
            cin >>  row[i];
        }
        bool isOk = false;
        int cont = row[0];
        for(int i = 1; i < n; i++) {
            if (cont % 2 != row[i] % 2) {
                isOk = true;
                cont = row[i];
            } 
        }
        if (isOk) {
            sort(row.begin(), row.end());
            for(int i = 0; i < n; i++) {
                cout << row[i] << " ";
            }
            cout << "\n";
        } else {
            for(int i = 0; i < n; i++) {
                cout << row[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}