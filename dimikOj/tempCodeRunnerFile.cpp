#include <bits/stdc++.h>
using namespace std;
int main() {
    int i;
    cin >> i;
    int cnt = 1;
    while (i--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long big, mid, low;
        if (a >= b && a >= c) {
            big = a;
            if (b >= c) {
                mid = b;
                low = c;
            } else {
                mid = c;
                low = b;
            }
        } else if (b >= a && b >= c) {
            big = b;   
            if (a >= c) {
                mid = a;
                low = c;
            } else {
                mid = c;
                low = a;
            }
        } else if (c >= a && c >= b) {
            big = c;
            if (a >= b) {
                mid = a;
                low = b;
            } else {
                mid = b;
                low = a;
            }
        }
        cout << "Case " << cnt << ": " << big << " " << mid << " " << low << endl; 
        cnt++;
    }
    return 0;
}