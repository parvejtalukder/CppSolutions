// https://vjudge.net/problem/hdu-3283

// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int p;
    cin >> p;
    while(p--) {
        int data_set;
        string data;
        cin >> data_set >> data;
        if (next_permutation(data.begin(), data.end())) {
            cout << data_set << " " << data << "\n";
        } else {
            cout << data_set << " " << "BIGGEST" << "\n";
        }
    }
    return 0;
}
