#include <bits/stdc++.h>
using namespace std;
int main() {
    int legth;
    cin >> legth;
    int pos = 0, neg = 0, even = 0, odd = 0;
    long long int arr[legth];
    for(int i = 0; i < legth; i++) {
        cin >> arr[i];
        if (arr[i] > 0) {
            pos++;
            if (arr[i] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        } else if (arr[i] == 0) {
            if (arr[i] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        } else {
            neg++;
            if (arr[i] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    return 0;
}