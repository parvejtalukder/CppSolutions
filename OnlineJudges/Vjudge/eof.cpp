#include <bits/stdc++.h>
using namespace std;
void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    string line;
    while(getline(cin, line)) {
        list <char> ans;
        auto pos = ans.begin();
        for(char ch: line) {
            if (ch == '[') {
                pos = ans.begin();
            } else if (ch == ']') {
                pos = ans.end();
            } else {
                ans.insert(pos, ch);
            }
        }
        for(char a: ans) {
            cout << a;
        }
        cout << "\n";
    }
    return 0;
}