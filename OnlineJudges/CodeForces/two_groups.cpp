// https://codeforces.com/problemset/problem/1747/A

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int test_case;
    cin >> test_case;
    while(test_case--) {
        int n; 
        cin >> n;
        vector <int> a(n);
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        cout << abs(sum) << "\n";

    }
    return 0;
}
