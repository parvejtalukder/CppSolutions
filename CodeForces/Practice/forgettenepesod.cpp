/*https://codeforces.com/problemset/problem/440/A*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int n;
    cin >> n;                               
    long long sumWatched = 0;               
    for (int i = 0; i < n - 1; i++) {       
        int x;
        cin >> x;
        sumWatched += x;
    }
    long long realSum = 1LL * n * (n + 1) / 2; 
    cout << (realSum - sumWatched) << endl;
    return 0;
}
