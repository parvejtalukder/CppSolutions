#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;
        for (int i = 0; i < k; i++) {
            if (x % 2 == 0) {
                x = x * 2;
        } 
        else {
            if ((x - 1) % 3 == 0 && ((x - 1) / 3) % 2 == 1) {
                    x = (x - 1) / 3;
                } else {
                    x = x * 2;
                }
            }
        }
    }
    return 0;
}
