#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        // int arr[7]; 
        vector <int> arr(7);
        for(int i = 0; i < 7; i++) {
            cin >> arr[i];
        }   
        sort(arr.begin(), arr.end());
        int pos = arr[6];
        for(int i = 0; i < 6; i++) {
            pos += (arr[i] * (-1));
        }
        cout << pos << "\n";
    }
    return 0;
}