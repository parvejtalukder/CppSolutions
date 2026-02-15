// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/S
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int getSum(int n) {
    int sm = 0;
    while(n > 0) {
        int d = n % 10;
        sm += d;
        n /= 10;
    }
    return sm;
}

int main() {
    pht();
    int t, n;
    int cnt = 0;
    for(int i = 1; i <= t; i++) {
        int k;
        cin >> k;
        
    }
    return 0;
}