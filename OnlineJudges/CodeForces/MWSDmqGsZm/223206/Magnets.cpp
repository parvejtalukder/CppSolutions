// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/G
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int cnt = 1;
    int t_case;
    cin >> t_case;
    char last = ' ';
    while(t_case--) {
        char a, b;
        cin >> a >> b;
        if (last == a) {
            cnt++;
        }
        last = b;
    }
    cout << cnt << "\n";
    return 0;
}