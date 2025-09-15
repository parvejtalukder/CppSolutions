/*https://vjudge.net/problem/CodeForces-26A*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

bool isPrime(int n) {
    int divisorCount = 0;
    for(int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisorCount++;
        }
    }
    if(divisorCount == 2) {
        return true;
    } else {
        return false;
    }
}

bool isAlmostPrime (int n) {
    int primeDivisors = 0;
    for(int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (isPrime(i)) {
                primeDivisors++;
            }
        }
    }
    if (primeDivisors == 2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    pht();
    int n; cin >> n; int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(isAlmostPrime(i)) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}