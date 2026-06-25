#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    pht();
    int q;
    cin >> q;
    vector <int> arr;
    while(q--) {
        int cmd, val;
        cin >> cmd;
        if (cmd == 0) {
            cin >> val;
            arr.push_back(val);
        } else if (cmd == 1) {
            cin >> val;
            // auto fnd = find()
            cout << arr[val] << "\n";
        } else {
            arr.pop_back();
        }
    }
    return 0;
}
