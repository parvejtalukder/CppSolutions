/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int arrSize;
    cin >> arrSize;
int theArr[arrSize];
        for(int i = 0; i < arrSize; i++) {
            cin >> theArr[i];
        }
        int maxIndx = 0;
        int minIndx = 1;
        for(int i = 0; i < arrSize; i++) {
            if (theArr[minIndx] > theArr[i]) {
                minIndx = i;
            }
            if (theArr[maxIndx] < theArr[i]) {
                maxIndx = i;
            }
        }
        swap(theArr[maxIndx], theArr[minIndx]);
        for(int i = 0; i < arrSize; i++) {
            if (i != arrSize - 1) {
                cout << theArr[i] << " ";
            } else {
                cout << theArr[i] << endl;
            }
        }
    return 0;
}