
/*https://vjudge.net/problem/codeforces-598a*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int testCase; 
    cin >> testCase;
    while(testCase--) {
        int n; cin >> n;
        long long int sum = (long long int) (n + 1) * n / 2;
        long long int theSum = 0;
        for(int i = 1; i <= n; i*=2) {
            theSum += i;
        }
        long long int ans = sum - theSum * 2;
        cout << ans << endl;
    }
    return 0;
}