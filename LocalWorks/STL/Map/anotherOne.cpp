#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    int arrTest[testCase];
    for(int i = 0; i < testCase; i++) {
        cin >> arrTest[i];
    }
    bool swaped; int counting = 0;
    for(int i = 0; i < testCase - 1; i++) {
        swaped = false;
        for (int j = 0; j < testCase - i - 1; j++) {
            if (arrTest[j] < arrTest[j + 1]) {
                swap(arrTest[j + 1], arrTest[j]);
                swaped = true;
                counting++;
            }
        }
        if (!swaped)
        break;
    }
    cout << counting << endl;
    return 0;
}