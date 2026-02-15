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
    int one = 0;
    int two = 1;
    int num; cin >> num;
    for(int i = 3; i <= num; i++) {
        cout << one + two << endl;
        one = two;
        two = one + two;
    }
    return 0;
}