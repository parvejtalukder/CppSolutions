/*https://atcoder.jp/contests/abc222/tasks/abc222_a*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int numInt;
    cin >> numInt;
    string numString = to_string(numInt);
    int sizeOfString = numString.size();
    if (sizeOfString == 1) {
        cout << "000" << numString << endl;
    } else if (sizeOfString == 2) {
        cout << "00" << numString << endl;
    } else if (sizeOfString == 3) {
        cout << "0" << numString << endl;
    } else {
        cout << numString << endl;
    }
    return 0;
}