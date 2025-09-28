/*https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int testCase;
    cin >> testCase;
    while(testCase--) {
        string One, Two;
        cin >> One; cin >> Two;
        int oneSize = One.size();
        int TwoSize = Two.size();
        for(int i = 0; i < max(oneSize, TwoSize); i++) {
            if (i < oneSize) {
                cout << One[i];
            }
            if (i < TwoSize) {
                cout << Two[i];
            }
        }
        cout << endl;
    }
    return 0; 
}