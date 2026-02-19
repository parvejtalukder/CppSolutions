#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int n;
    cin >> n;
    int cnt = 0;
    vector <int> arr;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if ((arr[i] + arr[j]) == arr[i] + 1) {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}