#include <bits/stdc++.h>
using namespace std;
 
void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

bool toBinAndPalin(long long num) {
    string bin = "";
    while(num > 0) {
        int dig = num % 2;
        bin = char(dig - '0') + bin;
        num /= 2;  
    }
    string rev = bin;
    reverse(bin.begin(), bin.end());
    // string rev;
    int cnt = 0; 
    for(int i = 0; i < bin.size(); i++) {
        if (rev[i] == bin[i]) {
            cnt++;
        }
    }
    if (rev.size() == bin.size() && bin.size() == cnt) {
        return true;
    } else {
        return false;
    }
    // return 0;
}
 
int main() {
    pht();
    long long num;
    cin >> num;
    if (num % 2 != 0) {
        if (toBinAndPalin(num)) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    } else {
        cout << "NO" << "\n";
    }
    // int N, X;
    // cin >> X >> N;
    // toSolve(X, N);
    return 0;
}