#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int q; 
    cin >> q;
    while(q--) {
        int a, b, c;
        cin >> a >> b >> c;
        int time = 0;
        if (a < b) {
            time = a + b;
        } else {
            time = b;
        }
        if ((c - time))
        // time += b;
        // cout << c - time << "\n";
    }
    return 0;
}