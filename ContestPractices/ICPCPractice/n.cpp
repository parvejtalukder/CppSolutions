#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int n;
    cin >> n;
    long long arr[n][n];
    long long count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 0) {
                count++;
            }
        }
    }
    cout << count << "\n";
    return 0;
}