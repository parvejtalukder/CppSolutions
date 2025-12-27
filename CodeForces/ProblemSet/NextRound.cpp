#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int n, k;
    cin >> n >> k;
    int arr[n];
    bool allZero = false;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] <= 0) {
            allZero = true;
        }
    }
    int bns = 0;
        for(int z = 0; z < k; z++) {
            if (arr[z] == 0) {
                bns++;
            }
        }
    if (allZero) {
        cout << 0 << endl;
    } else if (arr[k - 1] == arr[k]) {
        cout << (k + 1) - bns << endl;
    } else {
        cout << k - bns << endl;
    }
    return 0;
}