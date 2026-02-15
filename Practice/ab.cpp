#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(int indx) {
    string line;
        getline(cin, line);
        string arr; int s = line.size();
        for(int i = s - 1; i >= 0; i--) {
            char ch = line[i];
            if (ch >= 'a' && ch <= 'z') {
                arr.push_back(ch);
                cout << ch << "";
            }
        }
        string rev = arr;
        reverse(arr.begin(), arr.end());
        cout << "Case #" << indx << " :"  << "\n";
        if (rev == arr) {
            cout << (int)sqrt(arr.size()) << "\n";
        } else {
            cout << "No magic :(" << "\n";
        }
}

int main() {
    pht();
    int k;
    cin >> k;
    cin.ignore();
    for(int indx = 1; indx <= k; indx++) {
        solve(indx);
        // reverse(rev.begin(), )

    }
    return 0;
}