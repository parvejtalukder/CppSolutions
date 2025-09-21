/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q*/
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
        int arraySize;
        cin >> arraySize;
        int arrayOf[arraySize];
        for(int i = 0; i < arraySize; i++) {
            cin >> arrayOf[i];
        }
        int cntNodeArr = 0;
        for(int i = 0; i < arraySize; i++) {
            for(int j = i; j < arraySize; j++) {
                bool isNonDe = true;
                for(int k = i; k < j; k++) {
                    if (arrayOf[k] > arrayOf[k  + 1] ) {
                        isNonDe = false;
                    } 
                    // (k != j) ? cout << arrayOf[k] << " " : cout << arrayOf[k] << endl; 
                }
                if (isNonDe) {
                    cntNodeArr++;
                }
            }
        }
        cout << cntNodeArr << endl;
    }
    return 0;
}