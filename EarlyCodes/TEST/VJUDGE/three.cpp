#include <bits/stdc++.h>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    int result = 1; 
    for (int i = 0; i < B; ++i) {
        result *= A; 
    }
    cout << result << endl;

    return 0;
}