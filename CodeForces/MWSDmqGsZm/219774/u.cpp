/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int arrSize, squSize;
    cin >> arrSize >> squSize;

    vector <int> Arr(arrSize);
    vector <int> Squ(squSize);

    for(int i = 0; i < arrSize; i++) {
        cin >> Arr[i];
    }
    for(int i = 0; i < squSize; i++) {
        cin >> Squ[i];
    }

    int nowArrSize = 0;
    for(int i = 0; i < squSize; i++) {
        bool isFound = false;
        while (nowArrSize < arrSize) {
            if (Arr[nowArrSize] == Squ[i]) {
                isFound = true;
                nowArrSize++;
                break;
            } else {
                nowArrSize++;
            }
        }
        if (!isFound) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    
    return 0;
}