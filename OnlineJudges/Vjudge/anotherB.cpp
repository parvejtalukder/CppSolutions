#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for(int k = 0; k < n/2; k++) {
            for(int i = k; i < (n/2) - 2; i++) {
                if (arr[k] > arr[k + 2]) {
                    swap(arr[k], arr[k + 2]);
                }
            }
        }
    }
    return 0;
}
