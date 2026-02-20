// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int front = 0, end = n-1;
    for(int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << arr[front];
            front++;
        } else {
            cout << arr[end];
            end--;
        }
        if (i != n) {
            cout << " ";
        } else {
            cout << "\n";
        }
    }
    return 0;
}