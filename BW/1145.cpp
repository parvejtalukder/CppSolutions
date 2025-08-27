#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int numberInLine;
    int limitOfNumber, checkLine = 0;;
    cin >> numberInLine >> limitOfNumber;
    for(int i = 1; i <= limitOfNumber; i++) {
        cout << i;
        checkLine++;
        if (checkLine == numberInLine) {
            cout << "\n";
            checkLine = 0;
        } else {
            cout << " ";
        }
    }
    // cout << endl;
    return 0;
}