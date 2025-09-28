/*https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F*/
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
    cin.ignore();
    while(testCase--) {
        string stringIs;
        // cin >> stringIs;
        getline(cin, stringIs);
        if (stringIs.size() <= 10) {
            cout << stringIs << endl;
        } else {
            cout << stringIs[0] << stringIs.size() - 2 << stringIs[stringIs.size() - 1] << endl;
        }
    }
    return 0; 
}