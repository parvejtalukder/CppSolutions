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
    vector <int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
                cnt++;
            }
        }
    }
    cout << "Array is sorted in " << cnt << " swaps." << "\n";
    return 0;
}