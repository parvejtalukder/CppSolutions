#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
} 

// bool subs(string one) {
//     bool found = false;
//     for (int mask = 0; mask < (1 << one.size()); mask++) {
//         string newsubs = "";
//         for (int i = 0; i < one.size(); i++) {
//             if (mask & (1 << i)) {
//                 newsubs += one[i];
//             }
//         }
//         if (newsubs == "hello") {
//             found = true;
//             break;
//         } 
//         newsubs = "";
//     // cout << endl;
//     }
//     if (found) {
//         return true;
//     } else {
//         return false;
//     }
// }


int main() {
    pht();
    // int t;
    // cin >> t;
    // while(t--) {
    string wrd;
    string line;
    getline(cin, line);
    stringstream words(line);
    vector <string> arr;
    while(words >> wrd) {
        arr.push_back(wrd);
    }
    int siz = arr.size();
    for(int i = 0; i < siz; i++) {
        string arx = arr[i];
        reverse(arx.begin(), arx.end());
        if (i != siz - 1) {
            cout << arx << " ";
        } else {
            cout << arx << "\n";
        }
    }
    return 0;
}
