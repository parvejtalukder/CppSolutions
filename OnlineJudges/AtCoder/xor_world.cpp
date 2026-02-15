// https://atcoder.jp/contests/abc121/tasks/abc121_d
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

long long get_xor(long long e) {
    long long ans = 0;
    while(e >= 0 && e % 4 != 3) {
        ans ^= e;
        e--;
    }
    return ans;
}

long long find(long long s, long long e) {
    return get_xor(e) ^ ( s > 0 ? get_xor(s - 1) : 0);
}

int main() {
    pht();
    long long s, e;
    cin >> s >> e;
    long long the_ans = find(s, e);
    cout << the_ans << "\n";
    return 0;
}