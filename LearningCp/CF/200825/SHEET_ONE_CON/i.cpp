#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, digit, nn;
    cin >> num;
    nn = num % 10;
    digit = num / 10;
    if (nn % digit == 0 || digit % nn == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}