#include <bits/stdc++.h>
using namespace std;
int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    float one, two, MEDIA;
    cin >> one >> two;
    MEDIA = (one * 3.5 + two * 7.5) / (3.5 + 7.5);
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << MEDIA << endl;
    return 0;
}