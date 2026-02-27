#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> arr;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            arr.push_back(x);
        }
        int cnt = 0;
        sort(arr.begin(), arr.end());
        int max = arr[n - 1];
        for(int aa: arr) {
            if (aa == max) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}