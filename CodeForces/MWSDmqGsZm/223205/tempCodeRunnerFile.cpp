// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C
 
#include <bits/stdc++.h>
using namespace std;
 
void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
 
void toBinAndCheckPalin(long long num) {
    string binNum;
    while(num > 0) {
        int bit = num % 2;
        binNum = to_string(bit) + binNum;
        num /= 2;
    }
    // return binNum;
    string poorBin = binNum;
    reverse(binNum.begin(), binNum.end());
    if (binNum == poorBin && num % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
 
int main() {
    pht();
    long long decimel;
    cin >> decimel;
    toBinAndCheckPalin(decimel);
    return 0;
}