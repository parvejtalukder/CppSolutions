/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    string num;
    cin >> num; int isNum = 0;
    vector <char> number;
    reverse(num.begin(), num.end());
    for(int i = 0; i < num.size(); i++) {
        if (num[i] != '0') {
            number.push_back(num[i]);
            isNum = 1;
        } else if(isNum && num[i] == '0') {
            number.push_back(num[i]);
        } else {
            isNum = 0;
        }
    }
    bool isPalin = false;
    for(int i = 0; i < number.size(); i++) {
        cout << number[i];
        if (i == number.size() - 1) cout << endl;
        if (num.size() != number.size()) {
           isPalin = false;
        } else if (num[i] == number[i]) {
            isPalin = true;
        }
    }
    (isPalin) ? cout << "YES" : cout << "NO";
    cout << endl;
    return 0;
}