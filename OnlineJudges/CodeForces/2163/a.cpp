#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
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
        // vector <int> arr;
        set <int> arrUni;
        for(int i = 0; i < n; i++) {
            int num; cin >> num;
            // arr.push_back(num);
            arrUni.insert(num);
        }
        if (arrUni.size() <= n - 1) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
        // int cnt = 0;
        // bool breakk = false;
        // for (int i = 0; i < n - 1; ++i) {
        //     for (int j = 0; j < n - i - 1; ++j) {
        //       if (arr[j] > arr[j + 1]) {
        //         swap(arr[j], arr[j + 1]);cnt++;
        //         if (cnt > n - 2) {
        //             breakk = true; break;
        //         }
        //       }
              
        //     } 
        // }
        // if (!breakk) {
        //     cout << "NO" << "\n";
        // } else {
        //     cout << "YES" << "\n";
        // }
        // /f ((arr[0] % 2) && (arr[1] % 2)) {
        // }
        // for(int i = 0; i < n; i++) {
        //     cout << arr[i] << " ";
        // }
    }
    return 0;
}