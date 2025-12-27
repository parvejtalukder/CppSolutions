// https://judge.beecrowd.com/en/problems/view/1024
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    while(n--) {
        string name;
        // cin >> name;
        getline(cin, name);
        for(auto &ch: name) {
            if ((ch >= 'a' && ch <= 'z') || ch >= 'A' && ch <= 'Z') {
                ch += 3;
            }
            // cout << ch;
        }
        reverse(name.rbegin(), name.rend());
        for(int i = name.size() / 2; i <= name.size(); i++) {
            name[i] -= 1;
        }
        cout << name << "\n";
    }
    return 0;
}