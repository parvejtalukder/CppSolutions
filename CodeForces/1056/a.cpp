/*https://codeforces.com/contest/2155/problem/A*/
#include <bits/stdc++.h>
using namespace std;

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
        int numberOfTeams;
        cin >> numberOfTeams;
        cout <<  ((long long)2 * numberOfTeams) - 2 << endl;
    }
    return 0;
}