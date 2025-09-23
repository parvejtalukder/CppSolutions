#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

bool isSameAs47(int x) {
    int nn = x;
    if (nn == 0) {
        return false;
    } else if (nn == 4 || nn == 7) {
        return true;
    } else {
        while(x > 0) {
        int dig = x % 10;
        if (dig != 4 && dig != 7) return false;
        x/=10;
    }
    }
    return true;
}

int main() {
    pht();
    string numString;
    cin >> numString;
    int coutingChar = 0;
    for(int i = 0; i < numString.size(); i++) {
        if (numString[i] == '4' || numString[i] == '7') {
            coutingChar++;
        }
    }
    if (isSameAs47(coutingChar) == true) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}