// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int n, w;
int value[25], weight[25];
int maxVal = 0;

void solve(int item, int currW, int currV) {
    if (item == n) {
        if (currW <= w) {
            maxVal = currV;
        }
        return;
    }
    solve(item + 1, currW, currV);
    if (currW + weight[item] <= w) {
        solve(item + 1, currW + weight[item], currV + value[item]);
    }
}

int main() {
    pht();
    cin >> n >> w;
    for (int i = 0; i < n; i++) {
        cin >> value[i] >> weight[i];
    }
    solve(0, 0, 0);
    cout << maxVal << "\n";
    return 0;
}
