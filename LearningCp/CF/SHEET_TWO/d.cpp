#include <bits/stdc++.h>
using namespace std;
void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main() {
    fast();
    while(true) {
        int num;
        cin >> num;
        if (num == 1999) {
            cout << "Correct" << endl;
            break;
        } else {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}