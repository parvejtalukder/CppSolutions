/*https://codeforces.com/contest/2148/problem/A*/
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
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long maxSum = a[0];
    long long currentSum = a[0];

    for (int i = 1; i < n; i++) {
        currentSum = max(a[i], currentSum + a[i]); 
        maxSum = max(maxSum, currentSum);          
    }

    cout << maxSum << endl;
    return 0;
}