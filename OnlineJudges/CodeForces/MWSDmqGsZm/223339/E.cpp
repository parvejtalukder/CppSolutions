// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void toBin(long long num) {
    if (num == 0) return; 
    toBin(num / 2);
    int one = num % 2;
    cout << one; 
}

int main() {
    pht();
    int testCase;
    cin >> testCase;
    while(testCase--) {
        long long num;
        cin >> num;
        toBin(num);
        cout << endl;
    }
    return 0;
}