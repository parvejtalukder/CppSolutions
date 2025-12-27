#include <bits/stdc++.h>
using namespace std;

void pht() {
    int n;
    cin >> n;
    int cnt = 0;
    if (n % 2 != 0) {
        cnt = 0;
    } else {
        cnt = (n/4)+1;
    }
    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--) pht();
    return 0;
}