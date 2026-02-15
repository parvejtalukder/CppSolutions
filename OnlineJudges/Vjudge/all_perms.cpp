// https://vjudge.net/problem/eolymp-4815

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

const int s = 10 + 3;
vector <int> arr(s);

int main() {
    pht();
    int n; 
    cin >> n;
    arr.resize(n);
    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
        if (i != n - 1) {
            cout << arr[i];
        } else {
            cout << arr[i] << "\n";
        }
    }
    while(next_permutation(arr.begin(), arr.end())) {
        for(int i = 0; i < n; i++) {
            // arr[i] = i + 1;
            if (i != n - 1) {
                cout << arr[i];
            } else {
                cout << arr[i] << "\n";
            }
        }
    }
    return 0;
}