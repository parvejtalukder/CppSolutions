/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int ArrSize;
    cin >> ArrSize;
    int ArrOne[ArrSize];
    int ArrTwo[ArrSize];
    for(int Indx = 0; Indx < ArrSize; Indx++) {
        cin >> ArrOne[Indx];
        ArrTwo[(ArrSize - 1) - Indx] = ArrOne[Indx];
    }
    int isSame = 0;
    for (int Check = 0; Check < ArrSize; Check++) {
        if (ArrOne[Check] == ArrTwo[Check]) {
            isSame++;
        }
    }
    (isSame == ArrSize) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}