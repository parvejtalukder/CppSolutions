// https://codeforces.com/problemset/problem/1612/C
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

long long sum(long long n) {
    return n * (n + 1) / 2;
}

long long sum_of_range(long long l, long long r) {
    return sum(r) - sum(l - 1);
}

int k;
long long x;

bool Ok(int i) {
    long long sum = 0;
    if (i <= k) {
        sum = sum_of_range(1, i);
    } else {
        int dec_len = i - k;  
        sum = sum_of_range(1, k);
        if (dec_len >= k - 1) {
            sum += sum_of_range(1, k - 1);
        } else {
            int start = k - dec_len;
            int end = k - 1;
            sum += sum_of_range(start, end);
        }
    }
    return sum >= x;
}

int main() {
    pht();
    int t_case;
    cin >> t_case;
    while(t_case--) {
        cin >> k >> x;
        // long long sum = ((k*(k+1))/2)+((k-1)*((k-1)+1))/2;
        // cout << sum << "\n";
        int l = 1, r = 2*(k-1), ans = 2 * k - 1;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if (Ok(mid)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        } 
        cout << ans << "\n";
    }
    return 0;
}