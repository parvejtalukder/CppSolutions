#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        vector<long long> divOr;
        for (long long i = 1; i*i <= b; i++) {
            if (b % i == 0) {
                divOr.push_back(i);
                if (i != b / i) {
                    divOr.push_back(b / i);
                }
            }
        }

        long long sumBig = -1;
        for(long long i = 0; i < (long long)divOr.size(); i++) {
            long long k = divOr[i];
            long long sum = a * k + b / k;
            if (sum % 2 == 0 && sum > sumBig) {
                sumBig = sum;
            }
        }
        cout << sumBig << "\n";
    }

    return 0;
}
