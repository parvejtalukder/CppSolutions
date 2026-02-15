/*https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    string Word;
    cin >> Word;
    string Poor = Word;
    reverse(Word.begin(), Word.end());
    if (Poor == Word) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0; 
}