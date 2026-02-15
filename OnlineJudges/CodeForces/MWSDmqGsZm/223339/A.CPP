// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

#include <bits/stdc++.h>
using namespace std;

int print(int num) {
    if (num == 0) return 0;
    cout << "I love Recursion" << endl;
    return num - print(num - 1);
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