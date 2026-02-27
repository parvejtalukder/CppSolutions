#include <bits/stdc++.h>
using namespace std;
void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

map <char, int> mp = {{'a', 1}, {'b', 2}, {'c', 3}, {'d', 1}, {'e', 2}, {'f', 3}, {'g', 1}, {'h', 2}, {'i', 3}, {'j', 1}, {'k', 2}, {'l', 3}, {'m', 1}, {'n', 2}, {'o', 3}, {'p', 1}, {'q', 2}, {'r', 3}, {'s', 4}, {'t', 1}, {'u', 2}, {'v', 3}, {'w', 1}, {'x', 2}, {'y', 3}, {'z', 4}, {' ', 1}};

int main() {
    pht();
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; i++) {
        int sum = 0;
        string line;
        getline(cin, line);
        // cin >> line;
        for(char a: line) {
            sum += mp[a];
        }
        cout << "Case #"<< i << ": " << sum << "\n";
    }
    return 0;
}