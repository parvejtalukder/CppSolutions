#include <bits/stdc++.h>
using namespace std;
void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

long long factoGin(int n) {
    long long fec = 1;
    for(int i = 1; i <= n; i++) {
        fec *= i;
    }
    return fec;
}

int main() {
    pht();
    int n;
    cin >> n;
    while(n--) {
        int number;
        cin >> number;
        long long fectorial = factoGin(number);
        cout << fectorial << endl;
    }
    return 0;
}