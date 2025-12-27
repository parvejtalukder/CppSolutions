#include <bits/stdc++.h>
using namespace std;

const int maxc = 1e7+1;
vector<long long> divsr(maxc, 0);

void getDivsr() {
    for (long long i = 1; i < maxc; i++) {
        for (int j = i; j < maxc; j += i) {
            divsr[j]++;
        }
    }
}

int main() {
    getDivsr();
    
    return 0;
}