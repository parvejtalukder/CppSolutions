#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

const int N = 1e8+5;
bitset <N> value;

void sive() {
    value.set();
    value[0] = value[1] = 0;
    int limit = sqrt(N+.5);
    
    for(int i = 2; i <= limit; i++) {
        for(int j = i*i; j <= N; j+=2*1) {
            value[j] == 0;
        }
    }
}

int main() {

    int n;
    cin >> n;
    int arr[n];
    for(int i = 2; i <= n; i++) {
        if (sive();) {
            arr[i];
        }
    }
    return 0;
}