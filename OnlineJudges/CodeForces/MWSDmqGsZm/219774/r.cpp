/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int sizeArr;
    cin >> sizeArr;
    vector <int> arrOne(sizeArr);
    vector <int> arrTwo(sizeArr);
    for(int i = 0; i < sizeArr; i++) {
        cin >> arrOne[i];
    }
    for(int i = 0; i < sizeArr; i++) {
        cin >> arrTwo[i];
    }
    sort(arrOne.begin(), arrOne.end());
    sort(arrTwo.begin(), arrTwo.end());
    // CHECKING AS THE PRBLM
    int cntSame = 0;
    for(int i = 0; i < sizeArr; i++) {
        if (arrOne[i] == arrTwo[i]) {
            cntSame++;
        }
    }
    (cntSame == sizeArr) ? cout << "yes" << endl : cout << "no" << endl;   
    return 0;
}