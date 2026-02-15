/*https://vjudge.net/problem/uva-484*/
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
    vector <int> vec;
    map <int, int> mp;
    while(cin >> n) {
        if (mp[n] == 0) vec.push_back(n);
        mp[n]++;
    }
    for(auto x: vec) {
        cout << x << " " << mp[x] << "\n";
    }
    return 0;
}