#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

bool find(long long n) {
    if (n == 1) return true; 
    if (n % 10 == 0) {
        if (find(n / 10)) {
            return true;
        }
    } 
    if (n % 20 == 0) {
        if (find(n / 20)) {
            return true;
        }
    }
    return false;
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        if (find(n)) {
            cout << "YES\n"; 
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}