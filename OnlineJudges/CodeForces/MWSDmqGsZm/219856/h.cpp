/*https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int testCase;
    cin >> testCase;
    while(testCase--) {
        string stringOfNums;
        cin >> stringOfNums;
        if (stringOfNums.find("101") != string::npos || stringOfNums.find("010") != string::npos){
            cout << "Good" << endl;
        } else {
            cout << "Bad" << endl;
        }
    }
    return 0; 
}