#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        set <char> arr;
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++) {
            arr.insert(s[i]);
        }
        cout << arr.size() << "\n";
    }
    return 0;
}