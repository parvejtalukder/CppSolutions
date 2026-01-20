/*https://codeforces.com/problemset/problem/2178/A*/

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    string arr;
    cin >> arr;
    int s = arr.size();
    reverse(arr.begin(), arr.end());
    int start = 0;
    while(arr[start] == '0' && start < s) {
        start++;
        // cout << start << " ";
    }
    string ann = arr.substr(start);
    cout << ann << "\n";
    if (ann == arr) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    // cout << start << "\n";
    // cout << start << " " << arr << "\n";
    return 0;
}