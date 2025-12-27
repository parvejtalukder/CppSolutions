#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

unsigned long long factorial(unsigned long long num) {
    unsigned long long result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

bool isCurious(unsigned long long number) {
    unsigned long long sum = 0, original = number;
    while (number) {
        sum += factorial(number % 10);
        number /= 10;
    }
    return sum % original == 0;  
}

int main() {
    pht();
    int num, result = 0;
    cin >> num;  
    for (int i = 10; i < num; i++) {
        if (isCurious(i)) {  
            result += i;
        }
    }
    cout << result << endl;  
    return 0;
}
