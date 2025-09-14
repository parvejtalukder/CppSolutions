#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    // string myName = "Parvej";
    int myAge = 6;
    int *agePtr = &myAge;
    *agePtr = myAge;
    cout << agePtr << endl;
    cout << &agePtr << endl;
    return 0;
}