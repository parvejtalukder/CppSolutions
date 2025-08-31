#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio;
    cin.tie(0);
    int maxL, minR;
    int lOne, lTwo, rOne, rTwo;
    cin >> lOne >> rOne >> lTwo >> rTwo;
    maxL = max(lOne, lTwo);
    minR = min(rOne, rTwo);
    if (maxL <= minR) {
        cout << maxL << " " << minR << endl;
    } else {
        cout << "-1" << endl;
    }
    return 0;
}