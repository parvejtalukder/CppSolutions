#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int test;
    set <int> nums;
    for(int i = 1; i < n; i++) {
        cin >> test;
        nums.insert(test);
    }
    for(int i = 1; i <= n; i++) {
        if(!nums.count(i)) {
            cout << i << endl;
        }
    }
    return 0;
}