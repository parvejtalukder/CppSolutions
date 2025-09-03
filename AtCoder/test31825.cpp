#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int a, b, c;
    string name;
    cin >> a;
    cin >> b >> c;
    cin >> name;
    long long int sum = a + b + c;
    cout << sum << " " << name << endl;
    return 0;
}