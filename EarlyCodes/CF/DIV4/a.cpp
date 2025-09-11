#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore();
    while(n--) {
        string rhyme;
        int cntA = 0, cntB = 0;
        getline(cin, rhyme);
        for(char rhy: rhyme) {
            if (rhy == 'A') {
                cntA++;
            } else {
                cntB++;
            }
        }
        if (cntA > cntB) {
            cout << "A" << endl;
        } else {
            cout << "B" << endl;
        }
    }
    return 0;
}