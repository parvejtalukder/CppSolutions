#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    char arr[8][8];
    while(n--) {
        int r, c;
        
        cin >> r >> c;
        arr[r][c] = 'Q';
        for(int i = r; i < 8 - 1; i++) {
            if (i != c) {
                arr[r][i] = '.';
            }
        }
        for(int i = c; i < 8 - 1; i++) {
            if (i != r) {
                arr[i][c] = '.';
            }
        }
        
    }
    for(int i = 0; i < 8 - 1; i++) {
        for(int j = 0; j < 8 - 1; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0; 
}