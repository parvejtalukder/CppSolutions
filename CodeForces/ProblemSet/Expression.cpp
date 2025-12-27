// https://vjudge.net/problem/codeforces-479a
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    set <int> nums;
    int max = INT_MIN;
    nums.insert(a + b + c);
    nums.insert(a * b * c);
    nums.insert((a + b) * c);
    nums.insert(a * (b + c));
    for(auto it: nums) {
        if (it > max) {
            max = it;
        }
    }
    cout << max << "\n";
    return 0;
}