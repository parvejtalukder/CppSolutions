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
    char home[row][col];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> home[i][j];
        }
    }
    int neRow, neCol;
    cin >> neRow >> neCol;
    int rowStart, colStart; colStart = neCol - 1; 
    int rowEnd; int colEnd; rowStart = neRow - 1; 
    rowEnd = rowStart + 3; colEnd = colStart + 3;
    for(int i = rowStart; i < rowEnd; i++) {
        bool isX = true;
        for(int j = colStart; j < colEnd; j++) {
            if (home[neRow][neCol] != 'x') {
                isX = false;   
            }
        }
        if(!isX) {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}