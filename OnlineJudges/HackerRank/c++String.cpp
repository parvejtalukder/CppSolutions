/* https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=false */
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    string one, two;
    cin >> one;
    cin >> two;
    string full = one + two;
    cout << one.size() << " " << two.size() << "\n";
    cout << full << "\n";
    cout << two[0];
    for(int i = 1; i < one.size(); i++) {
        cout << one[i];
    }
    cout << " ";
    cout << one[0];
    for(int i = 1; i < two.size(); i++) {
        cout << two[i];
    }
    cout << "\n";
    return 0;
}