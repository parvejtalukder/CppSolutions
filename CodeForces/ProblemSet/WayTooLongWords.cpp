#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

string provideAns(string word) {
    char one = word[0];
    int two = word.size() - 2;
    char three = word[two + 1];
    return one + to_string(two) + three;
}

int main() {
    pht();
    int tCase;
    cin >> tCase;
    while(tCase--) {
        string word;
        cin >> word;
        if (word.size() > 10) {
            cout << provideAns(word) << endl;
        } else {
            cout << word << endl;
        }
    }
    return 0;
}