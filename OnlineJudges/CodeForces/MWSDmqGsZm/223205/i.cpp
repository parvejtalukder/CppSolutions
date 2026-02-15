// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/I
 
#include <bits/stdc++.h>
using namespace std;
 
void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
 
int main() {
    pht();
    int size2D, row, col;
    cin >> size2D >> row >> col;
    int Arr[size2D][size2D]; 
    for(int i = 0; i < size2D; i++) {
        for(int j = 0; j < size2D; j++) {
            cin >> Arr[i][j];
        }
    }
    for(int i = 0; i < size2D; i++) {
        for(int j = 0; j < size2D; j++) {
            if (j == row - 1) {
                swap(Arr[i][row - 1], Arr[i][col - 1]);

            }
        }
    }
    for(int i = 0; i < size2D; i++) {
        for(int j = 0; j < size2D; j++) {
            if (i == row - 1) {
                swap(Arr[row - 1][j], Arr[col - 1][j]);
            }
        }
    }
    // cout << endl << endl;
    for(int i = 0; i < size2D; i++) {
        for(int j = 0; j < size2D; j++) {
            if (j != size2D - 1) {
                cout << Arr[i][j] << " ";
            } else {
                cout << Arr[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}