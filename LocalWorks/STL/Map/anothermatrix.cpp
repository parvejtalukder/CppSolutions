#include <bits/stdc++.h>
using namespace std;

int main() {
    int myMatrix[5][5];
    int row = 0, col = 0;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {   
            cin >> myMatrix[i][j];
            if (myMatrix[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }
    int ans = abs(2 - row) + abs(2 - col);
    cout << ans << endl;
    return 0;
}
