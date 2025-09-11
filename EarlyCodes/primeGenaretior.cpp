#include <bits/stdc++.h>
using namespace std;

const long long int N = 1e7+5;
bitset <N> Primes;

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
    Sive();
    // ios::sync_with_stdio(false);
    // // cin.tie(nullptr);
    int testCase;
    cin >> testCase;
    while(testCase--) {
        long long int testCheck;
        long long int startFrom, runTo;
        cin >> startFrom >> runTo;
        for(long long int i = startFrom; i <= runTo; i++) {
            if(Primes[i] == 1) {
                cout << i << endl;
            }
        }
        if(testCheck != testCase) {
            cout << endl;
        }
    }
    return 0;
}
