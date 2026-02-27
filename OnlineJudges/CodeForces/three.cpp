#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n % 2 != 0) {
        cout << "NO" << "\n";
    } else {
        stack <char> arr;
        for(char ch: s) {
            if (!(arr.empty()) && arr.top() == ch){
                arr.pop();
            } else {
                arr.push(ch);
            }
            // arr.push(s[i]);
        }
        if (arr.empty()) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}