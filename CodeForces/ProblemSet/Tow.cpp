#include <bits/stdc++.h>
using namespace std;

// void pht() {
//     int n; 
//     cin >> n;
//     for(int i = 0; i < n; i++) {

//     }
// }

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // pht();
    int arr[] = {1, 2, 3, 4};
    for(int i = 0; i < 4; i++) {
        for(int j = i + 1; j < 4; j++) {
            cout << arr[i] << " " << arr[j] << endl;
        }
    }
    return 0;
}