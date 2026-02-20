#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    string str;
    for(int k = 1; ;k++) {
        if(!getline(cin, str)) {
            break;
        } 
        if (str.empty()) {
            break;
        }
        cout << "Case " << k << ":\n";
        int n;
        cin >> n;
        while(n--) {
            int i, j;
            bool diff = false;
            cin >> i >> j;
            int min_pos = min(i, j);
            int max_pos = max(i, j);
            for(int s = min_pos; s < max_pos; s++) {
                if ((str[s] != str[s + 1])) {
                    diff = true;
                    // cout << "TR" << "\n";
                    break;
                }
            }
            if (diff) {
                cout << "No" << "\n";
            } else {
                cout << "Yes" << "\n";
            }
        }
        cin.ignore();
    }
    return 0;
}