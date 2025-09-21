/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int num;
    cin >> num;
    if (num == 1) {
        cout << 0 << endl;
    } else if (num == 2) {
        cout << 1 << endl;
    } else {
        long long int pre = 0, now = 1, fib = 0; 
        for(int i = 3; i <= num; i++) {
            fib = pre + now;
            pre = now;
            now = fib;
        }
        cout << fib << endl;
    }
    return 0;
}