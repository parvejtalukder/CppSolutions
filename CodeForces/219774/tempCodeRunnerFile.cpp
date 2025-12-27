// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include <bits/stdc++.h>
using namespace std;

void Refiners() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    Refiners();

    int n;
    cin >> n;
    long long arr[n];
    // int i = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        // i++;
    }

    cout << abs(sum) << "\n";
    return 0;
}