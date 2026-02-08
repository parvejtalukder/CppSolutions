#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    pht();
    string name;
    cin >> name;
    int s = name.size();
    bool fnd = false;
    for (int mask = 0; mask < (1 << s); mask++) {
        string subs;
        for (int j = 0; j < s; j++) {
            if (mask & (1 << j)) {
                // cout << name[j];
                subs += name[j];
            }
        }
        if (subs == "hello") {
            fnd = true;
            break;
        }
        // cout << "\n";
    }
    if (fnd) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}
