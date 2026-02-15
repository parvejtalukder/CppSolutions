/*
Problem: AlarmingClock
Platform: UVA
Link: https://vjudge.net/problem/UVA-11677/origin
*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    while(1) {
        int h1, h2, m1, m2;
        cin >> h1 >> m1 >> h2 >> m2;
        if (h1 == h2 && h2 == m1 && m1 == m2 && m2 == 0) {
            break;
        }
        long long minStart = (60 * h1) + m1;
        long long minEnd = (60 * h2) + m2;
        if (minEnd < minStart) {
            minEnd += 24 * 60;
        }
        cout << abs(minEnd - minStart) << "\n";
    }
    return 0;
}