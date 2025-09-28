/*https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    string word;
    cin >> word;
    map <char, int> table;
    for(char partOf : word) {
        table[partOf]++;
    }
    for(auto& p: table) {
        cout << p.first << " : " << p.second << endl;
    }
    return 0; 
}