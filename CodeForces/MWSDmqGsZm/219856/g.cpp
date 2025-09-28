/*https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    string myString;
    getline(cin, myString);
    for(char one : myString) {
        if (isupper(one)) {
            if (one == ',') {
                one = ' ';
            }
            one = tolower(one);
            cout << one;
        } else {
            if (one == ',') {
                one = ' ';
            }
            one = toupper(one);
            cout << one;
        }
    }
    cout << endl;
    return 0; 
}