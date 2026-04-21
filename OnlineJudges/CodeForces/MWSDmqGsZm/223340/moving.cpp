#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int n;
    cin >> n;
    vector <int> arr;
    int size = n;
    while(n--) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    bool sj_ = true;
    sort(arr.rbegin(), arr.rend());
    // for(auto x: arr) cout << x << " ";
    long long sj = 0, an = 0;
    for(int i = 0; i < size; i++) {
        if(sj_) {
            sj += arr[i];
            sj_ = false;
        } else {
            an += arr[i];
            sj_ = true;
        }
    }
    cout << sj << " " << an << "\n";
    return 0;
}