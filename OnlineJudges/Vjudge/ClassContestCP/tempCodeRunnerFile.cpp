#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

vector <char> chars = {'`', '1', '2', '3', '4', '5', '6', '7', '8', '9','0', '-', '=', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\' ,'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', 'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/'};

char findThis(char a) {
    char ans = ' ';
    for(int i = 9; i < chars.size();i++) {
        if (chars[i] == a) {
            ans = chars[i - 1];
            break;
        } 
    }
    return ans;
}

int main() {
    pht();
    string one;
    // cin >> one;
    getline(cin, one);
    for(int i = 0; i< one.size(); i++) {
        char ch = one[i];
        if (ch == 'Q' || ch == 'A' || ch == 'Z' || ch == '`') {
            cout << ch;
        } else {
            cout << findThis(ch);
        }
    }
    cout << "\n";
    // for(int i = 0; i < one.size(); i++) {
        // if (one[i] == )
    // }
    // for(int i = 0; i < n ; )
    // cout << ((4*(4 + 1))/2) << "\n";
    return 0;
}