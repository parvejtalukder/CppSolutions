/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int rowIs, colmIs;
    cin >> rowIs >> colmIs;
    int arr2d[rowIs][colmIs];
    for(int i = 0; i < rowIs; i++) {
        for(int j = 0; j < colmIs; j++ ) {
            cin >> arr2d[i][j];
        }
    }

    for(int i = rowIs - 1; i >= 0; i--) {
        for(int j = colmIs - 1; j >= 0; j--) {
            if (j != 0) {
                cout << arr2d[i][j] << " ";
            } else {
                cout << arr2d[i][j] << endl;
            }
        }
    }
    cout << endl;
    return 0;
}