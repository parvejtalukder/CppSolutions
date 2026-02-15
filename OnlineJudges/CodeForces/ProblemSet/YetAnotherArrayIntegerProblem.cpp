// https://codeforces.com/problemset/problem/1409/A
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

// int cnt = 0;

// void Answer(long long a, long long b, int cnt) {
//     if (a == b) {
//         cout << cnt << "\n";
//         return;
//     }
//     // long long temp = b - a;
//     // Answer()
//     if (a > b) {
//         int temp = a - b;
//         // int Cnt = temp / 10;
//         Answer()
//     }
// }

int main() {
    pht();
    int tCase;
    cin >> tCase;
    while(tCase--) {
        long long a, b;
        cin >> a >> b;
        cout << (abs(a - b) + 9) / 10 << "\n";
    }
    return 0;
}