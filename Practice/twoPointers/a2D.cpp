#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int pref[n][m];
    pref[0][0] = arr[0][0];
    for(int i = 1; i < m; i++) {
        pref[0][i] = pref[0][i - 1] + arr[0][i];
    }
    for(int i = 1; i < n; i++) {
        pref[i][0] = pref[i - 1][0] + arr[i][0];
    }
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            pref[i][j] = 
            pref[i][j - 1] + pref[i - 1][j] + arr[i][j] - pref[i - 1][j - 1];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << pref[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}