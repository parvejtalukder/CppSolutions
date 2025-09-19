/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int arrSize;
    cin >> arrSize;
    int arrOfSize[arrSize];
    for(int i = 0; i < arrSize; i++) {
        cin >> arrOfSize[i];
    }
    for(int o = 0; o < arrSize - 1; o++) {
        for(int i = 0; i < arrSize - o - 1; i++) {
            if (arrOfSize[i] > arrOfSize[i + 1]) {
                swap(arrOfSize[i], arrOfSize[i + 1]);
            }
        }
    }
    for(int i = 0; i < arrSize; i++) {
        if (i != arrSize - 1) {
            cout << arrOfSize[i] << " ";
        } else {
            cout << arrOfSize[i] << endl;
        }
    }
    return 0;
}