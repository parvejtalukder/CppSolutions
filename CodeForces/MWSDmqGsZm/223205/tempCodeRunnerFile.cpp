// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E
 
#include <bits/stdc++.h>
using namespace std;

long long getPower(int b, int p);
void toSolve(int x, int n);
 
void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
 
int main() {
    pht();
    int N, X;
    cin >> X >> N;
    toSolve(X, N);
    return 0;
}

void toSolve(int x, int n) {
    long long Sum = 0;
    // long long Mult = 1;
    for(int i = 2; i <= n; i += 2) {
        Sum += getPower(x, i);
    }
    cout << Sum << endl;
}

long long getPower(int b, int p) {
    if (p == 0) {
        return 0;
    } else if (p == 1) {
        return b;
    } else {
        p -= 1;
        return (long long)b * getPower(b, p);
    }
}