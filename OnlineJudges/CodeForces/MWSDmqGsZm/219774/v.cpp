#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int arrSize, runTo;
    cin >> arrSize >> runTo;
    int arrOf[arrSize + 1];
    int countValue[runTo + 1];
    for(int i = 1; i <= arrSize; i++) {
        cin >> arrOf[i];
    }
    for(int i = 1; i <= runTo; i++) {
        countValue[i] = 0;
    }
    for(int i = 1; i <= arrSize; i++) {
        countValue[arrOf[i]]++;
    }
    for(int i = 1; i <= runTo; i++) {
        cout << countValue[i] << endl;
    }
    return 0;
}
