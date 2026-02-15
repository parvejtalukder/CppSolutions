/*https://vjudge.net/problem/codeforces-501b*/

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int n;
    cin >> n;
    map <string, string> pJudge;
    while(n--) {
        string oldName, newName;
        cin >> oldName >> newName;
        if (pJudge.find(oldName) == pJudge.end()) {
            pJudge[newName] = oldName;
        } else {
            pJudge[newName] = pJudge[oldName];
            pJudge.erase(oldName);
        }
    }
    cout << pJudge.size() << "\n";
    for(auto [x, y]: pJudge) {
        cout << y << " " << x << "\n";
    }
    return 0;
}