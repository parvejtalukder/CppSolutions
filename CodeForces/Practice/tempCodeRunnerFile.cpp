/*https://codeforces.com/problemset/problem/440/A*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int sizeOfArr;
    cin >> sizeOfArr;
    int arrOf[sizeOfArr];
    int sumFound = 0;
    for(int i = 0; i < sizeOfArr; i++) {
        cin >> arrOf[i];
        sumFound += arrOf[i];
    }
    long long realSum = (sizeOfArr * (sizeOfArr + 1)) / 2;
    int ans = realSum - sumFound;
    cout << ans << endl;
    return 0; 
}