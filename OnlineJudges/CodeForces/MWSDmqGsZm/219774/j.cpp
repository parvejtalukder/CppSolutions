/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int theSize;
    cin >> theSize;
    int theArr[theSize];
    for(int i = 0; i < theSize; i++) {
        cin >> theArr[i];
    }
    int minNum = theArr[0];
    for(int i = 1; i < theSize; i++) {
        if (theArr[i] < minNum) {
            minNum = theArr[i];
        }
    }
    // cout << min << endl;
    int minCount = 0;
    for(int i = 0; i < theSize; i++) {
        if (minNum == theArr[i]) {
            minCount++;
        }
    }
    if (minCount % 2 == 0) {
        cout << "Unlucky" << endl;
    } else {
        cout << "Lucky" << endl;
    }
    return 0;
}