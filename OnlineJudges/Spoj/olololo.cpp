/* https://www.spoj.com/problems/OLOLO/en/ */
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    pht();
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        ans ^= arr[i];
    }
    cout << ans << "\n";
    return 0;
}