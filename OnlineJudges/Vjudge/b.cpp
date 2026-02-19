//https://vjudge.net/contest/790915#problem/B

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
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (i != min) {
            swap(arr[i], arr[min]);
            cnt++;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) {
            cout << " ";
        } else {
            cout << "\n";
        }
    }
    cout << cnt << "\n";
    return 0;
}