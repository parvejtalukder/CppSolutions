// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B
 
#include <bits/stdc++.h>
using namespace std;
 
void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void PrintNumbers(int num) {
    for(int i =  1; i <= num; i++) {
        if (i != num) {
            cout << i << " ";
        } else {
            cout << i << endl;
        }
    }
}
 
int main() {
    pht();
    int printUntill;
    cin >> printUntill;
    PrintNumbers(printUntill);
    return 0;
}