// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M

#include <bits/stdc++.h>
using namespace std;

void Refiners() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

bool isLucky(int num) {
    int trueCount = 0, digCount = 0;
    while(num > 0) {
        int one = num % 10;
        if (one == 4 || one == 7) {
            trueCount++;
        }
        num /= 10;
        digCount++;
    }
    if (digCount == trueCount) {
        return true;
    } else {
        return false;
    }
}

int main() {
    Refiners();
    int a, b;
    cin >> a >> b;
    bool isFound = false;
    for(int i = a; i <= b; i++) {
        if (i == 4 || i == 7) {
            cout << i;
            isFound = true;
            if (i != b) {
                cout << " ";
            } 
            continue;
        }
        if (isLucky(i)) {
            cout << i;
            if (i != b) {
                cout << " ";
            } else {
                cout << "\n";
            }
            isFound = true;
        } 
    }
    if(isFound == false) {
        cout << -1;
    }
    cout << "\n";
    return 0;
}