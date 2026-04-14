// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/S
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int k, d;
    cin >> k >> d;
    cin.ignore();
    d++;
    string need = "";
    char num = '0';
    while(d--) {
        need += num;
        num++;
    }  
    int cnt = 0;
    vector <string> arr;
    while(k--) {
        string x;
        cin >> x;
        if (x == need) {
            cnt++;
        }
        reverse(x.begin(), x.end());
    }
    cout << cnt << "\n";
    return 0;
}