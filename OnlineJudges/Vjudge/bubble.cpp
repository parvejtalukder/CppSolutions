// https://vjudge.net/contest/790915#problem

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
    for(int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) {
            cout << " ";
        } else {
            cout << "\n";
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                for(int k = 0; k < n; k++) {
                    cout << arr[k];
                    if (k != n - 1) {
                        cout << " ";
                    } else {
                        cout << "\n";
                    }
                }
            }
        }
    }
    return 0;
}