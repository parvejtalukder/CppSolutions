#include <iostream>
using namespace std;
int main() {
    int row, colm;
    cin >> row;
    cin >> colm;
    int arr[row][colm];
    for (int i = 0; i < row; i++) {
        for (int j =  0; j < colm; j++) {
            cin >> arr[row][colm];
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colm; j++) {
            cout << arr[row][colm];
        }
        cout << endl;
    }
}