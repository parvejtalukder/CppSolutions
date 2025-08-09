#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, P, Q, R, S;
    cin >> N >> P >> Q >> R >> S;
    int arrof[N];
    for (int i = 0; i < N; i++) {
        cin >> arrof[i];
    }
    for (int i = 0; i < N; i++) {
        if (!(i >= P - 1 && i <= Q - 1) && !(i >= R - 1 && i <= S - 1)) {
            cout << arrof[i] << " ";
        }
    }
    for (int i = R - 1; i <= S - 1; i++) {
        cout << arrof[i] << " ";
    }
    for (int i = P - 1; i <= Q - 1; i++) {
        cout << arrof[i] << " ";
    }
    cout << "\n";
    return 0;
}
