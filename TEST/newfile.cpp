#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int L;
    while (cin >> L) {
        set<int> speeds;
        for (int i = 0; i < L; i++) {
            int n;
            cin >> n;
            speeds.insert(n);
        }

        int Max = *speeds.rbegin();  

        if (Max < 10) {
            cout << 1 << "\n";
        } else if (Max < 20) {
            cout << 2 << "\n";
        } else {
            cout << 3 << "\n";
        }
    }

    return 0;
}
