#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int row, col;
    cin >> row >> col;
    int home[row][col];
    for(int i = 0; i < row; i++) {
        for(int j = i; j < col; j++) {
            cin >> home[i][j];
        }
    }
    int neRow, neCol;
    cin >> neRow >> neCol;
    
    return 0;
}
