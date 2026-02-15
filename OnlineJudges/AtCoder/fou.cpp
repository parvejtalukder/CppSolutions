/*https://atcoder.jp/contests/abc220/tasks/abc220_a*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int a, b, c;
    int isFound = 0;
    cin >> a >> b >> c;
    for(int i = a; i <= b; i++) {
        if (i % c == 0) {
            cout << i << endl;
            isFound = 1; 
            break;
        } 
    }
    if (!isFound) {
        cout << "-1" << endl;
    }
    return 0;
}