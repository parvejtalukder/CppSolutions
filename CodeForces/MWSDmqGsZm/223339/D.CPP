// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void print(long long size) {
    if (size == 0) return;
    print(size / 10);
    cout << size % 10 << " ";
}

int main() {
    pht();
    int ts; cin >> ts;
    while(ts--) {
        long long int n; 
        cin >> n;
        if (n == 0) {
            cout << n;
        } else {
            print(n);
        }
        cout << endl;
    }
    return 0;
}