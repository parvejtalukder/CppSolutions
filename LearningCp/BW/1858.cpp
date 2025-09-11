#include <bits/stdc++.h>
using namespace std;
int main() {
    int personNumber;
    cin >> personNumber;
    int persons[personNumber];
    int minimumPerson = INT_MAX;  
    for (int i = 0; i < personNumber; i++) {
        cin >> persons[i];
    }
    for (int i = 0; i < personNumber; i++) {
        if (persons[i] < minimumPerson) {
            minimumPerson = persons[i];
        }
    }
    for (int i = 0; i < personNumber; i++) {
        if (persons[i] == minimumPerson) {
            cout << i + 1 << endl;  
            break;
        }
    }
    return 0;
}
