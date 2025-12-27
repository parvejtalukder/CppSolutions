#include <bits/stdc++.h>
using namespace std;

void pht() {
    string num;
    cin >> num;
    string rev = num;
    string newOne;
    reverse(num.rbegin(), num.rend());
    bool isZero = false;
    bool prevZero = false;
    for(int i = 0; i < num.size(); i++) {
        char ex = num[i];
        if (ex != '0' && prevZero != true) {
            newOne.insert(ex);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    pht();
    return 0;
}