
/*https://atcoder.jp/contests/abc051/tasks/abc051_b*/
#include <bits/stdc++.h>
using namespace std;

inline void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int sumOFD(int n) {
    int sum = 0, digit;
    while (n > 0) {
        digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    return sum;
}

int main() {
    pht();
    // long long int n; cin >> n;
    char s[1000005]; 
    int ans = 0;
    cin >> s; int digitsum = 0; 
    int len = strlen(s);
    if (len == 1) {
        cout << 0 << endl;
        return 0;
    }
    for(int i = 0; i < len; i++) {
        digitsum += s[i] - '0';
    }
    ans++; int n = digitsum; 
    while(n > 9) {
        // cout << n << endl;
        n = sumOFD(n);
        ans++;
    }
    cout << ans << endl;
    return 0;
}