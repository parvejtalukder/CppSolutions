/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X*/
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
        int dec; cin >> dec;
        int pop = __popcount(dec);
        cout << (1 << pop) - 1 << endl;
        // string bin = to_string(pop)
    }
    return 0;
}