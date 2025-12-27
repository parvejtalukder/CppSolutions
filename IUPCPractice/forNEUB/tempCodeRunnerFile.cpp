#include <bits/stdc++.h>
using namespace std;
#define pht ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

// long long fact(long long num);
// void printTheSign(int n);

int main() {
    pht;
    // cout << "Hi" << "\n";
    // int n, y;
    // cin >> n >> y; cout << 
    // int a, b, c;
    // cin >> a >> b >> c;
    // int max = INT_MIN;
    // if (a > b && a > c) {
    //     cout << a << "\n";
    // } else if (b > a && b > c) {
    //     cout << b << "\n";
    // } else {
    //     cout << c << "\n";
    // }
    // int n; cin >> n;
    // cout << (n*(n+1))/2 << "\n";
    // int a;
    // long long b;
    // char c;
    // float d;
    // double e;
    // cin >> a >> b >> c >> d >> e;
    // // fixed;
    // cout << a << "\n" << b << "\n" << c << "\n";
    // cout << fixed << setprecision(2) << d << "\n";
    // cout << fixed << setprecision(1) << e << "\n";
    // int n;
    // cin >> n;
    // int years, months, days;
    // years = n / 365;
    // n %= 365;
    // // cout << n << "\n";
    // months = n / 30;
    // days = n % 30;
    // // cout 
    // // cout << n << " ";
    // cout << years << " years" << "\n" << months << " months" << "\n" << days << " days" << "\n";
    // long long n;
    // cin >> n;
    // cout << (n*(n + 1)/2) << "\n";
    // long long a, b, c, d;
    // cin >> a >> b >> c >> d;
    // a %= 100;
    // b %= 100;
    // c %= 100;
    // d %= 100;
    // long long ans = (a * b * c * d) % 100; 
    // if (ans < 10) {
    //     cout << 0 << ans << "\n"; 
    // } else {
    //     cout << ans << "\n";
    // }
    // // cout <<  << "\n";
    // vector <long long> num(3, 0);
    // for(long long i = 0; i < 3; i++) {
    //     cin >> num[i];
    // }
    // sort(num.begin(), num.end());
    // // vector <long long> num;
    // for(long long i = 0; i < 3; i++) {
    //     cout << num[i] << "\n";
    // }
    // // vector <long long> num; 
    // cout << "\n";
    // for(int i = 2; i >= 0; i--) {
    //     // cin >> num[i];
    //     cout << num[i] << "\n";
    // }
    // int t; cin >> t;
    // while(t--) {
    //     int n;
    //     cin >> n;
    //     cout << fact(n) << "\n";
    // }
    // char simbol;
    // int numSize;
    // cin >> simbol;
    // cin >> numSize;
    // int arr[numSize];
    // for(int i = 0; i < numSize; i++) {
    //     cin >> arr[i];
    // }
    // for(int i = 0; i < numSize; i++) {
    //     printTheSign(arr[i]);
    // }
    // int num;
    // cin >> num;
    // for(int i = num; i >= 1; i--) {
    //     printTheSign(i);
    // }
    int num;
    cin >> num;
    while(num--) {
        long long num;
        cin >> num;
        while(num > 0) {
            // if (num != 1) 
            cout << num % 10 << " ";
            num /= 10;
        }
        cout << "\n";
    }
    return 0;
}

// void printTheSign(int n) {
//     for(int i = 0; i < n; i++) {
//         cout << "*";
//     }
//     cout << "\n";
// }

// long long fact(long long num) {
//     if (num == 0 || num == 1) {
//         return 1;
//     }
//     return num * fact(num - 1);
// }