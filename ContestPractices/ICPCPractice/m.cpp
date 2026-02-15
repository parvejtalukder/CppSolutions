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
        long long n, m;
        cin >> n >> m;
        vector <long long> chitas;
        vector <long long> deears;
        for(int i = 0; i < n; i++) {
            cin >> chitas[i];
        }
        for(int i = 0; i < m; i++) {
            cin >> deears[i];
        }
        sort(chitas.begin(), chitas.end());
        sort(deears.begin(), deears.end());
        
    }
    return 0;
}