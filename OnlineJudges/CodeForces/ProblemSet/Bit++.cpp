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
    int cnt = 0;
    while(tCase--) {
        string oprtn;
        cin >> oprtn;
        if (oprtn == "X++" || oprtn == "++X")  {
            cnt++;
        } else {
            cnt--;
        }
    }
    cout << cnt << endl;
    return 0;
}