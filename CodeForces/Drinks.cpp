// https://codeforces.com/problemset/problem/200/B
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

vector <double> perc;

int main() {
    pht();
    double n;
    cin >> n;
    perc.resize(n);
    double sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> perc[i];
        sum += perc[i] / 100.000000000000;
    }
    cout << fixed << setprecision(12) << (sum / n) * 100.000000000000 << "\n";
    return 0;
}