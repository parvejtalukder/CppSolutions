/*https://vjudge.net/problem/Aizu-ITP2_1_A*/

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    vector <int> arr;
    int q;
    cin >> q;
    while(q--) {
        int a, b = 0;
        cin >> a;
        if (a == 0) {
            cin >> b;
            arr.push_back(b);
        } else if (a == 1) {
            cin >> b;
            cout << arr[b] << "\n";
        } else {
            arr.pop_back();
        }
    }
    return 0;
}