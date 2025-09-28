
/*https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    string numBer;
    cin >> numBer;
    long long theSum = 0;
    for(char dig : numBer) {
        dig = dig - '0';
        theSum += dig;
    }
    cout << theSum << endl;
    return 0; 
}