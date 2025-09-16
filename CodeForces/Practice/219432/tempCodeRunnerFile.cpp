/* https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I */
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    vector <long long int> rev;
    long long int n; cin >> n; int cnt = 0;
    while(n > 0) {
        int dig = n % 10;
        rev.push_back(dig);
        n = n / 10;
        cnt++;
    }
    for(int i = 0; i < cnt; i++) {
        if (i != cnt) {
            cout << rev[i];
        } else {
            cout << rev[i];
        }
    }
    cout << endl;
    return 0;
}
