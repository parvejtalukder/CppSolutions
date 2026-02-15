// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

#include <bits/stdc++.h>
using namespace std;

void print(int num) {
    if (num == 0) return;
    print(num - 1);
    cout << num << endl;
}

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int n; cin >> n;
    print(n);
    return 0;
}