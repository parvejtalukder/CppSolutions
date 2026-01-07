// /* https://vjudge.net/problem/hackerrank-balanced-brackets */
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
    if ((brackets.size()) % 2 != 0) {
        cout << "NO" << "\n";
        return;
    }
    char one_start = '{';
    char thre_start = '[';
    char thre_end = ']';
    char one_end = '}';
    char two_end = ')';
    char two_start = '(';
    int siz = brackets.size();
    map <char, int> get_pos;
    for(int i = 0; i < siz; i++) {
        if (brackets[0] == (one_end || two_end || thre_end)) {
            cout << "NO" << "\n"; return;
        }
        // if (brackets[i] ==)
        get_pos[brackets[i]] = i;
    }

}

int main() {
    pht();
    int n;
    cin >> n;
    while(n--) solve();
    return 0;
}