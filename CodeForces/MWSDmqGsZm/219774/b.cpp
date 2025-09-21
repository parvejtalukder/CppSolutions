/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int SizeOfArray;
    cin >> SizeOfArray;
    int ArrayA[SizeOfArray];
    for(int i = 0; i < SizeOfArray; i++) {
        cin >> ArrayA[i];
    }
    int ToCheck; 
    cin >> ToCheck;
    for(int Indx = 0; Indx < SizeOfArray; Indx++) {
        if (ToCheck == ArrayA[Indx]) {
            cout << Indx << endl; 
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}