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
        set <int> arr;
        for(int i = 0; i <n ; i++) {
            int x; cin >> x;
            arr.insert(x);
        }
        cout << arr.size() << "\n";
    }
    return 0;
}