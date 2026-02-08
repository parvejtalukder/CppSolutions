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
    cin.ignore();
    string arr;
    vector <int> ar;
    cin >> arr;
    for(int i = 0; i < n; i++) {
        int num = (int)arr[i] - 48;
        ar.push_back(num);
    }
    for(int i = 0; i < n; i++) {
        cout << ar[i];
    }
    return 0;
}