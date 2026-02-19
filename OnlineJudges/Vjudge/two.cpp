//vjudge.net/contest/790915#problem/E

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    bool found = false;
    int l = 0, r = n - 1;
    while(l <= r) {
        int mid = (l + r)/2;
        if (arr[mid] == 1) {
            found = true;
            break;
        } else if (mid < 1) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    if (found) {
        cout << "HARD" << "\n";
    } else {
        cout << "EASY" << "\n";
    }
    return 0;
}