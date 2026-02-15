#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

const int N = 22;
int arrSize;
int expectedSum, A[N];
bool found;

void solve(int i, int currSum) {
    if (i > arrSize) {
        if (currSum == expectedSum) {
            found = true;
        }
        return;
    }
    solve(i + 1, currSum + A[i]);
    solve(i + 1, currSum - A[i]);
}

int main() {
    pht();
    cin >> arrSize >> expectedSum;
    for(int i = 0; i < arrSize; i++) {
        cin >> A[i];
    }
    found = false;
    solve(1, A[0]);
    if(found) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}