// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I

#include <bits/stdc++.h>
using namespace std;

// vector <long long> MyList;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int vowels(string sentence, int i = 0) {
    // int i = 0;
    if (i == sentence.size()) return 0;
    char ch = tolower(sentence[i]);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'u' || ch == 'o') {
        return 1 + vowels(sentence, i + 1);
    } 
    return vowels(sentence, i + 1);
}

int main() {
    pht();
    string sentence;
    getline(cin, sentence);
    cout << vowels(sentence, 0);
    cout << endl;
    return 0;
}