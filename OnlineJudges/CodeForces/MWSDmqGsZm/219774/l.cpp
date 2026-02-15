/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L*/
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
        int arrSize;
        cin >> arrSize;
        int theArr[arrSize];
        for(int i = 0; i < arrSize; i++) {
            cin >> theArr[i];
        }
        for(int i = 0; i < arrSize; i++) {
            for(int j = i; j < arrSize; j++) {
                int maxElem = theArr[i];
                for(int k = i + 1; k <= j; k++) {
                    if (maxElem < theArr[k]) {
                        maxElem = theArr[k];
                    }
                }
                cout << maxElem << " ";
            }
        }
        cout << endl;
    }
    return 0;
}