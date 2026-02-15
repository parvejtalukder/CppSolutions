/*https://codeforces.com/contest/44/problem/A*/

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int t;
    cin >> t;
    set <pair<string, string>> arr;
    while(t--) {
        string a, b;
        cin >> a >> b;
        arr.insert({a, b});
    }
    cout << arr.size() << "\n";
    return 0;
}