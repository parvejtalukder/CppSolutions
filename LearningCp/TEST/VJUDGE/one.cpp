#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b, area, perimiter;
    cin >> a >> b;
    area = a * b;
    perimiter = 2 * (a + b);
    cout << area << " " << perimiter << endl;
    return 0;
}