#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();  
    while (n--) {
        long long arrSize;
        cin >> arrSize; 
        vector <long long> arrOf(arrSize);
        for(int i = 0; i < arrSize; i++) {
            cin >> arrOf[i];
        }
        long long sum = 0;
        // for (int i = 0; i < arrSize; i++) {
        //     long long mult = 1;               
        //     for (int j = i; j < arrSize; j++) {
        //         mult *= arrOf[j];    
        //         // cout << mult << "\n";         
        //         sum += mult;                  
        //     }
        // }
        int cnt = 0;
        for(int i = 0; i < arrSize; i++) {
            if (arrOf[i] == 1) {
                cnt++;
            } else {
                cnt = 0;
            }
            sum += cnt;
        }
        cout << sum << "\n";
    }
    return 0;
}