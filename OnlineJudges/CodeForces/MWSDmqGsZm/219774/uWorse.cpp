/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int arrSize, squSize;
    cin >> arrSize >> squSize;
    int arrOf[arrSize], squOf[squSize];
    for (int i = 0; i < arrSize; i++) {
        cin >> arrOf[i];
    }
    for (int i = 0; i < squSize; i++) {
        cin >> squOf[i];
    }
    vector <int> inx;
    for (int i = 0; i < arrSize; i++) {
        if (arrOf[i] == squOf[i]) {
            inx.push_back(i);
        }
    }
    int countMatch = 0;
    for (int i = 0; i < squSize; i++) {
        if (arrOf[inx[i]] == squOf[inx[i]]) {
            countMatch++;
        }
    }
    if (countMatch == squSize) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}