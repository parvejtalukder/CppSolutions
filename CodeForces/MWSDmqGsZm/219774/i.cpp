/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int testCase;
    cin >> testCase;
    while(testCase--) {
        int arrSize;
        cin >> arrSize;
        int arrOf[arrSize];
        for(int i = 0; i < arrSize; i++) {
            cin >> arrOf[i];
        }
        int lowestSum = arrOf[0] + arrOf[1] + 2 - 1;
        for(int i = 1; i < arrSize; i++) {
            for (int j = i + 1; j <= arrSize; j++) {
                int sumPair = 0;
                sumPair += arrOf[i - 1] + arrOf[j - 1] + j - i;
                // cout << i << " " << j << ": "  << arrOf[i - 1] << " + " << arrOf[j - 1] << " + " << j << " - " << i << " "<< sumPair << endl;
                if (sumPair < lowestSum) {
                    lowestSum = sumPair;
                }
            }
        }
        cout << lowestSum << endl;
    }
    return 0;
}