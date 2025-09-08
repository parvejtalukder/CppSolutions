#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int k;
        cin >> k;
        int fr = 1;
        for (int i = 1; i <= k; i++) {
            fr *= i;
        }
        int mod = 1, cnt = 0;
        while (fr > 0) {
            mod = fr % 10;
            if (mod == 0) {
                cnt++;
            } else {
                break;
            }
            fr = fr / 10;
        }
        cout << cnt << endl;
    }
    return 0;
}
