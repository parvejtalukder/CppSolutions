/*https://codeforces.com/problemset/problem/633/A*/
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
    cin >> a >> b >> c;
    for(int i = 0; i <= c; i+=a) {
        for(int j = 0; j <= c; j+=b) {
            if (i + j == c) {
                cout << "Yes" << endl;
                return 0;
            } 
        }
    }
    cout << "No" << endl;
    return 0;
}