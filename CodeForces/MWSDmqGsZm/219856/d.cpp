
/*https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    string first, second;
    cin >> first; cin >> second;
    string third = first + second;
    swap(first[0], second[0]);
    cout << first.size() << " " << second.size() << endl;
    cout << third << endl;
    cout << first << " " << second << endl;
    return 0;
}
