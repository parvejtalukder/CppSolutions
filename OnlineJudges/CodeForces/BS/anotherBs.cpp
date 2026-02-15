#include <bits/stdc++.h>
using namespace std;

// const int MOD = 1e9+7;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <long long> arr;
        map <int, int> mrr;
        for(int i = 0; i < n; i++) {
            // int sum = 0;
            long long num; cin >> num;
            while(num >= 10) { // 29
                long long sum = 0;
                while(num > 0) { 
                    sum += num % 10; // 9 + 2 
                    num /= 10; // 2
                }
                num = sum; // 11
            }
            arr.push_back(num);
        }
        for(int i = 0; i < n; i++) {
            mrr[arr[i]]++;
        }
        int dig = 0;
        int tim = 0;
        for(auto it: mrr) {
            if (it.second > tim || (it.second == tim && it.first > dig)) {
                tim = it.second;
                dig = it.first;
            }
        }
        // auto f = max(mrr.begin(), mrr.end());
        cout << dig << " " << tim << "\n";
    }
    return 0;
}
