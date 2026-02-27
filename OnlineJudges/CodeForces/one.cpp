#include <bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;
int sum[N];

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    for(int i = 1; i < N; i++) {
        sum[i] += sum[i - 1] + sum[i];
    }
}

int main() {
    pht();
    int l, r;
    cin >> l >> r;
    cout << sum[r] - sum[l] << "\n";
    return 0;
}