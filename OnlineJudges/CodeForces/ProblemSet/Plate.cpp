// https://codeforces.com/problemset/problem/197/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 
}

int main() {
    pht();
    int a, b, r;
    cin >> a >> b >> r;
    if ((a >= 2*r) && (b >= 2*r)) {
        cout << "First" << "\n";
    } else {
        cout << "Second" << "\n";
    }
    return 0;
}