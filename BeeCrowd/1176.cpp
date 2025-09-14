// /*https://judge.beecrowd.com/en/problems/view/1176*/
// #include <bits/stdc++.h>
// using namespace std;

// void pht() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
// }

// void fib(int n) {
//     int one = 0, pre = 1, now = 1;
//     int cnt = 4, sum = 0;
//     while(cnt <= n) {
//         int temp = pre, sum = pre + now;
//         pre = sum, now = sum;
//         cnt++;
//     }
//     cout << now << endl;
// }

// int main() {
//     pht();
//     int n; cin >> n;
//     while (n--) {
//         int n; cin >> n;
//         fib(n);
//     }
//     return 0;
// }