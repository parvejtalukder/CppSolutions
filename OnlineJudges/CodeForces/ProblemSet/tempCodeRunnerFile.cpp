#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int a, b;
    cin >> a >> b;
    for(int i = 1;;i++) {
        a = a*3;
        b = b*2;
        if (a > b) {
            cout << i << endl;
            return 0;
        }
    } 
    return 0;
}