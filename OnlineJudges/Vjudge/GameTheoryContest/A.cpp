#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int n;
    cin >> n;
    vector <int> arr;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }
    for(int i = 0; i < n; i++) {
        if (arr[i] == 2 || arr[i] == 3 || arr[i] == 5) {
            cout << "First" << "\n";
        } else {
            if ()
        }
    }
    return 0;
}