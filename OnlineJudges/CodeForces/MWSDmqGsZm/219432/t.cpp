// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    pht();
    int line;
    cin >> line;
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < line - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}