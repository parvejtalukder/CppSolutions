#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    // while(testCase--) {

    // }
    for(int i = 0; i < testCase; i++) {
        int x;
        cin >> x;
        if (x == 0) {
            cout << "NULL" << "\n";
        } else {
            if (x > 0) {
                if (x % 2 == 0) {
                    cout << "EVEN POSITIVE" << "\n";
                } else {
                    cout << "ODD POSITIVE" << "\n";
                }
            } else {
                if (abs(x) % 2 == 0) {
                    cout << "EVEN NEGATIVE" << "\n";
                } else {
                    cout << "ODD NEGATIVE" << "\n";
                }
            }
        }
    }
    return 0;
}