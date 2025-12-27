#include <bits/stdc++.h>
using namespace std;

void CodeHive() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    CodeHive();
    int testCase;
    cin >> testCase;
    while(testCase--) {
        int n;
        cin >> n;
        cin.ignore();
        vector <string> str;
        vector <int> no(n);
        for(int i = 0; i < n; i++) {
            string num;
            getline(cin, num);
            str.push_back(num);
        }
        for(int i = 0; i < n; i++) {
            if (str[i] == "LEFT") {
                no[i] = -1;
            } else if (str[i] == "RIGHT") {
                no[i] = 1;
            } else {
                // SAME AS 
                int indx = stoi(str[i].substr(8));
                no[i] = no[indx - 1];
            }
        }
        int value = 0;
        for(int i = 0; i < n; i++) {
            // value += one;
            value += no[i];
        }
        cout << value << "\n";
    }
    return 0;
}