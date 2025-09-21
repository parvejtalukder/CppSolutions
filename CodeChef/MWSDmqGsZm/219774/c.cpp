/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C*/
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
        if (arrOf[i] < 0) {
            arrOf[i] = 2;
        } else if (arrOf[i] > 0) {
            arrOf[i] = 1;
        }
    }
    for(int i = 0; i < arrSize; i++) {
        if (i != arrSize - 1) {
            cout << arrOf[i] << " ";
        } else {
            cout << arrOf[i] << endl;
        }
    }
    return 0;
}