#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--) {
        int nNum, kNum;
        cin >> nNum >> kNum;
        string sNum;
        cin >> sNum;
        set <char> sChar;
        for(int i = 0; i < nNum; i++) {
            sChar.insert(sNum[i]);
        }
        int medianNo;
        if (kNum % 2 == 0) {
            medianNo = kNum / 2;
        } else {
            medianNo = (kNum + 1) / 2;
        }
        for(int d: sChar) {
            cout << d << " ";
        }
    }
    return 0;
}