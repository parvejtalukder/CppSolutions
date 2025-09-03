#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double partOne, partTwo;
    partOne = b * log(a);
    partTwo = d * log(c);
    if (partOne > partTwo) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    // cout << partOne << " " << partTwo << endl;
    return 0;
}