// https://vjudge.net/problem/hackerrank-2d-array

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int theArr[6][6];
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            cin >> theArr[i][j];
        }
    }
    int theSum = 0, bigSum = -2147483648;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            theSum = theArr[i][j] + theArr[i][j+1] + theArr[i][j+2] + theArr[i+1][j+1] + theArr[i+2][j] + theArr[i+2][j+1] + theArr[i+2][j+2];
            if (theSum > bigSum) {
                swap(theSum, bigSum);
            }
        }
    }
    cout << bigSum << endl;
    return 0;
}