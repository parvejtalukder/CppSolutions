#include <bits/stdc++.h>
using namespace std;

const long long int N = 1e7+5;
bitset <N> Primes;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void Sive() {
    Primes.set();
    Primes[0] = Primes[1] = 0;
    long long int lim = sqrt(N + 0.5);
    for(long long int i = 2; i <= lim; i++) {
        if (Primes[i]) {
            for(long long int j = i*i; j <= N; j+=i) {
                Primes[j] = 0;
            }
        }
    }
}

int main() {
    pht();
    Sive();
    int number;
    cin >> number;
    if (Primes[number] == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
