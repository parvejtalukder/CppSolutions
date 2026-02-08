#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

queue <long long> arr;

void solve() {
    int cmd;
    cin >> cmd;
    if (cmd == 1) {
        int val;
        cin >> val;
        arr.push(val);
    } else if (cmd == 2) {
        // arr.pop();
        if(!arr.empty()) {
            arr.pop();
            // cout << arr.front() << "\n";
        }
    } else if (cmd == 3) {
        // cout << ""
        if(!arr.empty()) {
            cout << arr.front() << "\n";
        } else {
            cout << "Empty!" << "\n";
        }
    }

}

// const int N = 1e9;

int main() {
    pht();
    int tCase;
    cin >> tCase;
    cin.ignore();
    for(int i = 0; i < tCase; i++) {
        solve();
    }
    return 0;
}