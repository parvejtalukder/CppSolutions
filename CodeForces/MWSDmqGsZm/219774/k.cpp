/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int sizeOf;
    cin >> sizeOf;
    cin.ignore();
    char numOf[sizeOf + 1];
    cin.getline(numOf, sizeOf + 1);
    int theSum = 0;
    for(int i = 0; i < sizeOf; i++) {
        theSum += numOf[i] - '0';
    }
    cout << theSum << endl;
    // cout << nums << endl;
    return 0;
}