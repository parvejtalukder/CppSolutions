// https://codeforces.com/contest/2167/problem/D
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int tcase;
    cin >> tcase;
    while(tcase--) {
        int n;
        cin >> n;
        long long arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // long long ans = -1;
        long long ans = -1;
        for(long long x = 2; x <= 100; x++) {
            bool isOk = false;
            for(int j = 0; j < n; j++) {
                if(__gcd(arr[j], x) == 1) {  
                    isOk= true;
                    break;
                }
            }
            if(isOk) {
                ans = x;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
