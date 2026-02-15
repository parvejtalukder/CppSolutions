#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int tCase;
    cin >> tCase;
    while(tCase--) {
        int arrSize;
        cin >> arrSize;
        int countOfNeg = 0;
        int countOfZer = 0;
        vector <int> arr(arrSize);
        for(int i = 0; i < arrSize; i++) {
            cin >> arr[i];
            // if ()
        }
        for(int i = 0; i < arrSize; i++) {
            if (arr[i] < 0) {
                countOfNeg++;
            } else if (arr[i] == 0) {
                countOfZer++;
            }
        }
        if (countOfNeg % 2 == 0 || countOfZer > 0) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    } 
    return 0;
}
