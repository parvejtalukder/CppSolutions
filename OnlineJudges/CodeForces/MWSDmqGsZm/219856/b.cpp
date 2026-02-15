
/*https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    string String;
    getline(cin, String);
    // cout << String << endl;
    for(int i = 0; i < String.size(); i++) {
        if (String.at(i) == '\\') {
            break;
        } else {
            cout << String[i];
        }
    }

    cout << endl;
    return 0;
}
