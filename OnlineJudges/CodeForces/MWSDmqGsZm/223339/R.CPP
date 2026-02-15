#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

const int N = 1e5 + 9;
int n, arr[N];

bool isPalin(int l, int r) {
    if (l > r) return true;
    if (arr[l] != arr[r]) {
        return false;
    }
    return isPalin(l + 1, r - 1);
}

int main() {
    pht();
    // int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    // vector<int> rev(arr.rbegin(), arr.rend());
    // bool res = (isPalin(arr, rev) == arr.size()) ? "YES" : "NO";
    if (isPalin(1, n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}