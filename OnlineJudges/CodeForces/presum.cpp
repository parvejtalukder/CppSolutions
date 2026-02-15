/*https://cses.fi/problemset/task/1646*/

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int n, q;
    cin >> n >> q;
    vector <long long> arr(n + 1, 0);
    vector <long long> preSum(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        preSum[i] = preSum[i - 1] + arr[i];
    }
    while(q--) {
        int a, b;
        cin >> a >> b;
        cout << (preSum[b] - preSum[a - 1]) << "\n";
    }
    return 0;
}