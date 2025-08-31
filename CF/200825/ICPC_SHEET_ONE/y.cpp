#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio;
    cin.tie(0);
    int a, b, c, d;
    int count = 0, last_two;
    cin >> a >> b >> c >> d;
    __int128 result = a * b * c * d;
    last_two = result % 100;
    cout << last_two << endl;
    return 0;
}