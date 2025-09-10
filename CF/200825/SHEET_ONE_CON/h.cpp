#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int n, k, a;
    cin >> n >> k >> a;
    // int num = n + k + a;
    long long int num = typeid((n*k)/a);
    cout << num << endl;
    return 0;
}