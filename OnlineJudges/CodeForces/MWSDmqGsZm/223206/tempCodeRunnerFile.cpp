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
    set <char> arr;
    while(n--) {
        char ch;
        cin >> ch;
        arr.insert(ch);
    }
    for(char x: arr) {
        cout << x;
    }
    cout << "\n";
    return 0;
}