#include <bits/stdc++.h>
using namespace std;
int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    float one, two;
    cin >> one >> two;
    float average = ((one * 3.5) + (7.5 * two)) / 3.5 + 7.5;
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << average << endl;
    return 0;
}