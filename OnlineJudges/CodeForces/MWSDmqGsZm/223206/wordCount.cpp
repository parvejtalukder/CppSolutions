// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    string s;
    getline(cin, s);
    int count = 0;
    bool inWord = false;
    for(int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {         
            if (!inWord) {           
                count++;
                inWord = true;       
            }
        } else {
            inWord = false;          
        }
    }
    cout << count << "\n";
    return 0;
}