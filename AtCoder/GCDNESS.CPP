// https://atcoder.jp/contests/abc182/tasks/abc182_b

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

const int N = 105, M = 1005;
int arr[N];

int main() {
    pht();
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_mult = 0, max_k = 0; 

    for(int k = 2; k < M; k++) {
        int mult = 0;
        for(int i = 0; i < n; i++) {
            if (arr[i] % k == 0) {
                mult++;
            }
        }
        if (mult >= max_mult) {
            max_k = k;
            max_mult = mult;
        }
    }
    
    cout << max_k << "\n";

    return 0;
}