/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P*/
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
    int arrOf[arrSize];
    for(int i = 0; i < arrSize; i++) {
        cin >> arrOf[i];
    }
    int operationCnt = 0;
    while(1) {
        int allEven = 0;
        for(int i = 0; i < arrSize; i++) {
            if (arrOf[i] % 2 == 0) {
                arrOf[i] /= 2;
                allEven++; 
            }
        }
        if (allEven != arrSize) {
            break;
        } else {
            operationCnt++;
        }
    }
    cout << operationCnt << endl;
    return 0;
}