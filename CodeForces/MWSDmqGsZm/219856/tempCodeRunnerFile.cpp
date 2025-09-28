/*https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F*/
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
            one = tolower(one);
        } else {
            one = toupper(one);
        }
    }
    cout << myString << endl;
    return 0; 
}