#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio;
    cin.tie(0);
    int a, b, c, d;
    int last_two, result;
    cin >> a >> b >> c >> d;
    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;
    result = a * b * c * d;
    last_two = result % 100;
    if (last_two < 10) {
        cout << "0" << last_two << endl;
    } else {
        cout << last_two << endl;
    }
    return 0;
}