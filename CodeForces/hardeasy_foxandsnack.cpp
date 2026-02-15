#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    pht();
    int line_n, line_m;
    int one = 0;
    cin >> line_n >> line_m;
    for (int i = 1; i <= line_n; i++) {
        for (int j = 1; j <= line_m; j++) {
            if (i % 2 == 1) {
                cout << "#";
            } else {
                if (one == 0) {
                    if (j < line_m) cout << ".";
                    else cout << "#";
                } else {
                    if (j == 1) cout << "#";
                    else cout << ".";
                }
            }
        }
        if (i % 2 == 0) one = 1 - one; 
        cout << "\n";
    }
    return 0;
}
