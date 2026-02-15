// https://atcoder.jp/contests/abc071/tasks/abc071_b

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

const int N = 1e5 + 9;
string s;
int freq[N];
set <char> str;

int main() {
    pht();

    cin >> s;
    for(char c: s) {
        str.insert(c);
    }
    for(char a = 'a'; a <= 'z'; a++) {
        if (str.count(a) == 0) {
            cout << a << "\n";
            return 0;
        }
    }
    cout << "None" << "\n";

    return 0;
}
