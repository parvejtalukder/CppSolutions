#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    vector <int> x(3);
    for(int i = 0; i < x.size(); i++) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int mid = x[1];
    int fistDist = mid - x[0];
    int thirdDist = x[2] - mid;
    cout << fistDist + thirdDist << endl;
    return 0;
}