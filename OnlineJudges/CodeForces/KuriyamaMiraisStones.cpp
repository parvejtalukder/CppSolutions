/* https://codeforces.com/problemset/problem/433/B */
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    pht();
    int n; cin >> n;
    
    vector<int> arr(n + 1);
    vector<int> brr(n + 1);
    vector<long long> preArr(n + 1);
    vector<long long> preBrr(n + 1);
    
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        brr[i] = arr[i];
    }
    int q; cin >> q;
    sort(brr.begin(), brr.end());
    for(int i = 1; i <= n; i++) {
        preArr[i] = preArr[i - 1] + arr[i];
        preBrr[i] = preBrr[i - 1] + brr[i];
    }
    while(q--) {
        int t, l, r;
        cin >> t >> l >> r;
        // l--, r--;
        if (t == 1) {
            long long sum = preArr[r] - preArr[l - 1]; 
            cout << sum << "\n";
        } else {
            long long sum = preBrr[r] - preBrr[l - 1];
            cout << sum << "\n";
        }
    }
    return 0;
}