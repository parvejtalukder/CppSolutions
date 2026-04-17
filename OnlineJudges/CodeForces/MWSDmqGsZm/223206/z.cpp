// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int n;
    cin >> n;
    int freq[26] = {0};
    for(int i = 0; i < n; i++) {
        char ch;
        cin >> ch;
        freq[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        while (freq[i] > 0) {
            cout << (char)(i + 'a');
            freq[i]--;
        }
    }
    cout << "\n";
    return 0;
}