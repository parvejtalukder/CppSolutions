#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    const int maxc = 1e7+1;
    vector<long long> divsr(maxc, 0);
    for (long long i = 1; i < maxc; i++) {
        for (int j = i; j < maxc; j += i) {
            divsr[j]++;
        }
    }

    long long number;
    cin >> number; long long sum = 0;
    for(long long i = 1; i <= number; i++) {
        sum += (i * divsr[i]);
    }
    cout << sum << endl;
    return 0;
}