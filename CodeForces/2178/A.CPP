#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        vector <char> arr;
        int si = s.size();
        while(true) {
            for(int i = 0; i < si - 1; i++) {
                if (s[i] == s[i + 1] && s[i] != 'Y') {
                    arr.push_back(s[i]);
                } else if (s[i] != s[i + 1]) {
                    arr.push_back('Y');
                }
            }
            for(int i = 0; i < si - 1; i++) {
                arr[i] = s[i];
            }
        }
        // bool isSame = false;
    }
    return 0;
}