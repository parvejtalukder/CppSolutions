#include <bits/stdc++.h>
using namespace std;
void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main() {
    pht();
    int n;
    cin >> n;
    long long max = 0;
    long long arrOfNum[n];
    for(int i = 0; i < n; i++) {
        cin >> arrOfNum[i];
        if (arrOfNum[i] > max) {
            max = arrOfNum[i];
        }
    }
    cout << max << endl;
    return 0;
}