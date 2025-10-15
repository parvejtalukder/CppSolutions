#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nn[n];
    for(int i = 0; i < n; i++) {
        cin >> nn[i];
    }
    int esy = 0; int hrd = 0;
    for(int i = 0; i < n; i++) {
            if (nn[i] == 0) {
            esy++;
        } else {
            hrd++;
        }
    }
    if (hrd != 0) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }
    return 0;
} 