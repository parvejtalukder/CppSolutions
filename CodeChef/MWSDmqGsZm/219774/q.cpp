/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int arraySize;
    cin >> arraySize;
    int arrayOf[arraySize];
    for(int i = 0; i < arraySize; i++) {
        cin >> arrayOf[i];
    }
    for(int i = 0; i < arraySize; i++) {
        for(int j = i; j < arraySize; j++) {
            for(int k = i; k <= j; k++) {
                (k != j) ? cout << " " : cout << endl; 
            }
        }
    }
    return 0;
}