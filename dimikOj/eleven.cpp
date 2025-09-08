#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        long long int k;
        cin >> k;
        long long int fr = 1;
        for (int i = 1; i <= k; i++) {
            fr *= i;
        }
        cout << fr << endl;
    }
    return 0;
}
