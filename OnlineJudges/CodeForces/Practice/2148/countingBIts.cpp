/*https://vjudge.net/problem/codechef-bit*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

string toBin(int n) {
    string bin = "";
    while(n > 0) {
        int dig = n % 2;
        bin = char(dig + '0') + bin;
        n /= 2;
    }
    return bin;
}

int bitCount(string bin) {
    int count = 0;
    for(int i = 0; i < bin.size(); i++) {
        if (bin[i] == '1') {
            count++;
        }
    }
    return count;
}

int main() {
    pht();
    int testCase;
    cin >> testCase;
    while(testCase--) {
        int n;
        cin >> n;
        int res; int netSum = 0;
        for(int i = 1; i <= n; i++) {
            res = bitCount(toBin(i));
            netSum += res;   
        }
        cout << netSum << endl;
    }
    return 0;
}