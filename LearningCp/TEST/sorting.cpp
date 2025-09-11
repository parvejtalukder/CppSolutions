#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int needSum = 0, sum = 0;;
    set <int> MySet;
    for(int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        MySet.insert(k);
        needSum+=i;
    }
    for (int k: MySet) {
        sum += k;
    }
    int ans = needSum - sum;
    cout << ans << endl;
    return 0;
}