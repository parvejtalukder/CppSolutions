// https://www.codechef.com/START208D/problems/SPRCLN

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int X, Y;
    cin >> X >> Y;
    long long mul = (1LL *X * 30) + (1LL * Y * 60);
    cout << mul << endl;
    return 0;
}