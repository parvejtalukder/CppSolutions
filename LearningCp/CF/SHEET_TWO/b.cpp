#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin >> num;
    if (num == 1) {
        cout << "-1" << endl;
        return 0;
    }
    for(int i = 2; i <= num; i+=2) {
        cout << i << endl;
    }
    return 0;
}