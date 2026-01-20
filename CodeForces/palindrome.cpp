#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    string myNum;
    cin >> myNum;
    string anNum = myNum;
    reverse(anNum.begin(), anNum.end()); 
    int numReg, numRev;
    numReg = stoi(myNum);
    numRev = stoi(anNum);
    cout << numRev << "\n";
    if (numReg == numRev) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
}
