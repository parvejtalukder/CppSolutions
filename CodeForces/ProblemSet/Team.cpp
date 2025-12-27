#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int tCase;
    cin >> tCase;
    int cntM = 0;
    while(tCase--) {
        int bin[3];
        int cnt = 0;
        for(int i = 0; i < 3; i++) {
            cin >> bin[i];
            if (bin[i] == 1) cnt++;
        }
        if (cnt >= 2) {
            cntM++;
        }
        // cin >> a >> b >> c;
    }
    cout << cntM << endl;
    return 0;
}