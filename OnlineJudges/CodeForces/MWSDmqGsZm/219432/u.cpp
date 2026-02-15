/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int isInAtoB(int num) {
    int sum = 0;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    pht();
    int sum = 0;
    int numTheSum, A, B;
    cin >> numTheSum >> A >> B;
    for(int i = A; i <= numTheSum; i++) {
        int sumOf = isInAtoB(i);
        if (sumOf >= A && sumOf <= B) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}