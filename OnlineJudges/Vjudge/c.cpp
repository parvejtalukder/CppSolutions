//https://vjudge.net/contest/790915#problem/C

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    long long n, c;
    cin >> n >> c;
    long long arr[n];
    for(long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(long long i = 0; i < n; i++) {
        for(long long j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    long long cnt = 0;
    long long from = arr[0];
    for(long long i = 0; i < n; i++) {
        if ((arr[i] - from) >= c) {
            cnt++;
            from = arr[i];
        }
    }
    cout << cnt << "\n";
    return 0;
}