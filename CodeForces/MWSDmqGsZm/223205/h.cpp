// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H
 
#include <bits/stdc++.h>
using namespace std;

void Code();
void Print(char ch, int turns);

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
 
int main() {
    pht();
    int testCase;
    cin >> testCase;
    while(testCase--) {
        Code();
    }
    return 0;
}

void Code() {
    int turns; char ch;
    cin >> turns >> ch;
    Print(ch, turns);
}

void Print(char ch, int turns) {
    for(int i = 1; i <= turns; i++) {
        if (i != turns) {
            cout << ch << " ";
        } else {
            cout << ch << endl;
        }
    }
}