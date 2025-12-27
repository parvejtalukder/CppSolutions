#include <bits/stdc++.h>
using namespace std;

int nnnplusone(int num);

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int n;
    cin >> n;
    // int cnt = 0;
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    cout << nnnplusone(n) << "\n";
    // int cnt = 1;
    // while(1) {
    //     if (n % 2 == 0) {
    //         n /= 2;
    //         cnt++;
    //     } else {
    //         n = (3 * n) + 1;
    //         cnt++;
    //     }
    //     if (n == 1) {
    //         break;
    //     }
    // }
    // cout << cnt << endl;
    return 0;
}

int nnnplusone(int num) {
    if (num == 1) return 1;
    if (num % 2 == 0) {
        return 1 + nnnplusone(num / 2);
    } else {
        return 1 + nnnplusone((3*num) + 1);
    }
}