// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K

#include <bits/stdc++.h>
using namespace std;

long long maxNum = LONG_LONG_MIN;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void findTheMax(long long arr[], int i, int siz) {
    if (i == siz) return;
    long long num = arr[i];
    if (num > maxNum) {
        maxNum = num;
        findTheMax(arr, i + 1, siz);
    } else {
        findTheMax(arr, i + 1, siz);
    }
}

int main() {
    pht();
    int n; cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    findTheMax(arr, 0, n);
    cout << maxNum << endl;
    return 0;
}