#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int t_case;
    cin >> t_case;
    while(t_case--) {
        int n, s, x;
        cin >> n >> s >> x;
        int sum_of_n = 0;
        int arr[n];
        for(int i = 0; i < n; i++) {
            int inp;
            cin >> inp;
            arr[i] = inp;
            sum_of_n += inp;
        }
        if (sum_of_n == s) {
            cout << "YES" << "\n";
            continue;
        } 
        while(sum_of_n < s) {
            sum_of_n += x;
        }
        if (sum_of_n == s) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}