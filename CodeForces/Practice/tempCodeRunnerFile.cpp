#include <bits/stdc++.h>
using namespace std;
 
void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

// bool toBinAndPalin(long long num) {
//     string bin = "";
//     while(num > 0) {
//         int dig = num % 2;
//         bin = char(dig - '0') + bin;
//         num /= 2;  
//     }
//     string rev = bin;
//     reverse(bin.begin(), bin.end());
//     // string rev;
//     int cnt = 0; 
//     for(int i = 0; i < bin.size(); i++) {
//         if (rev[i] == bin[i]) {
//             cnt++;
//         }
//     }
//     if (rev.size() == bin.size() && bin.size() == cnt) {
//         return true;
//     } else {
//         return false;
//     }
//     // return 0;
// }

bool prime(int n) {
    if (n <= 1) {
        return false;
    }
    for(int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
 
int main() {
    pht();
    // long long num;
    // cin >> num;
    // if (num % 2 != 0) {
    //     if (toBinAndPalin(num)) {
    //         cout << "YES" << "\n";
    //     } else {
    //         cout << "NO" << "\n";
    //     }
    // } else {
    //     cout << "NO" << "\n";
    // }
    // int N, X;
    // cin >> X >> N;
    // toSolve(X, N);
    int num;
    cin >> num;
    // prime(num);
    for(int i = 1; i <= num; i++) {
        if (prime(i)) {
            // cout << i;
            if (i != num) {
                cout << i << " ";
            }
            // (i == num) ? cout << "\n" : cout << " ";
        }
        // (i == num) ? cout << "\n" : cout << " ";
    }
    // cout << "\n";
    return 0;
}