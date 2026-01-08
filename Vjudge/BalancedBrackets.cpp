#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    string brackets;
    cin >> brackets;
    stack <char> brack;
    for(auto ch: brackets) {
        if (ch == '(' || ch == '{' || ch == '[') {
            brack.push(ch);
        } else {
            if (brack.empty()) {
                cout << "NO" << "\n";
                return;
            } else {
                if ((ch == ')' && brack.top() == '(') || (ch == '}' && brack.top() == '{') || (ch == ']' && brack.top() == '[')
                ) {
                    brack.pop();
                } else {
                    cout << "NO" << "\n";
                    return;
                }

            }
        }
    }
    if (brack.empty()) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    // cout << "YES" << "\n";
}

int main() {
    pht();
    int n;
    cin >> n;
    while(n--) solve();
    return 0;
}