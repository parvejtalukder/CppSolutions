#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    set<long long> numbers;            
    for (long long i = 0; i < n; ++i) {
        long long x;
        cin >> x;                     
        numbers.insert(x);             
    }
    cout << *numbers.rbegin() << "\n";    
    return 0;
}