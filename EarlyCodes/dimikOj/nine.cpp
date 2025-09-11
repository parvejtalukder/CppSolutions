#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--) {
        long long sqNum, tqNum;
        cin >> sqNum;
        tqNum = sqrt(sqNum);
        if (tqNum * tqNum == sqNum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}