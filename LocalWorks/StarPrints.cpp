#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; //1 
    for(int i = 1; i <= n; i++) { // 1
        for(int j = 1; j <= i; j++) { // 1
            cout << "*"; // 1
        }
        cout << "\n";
    }
    return 0;
}