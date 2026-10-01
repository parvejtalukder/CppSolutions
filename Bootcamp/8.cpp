#include <bits/stdc++.h>
using namespace std;

int main() {
    int unit;
    cin >> unit;
    if (unit <= 100) {
        cout << "Cost: " << unit * 5 << "\n";
    } else if (unit > 100 && unit <= 200) {
        int firstCost = 100 * 5;
        int lastCost = (unit - 100) * 7;
        cout << "Cost: " << firstCost + lastCost << "\n";
    } else if (unit > 200 && unit <= 300) {
        int firstPart = 100 * 5;
        int secondPart = 100 * 7;
        int thirdPart = (unit - 200) * 10;
        cout << "Cost: " << firstPart + secondPart + thirdPart << "\n";
    } else {
        int firstPart = 100 * 5;
        int secondPart = 100 * 7;
        int thirdPart = 100 * 10;
        int finalPart = (unit - 300) * 15;
        cout << "Cost: "<< firstPart + secondPart + thirdPart + finalPart << "\n";
    }
    return 0;
}