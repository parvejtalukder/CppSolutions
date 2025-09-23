// #include <bits/stdc++.h>
// using namespace std;

// void pht() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
// }

// int main () {
//     pht();
//     long long n, k, l, c, d, p, nl, np;
//     cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
//     long long dr = (k * l) / nl;    
//     long long sl = c * d;           
//     long long slt   = p / np;          
    
//     long long ans = min({dr, sl, slt}) / n; 
//     cout << ans << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main () {
    pht();
    long long n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    long long a = ((k*l)/nl);
    long long b = c * d;
    long long cc = (p/np);
    long long ans = min({a, b, cc})/n;
    cout << ans << endl;
    return 0;
}