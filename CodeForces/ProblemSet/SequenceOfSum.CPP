#include <bits/stdc++.h>
using namespace std;

void pht() {
    while(1) {
        int a, b;
        cin >> a >> b;
        if (a <= 0 || b <= 0) {
            break;
        }
        int sum = 0;
        int start = min(a,b);
        int end = max(a, b);
        for(int i = start; i <= end; i++) {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    pht();
    return 0;
}