#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    while(1) {
        int fist, second, third;
        cin >> fist >> second >> third;
        if (fist == 0 && second == 0 && third == 0) {
            break;
        }
        if (second - fist == third - second) {
            cout << "AP " << third + (third - second) << "\n";
            // break;
        }
        if ((second / fist) == (third / second)) {
            cout << "GP " << third * (third / second) << "\n";
        }
    }
    return 0;
}
