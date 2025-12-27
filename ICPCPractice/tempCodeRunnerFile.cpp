#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    int n;
    cin >> n;
    vector <long long> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cnt = 0;
    for(int stp = 0; stp < n; stp++) {
        int minIdx = stp;
        for(int i = stp + 1; i < n; i++) {
            if (arr[i] < arr[minIdx]) {
                minIdx = i;
                cnt++;
            }
        }
        swap(arr[minIdx], arr[stp]);
    }
    if (cnt == 2) {
        cout << "Sorted" << "\n";
    } else {
        cout << "Failed" << "\n";
    }
    return 0;
}